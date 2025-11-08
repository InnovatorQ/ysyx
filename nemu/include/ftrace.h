#ifndef __FTRACE_H__
#define __FTRACE_H__

#include <common.h>

/*
 * ftrace (Function Trace) - 函数调用跟踪功能
 * 
 * 这个模块用于跟踪程序运行时的函数调用和返回，帮助理解程序的执行流程。
 * 主要功能包括：
 * 1. 从ELF文件中解析函数符号表
 * 2. 在程序执行时识别函数调用和返回
 * 3. 输出带有层次结构的函数调用跟踪信息
 */

/**
 * 初始化ftrace功能
 * @param elf_file ELF文件路径，用于读取函数符号信息
 * 
 * 这个函数会：
 * - 打开并解析ELF文件
 * - 读取符号表和字符串表
 * - 提取所有函数符号的名称、地址和大小
 * - 为后续的函数跟踪做准备
 */
void init_ftrace(const char *elf_file);

/**
 * 记录函数调用
 * @param pc 当前程序计数器（调用指令的地址）
 * @param target 目标函数地址
 * 
 * 当检测到函数调用指令时调用此函数，会：
 * - 根据目标地址查找对应的函数名
 * - 输出函数调用信息，包含调用层次的缩进
 * - 增加调用深度计数
 */
void ftrace_call(vaddr_t pc, vaddr_t target);

/**
 * 记录函数返回
 * @param pc 当前程序计数器（返回指令的地址）
 * 
 * 当检测到函数返回指令时调用此函数，会：
 * - 输出函数返回信息，包含调用层次的缩进
 * - 减少调用深度计数
 */
void ftrace_ret(vaddr_t pc);

#endif
