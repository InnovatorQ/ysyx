// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VysyxSoCFull.h for the primary calling header

#ifndef VERILATED_VYSYXSOCFULL_YSYX_25110269_IDU_H_
#define VERILATED_VYSYXSOCFULL_YSYX_25110269_IDU_H_  // guard

#include "verilated.h"

class VysyxSoCFull__Syms;

class VysyxSoCFull_ysyx_25110269_IDU final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_IN8(fs_to_ds_valid,0,0);
        VL_OUT8(rs1,4,0);
        VL_OUT8(rs2,4,0);
        VL_IN8(es_allowin,0,0);
        VL_OUT8(ds_to_es_valid,0,0);
        VL_OUT8(cache_flush,0,0);
        VL_OUT8(ds_allowin,0,0);
        VL_OUT8(fence,0,0);
        VL_OUT8(ecall,0,0);
        VL_OUT8(mret,0,0);
        VL_OUT8(csr_op,1,0);
        CData/*0:0*/ ds_valid;
        CData/*0:0*/ ds_ready_go;
        CData/*0:0*/ valid;
        CData/*6:0*/ opcode;
        CData/*2:0*/ funct3;
        CData/*6:0*/ funct7;
        CData/*0:0*/ br_taken;
        CData/*4:0*/ rd;
        CData/*3:0*/ load;
        CData/*3:0*/ store;
        CData/*0:0*/ load_sign;
        CData/*0:0*/ mem_ren;
        CData/*0:0*/ res_from_csr;
        CData/*0:0*/ rf_wen;
        CData/*0:0*/ inst_need_rs1;
        CData/*0:0*/ inst_need_rs2;
        CData/*0:0*/ es_dep_need_stall;
        CData/*0:0*/ es_forward_enable;
        CData/*4:0*/ es_dest;
        CData/*0:0*/ ms_dep_need_stall;
        CData/*0:0*/ ms_forward_enable;
        CData/*4:0*/ ms_dest;
        CData/*0:0*/ ws_forward_enable;
        CData/*4:0*/ ws_dest;
        CData/*0:0*/ inst_i;
        CData/*0:0*/ inst_iu;
        CData/*0:0*/ inst_u;
        CData/*0:0*/ inst_r;
        CData/*0:0*/ inst_s;
        CData/*0:0*/ inst_b;
        CData/*0:0*/ inst_j;
        CData/*0:0*/ inst_fence;
        CData/*0:0*/ inst_add;
        CData/*0:0*/ inst_addi;
        CData/*0:0*/ inst_sub;
        CData/*0:0*/ inst_andi;
        CData/*0:0*/ inst_and;
        CData/*0:0*/ inst_or;
        CData/*0:0*/ inst_ori;
        CData/*0:0*/ inst_xori;
        CData/*0:0*/ inst_xor;
        CData/*0:0*/ inst_lui;
        CData/*0:0*/ inst_jalr;
        CData/*0:0*/ inst_lb;
        CData/*0:0*/ inst_lw;
        CData/*0:0*/ inst_lh;
        CData/*0:0*/ inst_lhu;
        CData/*0:0*/ inst_lbu;
        CData/*0:0*/ inst_sb;
        CData/*0:0*/ inst_sh;
        CData/*0:0*/ inst_sw;
    };
    struct {
        CData/*0:0*/ inst_auipc;
        CData/*0:0*/ inst_jal;
        CData/*0:0*/ inst_sll;
        CData/*0:0*/ inst_slli;
        CData/*0:0*/ inst_slt;
        CData/*0:0*/ inst_srli;
        CData/*0:0*/ inst_srl;
        CData/*0:0*/ inst_srai;
        CData/*0:0*/ inst_sra;
        CData/*0:0*/ inst_sltu;
        CData/*0:0*/ inst_sltiu;
        CData/*0:0*/ inst_bne;
        CData/*0:0*/ inst_bge;
        CData/*0:0*/ inst_beq;
        CData/*0:0*/ inst_bgeu;
        CData/*0:0*/ inst_blt;
        CData/*0:0*/ inst_bltu;
        CData/*0:0*/ inst_ebreak;
        CData/*0:0*/ inst_csrrs;
        CData/*0:0*/ inst_csrrw;
        CData/*0:0*/ inst_ecall;
        CData/*0:0*/ inst_mret;
        CData/*0:0*/ rs1_lt_rd_sign;
        CData/*0:0*/ ds_state;
        CData/*0:0*/ next_state;
        CData/*0:0*/ rs1_forward_stall;
        CData/*0:0*/ rs2_forward_stall;
        CData/*0:0*/ __VdfgTmp_h6876678a__0;
        CData/*0:0*/ __VdfgTmp_h20d514ff__0;
        CData/*0:0*/ __VdfgTmp_h36cf7f3f__0;
        CData/*0:0*/ __VdfgTmp_h499e0f17__0;
        CData/*0:0*/ __VdfgTmp_h0ebf110f__0;
        CData/*0:0*/ __VdfgTmp_h95492ba8__0;
        CData/*0:0*/ __VdfgTmp_h7a5d510f__0;
        CData/*0:0*/ __VdfgTmp_h18c9f4c4__0;
        CData/*0:0*/ __VdfgTmp_ha8c610e1__0;
        VL_OUT16(csr_addr,11,0);
        SData/*11:0*/ alu_op;
        VL_IN(rf1_data,31,0);
        VL_IN(rf2_data,31,0);
        VL_OUTW(ds_to_es_bus,224,0,8);
        VL_IN(csr_data,31,0);
        VL_OUT(csr_result,31,0);
        IData/*31:0*/ pref_cnt_alu;
        IData/*31:0*/ pref_cnt_ls;
        IData/*31:0*/ pref_cnt_br;
        IData/*31:0*/ pref_cnt_csr;
        IData/*31:0*/ ds_pc;
        IData/*31:0*/ imm;
        IData/*31:0*/ src1;
        IData/*31:0*/ src2;
        IData/*31:0*/ mem_addr;
        IData/*31:0*/ st_data;
        IData/*31:0*/ br_target;
        IData/*31:0*/ rs1_data;
        IData/*31:0*/ rs2_data;
        IData/*31:0*/ es_forward_data;
        IData/*31:0*/ ms_forward_data;
        IData/*31:0*/ ws_forward_data;
        IData/*31:0*/ inst;
        IData/*31:0*/ imm_i;
        IData/*31:0*/ imm_iu;
        IData/*31:0*/ imm_u;
        IData/*31:0*/ imm_s;
    };
    struct {
        IData/*31:0*/ imm_j;
        IData/*31:0*/ offset;
        VL_IN64(fs_to_ds_bus,63,0);
        VL_IN64(es_to_ds_forward_bus,38,0);
        VL_IN64(ms_to_ds_forward_bus,38,0);
        VL_IN64(ws_to_ds_forward_bus,37,0);
        VL_OUT64(br_bus,32,0);
        QData/*63:0*/ fs_to_ds_bus_r;
    };

    // INTERNAL VARIABLES
    VysyxSoCFull__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr CData/*0:0*/ ds_idle = 0U;
    static constexpr CData/*0:0*/ ds_wait_ready = 1U;

    // CONSTRUCTORS
    VysyxSoCFull_ysyx_25110269_IDU(VysyxSoCFull__Syms* symsp, const char* v__name);
    ~VysyxSoCFull_ysyx_25110269_IDU();
    VL_UNCOPYABLE(VysyxSoCFull_ysyx_25110269_IDU);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
