#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>

static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {
  if (user_handler) {
    //printf("Debug mcause : %d\n", c->mcause);
    //putch('\n');
    Event ev = {0};
    switch (c->mcause) {
      case 11: ev.event = EVENT_YIELD; c->mepc += 4; break;
      default: ev.event = EVENT_ERROR; break;
    }

    c = user_handler(ev, c);
    assert(c != NULL);
  }

  return c;
}

extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));

  // register event handler
  user_handler = handler;

  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  //定位新的上下文结构体在栈顶位置
  Context* cp = (Context*)((uintptr_t)kstack.end - sizeof(Context));
  //创建新的线程时需要初始化线程的上下文信息
  memset(cp, 0, sizeof(Context));
  assert((kstack.end - (void *)cp) == sizeof(Context));
  cp->mepc = (uintptr_t)entry; //设置内核线程入口,硬件机制会在执行mret指令时跳转到该地址
  cp->gpr[10] = (uintptr_t)arg; //设置a0寄存器传递参数
  cp->mstatus = 0x00001800; // MIE=1, MPIE=1
  return cp;
}

void yield() {
#ifdef __riscv_e
  asm volatile("li a5, -1; ecall");
#else
  asm volatile("li a7, -1; ecall");
#endif
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}
