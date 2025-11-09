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

#include "local-include/reg.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>
#include <ftrace.h>

#define R(i) gpr(i)
#define Mr vaddr_read
#define Mw vaddr_write

enum {
  TYPE_R, TYPE_I, TYPE_U, TYPE_S, TYPE_J, TYPE_B,
  TYPE_N, // none
};
//宏BITS和SEXT, 它们均在nemu/include/macro.h中定义, 分别用于位抽取和符号扩展
#define src1R() do { *src1 = R(rs1); } while (0)
#define src2R() do { *src2 = R(rs2); } while (0)
#define immI() do { *imm = SEXT(BITS(i, 31, 20), 12); } while(0)
#define immU() do { *imm = SEXT(BITS(i, 31, 12), 20) << 12; } while(0)
#define immS() do { *imm = (SEXT(BITS(i, 31, 25), 7) << 5) | BITS(i, 11, 7); } while(0)
#define immB() do { *imm = (SEXT(BITS(i, 31, 31), 1) << 12) | (BITS(i, 7, 7) << 11) | (BITS(i, 30, 25) << 5) | (BITS(i, 11, 8) << 1); } while(0)
#define immJ() do { *imm = (SEXT(BITS(i, 31, 31), 1) << 20) | (BITS(i, 19, 12) << 12) | (BITS(i, 20, 20) << 11) | (BITS(i, 30, 21) << 1); } while(0)
//获取inst中的操作对象或操作数
static void decode_operand(Decode *s, int *rd, word_t *src1, word_t *src2, word_t *imm, int type) {
  uint32_t i = s->isa.inst;
  int rs1 = BITS(i, 19, 15);
  int rs2 = BITS(i, 24, 20);
  *rd     = BITS(i, 11, 7);
  switch (type) {
    case TYPE_R: src1R(); src2R();         break; 
    case TYPE_I: src1R();          immI(); break;
    case TYPE_U:                   immU(); break;
    case TYPE_S: src1R(); src2R(); immS(); break;
    case TYPE_J: src1R();          immJ(); break;
    case TYPE_B: src1R(); src2R(); immB(); break;
    case TYPE_N: break;
    default: panic("unsupported type = %d", type);
  }
}

