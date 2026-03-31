// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull_ysyx_25110269_IFU.h"

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269_IFU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU__0(VysyxSoCFull_ysyx_25110269_IFU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_25110269_IFU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU__0\n"); );
    // Body
    vlSelf->fs_to_ds_bus = (((QData)((IData)(vlSelf->pc)) 
                             << 0x20U) | (QData)((IData)(vlSelf->ifu_rdata)));
    vlSelf->arvalid = (1U == (IData)(vlSelf->fs_state));
    vlSelf->araddr = vlSelf->pc;
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269_IFU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU__1(VysyxSoCFull_ysyx_25110269_IFU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_25110269_IFU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU__1\n"); );
    // Body
    vlSelf->flush_sign = vlSelf->fence;
    vlSelf->btb_pre_error_flushtarget = (IData)(vlSelf->br_bus);
    vlSelf->btb_pre_error_flush = (1U & (IData)((vlSelf->br_bus 
                                                 >> 0x20U)));
    vlSelf->next_pc = ((IData)(vlSelf->ecall) ? vlSelf->csr_mtvec
                        : ((IData)(vlSelf->mret) ? vlSelf->csr_mepc
                            : ((IData)(vlSelf->btb_pre_error_flush)
                                ? vlSelf->btb_pre_error_flushtarget
                                : ((IData)(4U) + vlSelf->pc))));
    vlSelf->fs_valid = (1U & (~ ((IData)(vlSelf->reset) 
                                 | ((IData)(vlSelf->btb_pre_error_flush) 
                                    | (IData)(vlSelf->fence)))));
    vlSelf->next_pc_reg = vlSelf->next_pc;
    vlSelf->fs_ready_go = (((IData)(vlSelf->fs_valid) 
                            & ((3U == (IData)(vlSelf->fs_state)) 
                               & (IData)(vlSelf->ds_allowin))) 
                           | ((IData)(vlSelf->ecall) 
                              | (IData)(vlSelf->mret)));
    vlSelf->fs_to_ds_valid = ((IData)(vlSelf->fs_valid) 
                              & (3U == (IData)(vlSelf->fs_state)));
}

extern const VlUnpacked<CData/*1:0*/, 128> VysyxSoCFull__ConstPool__TABLE_h45a9982f_0;

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269_IFU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU__0(VysyxSoCFull_ysyx_25110269_IFU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_25110269_IFU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    IData/*31:0*/ __Vdly__pref_cnt;
    __Vdly__pref_cnt = 0;
    QData/*63:0*/ __Vdly__delay_cnt;
    __Vdly__delay_cnt = 0;
    // Body
    __Vdly__pref_cnt = vlSelf->pref_cnt;
    __Vdly__delay_cnt = vlSelf->delay_cnt;
    if (vlSelf->reset) {
        __Vdly__pref_cnt = 0U;
        __Vdly__delay_cnt = 0ULL;
        vlSelf->pc = 0x30000000U;
    } else if (((IData)(vlSelf->fs_ready_go) | (IData)(vlSelf->btb_pre_error_flush))) {
        vlSelf->pc = vlSelf->next_pc;
    }
    if (((IData)(vlSelf->access_start) | (IData)(vlSelf->arvalid))) {
        __Vdly__delay_cnt = (1ULL + vlSelf->delay_cnt);
    }
    __Vtableidx1 = (((IData)(vlSelf->ds_allowin) << 6U) 
                    | (((IData)(vlSelf->flush_sign) 
                        << 5U) | (((IData)(vlSelf->btb_pre_error_flush) 
                                   << 4U) | (((IData)(vlSelf->rvalid) 
                                              << 3U) 
                                             | (((IData)(vlSelf->fs_state) 
                                                 << 1U) 
                                                | (IData)(vlSelf->reset))))));
    vlSelf->fs_state = VysyxSoCFull__ConstPool__TABLE_h45a9982f_0
        [__Vtableidx1];
    if (vlSelf->rvalid) {
        __Vdly__pref_cnt = ((IData)(1U) + vlSelf->pref_cnt);
    }
    vlSelf->pref_cnt = __Vdly__pref_cnt;
    vlSelf->delay_cnt = __Vdly__delay_cnt;
    if (vlSelf->arvalid) {
        vlSelf->access_start = 1U;
    }
    if (vlSelf->rvalid) {
        vlSelf->ifu_rdata = vlSelf->rdata;
        vlSelf->access_start = 0U;
    }
    vlSelf->fs_to_ds_bus = (((QData)((IData)(vlSelf->pc)) 
                             << 0x20U) | (QData)((IData)(vlSelf->ifu_rdata)));
    vlSelf->araddr = vlSelf->pc;
    vlSelf->arvalid = (1U == (IData)(vlSelf->fs_state));
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269_IFU___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__IFU__0(VysyxSoCFull_ysyx_25110269_IFU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_25110269_IFU___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__IFU__0\n"); );
    // Body
    vlSelf->flush_sign = vlSelf->fence;
    vlSelf->btb_pre_error_flushtarget = (IData)(vlSelf->br_bus);
    vlSelf->btb_pre_error_flush = (1U & (IData)((vlSelf->br_bus 
                                                 >> 0x20U)));
    vlSelf->fs_valid = (1U & (~ ((IData)(vlSelf->reset) 
                                 | ((IData)(vlSelf->btb_pre_error_flush) 
                                    | (IData)(vlSelf->fence)))));
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269_IFU___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__IFU__1(VysyxSoCFull_ysyx_25110269_IFU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_25110269_IFU___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__IFU__1\n"); );
    // Body
    vlSelf->next_pc = ((IData)(vlSelf->ecall) ? vlSelf->csr_mtvec
                        : ((IData)(vlSelf->mret) ? vlSelf->csr_mepc
                            : ((IData)(vlSelf->btb_pre_error_flush)
                                ? vlSelf->btb_pre_error_flushtarget
                                : ((IData)(4U) + vlSelf->pc))));
    vlSelf->next_pc_reg = vlSelf->next_pc;
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269_IFU___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__IFU__2(VysyxSoCFull_ysyx_25110269_IFU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_25110269_IFU___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__IFU__2\n"); );
    // Body
    vlSelf->fs_ready_go = (((IData)(vlSelf->fs_valid) 
                            & ((3U == (IData)(vlSelf->fs_state)) 
                               & (IData)(vlSelf->ds_allowin))) 
                           | ((IData)(vlSelf->ecall) 
                              | (IData)(vlSelf->mret)));
    vlSelf->fs_to_ds_valid = ((IData)(vlSelf->fs_valid) 
                              & (3U == (IData)(vlSelf->fs_state)));
}
