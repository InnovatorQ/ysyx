// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull_ysyx_25110269_WBU.h"

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269_WBU___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__1(VysyxSoCFull_ysyx_25110269_WBU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_25110269_WBU___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__1\n"); );
    // Body
    vlSelf->next_state = ((IData)(vlSelf->ws_state)
                           ? ((IData)(vlSelf->ws_state) 
                              & (IData)(vlSelf->ms_to_ws_valid))
                           : (IData)(vlSelf->ms_to_ws_valid));
}
