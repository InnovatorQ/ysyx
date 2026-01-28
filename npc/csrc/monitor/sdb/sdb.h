#ifndef __SDB_H__
#define __SDB_H__

#include <cstdint>
#include "common.h"
word_t expr(char *e, bool *success);

void init_sdb();
void sdb_mainloop();
void sdb_set_batch_mode();
typedef struct watchpoint WP;
WP* new_wp_with_expr(char* expr_str);
void delete_watchpoint(int no);
bool check_watchpoints();
void print_watchpoints();
int get_wp_no(WP* wp);
// CPU执行相关函数声明
void cpu_exec(int n);



#endif
