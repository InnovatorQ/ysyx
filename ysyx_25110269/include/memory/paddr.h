#ifndef __MEMORY_PADDR_H__
#define __MEMORY_PADDR_H__
#include "common.h"

static inline bool in_mrom(paddr_t addr) {
  return addr >= CONFIG_MROM_BASE && addr < CONFIG_MROM_BASE + CONFIG_MROM_SIZE;
}

static inline bool in_sram(paddr_t addr) {
  return addr >= CONFIG_SRAM_BASE && addr < CONFIG_SRAM_BASE + CONFIG_SRAM_SIZE;
}

static inline bool in_flash(paddr_t addr) {
  return addr >= CONFIG_FLASH_BASE && addr < CONFIG_FLASH_BASE + CONFIG_FLASH_SIZE;
}

static inline bool in_psram(paddr_t addr) {
  return addr >= CONFIG_PSRAM_BASE && addr < CONFIG_PSRAM_BASE + CONFIG_PSRAM_SIZE;
}

static inline bool in_sdram(paddr_t addr) {
  return addr >= CONFIG_SDRAM_BASE && addr < CONFIG_SDRAM_BASE + CONFIG_SDRAM_SIZE;
}

#endif