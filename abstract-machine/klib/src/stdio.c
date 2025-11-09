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
  va_list args;
  va_start(args, fmt);
  char *pbuf = out;
  const char *pf = fmt;
  
  while(*pf){
    if(*pf != '%'){
      *pbuf++ = *pf++;
      continue;
    }
    pf++;
    
    // 解析宽度
    int width = 0;
    while(*pf >= '0' && *pf <= '9') {
      width = width * 10 + (*pf - '0');
      pf++;
    }
    
    switch (*pf) {
      case 'd': {
        int num = va_arg(args, int);
        char temp[12];
        int len = 0;
        
        if(num < 0) {
          *pbuf++ = '-';
          num = -num;
        }
        
        if(num == 0) temp[len++] = '0';
        while(num > 0) {
          temp[len++] = '0' + num % 10;
          num /= 10;
        }
        
        // 处理宽度
        while(width > len) {
          *pbuf++ = ' ';
          width--;
        }
        
        while(--len >= 0) *pbuf++ = temp[len];
        break;
      }
      case 'x': {
        unsigned int num = va_arg(args, unsigned int);
        char temp[10];
        int len = 0;
        
        if(num == 0) temp[len++] = '0';
        while(num > 0) {
          int digit = num % 16;
          temp[len++] = digit < 10 ? '0' + digit : 'a' + digit - 10;
          num /= 16;
        }
        
        while(width > len) {
          *pbuf++ = ' ';
          width--;
        }
        
        while(--len >= 0) *pbuf++ = temp[len];
        break;
      }
      case 's': {
        char *str = va_arg(args, char*);
        int len = strlen(str);
        
        while(width > len) {
          *pbuf++ = ' ';
          width--;
        }
        
        while(*str) *pbuf++ = *str++;
        break;
      }
      case 'c': {
        if(width > 1) {
          while(width > 1) {
            *pbuf++ = ' ';
            width--;
          }
        }
        *pbuf++ = va_arg(args, int);
        break;
      }
      case '%': {
        *pbuf++ = '%';
        break;
      }
    }
    pf++;
  }
  *pbuf = '\0';
  va_end(args);
  return pbuf - out;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
