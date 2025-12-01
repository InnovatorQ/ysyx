#ifndef __ETRACE_H__
#define __ETRACE_H__

#include <common.h>

void etrace_exception_entry(word_t cause, vaddr_t pc, vaddr_t handler);
void etrace_exception_exit(vaddr_t pc);

#endif
