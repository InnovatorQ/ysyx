#include "../monitor/sdb/sdb.h"
#include "Vtop.h"
#include "common.h"
#include "ftrace.h"
#include "difftest.h"
#include <cstdio>

extern Vtop* top;
extern bool is_ebreak;
extern void single_cycle();
extern void difftest_step(uint32_t pc, uint32_t npc, uint32_t inst);

#ifdef CONFIG_FTRACE
// 检测函数调用和返回的辅助函数
static void check_ftrace(word_t pc, word_t inst) {
  // 解析指令格式
  uint32_t opcode = inst & 0x7f;
  uint32_t rd = (inst >> 7) & 0x1f;
  uint32_t funct3 = (inst >> 12) & 0x7;
  
  // JAL指令检测 (opcode = 0x6f)
  if (opcode == 0x6f) {
    // 计算跳转目标地址
    int32_t imm = ((int32_t)(inst & 0x80000000) >> 11) |  // imm[20]
                  (inst & 0xff000) |                      // imm[19:12]
                  ((inst >> 9) & 0x800) |                 // imm[11]
                  ((inst >> 20) & 0x7fe);                 // imm[10:1]
    word_t target = pc + imm;
    
    // 如果rd不是x0，说明是函数调用
    if (rd != 0) {
      ftrace_call(pc, target);
    }
  }
  // JALR指令检测 (opcode = 0x67, funct3 = 0x0)
  else if (opcode == 0x67 && funct3 == 0x0) {
    uint32_t rs1 = (inst >> 15) & 0x1f;
    int32_t imm = (int32_t)inst >> 20;  // 符号扩展
    
    // 获取rs1寄存器的值来计算目标地址
    word_t rs1_val = get_rf(rs1);
    word_t target = (rs1_val + imm) & ~1;  // 清除最低位
    
    // 如果rd是x0且rs1是x1(ra)，通常是函数返回
    if (rd == 0 && rs1 == 1) {
      ftrace_ret(pc);
    }
    // 如果rd不是x0，通常是函数调用
    else if (rd != 0) {
      ftrace_call(pc, target);
    }
  }
}
#endif
void cpu_exec(int n) {
  if (n == -1) {
    int cycle_count = 0;
    word_t last_pc = 0;
    word_t last_inst = 0;
    while (!is_ebreak) {
      word_t pc = get_rf(32);
      word_t inst = pmem_read(pc);
      bool done = top->done;
      single_cycle();
      word_t npc = get_rf(32);
      #ifdef CONFIG_DIFFTEST
      // DiffTest
      if(done) {
        //printf("pc: 0x%08x, npc: 0x%08x\n", pc, npc);
        difftest_step(pc, npc, inst);
      }
      #endif
      if (check_watchpoints()){
        printf("Stopped at watchpoint \n");
        break;
      }
      
      // 执行后获取当前状态
      word_t current_pc = get_rf(32);
      word_t current_inst = pmem_read(current_pc);
      
      // 只在PC或指令改变时记录ITRACE和检测ftrace，避免重复日志
      if (current_pc != last_pc || current_inst != last_inst) {
        #ifdef CONFIG_ITRACE
        char disasm_buf[128];  // 反汇编结果缓冲区
        // 调用Capstone反汇编器将机器码转换为可读指令
        disassemble(disasm_buf, sizeof(disasm_buf), current_pc, (uint8_t*)&current_inst, 4);
        // 记录指令跟踪：PC地址、机器码、反汇编结果
        log_write("0x%08x INST=0x%08x %s\n", current_pc, current_inst, disasm_buf);
        #endif
        #ifdef CONFIG_FTRACE
        // 检测函数调用和返回（使用上一条指令）
        if (last_pc != 0) {
          check_ftrace(last_pc, last_inst);
        }
        #endif
        last_pc = current_pc;
        last_inst = current_inst;
      }
      
      cycle_count++;
    }
    if(is_ebreak) {
        if(get_rf(10) == 0) {
            Log("Program execution completed successfully");
            printf("\033[32mHIT GOOD TRAP!\033[0m\n");
        } else {
            Log("Program execution failed with code %d", get_rf(10));
            printf("\033[31mHIT BAD TRAP!\033[0m\n");
        }
    }
  } else {
    for (int i = 0; i < n && !is_ebreak; i++) {
      word_t pc = get_rf(32);
      word_t inst = pmem_read(pc);
      bool done = top->done;
      single_cycle();
      word_t npc = get_rf(32);
      #ifdef CONFIG_DIFFTEST
      // DiffTest
      if(done) {
        printf("pc: 0x%08x, npc: 0x%08x\n", pc, npc);
        difftest_step(pc, npc, inst);
      }
      #endif
      if (check_watchpoints()){
        printf("Stopped at watchpoint \n");
        break;
      }
      #ifdef CONFIG_ITRACE
      char disasm_buf[128];  // 反汇编结果缓冲区
      // 使用Capstone反汇编器解析指令
      disassemble(disasm_buf, sizeof(disasm_buf), pc, (uint8_t*)&inst, 4);
      // 输出指令跟踪信息：PC、机器码、汇编指令
      log_write("ITRACE: PC=0x%08x INST=0x%08x %s\n", pc, inst, disasm_buf);
      #endif
      #ifdef CONFIG_FTRACE
      // 检测函数调用和返回
      check_ftrace(pc, inst);
      #endif
      printf("Cycle %d executed\n", i + 1);
    }
  }
}
