// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull_CPU.h"

VL_ATTR_COLD void VysyxSoCFull_CPU___ctor_var_reset(VysyxSoCFull_CPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VysyxSoCFull_CPU___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clock = 0;
    vlSelf->__PVT__reset = 0;
    vlSelf->__PVT__auto_master_out_awready = 0;
    vlSelf->__PVT__auto_master_out_awvalid = 0;
    vlSelf->__PVT__auto_master_out_awid = 0;
    vlSelf->__PVT__auto_master_out_awaddr = 0;
    vlSelf->__PVT__auto_master_out_awlen = 0;
    vlSelf->__PVT__auto_master_out_awsize = 0;
    vlSelf->__PVT__auto_master_out_awburst = 0;
    vlSelf->__PVT__auto_master_out_wready = 0;
    vlSelf->__PVT__auto_master_out_wvalid = 0;
    vlSelf->__PVT__auto_master_out_wdata = 0;
    vlSelf->__PVT__auto_master_out_wstrb = 0;
    vlSelf->__PVT__auto_master_out_wlast = 0;
    vlSelf->__PVT__auto_master_out_bready = 0;
    vlSelf->__PVT__auto_master_out_bvalid = 0;
    vlSelf->__PVT__auto_master_out_bid = 0;
    vlSelf->__PVT__auto_master_out_bresp = 0;
    vlSelf->__PVT__auto_master_out_arready = 0;
    vlSelf->__PVT__auto_master_out_arvalid = 0;
    vlSelf->__PVT__auto_master_out_arid = 0;
    vlSelf->__PVT__auto_master_out_araddr = 0;
    vlSelf->__PVT__auto_master_out_arlen = 0;
    vlSelf->__PVT__auto_master_out_arsize = 0;
    vlSelf->__PVT__auto_master_out_arburst = 0;
    vlSelf->__PVT__auto_master_out_rready = 0;
    vlSelf->__PVT__auto_master_out_rvalid = 0;
    vlSelf->__PVT__auto_master_out_rid = 0;
    vlSelf->__PVT__auto_master_out_rdata = 0;
    vlSelf->__PVT__auto_master_out_rresp = 0;
    vlSelf->__PVT__auto_master_out_rlast = 0;
}
