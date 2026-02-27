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

#ifndef __MEMORY_PADDR_H__
#define __MEMORY_PADDR_H__

#include <common.h>

#define PMEM_LEFT  ((paddr_t)CONFIG_MBASE)
#define PMEM_RIGHT ((paddr_t)CONFIG_MBASE + CONFIG_MSIZE - 1)
#define RESET_VECTOR (PMEM_LEFT + CONFIG_PC_RESET_OFFSET)

#define MROM_LEFT   0x20000000
#define MROM_RIGHT  0x20000fff
#define SRAM_LEFT   0x0f000000
#define SRAM_RIGHT  0x0f001fff
#define PSRAM_LEFT  0x80000000
#define PSRAM_RIGHT 0x80400000
#define SDRAM_LEFT  0xa0000000
#define SDRAM_RIGHT 0xbfffffff
#define GPIO_LEFT   0x10002000
#define GPIO_RIGHT  0x1000200f 

/* convert the guest physical address in the guest program to host virtual address in NEMU */
uint8_t* guest_to_host(paddr_t paddr);
/* convert the host virtual address in NEMU to guest physical address in the guest program */
paddr_t host_to_guest(uint8_t *haddr);

static inline bool in_pmem(paddr_t addr) {
  return addr - CONFIG_MBASE < CONFIG_MSIZE;
}
#ifdef CONFIG_YSYXSOC
static inline bool in_mrom(paddr_t addr) {
  return addr >= MROM_LEFT && addr <= MROM_RIGHT;
}

static inline bool in_sram(paddr_t addr) {
  return addr >= SRAM_LEFT && addr <= SRAM_RIGHT;
}

static inline bool in_psram(paddr_t addr) {
  return addr >= PSRAM_LEFT && addr <= PSRAM_RIGHT;
}

static inline bool in_sdram(paddr_t addr) {
  return addr >= SDRAM_LEFT && addr <= SDRAM_RIGHT;
}

static inline bool in_gpio(paddr_t addr) {
  return addr >= GPIO_LEFT && addr <= GPIO_RIGHT;
}
#endif
word_t paddr_read(paddr_t addr, int len);
void paddr_write(paddr_t addr, int len, word_t data);

#endif
