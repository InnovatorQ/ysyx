// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull_ysyx_25110269_WBU.h"

VL_ATTR_COLD void VysyxSoCFull_ysyx_25110269_WBU___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__1(VysyxSoCFull_ysyx_25110269_WBU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_25110269_WBU___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__1\n"); );
    // Body
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf.clock 
        = vlSelf->clock;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf.raddr2 
        = vlSelf->rs2;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf.raddr1 
        = vlSelf->rs1;
}

VL_ATTR_COLD void VysyxSoCFull_ysyx_25110269_WBU___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__2(VysyxSoCFull_ysyx_25110269_WBU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_25110269_WBU___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__2\n"); );
    // Body
    vlSelf->rf2_data = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf.rdata2;
    vlSelf->rf1_data = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf.rdata1;
    vlSelf->next_state = ((IData)(vlSelf->ws_state)
                           ? ((IData)(vlSelf->ws_state) 
                              & (IData)(vlSelf->ms_to_ws_valid))
                           : (IData)(vlSelf->ms_to_ws_valid));
}
