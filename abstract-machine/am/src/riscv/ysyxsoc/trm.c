#include <am.h>
#include <klib-macros.h>


extern char _heap_start;
extern char _heap_end;
int main(const char *args);

#define HEAP_SIZE (8 * 1024 * 1024)
#define HEAP_END  ((uintptr_t)&_heap_start + HEAP_SIZE)
#define UART_BASE 0x10000000
#define UART_LSR 5

Area heap = RANGE(&_heap_start, &_heap_end);
static const char mainargs[MAINARGS_MAX_LEN] = TOSTRING(MAINARGS_PLACEHOLDER); // defined in CFLAGS

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
  int ret = main(mainargs);
  halt(ret);
}
