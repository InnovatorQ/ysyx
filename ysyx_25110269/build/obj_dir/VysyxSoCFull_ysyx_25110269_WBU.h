// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VysyxSoCFull.h for the primary calling header

#ifndef VERILATED_VYSYXSOCFULL_YSYX_25110269_WBU_H_
#define VERILATED_VYSYXSOCFULL_YSYX_25110269_WBU_H_  // guard

#include "verilated.h"

class VysyxSoCFull__Syms;
class VysyxSoCFull_ysyx_25110269_regfile;


class VysyxSoCFull_ysyx_25110269_WBU final : public VerilatedModule {
  public:
    // CELLS
    VysyxSoCFull_ysyx_25110269_regfile* rf;

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(ms_to_ws_valid,0,0);
    VL_OUT8(ws_allowin,0,0);
    VL_IN8(rs1,4,0);
    VL_IN8(rs2,4,0);
    VL_OUT8(inst_finish,0,0);
    CData/*3:0*/ load;
    CData/*4:0*/ dest;
    CData/*0:0*/ res_from_csr;
    CData/*0:0*/ rf_wen;
    CData/*0:0*/ ws_to_ds_forward_enable;
    CData/*0:0*/ ws_ready_go;
    CData/*0:0*/ ws_valid;
    CData/*0:0*/ ws_state;
    CData/*0:0*/ next_state;
    VL_INW(ms_to_ws_bus,234,0,8);
    VL_OUT(rf1_data,31,0);
    VL_OUT(rf2_data,31,0);
    VlWide<8>/*234:0*/ ms_to_ws_bus_r;
    IData/*31:0*/ debug_mem_addr;
    IData/*31:0*/ debug_mem_wdata;
    IData/*31:0*/ debug_mem_rdata;
    IData/*31:0*/ ws_pc;
    IData/*31:0*/ alu_result;
    IData/*31:0*/ load_data;
    IData/*31:0*/ csr_data;
    IData/*31:0*/ wb_data;
    IData/*31:0*/ ws_to_ds_forward_data;
    VL_OUT64(ws_to_ds_forward_bus,37,0);

    // INTERNAL VARIABLES
    VysyxSoCFull__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr CData/*0:0*/ ws_idle = 0U;
    static constexpr CData/*0:0*/ ws_wait_ready = 1U;

    // CONSTRUCTORS
    VysyxSoCFull_ysyx_25110269_WBU(VysyxSoCFull__Syms* symsp, const char* v__name);
    ~VysyxSoCFull_ysyx_25110269_WBU();
    VL_UNCOPYABLE(VysyxSoCFull_ysyx_25110269_WBU);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
