#include "sdb.h"
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <readline/readline.h>
#include <readline/history.h>

static bool is_batch_mode = false;

void init_regex();  
void init_wp_pool();
// 外部变量声明
extern bool is_ebreak;

// 命令处理函数声明
static int cmd_c(char *args);
static int cmd_q(char *args);
static int cmd_help(char *args);
static int cmd_si(char *args);
static int cmd_info(char *args);
static int cmd_x(char *args);
static int cmd_p(char *args);
static int cmd_w(char *args);
static int cmd_d(char *args);

// 命令表
static struct {
  const char *name;
  const char *description;
  int (*handler)(char *);
} cmd_table[] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NPC", cmd_q },
  { "si", "Step the execution of the program", cmd_si },
  { "info", "Display information about registers or watchpoints", cmd_info },
  { "x", "Examine memory", cmd_x },
  { "p", "Expreesion", cmd_p},
  { "w", "Set a watchpoint", cmd_w },
  { "d", "Delete a watchpoint", cmd_d },
};

#define NR_CMD (sizeof(cmd_table) / sizeof(cmd_table[0]))

// readline函数
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(npc) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

// 命令实现
static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}

static int cmd_q(char *args) {
  is_ebreak = true;
  return -1;
}

static int cmd_si(char *args) {
  int n = 1;
  if (args != NULL) {
    n = atoi(args);
  }
  cpu_exec(n);
  return 0;
}

static int cmd_info(char *args) {
  if (args == NULL) {
    printf("Usage: info r [reg_num] | info w\n");
    return 0;
  }
  
  char *subcmd = strtok(args, " ");
  if (strcmp(subcmd, "r") == 0) {
    char *reg_num = strtok(NULL, " ");
    if(reg_num == NULL){
        //显示所有寄存器
        for(int i = 0; i < 32; i++){
            printf("r%d: 0x%08x\n", i, get_rf(i));
        }
    }else{
      printf("x%s: 0x%08x\n", reg_num, get_rf(atoi(reg_num)));
    }
  }else if(strcmp(subcmd, "w") == 0){
    print_watchpoints();
  }
  return 0;
}

static int cmd_x(char *args) {
  if(args == NULL) {
    printf("Usage: x N EXPR\n");
    return 0;
  }
  char *n_str = strtok(args, " ");
  char *expr_str = strtok(NULL, " ");
  if(n_str == NULL || expr_str == NULL) {
    printf("Usage: x N EXPR\n");
    return 0;
  }
  int n = atoi(n_str);
  int addr = strtoul(expr_str, NULL, 0);

  for(int i = 0; i < n; i++) {
    word_t data = pmem_read(addr + i * 4);
    printf("0x%08x: 0x%08x\n", addr + i * 4, data);
  }
  return 0;
}

static int cmd_p(char *args) {
  if(args == NULL) {
    printf("Usage: p EXPR\n");
    return 0;
  }
  bool success = true;
  word_t result = expr(args, &success);
  if(success) {
    printf("Result: (0x%08x)\n",result);
  } else {
    printf("Expression evaluation failed.\n");
  }
  return 0;
  }

static int cmd_w(char *args) {
  if(args == NULL) {
    printf("Usage: w EXPR\n");
    return 0;
  }
  WP *wp = new_wp_with_expr(args);
  printf("Watchpoint %d: %s\n", get_wp_no(wp), args);
  return 0;
}

static int cmd_d(char *args) {
  if(args == NULL) {
    printf("Usage: d N\n");
    return 0;
  }
  int no = atoi(args);
  delete_watchpoint(no);
  return 0;
}

static int cmd_help(char *args) {
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    for (i = 0; i < NR_CMD; i++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  } else {
    for (i = 0; i < NR_CMD; i++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    printf("Running in batch mode...\n");
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    char *cmd = strtok(str, " ");
    if (cmd == NULL) { 
      continue; 
    }

    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

    int i;
    for (i = 0; i < NR_CMD; i++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { 
          return; 
        }
        break;
      }
    }

    if (i == NR_CMD) { 
      printf("Unknown command '%s'\n", cmd); 
    }
  }
}

void init_sdb() {
  init_regex();
  init_wp_pool();
  printf("初始化简易的sdb工具\n");
}
