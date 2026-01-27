#ifndef DIFFTEST_H__
#define DIFFTEST_H__

#include <stdint.h>
#include <stdbool.h>

// DiffTest方向定义
enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };

// RISC-V32寄存器结构 - 与NEMU保持一致
typedef struct {
  uint32_t gpr[32];  // 32个通用寄存器
  uint32_t mepc;     
  uint32_t mstatus;  
  uint32_t mcause;   
  uint32_t mtvec;   
  uint32_t pc;       // 程序计数器
} CPU_state;

// DiffTest相关函数声明
extern void init_difftest(const char *ref_so_file, long img_size);
extern void difftest_step(uint32_t pc, uint32_t npc);
extern void difftest_skip_ref();
extern void difftest_skip_dut(int nr_ref, int nr_dut);

// 内部函数声明
extern bool isa_difftest_checkregs(CPU_state *ref, uint32_t pc);
extern bool isa_difftest_checkmem(long img_size);
extern void difftest_sync_mem(uint32_t addr, void *buf, size_t n);
extern void difftest_sync_regs(CPU_state *regs);

#endif // DIFFTEST_H__