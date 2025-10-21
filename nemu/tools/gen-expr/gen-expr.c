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

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>

// this should be enough
static char buf[65536] = {};
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned result = %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";

static int buf_pos = 0;

uint32_t choose(int n){
  return rand() % n;
}

static void gen(char c) {
  if (buf_pos < sizeof(buf) - 1) {
    buf[buf_pos++] = c;
  }
}

static void gen_space() {
  if (choose(2)) gen(' ');
}

static void gen_num() {
  uint32_t num = choose(100) + 1; // 1-100 to avoid 0
  char num_str[16];
  int len = snprintf(num_str, sizeof(num_str), "%u", num);
  if (buf_pos + len < sizeof(buf) - 1) {
    strcpy(buf + buf_pos, num_str);
    buf_pos += len;
  }
}

static void gen_op() {
  gen_space();
  switch (choose(4)) {
    case 0: gen('+'); break;
    case 1: gen('-'); break;
    case 2: gen('*'); break;
    case 3: gen('/'); break;
  }
  gen_space();
}

static void gen_rand_expr() {
  if (buf_pos >= sizeof(buf) - 20) return; // prevent overflow
  
  switch (choose(3)) {
  case 0:
    gen_num();
    break;
  case 1:
    gen('('); gen_rand_expr(); gen(')');
    break;
  default:
    gen_rand_expr();
    gen_op();
    gen_rand_expr();
    break;
  }
}

static int has_div_zero(const char *expr) {
  return strstr(expr, "/0") != NULL || strstr(expr, "/ 0") != NULL;
}

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
  for (i = 0; i < loop; i ++) {
    buf_pos = 0;
    memset(buf, 0, sizeof(buf));
    
    gen_rand_expr();
    buf[buf_pos] = '\0';
    
    if (has_div_zero(buf)) continue;

    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc /tmp/.code.c -o /tmp/.expr 2>/dev/null");
    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    unsigned result;
    ret = fscanf(fp, "%u", &result);
    pclose(fp);

    if (ret == 1) {
      printf("%u %s\n", result, buf);
    }
  }
  return 0;
}
