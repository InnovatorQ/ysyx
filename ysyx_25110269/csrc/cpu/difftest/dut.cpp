#include "common.h"
#include "difftest.h"
#include <dlfcn.h>

#define CONFIG_MSIZE (128 * 1024 * 1024)  // 128MB，与sim_main.cpp中MSIZE保持一致

// 函数指针声明
void (*ref_difftest_memcpy)(uint32_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;

#ifdef CONFIG_DIFFTEST
static bool is_skip_ref = false;
static int skip_dut_nr_inst = 0;
static long q_img_size = 0;

// 检查内存状态
static void init_checkmem(long img_size) {
  if (!isa_init_checkmem(img_size)) {
    printf("init Memory DiffTest failed \n");
    exit(1);
  }
}

void init_checkregs(CPU_state *init_cpu) {
  if (!isa_init_checkregs(init_cpu)) {
    printf("init Regs DiffTest failed \n");
    exit(1);
  }
}

void checkmem(uint32_t addr, uint32_t pc) {
  if (!isa_difftest_checkmem(addr)) {
    printf("Memory DiffTest failed at PC = 0x%08x\n", pc);
    exit(1);
  }
}

// 跳过REF执行的指令
void difftest_skip_ref() {
  is_skip_ref = true;
  skip_dut_nr_inst = 0;
}

// 跳过DUT检查的指令
void difftest_skip_dut(int nr_ref, int nr_dut) {
  skip_dut_nr_inst += nr_dut;
  
  while (nr_ref-- > 0) {
    ref_difftest_exec(1);
  }
}
#endif

// 初始化difftest
void init_difftest(const char *ref_so_file, long img_size) {
#ifdef CONFIG_DIFFTEST
  if (!ref_so_file) return;
  q_img_size = img_size;
  // 加载NEMU动态库
  void *handle = dlopen(ref_so_file, RTLD_LAZY);
  assert(handle);

  // 获取函数指针
  ref_difftest_memcpy = (void (*)(uint32_t, void *, size_t, bool))dlsym(handle, "difftest_memcpy");
  assert(ref_difftest_memcpy);

  ref_difftest_regcpy = (void (*)(void *, bool))dlsym(handle, "difftest_regcpy");
  assert(ref_difftest_regcpy);

  ref_difftest_exec = (void (*)(uint64_t))dlsym(handle, "difftest_exec");
  assert(ref_difftest_exec);

  ref_difftest_raise_intr = (void (*)(uint64_t))dlsym(handle, "difftest_raise_intr");
  assert(ref_difftest_raise_intr);

  // 初始化REF
  void (*ref_difftest_init)(int) = (void (*)(int))dlsym(handle, "difftest_init");
  assert(ref_difftest_init);

  Log("Differential testing: %s", ANSI_FMT("ON", ANSI_FG_GREEN));
  Log("The result of every instruction will be compared with %s.", ref_so_file);
  
  // 初始化REF
  ref_difftest_init(0);

  char zero_buf[4096] ;
  memset(zero_buf, 0, sizeof(zero_buf));
  // 清空REF的内存
  size_t total_size = CONFIG_MSIZE;
  uint32_t addr = 0x20000000;
  while (total_size > 0) {
    size_t chunk_size = total_size > sizeof(zero_buf) ? sizeof(zero_buf) : total_size;
    ref_difftest_memcpy(addr, zero_buf, chunk_size, DIFFTEST_TO_REF);
    addr += chunk_size;
    total_size -= chunk_size;
  }

  // 同步内存到REF 
  ref_difftest_memcpy(0x20000000, pmem, img_size, DIFFTEST_TO_REF);

  // 初始化内存检查
  init_checkmem(img_size);
  
  // 同步初始寄存器状态到REF
  CPU_state init_cpu;
  memset(&init_cpu, 0, sizeof(init_cpu));
  init_cpu.pc = 0x20000000;  // 设置初始PC
  ref_difftest_regcpy(&init_cpu, DIFFTEST_TO_REF);
  init_checkregs(&init_cpu);
  printf("DiffTest initialized successfully\n");
#endif
}

// 检查寄存器状态
static void checkregs(CPU_state *ref, uint32_t pc) {
  if (!isa_difftest_checkregs(ref, pc)) {
    printf("DiffTest failed at PC = 0x%08x\n", pc);
    for(int i = 0; i < 32; i++) {
      printf("GPR[%2d] DUT=0x%08x REF=0x%08x\n", i, get_rf(i), ref->gpr[i]);
    }
    printf("MCAUSE DUT=0x%08x REF=0x%08x\n", get_csr(0x342), ref->mcause);
    printf("MEPC   DUT=0x%08x REF=0x%08x\n", get_csr(0x341), ref->mepc);
    printf("MSTATUS DUT=0x%08x REF=0x%08x\n", get_csr(0x300), ref->mstatus);
    printf("MTVEC  DUT=0x%08x REF=0x%08x\n", get_csr(0x305), ref->mtvec);
    exit(1);
  }
}


// 执行一步并检查
void difftest_step(uint32_t pc, uint32_t npc, uint32_t inst) {
#ifdef CONFIG_DIFFTEST
  //printf("difftest_step: pc=0x%08x, npc=0x%08x, is_skip_ref=%d\n", pc, npc, is_skip_ref);
  uint8_t opcode = inst & 0x7f;
  uint8_t func3 = (inst >> 12) & 0x7;
  uint32_t mem_addr = CPU_INFO(LSU__DOT__mem_addr_r);
  bool is_store = (opcode == 0x23) && (func3 == 0x0 || func3 == 0x1 || func3 == 0x2);
  if (!ref_difftest_exec || !ref_difftest_regcpy) return;

  CPU_state ref_r;

  if (skip_dut_nr_inst > 0) {
    ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
    if (ref_r.pc == npc) {
      skip_dut_nr_inst = 0;
      checkregs(&ref_r, npc);
      return;
    }
    skip_dut_nr_inst--;
    if (skip_dut_nr_inst == 0) {
      printf("Cannot catch up with ref.pc = 0x%08x at pc = 0x%08x\n", ref_r.pc, pc);
      exit(1);
    }
    return;
  }

  if (is_skip_ref) {
    // 跳过检查，直接同步寄存器状态到REF
    CPU_state cpu_state;
    for (int i = 0; i < 32; i++) {
      cpu_state.gpr[i] = get_rf(i);
    }
    cpu_state.mepc = get_csr(0x341);
    cpu_state.mstatus = get_csr(0x300);
    cpu_state.mcause = get_csr(0x342);
    cpu_state.mtvec = get_csr(0x305);
    cpu_state.pc = npc;
    ref_difftest_regcpy(&cpu_state, DIFFTEST_TO_REF);
    is_skip_ref = false;
    return;
  }

  // REF执行一条指令
  ref_difftest_exec(1);
  
  // 获取REF的寄存器状态
  ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
  //每执行检测一次内存

  if(is_store){
    checkmem(mem_addr, pc);
  }
  
  // 检查寄存器状态
  checkregs(&ref_r, pc);

#endif
}

// 同步内存到REF
void difftest_sync_mem(uint32_t addr, void *buf, size_t n) {
#ifdef CONFIG_DIFFTEST
  if (ref_difftest_memcpy) {
    ref_difftest_memcpy(addr, buf, n, DIFFTEST_TO_REF);
  }
#endif
}

// 同步寄存器到REF
void difftest_sync_regs(CPU_state *regs) {
#ifdef CONFIG_DIFFTEST
  if (ref_difftest_regcpy) {
    ref_difftest_regcpy(regs, DIFFTEST_TO_REF);
  }
#endif
}
