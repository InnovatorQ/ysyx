// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VysyxSoCFull.h for the primary calling header

#ifndef VERILATED_VYSYXSOCFULL_YSYX_25110269_EXU_H_
#define VERILATED_VYSYXSOCFULL_YSYX_25110269_EXU_H_  // guard

#include "verilated.h"

class VysyxSoCFull__Syms;

class VysyxSoCFull_ysyx_25110269_EXU final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(ds_to_es_valid,0,0);
    VL_IN8(ms_allowin,0,0);
    VL_OUT8(es_allowin,0,0);
    VL_OUT8(es_to_ms_valid,0,0);
    CData/*0:0*/ es_valid;
    CData/*0:0*/ es_ready_go;
    CData/*0:0*/ res_from_csr;
    CData/*0:0*/ rf_wen;
    CData/*0:0*/ load_sign;
    CData/*3:0*/ load;
    CData/*3:0*/ store;
    CData/*4:0*/ shamt;
    CData/*4:0*/ dest;
    CData/*0:0*/ forward_enable;
    CData/*0:0*/ dep_need_stall;
    CData/*0:0*/ es_state;
    CData/*0:0*/ next_state;
    CData/*0:0*/ __PVT__alu__DOT__adder_cin;
    SData/*11:0*/ alu_op;
    VL_INW(ds_to_es_bus,224,0,8);
    VL_OUTW(es_to_ms_bus,175,0,6);
    IData/*31:0*/ pref_cnt;
    VlWide<8>/*224:0*/ ds_to_es_bus_r;
    IData/*31:0*/ alu_src1;
    IData/*31:0*/ alu_src2;
    IData/*31:0*/ mem_addr;
    IData/*31:0*/ st_data;
    IData/*31:0*/ csr_data;
    IData/*31:0*/ es_pc;
    IData/*31:0*/ alu_result;
    IData/*31:0*/ __PVT__alu__DOT__srli_result;
    IData/*31:0*/ __PVT__alu__DOT__srl_result;
    IData/*31:0*/ __PVT__alu__DOT__adder_b;
    VL_OUT64(forward_bus,38,0);

    // INTERNAL VARIABLES
    VysyxSoCFull__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr CData/*0:0*/ es_idle = 0U;
    static constexpr CData/*0:0*/ es_wait_ready = 1U;

    // CONSTRUCTORS
    VysyxSoCFull_ysyx_25110269_EXU(VysyxSoCFull__Syms* symsp, const char* v__name);
    ~VysyxSoCFull_ysyx_25110269_EXU();
    VL_UNCOPYABLE(VysyxSoCFull_ysyx_25110269_EXU);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
