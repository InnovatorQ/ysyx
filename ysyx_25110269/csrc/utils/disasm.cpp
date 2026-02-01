// RISC-V指令反汇编工具
// 使用Capstone反汇编引擎将机器码转换为可读的汇编指令

#include <dlfcn.h>
#include <capstone/capstone.h>
#include <common.h>

// Capstone库句柄和函数指针
static csh handle;  // Capstone反汇编器句柄
static size_t (*cs_disasm_dl)(csh, const uint8_t*, size_t, uint64_t, size_t, cs_insn**);  // 反汇编函数指针
static void (*cs_free_dl)(cs_insn*, size_t);  // 释放内存函数指针

// 初始化反汇编器
void init_disasm() {
  // 动态加载Capstone库
  void *dl = dlopen("../nemu/tools/capstone/repo/libcapstone.so.5", RTLD_LAZY);
  if (!dl) dl = dlopen("/home/qzx/ysyx/ysyx-workbench/nemu/tools/capstone/repo/libcapstone.so.5", RTLD_LAZY);
  assert(dl);  // 确保库加载成功
  
  // 获取Capstone库函数指针
  cs_err (*cs_open_dl)(cs_arch, cs_mode, csh*) = (cs_err(*)(cs_arch, cs_mode, csh*))dlsym(dl, "cs_open");
  cs_disasm_dl = (size_t(*)(csh, const uint8_t*, size_t, uint64_t, size_t, cs_insn**))dlsym(dl, "cs_disasm");
  cs_free_dl = (void(*)(cs_insn*, size_t))dlsym(dl, "cs_free");
  
  // 确保所有函数指针都获取成功
  assert(cs_open_dl && cs_disasm_dl && cs_free_dl);
  
  // 初始化RISC-V 32位反汇编器，支持压缩指令
  cs_mode mode = (cs_mode)(CS_MODE_RISCV32 | CS_MODE_RISCVC);
  assert(cs_open_dl(CS_ARCH_RISCV, mode, &handle) == CS_ERR_OK);
}

// 反汇编单条指令
// str: 输出缓冲区
// size: 缓冲区大小
// pc: 程序计数器值
// code: 指令机器码
// nbyte: 机器码字节数
void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte) {
  cs_insn *insn;  // 反汇编结果结构体
  
  // 调用Capstone反汇编函数
  size_t count = cs_disasm_dl(handle, code, nbyte, pc, 0, &insn);
  
  if (count != 1) {
    snprintf(str, size, "invalid");
    return;
  }
  
  // 格式化输出：指令助记符
  int ret = snprintf(str, size, "%s", insn->mnemonic);
  
  // 如果有操作数，添加操作数信息
  if (insn->op_str[0] != '\0') {
    snprintf(str + ret, size - ret, "\t%s", insn->op_str);
  }
  
  // 释放Capstone分配的内存
  cs_free_dl(insn, count);
}
