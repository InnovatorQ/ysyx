// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull_ysyx_25110269_EXU.h"

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269_EXU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__EXU__0(VysyxSoCFull_ysyx_25110269_EXU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_25110269_EXU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__EXU__0\n"); );
    // Body
    vlSelf->mem_addr = ((vlSelf->ds_to_es_bus_r[4U] 
                         << 0x1fU) | (vlSelf->ds_to_es_bus_r[3U] 
                                      >> 1U));
    vlSelf->st_data = ((vlSelf->ds_to_es_bus_r[3U] 
                        << 0x1fU) | (vlSelf->ds_to_es_bus_r[2U] 
                                     >> 1U));
    vlSelf->csr_data = ((vlSelf->ds_to_es_bus_r[2U] 
                         << 0x1fU) | (vlSelf->ds_to_es_bus_r[1U] 
                                      >> 1U));
    vlSelf->store = (0xfU & (vlSelf->ds_to_es_bus_r[0U] 
                             >> 3U));
    vlSelf->load_sign = (1U & (vlSelf->ds_to_es_bus_r[0U] 
                               >> 2U));
    vlSelf->res_from_csr = (1U & (vlSelf->ds_to_es_bus_r[0U] 
                                  >> 1U));
    vlSelf->alu_op = (0xfffU & ((vlSelf->ds_to_es_bus_r[1U] 
                                 << 0xbU) | (vlSelf->ds_to_es_bus_r[0U] 
                                             >> 0x15U)));
    vlSelf->es_pc = ((vlSelf->ds_to_es_bus_r[7U] << 0x1fU) 
                     | (vlSelf->ds_to_es_bus_r[6U] 
                        >> 1U));
    vlSelf->es_to_ms_valid = vlSelf->es_state;
    vlSelf->load = (0xfU & (vlSelf->ds_to_es_bus_r[0U] 
                            >> 7U));
    vlSelf->rf_wen = (1U & vlSelf->ds_to_es_bus_r[0U]);
    vlSelf->dest = (0x1fU & (vlSelf->ds_to_es_bus_r[0U] 
                             >> 0xbU));
    vlSelf->alu_src2 = ((vlSelf->ds_to_es_bus_r[5U] 
                         << 0x1fU) | (vlSelf->ds_to_es_bus_r[4U] 
                                      >> 1U));
    vlSelf->shamt = (0x1fU & (vlSelf->ds_to_es_bus_r[0U] 
                              >> 0x10U));
    vlSelf->__PVT__alu__DOT__adder_cin = (IData)((0U 
                                                  != 
                                                  (0xc00000U 
                                                   & vlSelf->ds_to_es_bus_r[0U])));
    vlSelf->alu_src1 = ((vlSelf->ds_to_es_bus_r[6U] 
                         << 0x1fU) | (vlSelf->ds_to_es_bus_r[5U] 
                                      >> 1U));
    vlSelf->dep_need_stall = (0U != (IData)(vlSelf->load));
    vlSelf->forward_enable = ((IData)(vlSelf->rf_wen) 
                              & ((0U != (IData)(vlSelf->dest)) 
                                 & (IData)(vlSelf->es_valid)));
    vlSelf->__PVT__alu__DOT__adder_b = ((IData)(vlSelf->__PVT__alu__DOT__adder_cin)
                                         ? (~ vlSelf->alu_src2)
                                         : vlSelf->alu_src2);
    vlSelf->__PVT__alu__DOT__srli_result = (vlSelf->alu_src1 
                                            >> (IData)(vlSelf->shamt));
    vlSelf->__PVT__alu__DOT__srl_result = (vlSelf->alu_src1 
                                           >> (0x1fU 
                                               & (vlSelf->ds_to_es_bus_r[4U] 
                                                  >> 1U)));
    vlSelf->alu_result = (((- (IData)((IData)((0U != 
                                               (0xa00000U 
                                                & vlSelf->ds_to_es_bus_r[0U]))))) 
                           & (vlSelf->alu_src1 + (vlSelf->__PVT__alu__DOT__adder_b 
                                                  + (IData)(vlSelf->__PVT__alu__DOT__adder_cin)))) 
                          | ((1U & ((- (IData)((1U 
                                                & (vlSelf->ds_to_es_bus_r[0U] 
                                                   >> 0x16U)))) 
                                    & (~ (IData)((1ULL 
                                                  & (((QData)((IData)(vlSelf->alu_src1)) 
                                                      + 
                                                      ((QData)((IData)(vlSelf->__PVT__alu__DOT__adder_b)) 
                                                       + (QData)((IData)(vlSelf->__PVT__alu__DOT__adder_cin)))) 
                                                     >> 0x20U)))))) 
                             | (((- (IData)((1U & (
                                                   vlSelf->ds_to_es_bus_r[0U] 
                                                   >> 0x18U)))) 
                                 & (vlSelf->alu_src1 
                                    ^ vlSelf->alu_src2)) 
                                | (((- (IData)((1U 
                                                & (vlSelf->ds_to_es_bus_r[0U] 
                                                   >> 0x19U)))) 
                                    & (((0x1fU >= ((IData)(0x20U) 
                                                   - (IData)(vlSelf->shamt)))
                                         ? ((- (IData)(
                                                       (1U 
                                                        & vlSelf->ds_to_es_bus_r[6U]))) 
                                            << ((IData)(0x20U) 
                                                - (IData)(vlSelf->shamt)))
                                         : 0U) | vlSelf->__PVT__alu__DOT__srli_result)) 
                                   | (((- (IData)((
                                                   vlSelf->ds_to_es_bus_r[0U] 
                                                   >> 0x1fU))) 
                                       & (((0x1fU >= 
                                            ((IData)(0x20U) 
                                             - (0x1fU 
                                                & (vlSelf->ds_to_es_bus_r[4U] 
                                                   >> 1U))))
                                            ? ((- (IData)(
                                                          (1U 
                                                           & vlSelf->ds_to_es_bus_r[6U]))) 
                                               << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & (vlSelf->ds_to_es_bus_r[4U] 
                                                       >> 1U))))
                                            : 0U) | vlSelf->__PVT__alu__DOT__srl_result)) 
                                      | (((- (IData)(
                                                     (1U 
                                                      & (vlSelf->ds_to_es_bus_r[0U] 
                                                         >> 0x1aU)))) 
                                          & (vlSelf->alu_src1 
                                             & vlSelf->alu_src2)) 
                                         | (((- (IData)(
                                                        (1U 
                                                         & (vlSelf->ds_to_es_bus_r[0U] 
                                                            >> 0x1bU)))) 
                                             & (vlSelf->alu_src1 
                                                << 
                                                (0x1fU 
                                                 & (vlSelf->ds_to_es_bus_r[4U] 
                                                    >> 1U)))) 
                                            | (((- (IData)(
                                                           (1U 
                                                            & (vlSelf->ds_to_es_bus_r[0U] 
                                                               >> 0x1cU)))) 
                                                & (vlSelf->alu_src1 
                                                   | vlSelf->alu_src2)) 
                                               | (((- (IData)(
                                                              (1U 
                                                               & (vlSelf->ds_to_es_bus_r[0U] 
                                                                  >> 0x1dU)))) 
                                                   & vlSelf->__PVT__alu__DOT__srli_result) 
                                                  | ((1U 
                                                      & ((- (IData)(
                                                                    (1U 
                                                                     & (vlSelf->ds_to_es_bus_r[0U] 
                                                                        >> 0x1eU)))) 
                                                         & ((1U 
                                                             & (vlSelf->ds_to_es_bus_r[6U] 
                                                                ^ 
                                                                vlSelf->ds_to_es_bus_r[5U]))
                                                             ? 
                                                            vlSelf->ds_to_es_bus_r[6U]
                                                             : 
                                                            (vlSelf->alu_src1 
                                                             < vlSelf->alu_src2)))) 
                                                     | ((- (IData)(
                                                                   (1U 
                                                                    & vlSelf->ds_to_es_bus_r[1U]))) 
                                                        & vlSelf->__PVT__alu__DOT__srl_result)))))))))));
    vlSelf->es_to_ms_bus[0U] = ((0xffff0000U & (vlSelf->ds_to_es_bus_r[1U] 
                                                << 0xfU)) 
                                | (0xffffU & vlSelf->ds_to_es_bus_r[0U]));
    vlSelf->es_to_ms_bus[1U] = (((0x8000U & (vlSelf->ds_to_es_bus_r[2U] 
                                             << 0xfU)) 
                                 | (vlSelf->ds_to_es_bus_r[1U] 
                                    >> 0x11U)) | (0xffff0000U 
                                                  & (vlSelf->ds_to_es_bus_r[2U] 
                                                     << 0xfU)));
    vlSelf->es_to_ms_bus[2U] = (((0x8000U & (vlSelf->ds_to_es_bus_r[3U] 
                                             << 0xfU)) 
                                 | (vlSelf->ds_to_es_bus_r[2U] 
                                    >> 0x11U)) | (0xffff0000U 
                                                  & (vlSelf->ds_to_es_bus_r[3U] 
                                                     << 0xfU)));
    vlSelf->es_to_ms_bus[3U] = (((0x8000U & (vlSelf->ds_to_es_bus_r[4U] 
                                             << 0xfU)) 
                                 | (vlSelf->ds_to_es_bus_r[3U] 
                                    >> 0x11U)) | ((IData)(
                                                          (((QData)((IData)(vlSelf->es_pc)) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlSelf->alu_result)))) 
                                                  << 0x10U));
    vlSelf->es_to_ms_bus[4U] = (((IData)((((QData)((IData)(vlSelf->es_pc)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->alu_result)))) 
                                 >> 0x10U) | ((IData)(
                                                      ((((QData)((IData)(vlSelf->es_pc)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->alu_result))) 
                                                       >> 0x20U)) 
                                              << 0x10U));
    vlSelf->es_to_ms_bus[5U] = ((IData)(((((QData)((IData)(vlSelf->es_pc)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->alu_result))) 
                                         >> 0x20U)) 
                                >> 0x10U);
    vlSelf->forward_bus = (((QData)((IData)(vlSelf->dep_need_stall)) 
                            << 0x26U) | (((QData)((IData)(vlSelf->alu_result)) 
                                          << 6U) | (QData)((IData)(
                                                                   (((IData)(vlSelf->forward_enable) 
                                                                     << 5U) 
                                                                    | (IData)(vlSelf->dest))))));
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269_EXU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__EXU__1(VysyxSoCFull_ysyx_25110269_EXU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_25110269_EXU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__EXU__1\n"); );
    // Body
    vlSelf->es_allowin = (1U & ((~ (IData)(vlSelf->es_state)) 
                                | ((IData)(vlSelf->es_state) 
                                   & (IData)(vlSelf->ms_allowin))));
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269_EXU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__EXU__2(VysyxSoCFull_ysyx_25110269_EXU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_25110269_EXU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__EXU__2\n"); );
    // Body
    vlSelf->next_state = ((IData)(vlSelf->es_state)
                           ? ((IData)(vlSelf->es_state) 
                              & ((~ (IData)(vlSelf->ms_allowin)) 
                                 | (IData)(vlSelf->ds_to_es_valid)))
                           : (IData)(vlSelf->ds_to_es_valid));
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269_EXU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__EXU__0(VysyxSoCFull_ysyx_25110269_EXU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_25110269_EXU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__EXU__0\n"); );
    // Init
    IData/*31:0*/ __Vdly__pref_cnt;
    __Vdly__pref_cnt = 0;
    // Body
    __Vdly__pref_cnt = vlSelf->pref_cnt;
    if (vlSelf->reset) {
        __Vdly__pref_cnt = 0U;
        vlSelf->es_valid = 0U;
    } else {
        if (((IData)(vlSelf->ds_to_es_valid) & (IData)(vlSelf->es_allowin))) {
            __Vdly__pref_cnt = ((IData)(1U) + vlSelf->pref_cnt);
        }
        if (vlSelf->es_allowin) {
            vlSelf->es_valid = vlSelf->ds_to_es_valid;
        }
    }
    vlSelf->es_state = ((~ (IData)(vlSelf->reset)) 
                        & (IData)(vlSelf->next_state));
    if (((IData)(vlSelf->ds_to_es_valid) & (IData)(vlSelf->es_allowin))) {
        vlSelf->ds_to_es_bus_r[0U] = vlSelf->ds_to_es_bus[0U];
        vlSelf->ds_to_es_bus_r[1U] = vlSelf->ds_to_es_bus[1U];
        vlSelf->ds_to_es_bus_r[2U] = vlSelf->ds_to_es_bus[2U];
        vlSelf->ds_to_es_bus_r[3U] = vlSelf->ds_to_es_bus[3U];
        vlSelf->ds_to_es_bus_r[4U] = vlSelf->ds_to_es_bus[4U];
        vlSelf->ds_to_es_bus_r[5U] = vlSelf->ds_to_es_bus[5U];
        vlSelf->ds_to_es_bus_r[6U] = vlSelf->ds_to_es_bus[6U];
        vlSelf->ds_to_es_bus_r[7U] = vlSelf->ds_to_es_bus[7U];
    }
    vlSelf->pref_cnt = __Vdly__pref_cnt;
    vlSelf->es_to_ms_valid = vlSelf->es_state;
    vlSelf->mem_addr = ((vlSelf->ds_to_es_bus_r[4U] 
                         << 0x1fU) | (vlSelf->ds_to_es_bus_r[3U] 
                                      >> 1U));
    vlSelf->st_data = ((vlSelf->ds_to_es_bus_r[3U] 
                        << 0x1fU) | (vlSelf->ds_to_es_bus_r[2U] 
                                     >> 1U));
    vlSelf->csr_data = ((vlSelf->ds_to_es_bus_r[2U] 
                         << 0x1fU) | (vlSelf->ds_to_es_bus_r[1U] 
                                      >> 1U));
    vlSelf->store = (0xfU & (vlSelf->ds_to_es_bus_r[0U] 
                             >> 3U));
    vlSelf->load_sign = (1U & (vlSelf->ds_to_es_bus_r[0U] 
                               >> 2U));
    vlSelf->res_from_csr = (1U & (vlSelf->ds_to_es_bus_r[0U] 
                                  >> 1U));
    vlSelf->alu_op = (0xfffU & ((vlSelf->ds_to_es_bus_r[1U] 
                                 << 0xbU) | (vlSelf->ds_to_es_bus_r[0U] 
                                             >> 0x15U)));
    vlSelf->es_pc = ((vlSelf->ds_to_es_bus_r[7U] << 0x1fU) 
                     | (vlSelf->ds_to_es_bus_r[6U] 
                        >> 1U));
    vlSelf->load = (0xfU & (vlSelf->ds_to_es_bus_r[0U] 
                            >> 7U));
    vlSelf->rf_wen = (1U & vlSelf->ds_to_es_bus_r[0U]);
    vlSelf->dest = (0x1fU & (vlSelf->ds_to_es_bus_r[0U] 
                             >> 0xbU));
    vlSelf->alu_src2 = ((vlSelf->ds_to_es_bus_r[5U] 
                         << 0x1fU) | (vlSelf->ds_to_es_bus_r[4U] 
                                      >> 1U));
    vlSelf->shamt = (0x1fU & (vlSelf->ds_to_es_bus_r[0U] 
                              >> 0x10U));
    vlSelf->__PVT__alu__DOT__adder_cin = (IData)((0U 
                                                  != 
                                                  (0xc00000U 
                                                   & vlSelf->ds_to_es_bus_r[0U])));
    vlSelf->alu_src1 = ((vlSelf->ds_to_es_bus_r[6U] 
                         << 0x1fU) | (vlSelf->ds_to_es_bus_r[5U] 
                                      >> 1U));
    vlSelf->dep_need_stall = (0U != (IData)(vlSelf->load));
    vlSelf->forward_enable = ((IData)(vlSelf->rf_wen) 
                              & ((0U != (IData)(vlSelf->dest)) 
                                 & (IData)(vlSelf->es_valid)));
    vlSelf->__PVT__alu__DOT__adder_b = ((IData)(vlSelf->__PVT__alu__DOT__adder_cin)
                                         ? (~ vlSelf->alu_src2)
                                         : vlSelf->alu_src2);
    vlSelf->__PVT__alu__DOT__srli_result = (vlSelf->alu_src1 
                                            >> (IData)(vlSelf->shamt));
    vlSelf->__PVT__alu__DOT__srl_result = (vlSelf->alu_src1 
                                           >> (0x1fU 
                                               & (vlSelf->ds_to_es_bus_r[4U] 
                                                  >> 1U)));
    vlSelf->alu_result = (((- (IData)((IData)((0U != 
                                               (0xa00000U 
                                                & vlSelf->ds_to_es_bus_r[0U]))))) 
                           & (vlSelf->alu_src1 + (vlSelf->__PVT__alu__DOT__adder_b 
                                                  + (IData)(vlSelf->__PVT__alu__DOT__adder_cin)))) 
                          | ((1U & ((- (IData)((1U 
                                                & (vlSelf->ds_to_es_bus_r[0U] 
                                                   >> 0x16U)))) 
                                    & (~ (IData)((1ULL 
                                                  & (((QData)((IData)(vlSelf->alu_src1)) 
                                                      + 
                                                      ((QData)((IData)(vlSelf->__PVT__alu__DOT__adder_b)) 
                                                       + (QData)((IData)(vlSelf->__PVT__alu__DOT__adder_cin)))) 
                                                     >> 0x20U)))))) 
                             | (((- (IData)((1U & (
                                                   vlSelf->ds_to_es_bus_r[0U] 
                                                   >> 0x18U)))) 
                                 & (vlSelf->alu_src1 
                                    ^ vlSelf->alu_src2)) 
                                | (((- (IData)((1U 
                                                & (vlSelf->ds_to_es_bus_r[0U] 
                                                   >> 0x19U)))) 
                                    & (((0x1fU >= ((IData)(0x20U) 
                                                   - (IData)(vlSelf->shamt)))
                                         ? ((- (IData)(
                                                       (1U 
                                                        & vlSelf->ds_to_es_bus_r[6U]))) 
                                            << ((IData)(0x20U) 
                                                - (IData)(vlSelf->shamt)))
                                         : 0U) | vlSelf->__PVT__alu__DOT__srli_result)) 
                                   | (((- (IData)((
                                                   vlSelf->ds_to_es_bus_r[0U] 
                                                   >> 0x1fU))) 
                                       & (((0x1fU >= 
                                            ((IData)(0x20U) 
                                             - (0x1fU 
                                                & (vlSelf->ds_to_es_bus_r[4U] 
                                                   >> 1U))))
                                            ? ((- (IData)(
                                                          (1U 
                                                           & vlSelf->ds_to_es_bus_r[6U]))) 
                                               << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & (vlSelf->ds_to_es_bus_r[4U] 
                                                       >> 1U))))
                                            : 0U) | vlSelf->__PVT__alu__DOT__srl_result)) 
                                      | (((- (IData)(
                                                     (1U 
                                                      & (vlSelf->ds_to_es_bus_r[0U] 
                                                         >> 0x1aU)))) 
                                          & (vlSelf->alu_src1 
                                             & vlSelf->alu_src2)) 
                                         | (((- (IData)(
                                                        (1U 
                                                         & (vlSelf->ds_to_es_bus_r[0U] 
                                                            >> 0x1bU)))) 
                                             & (vlSelf->alu_src1 
                                                << 
                                                (0x1fU 
                                                 & (vlSelf->ds_to_es_bus_r[4U] 
                                                    >> 1U)))) 
                                            | (((- (IData)(
                                                           (1U 
                                                            & (vlSelf->ds_to_es_bus_r[0U] 
                                                               >> 0x1cU)))) 
                                                & (vlSelf->alu_src1 
                                                   | vlSelf->alu_src2)) 
                                               | (((- (IData)(
                                                              (1U 
                                                               & (vlSelf->ds_to_es_bus_r[0U] 
                                                                  >> 0x1dU)))) 
                                                   & vlSelf->__PVT__alu__DOT__srli_result) 
                                                  | ((1U 
                                                      & ((- (IData)(
                                                                    (1U 
                                                                     & (vlSelf->ds_to_es_bus_r[0U] 
                                                                        >> 0x1eU)))) 
                                                         & ((1U 
                                                             & (vlSelf->ds_to_es_bus_r[6U] 
                                                                ^ 
                                                                vlSelf->ds_to_es_bus_r[5U]))
                                                             ? 
                                                            vlSelf->ds_to_es_bus_r[6U]
                                                             : 
                                                            (vlSelf->alu_src1 
                                                             < vlSelf->alu_src2)))) 
                                                     | ((- (IData)(
                                                                   (1U 
                                                                    & vlSelf->ds_to_es_bus_r[1U]))) 
                                                        & vlSelf->__PVT__alu__DOT__srl_result)))))))))));
    vlSelf->es_to_ms_bus[0U] = ((0xffff0000U & (vlSelf->ds_to_es_bus_r[1U] 
                                                << 0xfU)) 
                                | (0xffffU & vlSelf->ds_to_es_bus_r[0U]));
    vlSelf->es_to_ms_bus[1U] = (((0x8000U & (vlSelf->ds_to_es_bus_r[2U] 
                                             << 0xfU)) 
                                 | (vlSelf->ds_to_es_bus_r[1U] 
                                    >> 0x11U)) | (0xffff0000U 
                                                  & (vlSelf->ds_to_es_bus_r[2U] 
                                                     << 0xfU)));
    vlSelf->es_to_ms_bus[2U] = (((0x8000U & (vlSelf->ds_to_es_bus_r[3U] 
                                             << 0xfU)) 
                                 | (vlSelf->ds_to_es_bus_r[2U] 
                                    >> 0x11U)) | (0xffff0000U 
                                                  & (vlSelf->ds_to_es_bus_r[3U] 
                                                     << 0xfU)));
    vlSelf->es_to_ms_bus[3U] = (((0x8000U & (vlSelf->ds_to_es_bus_r[4U] 
                                             << 0xfU)) 
                                 | (vlSelf->ds_to_es_bus_r[3U] 
                                    >> 0x11U)) | ((IData)(
                                                          (((QData)((IData)(vlSelf->es_pc)) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlSelf->alu_result)))) 
                                                  << 0x10U));
    vlSelf->es_to_ms_bus[4U] = (((IData)((((QData)((IData)(vlSelf->es_pc)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->alu_result)))) 
                                 >> 0x10U) | ((IData)(
                                                      ((((QData)((IData)(vlSelf->es_pc)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->alu_result))) 
                                                       >> 0x20U)) 
                                              << 0x10U));
    vlSelf->es_to_ms_bus[5U] = ((IData)(((((QData)((IData)(vlSelf->es_pc)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->alu_result))) 
                                         >> 0x20U)) 
                                >> 0x10U);
    vlSelf->forward_bus = (((QData)((IData)(vlSelf->dep_need_stall)) 
                            << 0x26U) | (((QData)((IData)(vlSelf->alu_result)) 
                                          << 6U) | (QData)((IData)(
                                                                   (((IData)(vlSelf->forward_enable) 
                                                                     << 5U) 
                                                                    | (IData)(vlSelf->dest))))));
}
