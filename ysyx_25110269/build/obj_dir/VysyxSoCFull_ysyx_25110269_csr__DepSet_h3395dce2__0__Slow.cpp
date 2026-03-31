// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull_ysyx_25110269_csr.h"

VL_ATTR_COLD void VysyxSoCFull_ysyx_25110269_csr___ctor_var_reset(VysyxSoCFull_ysyx_25110269_csr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_25110269_csr___ctor_var_reset\n"); );
    // Body
    vlSelf->ds_pc = 0;
    vlSelf->clock = 0;
    vlSelf->reset = 0;
    vlSelf->ecall = 0;
    vlSelf->mret = 0;
    vlSelf->rd_addr = 0;
    vlSelf->rd_data = 0;
    vlSelf->csr_wen = 0;
    vlSelf->wr_addr = 0;
    vlSelf->wr_data = 0;
    vlSelf->csr_mepc = 0;
    vlSelf->csr_mtvec = 0;
    vlSelf->csr_mcycle = 0;
    vlSelf->csr_mcycle_h = 0;
    vlSelf->csr_mvendorid = 0;
    vlSelf->csr_marchid = 0;
    vlSelf->csr_mstatus = 0;
    vlSelf->csr_mcause = 0;
}
