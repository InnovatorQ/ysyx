// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VysyxSoCFull.h for the primary calling header

#ifndef VERILATED_VYSYXSOCFULL_YSYX_25110269_IFU_H_
#define VERILATED_VYSYXSOCFULL_YSYX_25110269_IFU_H_  // guard

#include "verilated.h"

class VysyxSoCFull__Syms;

class VysyxSoCFull_ysyx_25110269_IFU final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(inst_finish,0,0);
    VL_IN8(ds_allowin,0,0);
    VL_IN8(fence,0,0);
    VL_IN8(ecall,0,0);
    VL_IN8(mret,0,0);
    VL_OUT8(fs_to_ds_valid,0,0);
    VL_OUT8(arvalid,0,0);
    VL_IN8(rvalid,0,0);
    CData/*0:0*/ access_start;
    CData/*1:0*/ fs_state;
    CData/*0:0*/ fs_valid;
    CData/*0:0*/ to_fs_valid;
    CData/*0:0*/ fs_allowin;
    CData/*0:0*/ fs_ready_go;
    CData/*0:0*/ btb_pre_error_flush;
    CData/*0:0*/ flush_sign;
    VL_IN(csr_mtvec,31,0);
    VL_IN(csr_mepc,31,0);
    VL_OUT(araddr,31,0);
    VL_IN(rdata,31,0);
    IData/*31:0*/ pref_cnt;
    IData/*31:0*/ ifu_rdata;
    IData/*31:0*/ pc;
    IData/*31:0*/ next_pc;
    IData/*31:0*/ seq_pc;
    IData/*31:0*/ btb_pre_error_flushtarget;
    IData/*31:0*/ next_pc_reg;
    VL_IN64(br_bus,32,0);
    VL_OUT64(fs_to_ds_bus,63,0);
    QData/*63:0*/ delay_cnt;

    // INTERNAL VARIABLES
    VysyxSoCFull__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr CData/*1:0*/ fs_idle = 0U;
    static constexpr CData/*1:0*/ fs_wait_ready = 1U;
    static constexpr CData/*1:0*/ fs_addr_ready = 2U;
    static constexpr CData/*1:0*/ fs_data_ready = 3U;

    // CONSTRUCTORS
    VysyxSoCFull_ysyx_25110269_IFU(VysyxSoCFull__Syms* symsp, const char* v__name);
    ~VysyxSoCFull_ysyx_25110269_IFU();
    VL_UNCOPYABLE(VysyxSoCFull_ysyx_25110269_IFU);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
