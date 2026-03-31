// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull_ysyx_25110269_WBU.h"

VL_ATTR_COLD void VysyxSoCFull_ysyx_25110269_WBU___eval_initial__TOP__ysyxSoCFull__asic__cpu__cpu__WBU(VysyxSoCFull_ysyx_25110269_WBU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_25110269_WBU___eval_initial__TOP__ysyxSoCFull__asic__cpu__cpu__WBU\n"); );
    // Body
    vlSelf->ws_allowin = 1U;
}

VL_ATTR_COLD void VysyxSoCFull_ysyx_25110269_WBU___ctor_var_reset(VysyxSoCFull_ysyx_25110269_WBU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_25110269_WBU___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = 0;
    vlSelf->reset = 0;
    vlSelf->ms_to_ws_valid = 0;
    VL_ZERO_RESET_W(235, vlSelf->ms_to_ws_bus);
    vlSelf->ws_allowin = 0;
    vlSelf->rs1 = 0;
    vlSelf->rs2 = 0;
    vlSelf->rf1_data = 0;
    vlSelf->rf2_data = 0;
    vlSelf->ws_to_ds_forward_bus = 0;
    vlSelf->inst_finish = 0;
    VL_ZERO_RESET_W(235, vlSelf->ms_to_ws_bus_r);
    vlSelf->debug_mem_addr = 0;
    vlSelf->debug_mem_wdata = 0;
    vlSelf->debug_mem_rdata = 0;
    vlSelf->ws_pc = 0;
    vlSelf->alu_result = 0;
    vlSelf->load = 0;
    vlSelf->load_data = 0;
    vlSelf->dest = 0;
    vlSelf->res_from_csr = 0;
    vlSelf->rf_wen = 0;
    vlSelf->csr_data = 0;
    vlSelf->wb_data = 0;
    vlSelf->ws_to_ds_forward_data = 0;
    vlSelf->ws_to_ds_forward_enable = 0;
    vlSelf->ws_ready_go = 0;
    vlSelf->ws_valid = 0;
    vlSelf->ws_state = 0;
    vlSelf->next_state = 0;
}
