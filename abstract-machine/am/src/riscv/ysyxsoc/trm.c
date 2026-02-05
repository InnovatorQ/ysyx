#include <am.h>
#include <klib-macros.h>

extern void _bootloader(void);
extern void _uart_init(void);

extern char _heap_start;
int main(const char *args);

extern char _pmem_start;
#define PMEM_SIZE (8 * 1024 * 1024)
#define PMEM_END  ((uintptr_t)&_pmem_start + PMEM_SIZE)
#define UART_BASE 0x10000000
#define UART_LSR 5

Area heap = RANGE(&_heap_start, PMEM_END);
static const char* mainargs = " ";

void putch(char ch) {
  while((*((volatile char *)UART_BASE + UART_LSR) & (1 << 5)) == 0); 
  *((volatile char *)UART_BASE) = ch;
}

void halt(int code) {
  // mv a0, %0 - 将code变量的值移动到a0寄存器，%0是占位符，代表第一个操作数（这里是code）
  asm volatile("mv a0, %0; ebreak" : : "r"(code));
  while (1);
}

void _trm_init() {
  _bootloader();
  _uart_init();
  int ret = main(mainargs);
  halt(ret);
}
