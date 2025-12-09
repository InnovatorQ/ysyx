#include <etrace.h>

static const char *exception_names[] = {
  [1] = "Ecall"
};

void etrace_exception_entry(word_t cause, vaddr_t pc, vaddr_t handler) {
  const char *name = (cause < sizeof(exception_names)/sizeof(char*) && exception_names[cause]) 
                     ? exception_names[cause] : "Unknown";
  printf("ETRACE: exception entry [%s] at pc = " FMT_WORD ", handler = " FMT_WORD "\n", 
         name, pc, handler);
  log_write("ETRACE: exception entry [%s] at pc = " FMT_WORD ", handler = " FMT_WORD "\n", 
         name, pc, handler);
}

void etrace_exception_exit(vaddr_t pc) {
  printf("ETRACE: exception exit at pc = " FMT_WORD "\n", pc);
  log_write("ETRACE: exception exit at pc = " FMT_WORD "\n", pc);
}
