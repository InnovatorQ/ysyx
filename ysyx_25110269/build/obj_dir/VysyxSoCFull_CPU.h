// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VysyxSoCFull.h for the primary calling header

#ifndef VERILATED_VYSYXSOCFULL_CPU_H_
#define VERILATED_VYSYXSOCFULL_CPU_H_  // guard

#include "verilated.h"

class VysyxSoCFull__Syms;
class VysyxSoCFull_ysyx_25110269;


class VysyxSoCFull_CPU final : public VerilatedModule {
  public:
    // CELLS
    VysyxSoCFull_ysyx_25110269* cpu;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clock,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__auto_master_out_awready,0,0);
    VL_OUT8(__PVT__auto_master_out_awvalid,0,0);
    VL_OUT8(__PVT__auto_master_out_awid,3,0);
    VL_OUT8(__PVT__auto_master_out_awlen,7,0);
    VL_OUT8(__PVT__auto_master_out_awsize,2,0);
    VL_OUT8(__PVT__auto_master_out_awburst,1,0);
    VL_IN8(__PVT__auto_master_out_wready,0,0);
    VL_OUT8(__PVT__auto_master_out_wvalid,0,0);
    VL_OUT8(__PVT__auto_master_out_wstrb,3,0);
    VL_OUT8(__PVT__auto_master_out_wlast,0,0);
    VL_OUT8(__PVT__auto_master_out_bready,0,0);
    VL_IN8(__PVT__auto_master_out_bvalid,0,0);
    VL_IN8(__PVT__auto_master_out_bid,3,0);
    VL_IN8(__PVT__auto_master_out_bresp,1,0);
    VL_IN8(__PVT__auto_master_out_arready,0,0);
    VL_OUT8(__PVT__auto_master_out_arvalid,0,0);
    VL_OUT8(__PVT__auto_master_out_arid,3,0);
    VL_OUT8(__PVT__auto_master_out_arlen,7,0);
    VL_OUT8(__PVT__auto_master_out_arsize,2,0);
    VL_OUT8(__PVT__auto_master_out_arburst,1,0);
    VL_OUT8(__PVT__auto_master_out_rready,0,0);
    VL_IN8(__PVT__auto_master_out_rvalid,0,0);
    VL_IN8(__PVT__auto_master_out_rid,3,0);
    VL_IN8(__PVT__auto_master_out_rresp,1,0);
    VL_IN8(__PVT__auto_master_out_rlast,0,0);
    VL_OUT(__PVT__auto_master_out_awaddr,31,0);
    VL_OUT(__PVT__auto_master_out_wdata,31,0);
    VL_OUT(__PVT__auto_master_out_araddr,31,0);
    VL_IN(__PVT__auto_master_out_rdata,31,0);

    // INTERNAL VARIABLES
    VysyxSoCFull__Syms* const vlSymsp;

    // CONSTRUCTORS
    VysyxSoCFull_CPU(VysyxSoCFull__Syms* symsp, const char* v__name);
    ~VysyxSoCFull_CPU();
    VL_UNCOPYABLE(VysyxSoCFull_CPU);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
