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
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>

__EXPORT void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
  printf("DEBUG : addr : " FMT_PADDR "\n", addr);
  // 内存访问接口：允许外部读写NEMU的内存
  if (direction == DIFFTEST_TO_REF) {
    // 外部向NEMU写入内存数据
    for (size_t i = 0; i < n; i++) {
      paddr_write(addr + i, 1, *((uint8_t*)buf + i));
    }
  } else {
    // 外部从NEMU读取内存数据  
    for (size_t i = 0; i < n; i++) {
      *((uint8_t*)buf + i) = paddr_read(addr + i, 1);
    }
  }
}

__EXPORT void difftest_regcpy(void *dut, bool direction) {
  // 寄存器访问接口：允许外部读写NEMU的寄存器状态
  if (direction == DIFFTEST_TO_REF) {
    // 外部向NEMU写入寄存器状态
    memcpy(&cpu, dut, sizeof(cpu));
  } else {
    // 外部从NEMU读取寄存器状态
    memcpy(dut, &cpu, sizeof(cpu));
  }
}

__EXPORT void difftest_exec(uint64_t n) {
  // 执行指令函数：让REF(NEMU)执行n条指令
  // n: 要执行的指令条数
  // 调用NEMU的CPU执行函数，执行指定数量的指令
  // 这样可以让REF和DUT保持同步执行
  cpu_exec(n);
}

__EXPORT void difftest_raise_intr(word_t NO) {
  assert(0);
}

__EXPORT void difftest_init(int port) {
  void init_mem();
  init_mem();
  /* Perform ISA dependent initialization. */
  init_isa();
}
