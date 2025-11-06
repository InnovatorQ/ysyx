#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  assert(s != NULL);
  size_t len = 0;
  while(*s != '\n'){
    len++;
    s++;
  }
  return len;
  //panic("Not implemented");
}

char *strcpy(char *dst, const char *src) {
  char *temp = dst;
  assert((dst != NULL) && (src != NULL));
  while((*temp++ = *src++) != '\0');
  return dst;//返回首地址
  //panic("Not implemented");
}

char *strncpy(char *dst, const char *src, size_t n) {
  char *temp = dst;
  assert((dst != NULL) && (src != NULL));
  while(n){
    *temp++ = *src++;
    n--; 
  }
  return dst;
  panic("Not implemented");
}

char *strcat(char *dst, const char *src) {
  char *temp = dst;
  assert((dst != NULL) && (src != NULL));
  while(*temp != '\0'){
    temp++;
  }
  while((*temp++ = *src++) != '\0');
  return dst;
  panic("Not implemented");
}

int strcmp(const char *s1, const char *s2) {
  assert((s1 != NULL) && (s2 != NULL));
  while(*s1 == *s2){
    if(*s1 == '\0') return 0;
    s1++; s2++;
  }
  return *(unsigned char*)s1 - *(unsigned char*)s2;
  panic("Not implemented");
}

int strncmp(const char *s1, const char *s2, size_t n) {
  assert((s1 != NULL) && (s2 != NULL));
  if(n == 0) return 0;
  while((--n && *s1) && (*s1 == *s2)){
    s1++; s2++;
  }
  return *(unsigned char*)s1 - *(unsigned char*)s2;
  panic("Not implemented");
}

void *memset(void *s, int c, size_t n) {
  panic("Not implemented");
}

void *memmove(void *dst, const void *src, size_t n) {
  
  panic("Not implemented");
}

void *memcpy(void *out, const void *in, size_t n) {
  panic("Not implemented");
}

int memcmp(const void *s1, const void *s2, size_t n) {
  panic("Not implemented");
}

#endif
