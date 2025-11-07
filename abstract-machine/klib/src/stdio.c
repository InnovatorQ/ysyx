#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {

  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {
  // va_list args;
  // va_start(args, fmt);
  // char *pbuf = out;
  // const char *pf = fmt;
  
  // while(*pf){
  //   if(*pf != '%'){
  //     *pbuf++ = *pf++;
  //     continue;
  //   }
  //   pf++;
  //   switch (*pf) {
  //     case 'd': {
  //       int num = va_arg(args, int);
  //       if(num < 0) {
  //         *pbuf++ = '-';
  //         num = -num;
  //       }
  //       char temp[12];
  //       int i = 0;
  //       if(num == 0) temp[i++] = '0';
  //       while(num > 0) {
  //         temp[i++] = '0' + num % 10;
  //         num /= 10;
  //       }
  //       while(--i >= 0) *pbuf++ = temp[i];
  //       break;
  //     }
  //     case 's': {
  //       char *str = va_arg(args, char*);
  //       while(*str) *pbuf++ = *str++;
  //       break;
  //     }
  //     case 'c': {
  //       *pbuf++ = va_arg(args, int);
  //       break;
  //     }
  //     case '%': {
  //       *pbuf++ = '%';
  //       break;
  //     }
  //   }
  //   pf++;
  // }
  // *pbuf = '\0';
  // va_end(args);
  // return pbuf - out;
  panic("Not implemented");
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
