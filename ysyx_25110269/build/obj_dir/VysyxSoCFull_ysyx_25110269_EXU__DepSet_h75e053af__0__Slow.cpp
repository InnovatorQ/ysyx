// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull_ysyx_25110269_EXU.h"

VL_ATTR_COLD void VysyxSoCFull_ysyx_25110269_EXU___ctor_var_reset(VysyxSoCFull_ysyx_25110269_EXU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_25110269_EXU___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = 0;
    vlSelf->reset = 0;
    vlSelf->ds_to_es_valid = 0;
    VL_ZERO_RESET_W(225, vlSelf->ds_to_es_bus);
    vlSelf->ms_allowin = 0;
    vlSelf->es_allowin = 0;
    vlSelf->es_to_ms_valid = 0;
    VL_ZERO_RESET_W(176, vlSelf->es_to_ms_bus);
    vlSelf->forward_bus = 0;
    vlSelf->pref_cnt = 0;
    VL_ZERO_RESET_W(225, vlSelf->ds_to_es_bus_r);
    vlSelf->es_valid = 0;
    vlSelf->es_ready_go = 0;
    vlSelf->res_from_csr = 0;
    vlSelf->rf_wen = 0;
    vlSelf->load_sign = 0;
    vlSelf->load = 0;
    vlSelf->store = 0;
    vlSelf->alu_op = 0;
    vlSelf->alu_src1 = 0;
    vlSelf->alu_src2 = 0;
    vlSelf->mem_addr = 0;
    vlSelf->st_data = 0;
    vlSelf->shamt = 0;
    vlSelf->dest = 0;
    vlSelf->csr_data = 0;
    vlSelf->es_pc = 0;
    vlSelf->alu_result = 0;
    vlSelf->forward_enable = 0;
    vlSelf->dep_need_stall = 0;
    vlSelf->es_state = 0;
    vlSelf->next_state = 0;
    vlSelf->__PVT__alu__DOT__srli_result = 0;
    vlSelf->__PVT__alu__DOT__srl_result = 0;
    vlSelf->__PVT__alu__DOT__adder_b = 0;
    vlSelf->__PVT__alu__DOT__adder_cin = 0;
}
