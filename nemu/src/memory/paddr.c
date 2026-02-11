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

#include <memory/host.h>
#include <memory/paddr.h>
#include <device/mmio.h>
#include <device/map.h>
#include <isa.h>

#if   defined(CONFIG_PMEM_MALLOC)
static uint8_t *pmem = NULL;
#else // CONFIG_PMEM_GARRAY
static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};
#endif

static uint8_t mrom[0x1000] = {}; // 4KB 
static uint8_t sram[0x2000] = {}; // 8KB
static uint8_t psram[0x400000] = {}; // 4MB
static uint8_t sdram[0x20000000] = {};
//实现从虚拟地址到物理地址的转换
uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }
//实现从物理地址到虚拟地址的转换
paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }

static word_t pmem_read(paddr_t addr, int len) {
  word_t ret = host_read(guest_to_host(addr), len);
  return ret;
}

static void pmem_write(paddr_t addr, int len, word_t data) {
  host_write(guest_to_host(addr), len, data);
}

static word_t mrom_read(paddr_t addr, int len) {
  return host_read(mrom + (addr - MROM_LEFT), len);
}

static void mrom_write(paddr_t addr, int len, word_t data) {
  // MROM is read-only
}

static word_t sram_read(paddr_t addr, int len) {
  return host_read(sram + (addr - SRAM_LEFT), len);
}

static void sram_write(paddr_t addr, int len, word_t data) {
  host_write(sram + (addr - SRAM_LEFT), len, data);
}

static word_t psram_read(paddr_t addr, int len) {
  return host_read(psram + (addr - PSRAM_LEFT), len);
}

static void psram_write(paddr_t addr, int len, word_t data) {
  host_write(psram + (addr - PSRAM_LEFT), len, data);
}

static word_t sdram_read(paddr_t addr, int len) {
  return host_read(sdram + (addr - PSRAM_LEFT), len);
}

static void sdram_write(paddr_t addr, int len, word_t data) {
  host_write(sdram + (addr - PSRAM_LEFT), len, data);
}

static void out_of_bound(paddr_t addr) {
  panic("address = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
      addr, PMEM_LEFT, PMEM_RIGHT, cpu.pc);
}

void init_mem() {
#if   defined(CONFIG_PMEM_MALLOC)
  pmem = malloc(CONFIG_MSIZE);
  assert(pmem);
#endif
  IFDEF(CONFIG_MEM_RANDOM, memset(pmem, rand(), CONFIG_MSIZE));
  Log("physical memory area [" FMT_PADDR ", " FMT_PADDR "]", PMEM_LEFT, PMEM_RIGHT);
  Log("mrom area [" FMT_PADDR ", " FMT_PADDR "]", MROM_LEFT, MROM_RIGHT);
  Log("sram area [" FMT_PADDR ", " FMT_PADDR "]", SRAM_LEFT, SRAM_RIGHT);
  Log("psram area [" FMT_PADDR ", " FMT_PADDR "]", PSRAM_LEFT, PSRAM_RIGHT);
  Log("sdram area [" FMT_PADDR ", " FMT_PADDR "]", SDRAM_LEFT, SDRAM_RIGHT);
}

