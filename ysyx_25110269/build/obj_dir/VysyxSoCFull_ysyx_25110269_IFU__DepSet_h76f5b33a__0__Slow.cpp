// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull_ysyx_25110269_IFU.h"

VL_ATTR_COLD void VysyxSoCFull_ysyx_25110269_IFU___ctor_var_reset(VysyxSoCFull_ysyx_25110269_IFU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_25110269_IFU___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = 0;
    vlSelf->reset = 0;
    vlSelf->inst_finish = 0;
    vlSelf->ds_allowin = 0;
    vlSelf->br_bus = 0;
    vlSelf->fence = 0;
    vlSelf->ecall = 0;
    vlSelf->mret = 0;
    vlSelf->csr_mtvec = 0;
    vlSelf->csr_mepc = 0;
    vlSelf->fs_to_ds_valid = 0;
    vlSelf->fs_to_ds_bus = 0;
    vlSelf->arvalid = 0;
    vlSelf->araddr = 0;
    vlSelf->rvalid = 0;
    vlSelf->rdata = 0;
    vlSelf->pref_cnt = 0;
    vlSelf->delay_cnt = 0;
    vlSelf->access_start = 0;
    vlSelf->fs_state = 0;
    vlSelf->ifu_rdata = 0;
    vlSelf->pc = 0;
    vlSelf->fs_valid = 0;
    vlSelf->next_pc = 0;
    vlSelf->seq_pc = 0;
    vlSelf->to_fs_valid = 0;
    vlSelf->fs_allowin = 0;
    vlSelf->fs_ready_go = 0;
    vlSelf->btb_pre_error_flush = 0;
    vlSelf->btb_pre_error_flushtarget = 0;
    vlSelf->flush_sign = 0;
    vlSelf->next_pc_reg = 0;
}
