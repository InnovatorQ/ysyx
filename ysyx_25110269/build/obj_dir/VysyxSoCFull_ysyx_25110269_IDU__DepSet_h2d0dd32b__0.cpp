// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull_ysyx_25110269_IDU.h"

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269_IDU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IDU__1(VysyxSoCFull_ysyx_25110269_IDU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_25110269_IDU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IDU__1\n"); );
    // Body
    vlSelf->ms_dep_need_stall = (1U & (IData)((vlSelf->ms_to_ds_forward_bus 
                                               >> 0x26U)));
    vlSelf->ms_forward_data = (IData)((vlSelf->ms_to_ds_forward_bus 
                                       >> 6U));
    vlSelf->ms_forward_enable = (1U & (IData)((vlSelf->ms_to_ds_forward_bus 
                                               >> 5U)));
    vlSelf->ms_dest = (0x1fU & (IData)(vlSelf->ms_to_ds_forward_bus));
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269_IDU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IDU__2(VysyxSoCFull_ysyx_25110269_IDU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_25110269_IDU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IDU__2\n"); );
    // Init
    CData/*0:0*/ __VdfgTmp_h1eeb5f80__0;
    __VdfgTmp_h1eeb5f80__0 = 0;
    QData/*32:0*/ __VdfgTmp_h5c8bff21__0;
    __VdfgTmp_h5c8bff21__0 = 0;
    QData/*32:0*/ __VdfgTmp_hac539600__0;
    __VdfgTmp_hac539600__0 = 0;
    CData/*0:0*/ __VdfgTmp_hb7eb1b2d__0;
    __VdfgTmp_hb7eb1b2d__0 = 0;
    // Body
    __VdfgTmp_hac539600__0 = (0x1ffffffffULL & ((((IData)(vlSelf->rs2) 
                                                  == (IData)(vlSelf->es_dest)) 
                                                 & ((IData)(vlSelf->es_forward_enable) 
                                                    & (IData)(vlSelf->__VdfgTmp_ha8c610e1__0)))
                                                 ? 
                                                (vlSelf->es_to_ds_forward_bus 
                                                 >> 6U)
                                                 : 
                                                ((((IData)(vlSelf->rs2) 
                                                   == (IData)(vlSelf->ms_dest)) 
                                                  & ((IData)(vlSelf->ms_forward_enable) 
                                                     & (IData)(vlSelf->__VdfgTmp_ha8c610e1__0)))
                                                  ? 
                                                 (vlSelf->ms_to_ds_forward_bus 
                                                  >> 6U)
                                                  : 
                                                 ((((IData)(vlSelf->rs2) 
                                                    == (IData)(vlSelf->ws_dest)) 
                                                   & ((IData)(vlSelf->ws_forward_enable) 
                                                      & (IData)(vlSelf->__VdfgTmp_ha8c610e1__0)))
                                                   ? (QData)((IData)(vlSelf->ws_forward_data))
                                                   : (QData)((IData)(vlSelf->rf2_data))))));
    __VdfgTmp_h5c8bff21__0 = (0x1ffffffffULL & ((((IData)(vlSelf->rs1) 
                                                  == (IData)(vlSelf->es_dest)) 
                                                 & ((IData)(vlSelf->es_forward_enable) 
                                                    & (IData)(vlSelf->__VdfgTmp_h18c9f4c4__0)))
                                                 ? 
                                                (vlSelf->es_to_ds_forward_bus 
                                                 >> 6U)
                                                 : 
                                                ((((IData)(vlSelf->rs1) 
                                                   == (IData)(vlSelf->ms_dest)) 
                                                  & ((IData)(vlSelf->ms_forward_enable) 
                                                     & (IData)(vlSelf->__VdfgTmp_h18c9f4c4__0)))
                                                  ? 
                                                 (vlSelf->ms_to_ds_forward_bus 
                                                  >> 6U)
                                                  : 
                                                 ((((IData)(vlSelf->rs1) 
                                                    == (IData)(vlSelf->ws_dest)) 
                                                   & ((IData)(vlSelf->ws_forward_enable) 
                                                      & (IData)(vlSelf->__VdfgTmp_h18c9f4c4__0)))
                                                   ? (QData)((IData)(vlSelf->ws_forward_data))
                                                   : (QData)((IData)(vlSelf->rf1_data))))));
    vlSelf->rs2_forward_stall = (1U & (IData)((__VdfgTmp_hac539600__0 
                                               >> 0x20U)));
    vlSelf->st_data = (IData)(__VdfgTmp_hac539600__0);
    vlSelf->rs1_forward_stall = (1U & (IData)((__VdfgTmp_h5c8bff21__0 
                                               >> 0x20U)));
    vlSelf->rs1_data = (IData)(__VdfgTmp_h5c8bff21__0);
    vlSelf->rs2_data = vlSelf->st_data;
    vlSelf->src2 = ((IData)(vlSelf->inst_r) ? vlSelf->st_data
                     : ((IData)(vlSelf->__VdfgTmp_h36cf7f3f__0)
                         ? 4U : vlSelf->imm));
    __VdfgTmp_h1eeb5f80__0 = (1U & (~ ((IData)(vlSelf->rs1_forward_stall) 
                                       | (IData)(vlSelf->rs2_forward_stall))));
    vlSelf->csr_result = (((- (IData)((IData)(vlSelf->inst_csrrs))) 
                           & (vlSelf->rs1_data | vlSelf->csr_data)) 
                          | ((- (IData)((IData)(vlSelf->inst_csrrw))) 
                             & vlSelf->rs1_data));
    vlSelf->mem_addr = (vlSelf->rs1_data + vlSelf->imm);
    vlSelf->src1 = ((IData)(vlSelf->inst_lui) ? 0U : 
                    (((IData)(vlSelf->inst_auipc) | (IData)(vlSelf->__VdfgTmp_h36cf7f3f__0))
                      ? vlSelf->ds_pc : vlSelf->rs1_data));
    vlSelf->br_target = ((IData)(vlSelf->inst_jalr)
                          ? (0xfffffffeU & (vlSelf->rs1_data 
                                            + vlSelf->imm_i))
                          : ((IData)(vlSelf->inst_j)
                              ? (vlSelf->ds_pc + vlSelf->imm_j)
                              : ((IData)(vlSelf->inst_b)
                                  ? (vlSelf->ds_pc 
                                     + vlSelf->offset)
                                  : 0U)));
    __VdfgTmp_hb7eb1b2d__0 = (vlSelf->rs1_data < vlSelf->st_data);
    vlSelf->ds_allowin = (1U & ((~ (IData)(vlSelf->ds_state)) 
                                | ((IData)(vlSelf->ds_state) 
                                   & ((IData)(__VdfgTmp_h1eeb5f80__0) 
                                      & (IData)(vlSelf->es_allowin)))));
    vlSelf->ds_to_es_valid = ((IData)(__VdfgTmp_h1eeb5f80__0) 
                              & (IData)(vlSelf->ds_state));
    vlSelf->valid = ((IData)(__VdfgTmp_h1eeb5f80__0) 
                     & (IData)(vlSelf->ds_valid));
    vlSelf->ds_to_es_bus[0U] = (IData)((((QData)((IData)(vlSelf->alu_op)) 
                                         << 0x15U) 
                                        | (QData)((IData)(
                                                          (((IData)(vlSelf->rs2) 
                                                            << 0x10U) 
                                                           | (((IData)(vlSelf->rd) 
                                                               << 0xbU) 
                                                              | (((IData)(vlSelf->load) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->store) 
                                                                     << 3U) 
                                                                    | (((IData)(vlSelf->load_sign) 
                                                                        << 2U) 
                                                                       | (((IData)(vlSelf->res_from_csr) 
                                                                           << 1U) 
                                                                          | (IData)(vlSelf->rf_wen)))))))))));
    vlSelf->ds_to_es_bus[1U] = ((vlSelf->csr_data << 1U) 
                                | (IData)(((((QData)((IData)(vlSelf->alu_op)) 
                                             << 0x15U) 
                                            | (QData)((IData)(
                                                              (((IData)(vlSelf->rs2) 
                                                                << 0x10U) 
                                                               | (((IData)(vlSelf->rd) 
                                                                   << 0xbU) 
                                                                  | (((IData)(vlSelf->load) 
                                                                      << 7U) 
                                                                     | (((IData)(vlSelf->store) 
                                                                         << 3U) 
                                                                        | (((IData)(vlSelf->load_sign) 
                                                                            << 2U) 
                                                                           | (((IData)(vlSelf->res_from_csr) 
                                                                               << 1U) 
                                                                              | (IData)(vlSelf->rf_wen)))))))))) 
                                           >> 0x20U)));
    vlSelf->ds_to_es_bus[2U] = ((vlSelf->csr_data >> 0x1fU) 
                                | (vlSelf->st_data 
                                   << 1U));
    vlSelf->ds_to_es_bus[3U] = ((vlSelf->st_data >> 0x1fU) 
                                | (vlSelf->mem_addr 
                                   << 1U));
    vlSelf->ds_to_es_bus[4U] = ((vlSelf->mem_addr >> 0x1fU) 
                                | (vlSelf->src2 << 1U));
    vlSelf->ds_to_es_bus[5U] = ((vlSelf->src2 >> 0x1fU) 
                                | ((IData)((((QData)((IData)(vlSelf->ds_pc)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->src1)))) 
                                   << 1U));
    vlSelf->ds_to_es_bus[6U] = (((IData)((((QData)((IData)(vlSelf->ds_pc)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->src1)))) 
                                 >> 0x1fU) | ((IData)(
                                                      ((((QData)((IData)(vlSelf->ds_pc)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->src1))) 
                                                       >> 0x20U)) 
                                              << 1U));
    vlSelf->ds_to_es_bus[7U] = ((IData)(((((QData)((IData)(vlSelf->ds_pc)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->src1))) 
                                         >> 0x20U)) 
                                >> 0x1fU);
    vlSelf->rs1_lt_rd_sign = (1U & ((1U & ((IData)(
                                                   (__VdfgTmp_h5c8bff21__0 
                                                    >> 0x1fU)) 
                                           ^ (IData)(
                                                     (__VdfgTmp_hac539600__0 
                                                      >> 0x1fU))))
                                     ? (IData)((__VdfgTmp_h5c8bff21__0 
                                                >> 0x1fU))
                                     : (IData)(__VdfgTmp_hb7eb1b2d__0)));
    vlSelf->ecall = ((IData)(vlSelf->inst_ecall) & (IData)(vlSelf->valid));
    vlSelf->mret = ((IData)(vlSelf->inst_mret) & (IData)(vlSelf->valid));
    vlSelf->fence = ((IData)(vlSelf->cache_flush) & (IData)(vlSelf->valid));
    vlSelf->br_taken = (((IData)(vlSelf->__VdfgTmp_h36cf7f3f__0) 
                         | (((IData)(vlSelf->inst_bne) 
                             & (vlSelf->rs1_data != vlSelf->st_data)) 
                            | (((~ (IData)(vlSelf->rs1_lt_rd_sign)) 
                                & (IData)(vlSelf->inst_bge)) 
                               | (((IData)(vlSelf->inst_beq) 
                                   & (vlSelf->rs1_data 
                                      == vlSelf->st_data)) 
                                  | (((IData)(vlSelf->inst_bgeu) 
                                      & (vlSelf->rs1_data 
                                         >= vlSelf->st_data)) 
                                     | (((IData)(vlSelf->inst_bltu) 
                                         & (IData)(__VdfgTmp_hb7eb1b2d__0)) 
                                        | ((IData)(vlSelf->inst_blt) 
                                           & (IData)(vlSelf->rs1_lt_rd_sign)))))))) 
                        & (IData)(vlSelf->valid));
    vlSelf->br_bus = (((QData)((IData)(vlSelf->br_taken)) 
                       << 0x20U) | (QData)((IData)(vlSelf->br_target)));
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269_IDU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IDU__3(VysyxSoCFull_ysyx_25110269_IDU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_25110269_IDU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IDU__3\n"); );
    // Body
    vlSelf->next_state = ((IData)(vlSelf->ds_state)
                           ? ((IData)(vlSelf->ds_state) 
                              & ((~ ((IData)(vlSelf->es_allowin) 
                                     & (IData)(vlSelf->ds_to_es_valid))) 
                                 | (IData)(vlSelf->fs_to_ds_valid)))
                           : (IData)(vlSelf->fs_to_ds_valid));
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269_IDU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IDU__0(VysyxSoCFull_ysyx_25110269_IDU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_25110269_IDU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IDU__0\n"); );
    // Body
    vlSelf->ws_forward_data = (IData)((vlSelf->ws_to_ds_forward_bus 
                                       >> 6U));
    vlSelf->ws_forward_enable = (1U & (IData)((vlSelf->ws_to_ds_forward_bus 
                                               >> 5U)));
    vlSelf->ws_dest = (0x1fU & (IData)(vlSelf->ws_to_ds_forward_bus));
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269_IDU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IDU__1(VysyxSoCFull_ysyx_25110269_IDU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_25110269_IDU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IDU__1\n"); );
    // Body
    vlSelf->es_dep_need_stall = (1U & (IData)((vlSelf->es_to_ds_forward_bus 
                                               >> 0x26U)));
    vlSelf->es_forward_data = (IData)((vlSelf->es_to_ds_forward_bus 
                                       >> 6U));
    vlSelf->es_forward_enable = (1U & (IData)((vlSelf->es_to_ds_forward_bus 
                                               >> 5U)));
    vlSelf->es_dest = (0x1fU & (IData)(vlSelf->es_to_ds_forward_bus));
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269_IDU___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__IDU__1(VysyxSoCFull_ysyx_25110269_IDU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_25110269_IDU___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__IDU__1\n"); );
    // Init
    CData/*0:0*/ __VdfgTmp_h1eeb5f80__0;
    __VdfgTmp_h1eeb5f80__0 = 0;
    QData/*32:0*/ __VdfgTmp_h5c8bff21__0;
    __VdfgTmp_h5c8bff21__0 = 0;
    QData/*32:0*/ __VdfgTmp_hac539600__0;
    __VdfgTmp_hac539600__0 = 0;
    CData/*0:0*/ __VdfgTmp_hb7eb1b2d__0;
    __VdfgTmp_hb7eb1b2d__0 = 0;
    // Body
    __VdfgTmp_hac539600__0 = (0x1ffffffffULL & ((((IData)(vlSelf->rs2) 
                                                  == (IData)(vlSelf->es_dest)) 
                                                 & ((IData)(vlSelf->es_forward_enable) 
                                                    & (IData)(vlSelf->__VdfgTmp_ha8c610e1__0)))
                                                 ? 
                                                (vlSelf->es_to_ds_forward_bus 
                                                 >> 6U)
                                                 : 
                                                ((((IData)(vlSelf->rs2) 
                                                   == (IData)(vlSelf->ms_dest)) 
                                                  & ((IData)(vlSelf->ms_forward_enable) 
                                                     & (IData)(vlSelf->__VdfgTmp_ha8c610e1__0)))
                                                  ? 
                                                 (vlSelf->ms_to_ds_forward_bus 
                                                  >> 6U)
                                                  : 
                                                 ((((IData)(vlSelf->rs2) 
                                                    == (IData)(vlSelf->ws_dest)) 
                                                   & ((IData)(vlSelf->ws_forward_enable) 
                                                      & (IData)(vlSelf->__VdfgTmp_ha8c610e1__0)))
                                                   ? (QData)((IData)(vlSelf->ws_forward_data))
                                                   : (QData)((IData)(vlSelf->rf2_data))))));
    __VdfgTmp_h5c8bff21__0 = (0x1ffffffffULL & ((((IData)(vlSelf->rs1) 
                                                  == (IData)(vlSelf->es_dest)) 
                                                 & ((IData)(vlSelf->es_forward_enable) 
                                                    & (IData)(vlSelf->__VdfgTmp_h18c9f4c4__0)))
                                                 ? 
                                                (vlSelf->es_to_ds_forward_bus 
                                                 >> 6U)
                                                 : 
                                                ((((IData)(vlSelf->rs1) 
                                                   == (IData)(vlSelf->ms_dest)) 
                                                  & ((IData)(vlSelf->ms_forward_enable) 
                                                     & (IData)(vlSelf->__VdfgTmp_h18c9f4c4__0)))
                                                  ? 
                                                 (vlSelf->ms_to_ds_forward_bus 
                                                  >> 6U)
                                                  : 
                                                 ((((IData)(vlSelf->rs1) 
                                                    == (IData)(vlSelf->ws_dest)) 
                                                   & ((IData)(vlSelf->ws_forward_enable) 
                                                      & (IData)(vlSelf->__VdfgTmp_h18c9f4c4__0)))
                                                   ? (QData)((IData)(vlSelf->ws_forward_data))
                                                   : (QData)((IData)(vlSelf->rf1_data))))));
    vlSelf->rs2_forward_stall = (1U & (IData)((__VdfgTmp_hac539600__0 
                                               >> 0x20U)));
    vlSelf->st_data = (IData)(__VdfgTmp_hac539600__0);
    vlSelf->rs1_forward_stall = (1U & (IData)((__VdfgTmp_h5c8bff21__0 
                                               >> 0x20U)));
    vlSelf->rs1_data = (IData)(__VdfgTmp_h5c8bff21__0);
    vlSelf->rs2_data = vlSelf->st_data;
    vlSelf->src2 = ((IData)(vlSelf->inst_r) ? vlSelf->st_data
                     : ((IData)(vlSelf->__VdfgTmp_h36cf7f3f__0)
                         ? 4U : vlSelf->imm));
    __VdfgTmp_h1eeb5f80__0 = (1U & (~ ((IData)(vlSelf->rs1_forward_stall) 
                                       | (IData)(vlSelf->rs2_forward_stall))));
    vlSelf->mem_addr = (vlSelf->rs1_data + vlSelf->imm);
    vlSelf->src1 = ((IData)(vlSelf->inst_lui) ? 0U : 
                    (((IData)(vlSelf->inst_auipc) | (IData)(vlSelf->__VdfgTmp_h36cf7f3f__0))
                      ? vlSelf->ds_pc : vlSelf->rs1_data));
    vlSelf->br_target = ((IData)(vlSelf->inst_jalr)
                          ? (0xfffffffeU & (vlSelf->rs1_data 
                                            + vlSelf->imm_i))
                          : ((IData)(vlSelf->inst_j)
                              ? (vlSelf->ds_pc + vlSelf->imm_j)
                              : ((IData)(vlSelf->inst_b)
                                  ? (vlSelf->ds_pc 
                                     + vlSelf->offset)
                                  : 0U)));
    __VdfgTmp_hb7eb1b2d__0 = (vlSelf->rs1_data < vlSelf->st_data);
    vlSelf->ds_allowin = (1U & ((~ (IData)(vlSelf->ds_state)) 
                                | ((IData)(vlSelf->ds_state) 
                                   & ((IData)(__VdfgTmp_h1eeb5f80__0) 
                                      & (IData)(vlSelf->es_allowin)))));
    vlSelf->ds_to_es_valid = ((IData)(__VdfgTmp_h1eeb5f80__0) 
                              & (IData)(vlSelf->ds_state));
    vlSelf->valid = ((IData)(__VdfgTmp_h1eeb5f80__0) 
                     & (IData)(vlSelf->ds_valid));
    vlSelf->rs1_lt_rd_sign = (1U & ((1U & ((IData)(
                                                   (__VdfgTmp_h5c8bff21__0 
                                                    >> 0x1fU)) 
                                           ^ (IData)(
                                                     (__VdfgTmp_hac539600__0 
                                                      >> 0x1fU))))
                                     ? (IData)((__VdfgTmp_h5c8bff21__0 
                                                >> 0x1fU))
                                     : (IData)(__VdfgTmp_hb7eb1b2d__0)));
    vlSelf->ecall = ((IData)(vlSelf->inst_ecall) & (IData)(vlSelf->valid));
    vlSelf->mret = ((IData)(vlSelf->inst_mret) & (IData)(vlSelf->valid));
    vlSelf->fence = ((IData)(vlSelf->cache_flush) & (IData)(vlSelf->valid));
    vlSelf->br_taken = (((IData)(vlSelf->__VdfgTmp_h36cf7f3f__0) 
                         | (((IData)(vlSelf->inst_bne) 
                             & (vlSelf->rs1_data != vlSelf->st_data)) 
                            | (((~ (IData)(vlSelf->rs1_lt_rd_sign)) 
                                & (IData)(vlSelf->inst_bge)) 
                               | (((IData)(vlSelf->inst_beq) 
                                   & (vlSelf->rs1_data 
                                      == vlSelf->st_data)) 
                                  | (((IData)(vlSelf->inst_bgeu) 
                                      & (vlSelf->rs1_data 
                                         >= vlSelf->st_data)) 
                                     | (((IData)(vlSelf->inst_bltu) 
                                         & (IData)(__VdfgTmp_hb7eb1b2d__0)) 
                                        | ((IData)(vlSelf->inst_blt) 
                                           & (IData)(vlSelf->rs1_lt_rd_sign)))))))) 
                        & (IData)(vlSelf->valid));
    vlSelf->br_bus = (((QData)((IData)(vlSelf->br_taken)) 
                       << 0x20U) | (QData)((IData)(vlSelf->br_target)));
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269_IDU___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__IDU__2(VysyxSoCFull_ysyx_25110269_IDU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_25110269_IDU___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__IDU__2\n"); );
    // Body
    vlSelf->csr_result = (((- (IData)((IData)(vlSelf->inst_csrrs))) 
                           & (vlSelf->rs1_data | vlSelf->csr_data)) 
                          | ((- (IData)((IData)(vlSelf->inst_csrrw))) 
                             & vlSelf->rs1_data));
    vlSelf->ds_to_es_bus[0U] = (IData)((((QData)((IData)(vlSelf->alu_op)) 
                                         << 0x15U) 
                                        | (QData)((IData)(
                                                          (((IData)(vlSelf->rs2) 
                                                            << 0x10U) 
                                                           | (((IData)(vlSelf->rd) 
                                                               << 0xbU) 
                                                              | (((IData)(vlSelf->load) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->store) 
                                                                     << 3U) 
                                                                    | (((IData)(vlSelf->load_sign) 
                                                                        << 2U) 
                                                                       | (((IData)(vlSelf->res_from_csr) 
                                                                           << 1U) 
                                                                          | (IData)(vlSelf->rf_wen)))))))))));
    vlSelf->ds_to_es_bus[1U] = ((vlSelf->csr_data << 1U) 
                                | (IData)(((((QData)((IData)(vlSelf->alu_op)) 
                                             << 0x15U) 
                                            | (QData)((IData)(
                                                              (((IData)(vlSelf->rs2) 
                                                                << 0x10U) 
                                                               | (((IData)(vlSelf->rd) 
                                                                   << 0xbU) 
                                                                  | (((IData)(vlSelf->load) 
                                                                      << 7U) 
                                                                     | (((IData)(vlSelf->store) 
                                                                         << 3U) 
                                                                        | (((IData)(vlSelf->load_sign) 
                                                                            << 2U) 
                                                                           | (((IData)(vlSelf->res_from_csr) 
                                                                               << 1U) 
                                                                              | (IData)(vlSelf->rf_wen)))))))))) 
                                           >> 0x20U)));
    vlSelf->ds_to_es_bus[2U] = ((vlSelf->csr_data >> 0x1fU) 
                                | (vlSelf->st_data 
                                   << 1U));
    vlSelf->ds_to_es_bus[3U] = ((vlSelf->st_data >> 0x1fU) 
                                | (vlSelf->mem_addr 
                                   << 1U));
    vlSelf->ds_to_es_bus[4U] = ((vlSelf->mem_addr >> 0x1fU) 
                                | (vlSelf->src2 << 1U));
    vlSelf->ds_to_es_bus[5U] = ((vlSelf->src2 >> 0x1fU) 
                                | ((IData)((((QData)((IData)(vlSelf->ds_pc)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->src1)))) 
                                   << 1U));
    vlSelf->ds_to_es_bus[6U] = (((IData)((((QData)((IData)(vlSelf->ds_pc)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->src1)))) 
                                 >> 0x1fU) | ((IData)(
                                                      ((((QData)((IData)(vlSelf->ds_pc)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->src1))) 
                                                       >> 0x20U)) 
                                              << 1U));
    vlSelf->ds_to_es_bus[7U] = ((IData)(((((QData)((IData)(vlSelf->ds_pc)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->src1))) 
                                         >> 0x20U)) 
                                >> 0x1fU);
}
