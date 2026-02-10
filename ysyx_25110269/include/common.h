#ifndef __COMMON_H__
#define __COMMON_H__

#include <debug.h>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <VysyxSoCFull.h>
#include "VysyxSoCFull___024root.h"
#include <assert.h>
#include <generated/autoconf.h> 

// 基本类型定义
typedef uint32_t word_t;
typedef uint32_t paddr_t;
typedef uint32_t vaddr_t;  // 虚拟地址类型，用于ftrace

// 格式化宏定义
#define FMT_WORD "0x%08x"

// 共享宏定义
#define RTC_ADDR 0xa0000048


// ANSI颜色定义
#define ANSI_FG_BLACK   "\33[1;30m"
#define ANSI_FG_RED     "\33[1;31m"
#define ANSI_FG_GREEN   "\33[1;32m"
#define ANSI_FG_YELLOW  "\33[1;33m"
#define ANSI_FG_BLUE    "\33[1;34m"
#define ANSI_FG_MAGENTA "\33[1;35m"
#define ANSI_FG_CYAN    "\33[1;36m"
#define ANSI_FG_WHITE   "\33[1;37m"
#define ANSI_BG_BLACK   "\33[1;40m"
#define ANSI_BG_RED     "\33[1;41m"
#define ANSI_BG_GREEN   "\33[1;42m"
#define ANSI_BG_YELLOW  "\33[1;43m"
#define ANSI_BG_BLUE    "\33[1;44m"
#define ANSI_BG_MAGENTA "\33[1;45m"
#define ANSI_BG_CYAN    "\33[1;46m"
#define ANSI_BG_WHITE   "\33[1;47m"
#define ANSI_NONE       "\33[0m"

#define ANSI_FMT(str, fmt) fmt str ANSI_NONE
#define CPU_INFO(name) top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__##name
#define PSRAM top->rootp->ysyxSoCFull__DOT__psram__DOT__memory
// 共享全局变量声明
extern uint8_t flash[CONFIG_FLASH_SIZE];
extern uint8_t mrom[CONFIG_MROM_SIZE];
extern uint8_t sram[CONFIG_SRAM_SIZE];
extern bool is_ebreak;
extern VysyxSoCFull* top;
extern FILE* log_fp;
extern long loaded_img_size; // 加载的镜像大小
extern word_t get_rf(int n);
extern word_t get_csr(int n);
extern "C" word_t pmem_read(int raddr);
extern void init_log(const char *log_file);
extern bool log_enable();

// 反汇编相关函数声明
extern void init_disasm();  // 初始化Capstone反汇编器
extern void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);  // 反汇编指令

// 时钟相关函数声明
extern uint64_t get_time_internal();  // 获取系统时间(微秒)

#endif