static int decode_exec(Decode *s) {
  s->dnpc = s->snpc;

#define INSTPAT_INST(s) ((s)->isa.inst)
#define INSTPAT_MATCH(s, name, type, ... /* execute body */ ) { \
  int rd = 0; \
  word_t src1 = 0, src2 = 0, imm = 0; \
  decode_operand(s, &rd, &src1, &src2, &imm, concat(TYPE_, type)); \
  __VA_ARGS__ ; \
}
  /*
  模式匹配
  INSTPAT(instruction pattern),INSTPAT(模式字符串, 指令名称, 指令类型, 指令执行操作);
  0表示相应的位只能匹配0
  1表示相应的位只能匹配1
  ?表示相应的位可以匹配0或1
  空格是分隔符, 只用于提升模式字符串的可读性, 不参与匹配
  INSTPAT_START+INSTPAT(auipc)宏定义展开后类似如下:
  { const void * __instpat_end = &&__instpat_end_;
do {
  uint64_t key, mask, shift;
  pattern_decode("??????? ????? ????? ??? ????? 00101 11", 38, &key, &mask, &shift);
  if ((((uint64_t)s->isa.inst >> shift) & mask) == key) {
    {
      int rd = 0;
      word_t src1 = 0, src2 = 0, imm = 0;
      decode_operand(s, &rd, &src1, &src2, &imm, TYPE_U);
      R(rd) = s->pc + imm;
    }
    goto *(__instpat_end);
  }
} while (0);
// ...
__instpat_end_: ; }
  key   = 0x17;
  mask  = 0x7f;
  shift = 0;
  */
  INSTPAT_START();
  INSTPAT("??????? ????? ????? ??? ????? 00101 10", auipc  , U, R(rd) = s->pc + imm);
  INSTPAT("??????? ????? ????? 000 ????? 00100 11", addi   , I, R(rd) = src1 + imm);  // 增加addi指令模式 work!
  INSTPAT("??????? ????? ????? 111 ????? 00100 11", andi   , I, R(rd) = src1 & imm); // 增加andi指令模式 
  INSTPAT("??????? ????? ????? 110 ????? 00100 11", ori    , I, R(rd) = src1 | imm); // 增加ori指令模式
  INSTPAT("??????? ????? ????? 100 ????? 00100 11", xori   , I, R(rd) = src1 ^ imm); // 增加xori指令模式
  INSTPAT("??????? ????? ????? ??? ????? 01101 11", lui    , U, R(rd) = imm); // 增加lui指令模式 work!
  INSTPAT("??????? ????? ????? 100 ????? 00000 11", lbu    , I, R(rd) = Mr(src1 + imm, 1));
  INSTPAT("??????? ????? ????? 101 ????? 00000 11", lhu    , I, R(rd) = Mr(src1 + imm, 2)); //增加lhu
  INSTPAT("??????? ????? ????? 000 ????? 00000 11", lb     , I, R(rd) = SEXT(Mr(src1 + imm, 1), 8)); //增加lb !!!
  INSTPAT("??????? ????? ????? 001 ????? 00000 11", lh     , I, R(rd) = SEXT(Mr(src1 + imm, 2), 16)); //增加lh !!!
  INSTPAT("??????? ????? ????? 010 ????? 00000 11", lw     , I, R(rd) = Mr(src1 + imm, 4)); //增加lw 
  INSTPAT("??????? ????? ????? 000 ????? 01000 11", sb     , S, Mw(src1 + imm, 1, src2));
  INSTPAT("??????? ????? ????? 001 ????? 01000 11", sh     , S, Mw(src1 + imm, 2, src2)); //增加sh
  INSTPAT("??????? ????? ????? 010 ????? 01000 11", sw     , S, Mw(src1 + imm, 4, src2)); //增加sw
  // ftrace检测：当rd为x1(ra)或x5(t0)时，认为是函数调用
  INSTPAT("??????? ????? ????? ??? ????? 11011 11", jal    , J, { 
    R(rd) = s->pc + 4;           // 将返回地址（下一条指令地址）保存到rd
    s->dnpc = s->pc + imm;       // 跳转到目标地址
    if (rd == 1 || rd == 5) ftrace_call(s->pc, s->dnpc); 
  });
  INSTPAT("??????? ????? ????? 000 ????? 11001 11", jalr   , I, { 
    word_t t = s->pc + 4;                    // 计算返回地址
    s->dnpc = (src1 + imm) & ~1;             // 计算跳转目标地址（清除最低位确保地址对齐）
    R(rd) = t;                               // 将返回地址保存到rd
    // 函数调用检测：rd为1(ra)或5(t0)时认为是函数调用
    if (rd == 1 || rd == 5) ftrace_call(s->pc, s->dnpc);
    // 函数返回检测：rd为0(不保存返回地址)且源寄存器是ra(x1)时认为是函数返回
    else if (rd == 0 && src1 == gpr(1)) ftrace_ret(s->pc);
  });
  INSTPAT("0000000 ????? ????? 001 ????? 00100 11", slli   , I, R(rd) = src1 << (imm & 0x1f)); //增加slli
  INSTPAT("0000000 ????? ????? 101 ????? 00100 11", srli   , I, R(rd) = src1 >> (imm & 0x1f)); //增加srli 
  INSTPAT("0100000 ????? ????? 101 ????? 00100 11", srai   , I, R(rd) = (sword_t)src1 >> (imm & 0x1f)); //增加srai !!!
  INSTPAT("0000000 ????? ????? 000 ????? 01100 11", add    , R, R(rd) = src1 + src2); //增加add
  INSTPAT("0100000 ????? ????? 000 ????? 01100 11", sub    , R, R(rd) = src1 - src2); //增加sub
  INSTPAT("0000000 ????? ????? 001 ????? 01100 11", sll    , R, R(rd) = src1 << (src2 & 0x1f)); //增加sll
  INSTPAT("0000000 ????? ????? 100 ????? 01100 11", xor    , R, R(rd) = src1 ^  src2); //增加xor
  INSTPAT("0000000 ????? ????? 110 ????? 01100 11", or     , R, R(rd) = src1 | src2); //增加or
  INSTPAT("0000000 ????? ????? 111 ????? 01100 11", and    , R, R(rd) = src1 & src2); //增加and
  INSTPAT("0000001 ????? ????? 000 ????? 01100 11", mul    , R, R(rd) = src1 * src2); //增加mul
  INSTPAT("0000001 ????? ????? 001 ????? 01100 11", mulh   , R, R(rd) = ((int64_t)(sword_t)src1 * (int64_t)(sword_t)src2) >> 32); //增加mulh src1和src2视为有符号数拓展至64位
  INSTPAT("0000001 ????? ????? 100 ????? 01100 11", div    , R, R(rd) = (sword_t)src1 / (sword_t)src2); //增加div !!!!!
  INSTPAT("0000001 ????? ????? 101 ????? 01100 11", divu   , R, R(rd) = src1 / src2); //增加divu
  INSTPAT("0000001 ????? ????? 110 ????? 01100 11", rem    , R, R(rd) = (sword_t)src1 % (sword_t)src2); //增加rem !!!!!
  INSTPAT("0000001 ????? ????? 111 ????? 01100 11", remu   , R, R(rd) = src1 % src2); //增加remu
  INSTPAT("0000000 ????? ????? 010 ????? 01100 11", slt    , R, R(rd) = (sword_t)src1 < (sword_t)src2 ? 1 : 0); //增加slt
  INSTPAT("??????? ????? ????? 011 ????? 00100 11", sltiu  , I, R(rd) = (sword_t)src1 < (sword_t)imm ? 1 : 0); //增加sltiu
  INSTPAT("0000000 ????? ????? 011 ????? 01100 11", sltu   , R, R(rd) = (sword_t)src1 < (sword_t)src2 ? 1 : 0); //增加sltu
  INSTPAT("0000000 ????? ????? 101 ????? 01100 11", srl    , R, R(rd) = src1 >> (src2 & 0x1f)); //增加srl
  INSTPAT("0100000 ????? ????? 101 ????? 01100 11", sra    , R, R(rd) = (sword_t)src1 >> (src2 & 0x1f)); //增加sra
  INSTPAT("??????? ????? ????? 000 ????? 11000 11", beq    , B, if (src1 == src2) s->dnpc = s->pc + imm; ); //增加beq
  INSTPAT("??????? ????? ????? 001 ????? 11000 11", bne    , B, if (src1 != src2) s->dnpc = s->pc + imm; ); //增加bne
  INSTPAT("??????? ????? ????? 101 ????? 11000 11", bge    , B, if ((sword_t)src1 >= (sword_t)src2) s->dnpc = s->pc + imm; ); //增加bge
  INSTPAT("??????? ????? ????? 111 ????? 11000 11", bgeu   , B, if (src1 >= src2) s->dnpc = s->pc + imm; ); //增加bgeu
  INSTPAT("??????? ????? ????? 100 ????? 11000 11", blt    , B, if ((sword_t)src1 < (sword_t)src2) s->dnpc = s->pc + imm; ); //增加blt
  INSTPAT("??????? ????? ????? 110 ????? 11000 11", bltu   , B, if (src1 < src2) s->dnpc = s->pc + imm; ); //增加bltu
  INSTPAT("0000000 00001 00000 000 00000 11100 11", ebreak , N, NEMUTRAP(s->pc, R(10))); // R(10) is $a0
  INSTPAT("??????? ????? ????? ??? ????? ????? ??", inv    , N, INV(s->pc));
  INSTPAT_END();

  R(0) = 0; // reset $zero to 0

  return 0;
}

int isa_exec_once(Decode *s) {
  // 随着取指的过程修改s->snpc的值, 使得从isa_exec_once()返回后s->snpc正好为下一条指令的PC. 
  // inst_fetch()会将inst字节序列按照小端序存入s->isa.inst中，大部分主机CPU会按照小端方式解释，可Motorola 68k系列的处理器都是大端架构
  // 1.假设我们需要将NEMU运行在Motorola 68k的机器上(把NEMU的源代码编译成Motorola 68k的机器码) 
  // 2.假设我们需要把Motorola 68k作为一个新的ISA加入到NEMU中
  // 可以使用预定义宏，编写条件代码
  s->isa.inst = inst_fetch(&s->snpc, 4);
  // 通过s->dnpc更新返回下一条指令的PC
  return decode_exec(s);
}
