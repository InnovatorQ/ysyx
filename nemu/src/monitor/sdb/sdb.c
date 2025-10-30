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

#include <isa.h>
#include <cpu/cpu.h>
#include <memory/paddr.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"

static int is_batch_mode = false;

void init_regex();
void init_wp_pool();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
  nemu_state.state = NEMU_QUIT;
  return -1;
}

static int cmd_help(char *args);
static int cmd_si(char *args);
static int cmd_info(char *args);
static int cmd_x(char *args);
static int cmd_p(char *args);
static int cmd_w(char *args);
static int cmd_d(char *args);
static int cmd_p_test();

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si", "Step the execution of the program", cmd_si },//add 1
  { "info", "Display information about registers or watchpoints", cmd_info },//add 2
  { "x", "Examine memory", cmd_x },//add 3
  { "p", "Expreesion", cmd_p},//add 4
  { "p_test", "Test the expression parser", cmd_p_test},//add 5
  { "w", "Set a watchpoint", cmd_w },//add 6
  { "d", "Delete a watchpoint", cmd_d },// add 7
  /* TODO: Add more commands */

};

#define NR_CMD ARRLEN(cmd_table)

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
    if (reg_num == NULL) {
      isa_reg_display();
    } else {
      isa_reg_display_single(atoi(reg_num));
    }
  }
  else if (strcmp(subcmd, "w") == 0) {
#ifdef CONFIG_WATCHPOINT
    print_watchpoints();
#else
    printf("Watchpoint is not compiled\n");
#endif
  }
  
  return 0;
}

static int cmd_x(char *args) {
  if (args == NULL) {
    printf("Usage: x N EXPR\n");
    return 0;
  }

  char *n_str = strtok(args, " ");
  char *expr_str = strtok(NULL, " ");
  if (n_str == NULL || expr_str == NULL) {
    printf("Usage: x N EXPR\n");
    return 0;
  }

  int n = atoi(n_str);
  word_t addr = strtoul(expr_str, NULL, 0);
  
  for (int i = 0; i < n; i++) {
    word_t data = paddr_read(addr + i * 4, 4);
    printf("0x%08x: 0x%08x\n", addr + i * 4, data);
  }

  return 0;
}

static int cmd_p(char *args) {
  if (args == NULL) {
    printf("Usage: p EXPR\n");
    return 0;
  }

  bool success = true;
  word_t result = expr(args, &success);
  if (success) {
    printf("%u\n", result);
  } else {
    printf("Invalid expression: %s\n", args);
  }

  return 0;
}

static int cmd_p_test() {
  FILE *fp = fopen("./tools/gen-expr/input", "r");
  if (fp == NULL) {
    Log("Cannot open input file: ./tools/gen-expr/input");
    return 0 ;
  }
  
  char line[65536];
  int test_count = 0;
  int pass_count = 0;
  
  while (fgets(line, sizeof(line), fp) != NULL) {
    // 解析每行：expected_result expression
    char *space_pos = strchr(line, ' ');
    if (space_pos == NULL) continue;
    
    *space_pos = '\0';
    unsigned expected = strtoul(line, NULL, 10);
    char *expr_str = space_pos + 1;
    
    // 移除换行符
    char *newline = strchr(expr_str, '\n');
    if (newline) *newline = '\0';
    
    bool success = true;
    word_t result = expr(expr_str, &success);
    
    test_count++;
    if (success && result == expected) {
      pass_count++;
      printf("PASS: expr=\"%s\" expected=%u got=%u\n", 
             expr_str, expected, result);
    } else {
      printf("FAIL: expr=\"%s\" expected=%u got=%u \n", 
             expr_str, expected, result);
    }
  }
  
  fclose(fp);
  printf("Expression test: %d/%d passed\n", pass_count, test_count);
  return 0;
}

static int cmd_w(char *args) {
#ifdef CONFIG_WATCHPOINT
  if (args == NULL) {
    printf("Usage: w EXPR\n");
    return 0;
  }
  WP* wp = new_wp_with_expr(args);
  printf("Watchpoint %d: %s\n", get_wp_no(wp), args);
#else
  printf("Watchpoint is not compiled\n");
#endif
  return 0;
}

static int cmd_d(char *args) {
#ifdef CONFIG_WATCHPOINT
  if (args == NULL) {
    printf("Usage: d N\n");
    return 0;
  }
  int no = atoi(args);
  delete_watchpoint(no);
#else
  printf("Watchpoint is not compiled\n");
#endif
  return 0;
}

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
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
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}



void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  
  init_wp_pool();
}
