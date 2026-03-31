// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull_ysyx_25110269_regfile.h"

VL_ATTR_COLD void VysyxSoCFull_ysyx_25110269_regfile___ctor_var_reset(VysyxSoCFull_ysyx_25110269_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_ysyx_25110269_regfile___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = 0;
    vlSelf->raddr1 = 0;
    vlSelf->rdata1 = 0;
    vlSelf->raddr2 = 0;
    vlSelf->rdata2 = 0;
    vlSelf->wen = 0;
    vlSelf->waddr = 0;
    vlSelf->wdata = 0;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->regs[__Vi0] = 0;
    }
}
