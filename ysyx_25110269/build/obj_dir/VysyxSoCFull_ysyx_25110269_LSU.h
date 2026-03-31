// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VysyxSoCFull.h for the primary calling header

#ifndef VERILATED_VYSYXSOCFULL_YSYX_25110269_LSU_H_
#define VERILATED_VYSYXSOCFULL_YSYX_25110269_LSU_H_  // guard

#include "verilated.h"

class VysyxSoCFull__Syms;

class VysyxSoCFull_ysyx_25110269_LSU final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(arvalid,0,0);
    VL_OUT8(arlen,7,0);
    VL_OUT8(arsize,2,0);
    VL_IN8(arready,0,0);
    VL_IN8(rvalid,0,0);
    VL_IN8(rresp,1,0);
    VL_OUT8(rready,0,0);
    VL_OUT8(awvalid,0,0);
    VL_OUT8(awlen,7,0);
    VL_OUT8(awsize,2,0);
    VL_IN8(awready,0,0);
    VL_OUT8(wvalid,0,0);
    VL_OUT8(wstrb,3,0);
    VL_OUT8(wlast,0,0);
    VL_IN8(wready,0,0);
    VL_IN8(bvalid,0,0);
    VL_IN8(bresp,1,0);
    VL_OUT8(bready,0,0);
    VL_IN8(es_to_ms_valid,0,0);
    VL_OUT8(ms_to_ws_valid,0,0);
    VL_IN8(ws_allowin,0,0);
    VL_OUT8(ms_allowin,0,0);
    CData/*2:0*/ ms_state;
    CData/*2:0*/ next_state;
    CData/*4:0*/ delay_count;
    CData/*0:0*/ ms_ready_go;
    CData/*0:0*/ ms_valid;
    CData/*0:0*/ access_start;
    CData/*4:0*/ dest;
    CData/*3:0*/ load;
    CData/*3:0*/ store;
    CData/*0:0*/ load_sign;
    CData/*0:0*/ res_from_csr;
    CData/*0:0*/ rf_wen;
    CData/*0:0*/ is_ls;
    CData/*0:0*/ mem_wen;
    CData/*1:0*/ byte_offset;
    CData/*7:0*/ selected_byte;
    CData/*0:0*/ dep_need_stall;
    CData/*0:0*/ forward_enable;
    SData/*15:0*/ selected_halfword;
    VL_OUT(araddr,31,0);
    VL_IN(rdata,31,0);
    VL_OUT(awaddr,31,0);
    VL_OUT(wdata,31,0);
    VL_INW(es_to_ms_bus,175,0,6);
    VL_OUTW(ms_to_ws_bus,234,0,8);
    VlWide<6>/*175:0*/ es_to_ms_bus_r;
    IData/*31:0*/ pref_cnt_l;
    IData/*31:0*/ pref_cnt_s;
    IData/*31:0*/ delay_cnt;
    IData/*31:0*/ ms_pc;
    IData/*31:0*/ load_data;
    IData/*31:0*/ ms_alu_result;
    IData/*31:0*/ mem_addr;
    IData/*31:0*/ st_data;
    IData/*31:0*/ csr_data;
    IData/*31:0*/ mem_rdata;
    IData/*31:0*/ forward_data;
    VL_OUT64(ms_to_ds_forward_bus,38,0);

    // INTERNAL VARIABLES
    VysyxSoCFull__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr CData/*2:0*/ ms_idle = 0U;
    static constexpr CData/*2:0*/ ms_wait_ready = 1U;
    static constexpr CData/*2:0*/ ms_addr_ready = 2U;
    static constexpr CData/*2:0*/ ms_wdata_ready = 3U;
    static constexpr CData/*2:0*/ ms_rdata_ready = 4U;
    static constexpr CData/*2:0*/ ms_wdata_wait = 5U;

    // CONSTRUCTORS
    VysyxSoCFull_ysyx_25110269_LSU(VysyxSoCFull__Syms* symsp, const char* v__name);
    ~VysyxSoCFull_ysyx_25110269_LSU();
    VL_UNCOPYABLE(VysyxSoCFull_ysyx_25110269_LSU);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
