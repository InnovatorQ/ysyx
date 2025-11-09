/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <cpu/difftest.h>
#include "../local-include/reg.h"
// 把通用寄存器和PC与从DUT中读出的寄存器的值进行比较. 若对比结果一致, 函数返回true; 如果发现值不一样, 函数返回false
bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  printf("Difftest check at pc = " FMT_WORD "\n", pc);
  
  // 检查PC
  if (ref_r->pc != cpu.pc) {
    printf("PC mismatch at pc = " FMT_WORD ": ref = " FMT_WORD ", dut = " FMT_WORD "\n", 
           pc, ref_r->pc, cpu.pc);
    return false;
  }
  
  // 检查通用寄存器
  for (int i = 0; i < MUXDEF(CONFIG_RVE, 16, 32); i++) {
    if (ref_r->gpr[i] != cpu.gpr[i]) {
      printf("GPR[%d] mismatch at pc = " FMT_WORD ": ref = " FMT_WORD ", dut = " FMT_WORD "\n", 
             i, pc, ref_r->gpr[i], cpu.gpr[i]);
      return false;
    }
  }
  
  return true;
}

void isa_difftest_attach() {
}
