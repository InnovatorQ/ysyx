// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8.h"

VL_ATTR_COLD void VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8___eval_initial__TOP__ysyxSoCFull__asic__cpu__cpu__icache(VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8___eval_initial__TOP__ysyxSoCFull__asic__cpu__cpu__icache\n"); );
    // Body
    vlSelf->i_arburst = 1U;
    vlSelf->i_arsize = 2U;
}

VL_ATTR_COLD void VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8___ctor_var_reset(VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = 0;
    vlSelf->reset = 0;
    vlSelf->rvalid = 0;
    vlSelf->raddr = 0;
    vlSelf->rdata = 0;
    vlSelf->valid = 0;
    vlSelf->i_arvalid = 0;
    vlSelf->i_araddr = 0;
    vlSelf->i_arlen = 0;
    vlSelf->i_arsize = 0;
    vlSelf->i_arready = 0;
    vlSelf->i_arburst = 0;
    vlSelf->i_rvalid = 0;
    vlSelf->i_rdata = 0;
    vlSelf->i_rresp = 0;
    vlSelf->i_rready = 0;
    vlSelf->i_rlast = 0;
    vlSelf->cache_flush = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->icache[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->valid_array[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tag_array[__Vi0] = 0;
    }
    vlSelf->w_ptr = 0;
    vlSelf->set_index = 0;
    vlSelf->offset = 0;
    vlSelf->tag = 0;
    vlSelf->uncache_addr = 0;
    vlSelf->hit = 0;
    vlSelf->o_rdata = 0;
    vlSelf->i_rdata_r = 0;
    vlSelf->state = 0;
    vlSelf->miss_cnt = 0;
    vlSelf->hit_cnt = 0;
    vlSelf->penalty_cnt = 0;
    vlSelf->access_start = 0;
    vlSelf->i = 0;
}
