#include "common.h"
#include "difftest.h"

// 外部函数声明
extern void (*ref_difftest_memcpy)(uint32_t addr, void *buf, size_t n, bool direction);

bool isa_difftest_checkregs(CPU_state *ref, uint32_t pc) {
  // 检查PC
  if (ref->pc != get_rf(32)) {
    printf("PC mismatch at PC=0x%08x: ref=0x%08x dut=0x%08x\n", pc, ref->pc, get_rf(32));
    return false;
  }
  
  // 检查通用寄存器
  for (int i = 0; i < 32; i++) {
    if (ref->gpr[i] != get_rf(i)) {
      printf("GPR[%d] mismatch: ref=0x%08x dut=0x%08x\n", i, ref->gpr[i], get_rf(i));
      return false;
    }
  }
  
  return true;
}

bool isa_difftest_checkmem(long img_size) {
  if (!ref_difftest_memcpy) return true;
  
  const size_t check_size = img_size;
  const size_t check_words = (check_size + 3) / 4; // 向上取整到字边界
  
  // 分配临时缓冲区存储REF的内存
  static word_t ref_mem[1024 * 1024]; // 最大4MB缓冲区
  
  // 从REF获取内存内容
  ref_difftest_memcpy(0x80000000, ref_mem, check_size, DIFFTEST_TO_DUT);
  
  // 对比内存内容
  for (size_t i = 0; i < check_words; i++) {
    if (pmem[i] != ref_mem[i]) {
      printf("Memory[0x%08x] mismatch: ref=0x%08x dut=0x%08x\n", 
             (uint32_t)(0x80000000 + i * 4), ref_mem[i], pmem[i]);
      return false;
    }
  }
  return true;
}
