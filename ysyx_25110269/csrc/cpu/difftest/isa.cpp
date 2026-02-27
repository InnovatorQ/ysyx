#include "common.h"
#include "memory/paddr.h"
#include "difftest.h"

// 外部函数声明
extern void (*ref_difftest_memcpy)(uint32_t addr, void *buf, size_t n, bool direction);
bool isa_init_checkregs(CPU_state *init_cpu){
  // 检查CSR寄存器
  if (init_cpu->mcause != get_csr(0x342)) {
    printf("mcause mismatch: ref=0x%08x dut=0x%08x\n", init_cpu->mcause, get_csr(0x342));
    return false;
  }
  if (init_cpu->mepc != get_csr(0x341)) {
    printf("mepc mismatch: ref=0x%08x dut=0x%08x\n", init_cpu->mepc, get_csr(0x341));
    return false;
  }
  if (init_cpu->mstatus != get_csr(0x300)) {
    printf("mstatus mismatch: ref=0x%08x dut=0x%08x\n", init_cpu->mstatus, get_csr(0x300));
    return false;
  }
  if (init_cpu->mtvec != get_csr(0x305)) {
    printf("mtvec mismatch: ref=0x%08x dut=0x%08x\n", init_cpu->mtvec, get_csr(0x305));
    return false;
  }
  return true;
}


bool isa_difftest_checkregs(CPU_state *ref, uint32_t pc) {
  // 检查PC
  if (ref->pc != get_rf(32)) {
    printf("PC mismatch at PC=0x%08x: ref=0x%08x dut=0x%08x\n", pc, ref->pc, get_rf(32));
    return false;
  }
  
  // 检查通用寄存器
  #ifdef CONFIG_REG_16
  for (int i = 0; i < 16; i++) {
    if (ref->gpr[i] != get_rf(i)) {
      printf("GPR[%d] mismatch: ref=0x%08x dut=0x%08x\n", i, ref->gpr[i], get_rf(i));
      return false;
    }
  }
  #endif
  #ifdef CONFIG_REG_32
  for (int i = 0; i < 32; i++) {
    if (ref->gpr[i] != get_rf(i)) {
      printf("GPR[%d] mismatch: ref=0x%08x dut=0x%08x\n", i, ref->gpr[i], get_rf(i));
      return false;
    }
  }
  #endif
  // 检查CSR寄存器
  if (ref->mcause != get_csr(0x342)) {
    printf("mcause mismatch: ref=0x%08x dut=0x%08x\n", ref->mcause, get_csr(0x342));
    return false;
  }
  if (ref->mepc != get_csr(0x341)) {
    printf("mepc mismatch: ref=0x%08x dut=0x%08x\n", ref->mepc, get_csr(0x341));
    return false;
  }
  if (ref->mstatus != get_csr(0x300)) {
    printf("mstatus mismatch: ref=0x%08x dut=0x%08x\n", ref->mstatus, get_csr(0x300));
    return false;
  }
  if (ref->mtvec != get_csr(0x305)) {
    printf("mtvec mismatch: ref=0x%08x dut=0x%08x\n", ref->mtvec, get_csr(0x305));
    return false;
  }

  return true;
}

bool isa_init_checkmem(long img_size) {
  if (!ref_difftest_memcpy) return true;
  
  const size_t check_size = img_size;
  const size_t check_words = (check_size + 3) / 4; // 向上取整到字边界
  
  // 分配临时缓冲区存储REF的内存
  static uint8_t ref_mem[4 * 1024 * 1024]; // 最大16MB
  
  // 从REF获取内存内容
  ref_difftest_memcpy(CONFIG_FLASH_BASE, ref_mem, check_size, DIFFTEST_TO_DUT);
  
  // 对比内存内容
  for (size_t i = 0; i < check_words * 4; i++) {
    if (flash[i] != ref_mem[i]) {
      printf("Memory[0x%08x] mismatch: ref=0x%08x dut=0x%08x\n", 
             (uint32_t)(CONFIG_FLASH_BASE + i * 4), ref_mem[i], flash[i]);
      return false;
    }
  }
  return true;
}

bool isa_difftest_checkmem(uint32_t addr){
  if (!ref_difftest_memcpy) return true;
  
  uint32_t proceesed_addr = addr & ~0x3u;
  static uint8_t ref_byte[4];
  
  // 从参考模型读取指定地址的数据
  ref_difftest_memcpy(proceesed_addr, ref_byte, 4, DIFFTEST_TO_DUT);
  uint32_t ref_data = (uint32_t)(
    (ref_byte[0])           |   
    (ref_byte[1] << 8)      |   
    (ref_byte[2] << 16)     |   
    (ref_byte[3] << 24));
  // 从DUT读取相同地址的数据
  uint32_t dut_data = pmem_read(addr);
  
  // 比较数据
  if (dut_data != ref_data) {
    printf("Memory[0x%08x] mismatch: ref=0x%08x dut=0x%08x\n", 
           proceesed_addr, ref_data, dut_data);
    return false;
  };

  return true;
}
