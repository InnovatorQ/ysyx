#include "common.h"
#include <cstdio>

FILE *log_fp = NULL;

void init_log(const char *log_file) {
  log_fp = stdout;
  if (log_file != NULL) {
    FILE *fp = fopen(log_file, "w");
    if (!fp) {
      printf("Can not open '%s'\n", log_file);
      return;
    }
    log_fp = fp;
  }
  printf("Log is written to %s\n", log_file ? log_file : "stdout");
}

bool log_enable() {
  return true;  // 简化版本，总是启用日志
}
