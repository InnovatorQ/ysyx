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

#define NR_WP 32  // 监视点的最大数量

// 监视点结构体定义
typedef struct watchpoint {
  int NO;                    // 监视点编号
  char expr[256];           // 监视的表达式字符串
  word_t old_value;         // 表达式的旧值
  struct watchpoint *next;  // 指向下一个监视点的指针

  /* TODO: Add more members if necessary */

} WP;

static WP wp_pool[NR_WP] = {};  // 监视点池，存储所有监视点
static WP *head = NULL, *free_ = NULL;  // head指向使用中的监视点链表，free_指向空闲监视点链表

// 初始化监视点池
void init_wp_pool() {
  int i;
  // 将所有监视点连接成一个空闲链表
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;  // 设置监视点编号
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);  // 连接下一个节点
  }

  head = NULL;      // 使用中的监视点链表为空
  free_ = wp_pool;  // 空闲链表指向监视点池的第一个元素
}

// 分配一个新的监视点
WP* new_wp() {
  assert(free_ != NULL);  // 确保还有空闲的监视点
  WP* wp = free_;         // 从空闲链表中取出一个监视点
  free_ = free_->next;    // 更新空闲链表头指针
  wp->next = head;        // 将新监视点插入到使用中链表的头部
  head = wp;              // 更新使用中链表头指针
  return wp;
}

// 释放一个监视点
void free_wp(WP* wp) {
  // 如果要释放的是头节点
  if (head == wp) {
    head = head->next;  // 直接更新头指针
  } else {
    // 找到要释放节点的前一个节点
    WP* prev = head;
    while (prev->next != wp) {
      prev = prev->next;
    }
    prev->next = wp->next;  // 将前一个节点连接到下一个节点
  }
  wp->next = free_;  // 将释放的节点插入到空闲链表头部
  free_ = wp;        // 更新空闲链表头指针
}

// 创建一个带表达式的新监视点
WP* new_wp_with_expr(char* expr_str) {
  WP* wp = new_wp();                    // 分配一个新监视点
  strcpy(wp->expr, expr_str);           // 复制表达式
  bool success;
  wp->old_value = expr(expr_str, &success);  // 计算表达式的初始值
  assert(success);                      // 断点，确保表达式计算成功
  return wp;
}

// 检查所有监视点，看是否有值发生变化
bool check_watchpoints() {
  WP* wp = head;  // 从使用中链表的头部开始遍历
  while (wp != NULL) {
    bool success;
    word_t new_value = expr(wp->expr, &success);  // 重新计算表达式的值
    // 如果计算成功且值发生了变化
    if (success && (new_value != wp->old_value)) {
      printf("Watchpoint %d: %s\n", wp->NO, wp->expr);
      printf("Old value =  0x%08x \n", wp->old_value);
      printf("New value =  0x%08x \n", new_value);
      wp->old_value = new_value;  // 更新旧值
      return true;  // 返回true表示有监视点触发
    }
    wp = wp->next;  // 检查下一个监视点
  }
  return false;  // 没有监视点触发
}

// 打印所有监视点的信息
void print_watchpoints() {
  if (head == NULL) {
    printf("No watchpoints.\n");  // 没有监视点
    return;
  }
  // 打印表头
  printf("Num     Type           Disp Enb Address    What\n");
  WP* wp = head;
  while (wp != NULL) {
    // 打印每个监视点的信息
    printf("%-8d watchpoint     keep y   %-10s %s\n", wp->NO, "", wp->expr);
    wp = wp->next;
  }
}

// 删除指定编号的监视点
void delete_watchpoint(int no) {
  WP* wp = head;
  while (wp != NULL) {
    if (wp->NO == no) {
      free_wp(wp);  // 释放找到的监视点
      printf("Watchpoint %d deleted.\n", no);
      return;
    }
    wp = wp->next;
  }
  printf("No watchpoint number %d.\n", no);  // 没有找到指定编号的监视点
}

// 获取监视点的编号
int get_wp_no(WP* wp) {
  return wp->NO;
}
