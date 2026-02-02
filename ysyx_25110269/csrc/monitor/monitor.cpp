#include "common.h"
#include "sdb/sdb.h"
#include "ftrace.h"  // 添加ftrace头文件
#include "difftest.h"  // 添加DiffTest头文件
#include <cstdio>
#include <getopt.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
// pmem初始化
uint8_t flash[CONFIG_FLASH_SIZE];
uint8_t mrom[CONFIG_MROM_SIZE];
uint8_t sram[CONFIG_SRAM_SIZE];
void sdb_set_batch_mode();

static char *log_file = NULL;
static char *diff_so_file = NULL;
static char *img_file = NULL;
static char *elf_file = NULL;
//static int difftest_port = 1234;

static void welcome(){
  Log("Build time: %s, %s", __TIME__, __DATE__);
  printf("Welcome to NPC!\n");
  printf("For help, type \"help\"\n");
}

static long load_img() {
   if (img_file == NULL) {
    Log("No image is given. Use the default build-in image.");
    return 4096; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
  Assert(fp, "Can not open '%s'", img_file);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  Log("The image is %s, size = %ld", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(flash, size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}

static int parse_args(int argc, char *argv[]) {
    printf("Parsing %d arguments:\n", argc);
    for(int i = 0; i < argc; i++) {
        printf("  argv[%d] = %s\n", i, argv[i]);
    }
    
    const struct option table[] = {
    {"batch"    , no_argument      , NULL, 'b'},  // 批处理模式，不进入交互式调试
    {"log"      , required_argument, NULL, 'l'},  // 指定日志输出文件
    {"diff"     , required_argument, NULL, 'd'},  // 指定DiffTest参考实现
    //{"port"     , required_argument, NULL, 'p'},  // 指定DiffTest端口
    {"elf"      , required_argument, NULL, 'e'},  // 指定ELF文件，用于ftrace功能
    {"help"     , no_argument      , NULL, 'h'},  // 显示帮助信息
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-bhl:d:p:e:", table, NULL)) != -1) {
    printf("Processing option: %c\n", o);
    switch (o) {
      case 'b': sdb_set_batch_mode(); break;           // 设置批处理模式
      //case 'p': sscanf(optarg, "%d", &difftest_port); break;  // 解析DiffTest端口号
      case 'd': diff_so_file = optarg; break;          // 设置DiffTest参考实现路径
      case 'l': log_file = optarg; break;              // 设置日志文件路径
      case 'e': elf_file = optarg; break;              // 设置ELF文件路径，用于ftrace
      case 1: img_file = optarg; return 0;             // 设置程序镜像文件路径
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-b,--batch              run with batch mode\n");
        printf("\t-l,--log=FILE           output log to FILE\n");
        printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
        //printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
        printf("\t-e,--elf=ELF_FILE       load ELF file for symbol information\n");
        printf("\n");
        exit(0);
    }
  }
    return 0;
}

void init_monitor(int argc, char *argv[]) {
  // 解析命令行参数
  parse_args(argc, argv);
  // 初始化日志
  init_log(log_file);
  // 加载程序镜像
  long img_size = load_img();
  // 初始化函数调用跟踪
#ifdef CONFIG_FTRACE
  init_ftrace(elf_file);  
#endif
  // 初始化DiffTest
#ifdef CONFIG_DIFFTEST
  init_difftest(diff_so_file, img_size);
#endif
  // 初始化sdb
  init_sdb();
  // 初始化反汇编器
  init_disasm();

  welcome();
}