word_t paddr_read(paddr_t addr, int len) {
  // printf("addr : " FMT_PADDR "\n", addr);
  // assert(addr == 0x20000000);
  if (likely(in_pmem(addr))){ 
    word_t ret = pmem_read(addr, len);
    #ifdef CONFIG_MTRACE_COND
    if(MTRACE_COND){
      log_write("MTRACE: READ [" FMT_PADDR"] = " FMT_WORD " (len=%d) at pc=" FMT_WORD "\n",
      addr, ret, len, cpu.pc);
    }
    #endif
    return ret;
  }
  if (in_mrom(addr)) {
    word_t ret = mrom_read(addr, len);
    #ifdef CONFIG_MTRACE_COND
    if(MTRACE_COND){
      log_write("MTRACE: READ MROM [" FMT_PADDR"] = " FMT_WORD " (len=%d) at pc=" FMT_WORD "\n",
      addr, ret, len, cpu.pc);
    }
    #endif
    return ret;
  }
  if (in_sram(addr)) {
    word_t ret = sram_read(addr, len);
    #ifdef CONFIG_MTRACE_COND
    if(MTRACE_COND){
      log_write("MTRACE: READ SRAM [" FMT_PADDR"] = " FMT_WORD " (len=%d) at pc=" FMT_WORD "\n",
      addr, ret, len, cpu.pc);
    }
    #endif
    return ret;
  }
  if (in_psram(addr)) {
    word_t ret = psram_read(addr, len);
    #ifdef CONFIG_MTRACE_COND
    if(MTRACE_COND){
      log_write("MTRACE: READ SRAM [" FMT_PADDR"] = " FMT_WORD " (len=%d) at pc=" FMT_WORD "\n",
      addr, ret, len, cpu.pc);
    }
    #endif
    return ret;
  }
  if (in_sdram(addr)) {
    word_t ret = sdram_read(addr, len);
    #ifdef CONFIG_MTRACE_COND
    if(MTRACE_COND){
      log_write("MTRACE: READ SRAM [" FMT_PADDR"] = " FMT_WORD " (len=%d) at pc=" FMT_WORD "\n",
      addr, ret, len, cpu.pc);
    }
    #endif
    return ret;
  }
  IFDEF(CONFIG_DEVICE, 
    difftest_skip_ref();
    extern IOMap* fetch_mmio_map(paddr_t addr);
    IOMap *map = fetch_mmio_map(addr);
    word_t ret = mmio_read(addr, len);
    log_write("DTRACE: READ  [" FMT_PADDR "] = " FMT_WORD " (len=%d) at pc=" FMT_WORD " [%s]\n",
      addr, ret, len, cpu.pc, map ? map->name : "UNKNOWN");
    return ret);
  out_of_bound(addr);
  return 0;
}

void paddr_write(paddr_t addr, int len, word_t data) {
  if (likely(in_pmem(addr))) { 
    pmem_write(addr, len, data); 
    #ifdef CONFIG_MTRACE
      #ifdef CONFIG_MTRACE_COND
      if (MTRACE_COND) {
        log_write("MTRACE: WRITE [" FMT_PADDR "] = " FMT_WORD " (len=%d) at pc=" FMT_WORD "\n", 
          addr, data, len, cpu.pc);
      }
      #endif
    #endif
    return; 
  }
  if (in_mrom(addr)) {
    mrom_write(addr, len, data);
    #ifdef CONFIG_MTRACE
      #ifdef CONFIG_MTRACE_COND
      if (MTRACE_COND) {
        log_write("MTRACE: WRITE MROM [" FMT_PADDR "] = " FMT_WORD " (len=%d) at pc=" FMT_WORD " (ignored)\n", 
          addr, data, len, cpu.pc);
      }
      #endif
    #endif
    return;
  }
  if (in_sram(addr)) {
    sram_write(addr, len, data);
    #ifdef CONFIG_MTRACE
      #ifdef CONFIG_MTRACE_COND
      if (MTRACE_COND) {
        log_write("MTRACE: WRITE SRAM [" FMT_PADDR "] = " FMT_WORD " (len=%d) at pc=" FMT_WORD "\n", 
          addr, data, len, cpu.pc);
      }
      #endif
    #endif
    return;
  }
  if (in_psram(addr)) {
    psram_write(addr, len, data);
    #ifdef CONFIG_MTRACE
      #ifdef CONFIG_MTRACE_COND
      if (MTRACE_COND) {
        log_write("MTRACE: WRITE PSRAM [" FMT_PADDR "] = " FMT_WORD " (len=%d) at pc=" FMT_WORD "\n", 
          addr, data, len, cpu.pc);
      }
      #endif
    #endif
    return;
  }
  if (in_sdram(addr)) {
    sdram_write(addr, len, data);
    #ifdef CONFIG_MTRACE
      #ifdef CONFIG_MTRACE_COND
      if (MTRACE_COND) {
        log_write("MTRACE: WRITE SDRAM [" FMT_PADDR "] = " FMT_WORD " (len=%d) at pc=" FMT_WORD "\n", 
          addr, data, len, cpu.pc);
      }
      #endif
    #endif
    return;
  }
  IFDEF(CONFIG_DEVICE,
    difftest_skip_ref();
    extern IOMap* fetch_mmio_map(paddr_t addr);
    IOMap *map = fetch_mmio_map(addr);
    log_write("DTRACE: WRITE [" FMT_PADDR "] = " FMT_WORD " (len=%d) at pc=" FMT_WORD " [%s]\n",
      addr, data, len, cpu.pc, map ? map->name : "UNKNOWN");
    mmio_write(addr, len, data); return);
  out_of_bound(addr);
}
