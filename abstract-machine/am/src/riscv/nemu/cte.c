#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>

static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {
  if (user_handler) {
    Event ev = {0};
    switch (c->mcause) {
      case 11: ev.event = EVENT_YIELD; break;
      default: ev.event = EVENT_ERROR; break;
    }

    c = user_handler(ev, c);
    assert(c != NULL);
  }

  return c;
}

extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry设置异常入口地址
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));

  // register event handler注册一个事件处理回调函数
  user_handler = handler;

  return true;
}
// kstack是栈的范围, entry是内核线程的入口, arg则是内核线程的参数
// kcontext()要求内核线程不能从entry返回, 否则其行为是未定义的
Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  printf("栈底:0x%x 栈顶:0x%x size:%d\n", 
       (uint32_t)kstack.end, (uint32_t)kstack.start, 
       (uint32_t)(kstack.end - kstack.start));
  //定位新的上下文结构体在栈顶位置
  Context* cp = (Context*)((uintptr_t)kstack.end - sizeof(Context));
  //创建新的线程时需要初始化线程的上下文信息
  memset(cp, 0, sizeof(Context));
  assert((kstack.end - (void *)cp) == sizeof(Context));
  cp->gpr[10] = (uintptr_t)arg; //设置a0寄存器传递参数
  cp->mepc = (uintptr_t)entry; //设置内核线程入口
  cp->mstatus = 0x00001800; // MIE=1, MPIE=1
  return cp;
  //return NULL;
}

void yield() {
#ifdef __riscv_e
  asm volatile("li a5, -1; ecall");
#else
  asm volatile("li a7, -1; ecall"); //通过a7寄存器来传递系统调用编号
#endif
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}
