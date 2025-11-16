#include <am.h>
#include <klib.h>
#include <klib-macros.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
static unsigned long int next = 1;

int rand(void) {
  // RAND_MAX assumed to be 32767
  next = next * 1103515245 + 12345;
  return (unsigned int)(next/65536) % 32768;
}

void srand(unsigned int seed) {
  next = seed;
}

int abs(int x) {
  return (x < 0 ? -x : x);
}

int atoi(const char* nptr) {
  int x = 0;
  while (*nptr == ' ') { nptr ++; }
  while (*nptr >= '0' && *nptr <= '9') {
    x = x * 10 + *nptr - '0';
    nptr ++;
  }
  return x;
}

void *malloc(size_t size) {
  // On native, malloc() will be called during initializaion of C runtime.
  // Therefore do not call panic() here, else it will yield a dead recursion:
  //   panic() -> putchar() -> (glibc) -> malloc() -> panic()
#if !(defined(__ISA_NATIVE__) && defined(__NATIVE_USE_KLIB__))
  // static char *addr 在函数调用间保持上次分配的位置，避免重复分配同一块内存
  static char *addr = NULL;
  if (addr == NULL) { // 第一次调用malloc时，初始化addr指向heap的起始位置
    addr = (char *)ROUNDUP(heap.start, 4);
  }
  size = ROUNDUP(size, 4); // 确保每次分配的大小是4的倍数
  char *ret = addr;
  addr += size;
  return ret;
#endif
  return NULL;
}

void free(void *ptr) {
}

#endif
