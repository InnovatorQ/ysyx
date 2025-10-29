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

#include "sdb.h"
#include <string.h>
#include <stdio.h>

#define NR_WP 32

typedef struct watchpoint {
  int NO;
  char expr[256];
  word_t old_value;
  struct watchpoint *next;

  /* TODO: Add more members if necessary */

} WP;

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */
WP* new_wp() {
  assert(free_ != NULL);
  WP* wp = free_;
  free_ = free_->next;
  wp->next = head;
  head = wp;
  return wp;
}

void free_wp(WP* wp) {
  if (head == wp) {
    head = head->next;
  } else {
    WP* prev = head;
    while (prev->next != wp) {
      prev = prev->next;
    }
    prev->next = wp->next;
  }
  wp->next = free_;
  free_ = wp;
}

WP* new_wp_with_expr(char* expr_str) {
  WP* wp = new_wp();
  strcpy(wp->expr, expr_str);
  bool success;
  wp->old_value = expr(expr_str, &success);
  assert(success);
  return wp;
}

bool check_watchpoints() {
  WP* wp = head;
  while (wp != NULL) {
    bool success;
    word_t new_value = expr(wp->expr, &success);
    if (success && (new_value != wp->old_value)) {
      printf("Watchpoint %d: %s\n", wp->NO, wp->expr);
      printf("Old value = " FMT_WORD "\n", wp->old_value);
      printf("New value = " FMT_WORD "\n", new_value);
      wp->old_value = new_value;
      return true;
    }
    wp = wp->next;
  }
  return false;
}

void print_watchpoints() {
  if (head == NULL) {
    printf("No watchpoints.\n");
    return;
  }
  printf("Num     Type           Disp Enb Address    What\n");
  WP* wp = head;
  while (wp != NULL) {
    printf("%-8d watchpoint     keep y   %-10s %s\n", wp->NO, "", wp->expr);
    wp = wp->next;
  }
}

void delete_watchpoint(int no) {
  WP* wp = head;
  while (wp != NULL) {
    if (wp->NO == no) {
      free_wp(wp);
      printf("Watchpoint %d deleted.\n", no);
      return;
    }
    wp = wp->next;
  }
  printf("No watchpoint number %d.\n", no);
}

int get_wp_no(WP* wp) {
  return wp->NO;
}
