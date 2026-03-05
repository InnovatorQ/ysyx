#include "../monitor/sdb/sdb.h"
#include "ftrace.h"
#include "difftest.h"
#include <cstdio>
#include"memory/paddr.h"
// 外部函数和变量
extern VysyxSoCFull* top;
extern bool is_ebreak;
extern void single_cycle();
extern void difftest_step(uint32_t pc, uint32_t npc, uint32_t inst);

static uint64_t boot_time = 0;

#ifdef CONFIG_MTRACE
static void mtrace(word_t pc, word_t inst) {
  uint8_t opcode = inst & 0x7f;
  uint8_t func3 = (inst >> 12) & 0x7;
  uint32_t mem_addr = CPU_INFO(LSU).mem_addr;
  uint32_t mem_wdata = CPU_INFO(LSU).st_data;
  uint32_t mem_rdata = CPU_INFO(LSU).mem_rdata;
  if((opcode == 0x23) && (func3 == 0x0)){
    if(in_flash(mem_addr)) log_write("MTRACE[SB]: write " FMT_BYTE " into (flash)" FMT_WORD " at PC=" FMT_WORD "\n", mem_wdata, mem_addr, pc);
    if(in_sram(mem_addr)) log_write("MTRACE[SB]: write " FMT_BYTE " into (sram)" FMT_WORD " at PC=" FMT_WORD "\n", mem_wdata, mem_addr, pc);
    if(in_psram(mem_addr)) log_write("MTRACE[SB]: write " FMT_BYTE " into (psram)" FMT_WORD " at PC=" FMT_WORD "\n", mem_wdata, mem_addr, pc);
    if(in_sdram(mem_addr)) log_write("MTRACE[SB]: write " FMT_BYTE " into (sdram)" FMT_WORD " at PC=" FMT_WORD "\n", mem_wdata, mem_addr, pc);
    if(mem_addr >= 0x10000000 && mem_addr < 0x10000000 + 0x32) log_write("MTRACE[SB]: write " FMT_BYTE " into (uart)" FMT_WORD " at PC=" FMT_WORD "\n", mem_wdata, mem_addr, pc);
  } else if((opcode == 0x23) && (func3 == 0x1)){
    log_write("MTRACE[SH]: write " FMT_WORD " into " FMT_WORD " at PC=" FMT_WORD "\n", mem_wdata, mem_addr, pc);
  } else if((opcode == 0x23) && (func3 == 0x2)){
    if(in_flash(mem_addr)) log_write("MTRACE[SW]: write " FMT_WORD " into (flash)" FMT_WORD " at PC=" FMT_WORD "\n", mem_wdata, mem_addr, pc);
    if(in_sram(mem_addr)) log_write("MTRACE[SW]: write " FMT_WORD " into (sram)" FMT_WORD " at PC=" FMT_WORD "\n", mem_wdata, mem_addr, pc);
    if(in_psram(mem_addr)) log_write("MTRACE[SW]: write " FMT_WORD " into (psram)" FMT_WORD " at PC=" FMT_WORD "\n", mem_wdata, mem_addr, pc);
    if(in_sdram(mem_addr)) log_write("MTRACE[SW]: write " FMT_WORD " into (sdram)" FMT_WORD " at PC=" FMT_WORD "\n", mem_wdata, mem_addr, pc);
  } else if((opcode == 0x03) && (func3 == 0x0)){
    if(in_flash(mem_addr)) log_write("MTRACE[LB]: read " FMT_BYTE " from (flash)" FMT_WORD " at PC=" FMT_WORD "\n", mem_rdata, mem_addr, pc);
    if(in_sram(mem_addr)) log_write("MTRACE[LB]: read " FMT_BYTE " from (sram)" FMT_WORD " at PC=" FMT_WORD "\n", mem_rdata, mem_addr, pc);
    if(in_psram(mem_addr)) log_write("MTRACE[LB]: read " FMT_BYTE " from (psram)" FMT_WORD " at PC=" FMT_WORD "\n", mem_rdata, mem_addr, pc);
    if(in_sdram(mem_addr)) log_write("MTRACE[LB]: read " FMT_BYTE " from (sdram)" FMT_WORD " at PC=" FMT_WORD "\n", mem_rdata, mem_addr, pc);
  } else if((opcode == 0x03) && (func3 == 0x1)){
    log_write("MTRACE[LH]: read " FMT_WORD " from " FMT_WORD " at PC=" FMT_WORD "\n", mem_rdata, mem_addr, pc);
  } else if((opcode == 0x03) && (func3 == 0x2)){
    if(in_flash(mem_addr)) log_write("MTRACE[LW]: read " FMT_WORD " from (flash)" FMT_WORD " at PC=" FMT_WORD "\n", mem_rdata, mem_addr, pc);
    if(in_sram(mem_addr)) log_write("MTRACE[LW]: read " FMT_WORD " from (sram)" FMT_WORD " at PC=" FMT_WORD "\n", mem_rdata, mem_addr, pc);
    if(in_psram(mem_addr)) log_write("MTRACE[LW]: read " FMT_WORD " from (psram)" FMT_WORD " at PC=" FMT_WORD "\n", mem_rdata, mem_addr, pc);
    if(in_sdram(mem_addr)) log_write("MTRACE[LW]: read " FMT_WORD " from (sdram)" FMT_WORD " at PC=" FMT_WORD "\n", mem_rdata, mem_addr, pc);
  }else if((opcode == 0x03) && (func3 == 0x4)){
    if(in_flash(mem_addr)) log_write("MTRACE[LBU]: read " FMT_BYTE " from (flash)" FMT_WORD " at PC=" FMT_WORD "\n", mem_rdata, mem_addr, pc);
    if(in_sram(mem_addr)) log_write("MTRACE[LBU]: read " FMT_BYTE " from (sram)" FMT_WORD " at PC=" FMT_WORD "\n", mem_rdata, mem_addr, pc);
    if(in_psram(mem_addr)) log_write("MTRACE[LBU]: read " FMT_BYTE " from (psram)" FMT_WORD " at PC=" FMT_WORD "\n", mem_rdata, mem_addr, pc);
    if(in_sdram(mem_addr)) log_write("MTRACE[LBU]: read " FMT_BYTE " from (sdram)" FMT_WORD " at PC=" FMT_WORD "\n", mem_rdata, mem_addr, pc);
    if(mem_addr >= 0x10000000 && mem_addr < 0x10000000 + 0x32) log_write("MTRACE[LBU]: read " FMT_BYTE " from (uart)" FMT_WORD " at PC=" FMT_WORD "\n", mem_rdata, mem_addr, pc);
  }
}
#endif

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
    long cycle_count = 0;
    long inst_count = 0;
    if (boot_time == 0) boot_time = get_time_internal();
    while (!is_ebreak) {
      word_t pc;
      word_t inst;
      bool done = CPU_INFO(WBU).inst_finish;
      // DiffTest
      if(done) {
        pc = CPU_INFO(WBU).ws_pc;
        inst = pmem_read(pc);
        //printf("pc: 0x%08x, npc: 0x%08x\n", pc, npc);
#ifdef CONFIG_DIFFTEST
        difftest_step(pc, npc, inst);
#endif
#ifdef CONFIG_ITRACE
        char disasm_buf[128];  // 反汇编结果缓冲区
        // 调用Capstone反汇编器将机器码转换为可读指令
        disassemble(disasm_buf, sizeof(disasm_buf), pc, (uint8_t*)&inst, 4);
        // 记录指令跟踪：PC地址、机器码、反汇编结果
        log_write("0x%08x INST=0x%08x %s\n", pc, inst, disasm_buf);
#endif
#ifdef CONFIG_MTRACE
        mtrace(pc, inst);
#endif
#ifdef CONFIG_FTRACE
          // 检测函数调用和返回（使用上一条指令）
        check_ftrace(pc, inst);
#endif
        inst_count++;
      }
      single_cycle();
      if(done){
        word_t npc = CPU_INFO(WBU).ws_pc;
#ifdef CONFIG_DIFFTEST
        difftest_step(pc, npc, inst);
#endif
      }
      
      if (check_watchpoints()){
        printf("Stopped at watchpoint \n");
        break;
      }
      cycle_count++;
    }
    if(is_ebreak) {
      uint64_t now = get_time_internal();
        if(get_rf(10) == 0) {
            Log("Program execution completed successfully");
            Log("finish time: %lu us", now - boot_time);
            Log("total_inst : %ld", inst_count + 1);
            Log("total_cycle : %ld", cycle_count);
            Log("IPC : %.6f", (double)(inst_count + 1) / cycle_count);
            printf("\033[32mHIT GOOD TRAP!\033[0m\n");
        } else {
            Log("Program execution failed with code %d", get_rf(10));
            Log("finish time: %lu us", now - boot_time);
            Log("total_inst : %ld", inst_count + 1);
            Log("total_cycle : %ld", cycle_count);
            Log("IPC : %.6f", (double)(inst_count + 1) / cycle_count);
            printf("\033[31mHIT BAD TRAP!\033[0m\n");
        }
    }
  } else {
    for (int i = 0; i < n; i++) {
      word_t pc = get_rf(32);
      word_t inst = pmem_read(pc);
      bool done = CPU_INFO(WBU).inst_finish;
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
      #ifdef CONFIG_FTRACE
      // 检测函数调用和返回
      check_ftrace(pc, inst);
      #endif

      #ifdef CONFIG_ITRACE
      char disasm_buf[128];  // 反汇编结果缓冲区
      // 使用Capstone反汇编器解析指令
      disassemble(disasm_buf, sizeof(disasm_buf), pc, (uint8_t*)&inst, 4);
      // 输出指令跟踪信息：PC、机器码、汇编指令
      log_write("ITRACE: PC=0x%08x INST=0x%08x %s\n", pc, inst, disasm_buf);
      #endif
      printf("Cycle %d executed\n", i + 1);
      if(is_ebreak) {
        if(get_rf(10) == 0) {
            Log("Program execution completed successfully");
            printf("\033[32mHIT GOOD TRAP!\033[0m\n");
            return;
        } else {
            Log("Program execution failed with code %d", get_rf(10));
            printf("\033[31mHIT BAD TRAP!\033[0m\n");
            return;
        }
      }
    }
  }
}
