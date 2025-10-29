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

static void gen_num() {
  int num = choose(100) + 1; 
  char num_str[16];
  sprintf(num_str, "%d", num);
  int len = strlen(num_str);
  if (buf_pos + len < sizeof(buf) - 1) {
    strcpy(&buf[buf_pos], num_str);
    buf_pos += len;
  }
}
static void gen_op() {
  switch (choose(4))
  {
  case 0:
    gen('+');
    break;
  case 1:
    gen('-');
    break;
  case 2:
    gen('*');
    break;
  default:
    gen('/');
    break;
  }
}
static void gen_space() {
  if (choose(2)) gen(' ');
}


static void gen_rand_expr() {
  if (buf_pos >= sizeof(buf) - 20) return; // 防止缓存区溢出
  
  switch (choose(3))
  {
  case 0:
    gen_num();
    break;
  case 1: 
    gen('(');
    gen_rand_expr();
    gen(')');
    break;
  default:
    gen_rand_expr();
    gen_space();
    int op = choose(3);
    switch (op){
      case 0 :
        gen('+');
        gen_space();
        gen_rand_expr();
        break;
      case 1 : 
        gen('*');
        gen_space();
        gen_rand_expr();
        break;
      case 2 : 
        gen('/');
        gen_space();
        gen_rand_expr();
        break;
      default :
        break;
    }
    
    break;
  }
  
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
    //将buf中的表达式写入code_format模板中，再将格式化的数据输出到code_buf中
    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    //将表达式写入临时文件/tmp/.code.c
    fputs(code_buf, fp);
    fclose(fp);
    //使用 gcc 编译成可执行文件 /tmp/.expr
    int ret = system("gcc /tmp/.code.c -o /tmp/.expr 2>/dev/null");
    //如果编译失败，跳过这次生成
    if (ret != 0) continue;

    //运行可执行文件/tmp/.expr，并通过管道读取其输出
    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);
    //通过fscanf获取表达式计算结果
    unsigned result;
    ret = fscanf(fp, "%u", &result);
    pclose(fp);

    if (ret == 1) {
      printf("%u %s\n", result, buf);
    }
  }
  return 0;
}
