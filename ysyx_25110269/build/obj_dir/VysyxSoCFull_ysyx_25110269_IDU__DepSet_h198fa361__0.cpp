// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull_ysyx_25110269_IDU.h"

void VysyxSoCFull___024unit____Vdpiimwrap_ebreak_TOP____024unit();

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269_IDU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IDU__0(VysyxSoCFull_ysyx_25110269_IDU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_25110269_IDU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IDU__0\n"); );
    // Body
    vlSelf->imm_u = ((IData)((vlSelf->fs_to_ds_bus_r 
                              >> 0xcU)) << 0xcU);
    vlSelf->offset = (((- (IData)((1U & (IData)((vlSelf->fs_to_ds_bus_r 
                                                 >> 0x1fU))))) 
                       << 0xcU) | ((0x800U & ((IData)(
                                                      (vlSelf->fs_to_ds_bus_r 
                                                       >> 7U)) 
                                              << 0xbU)) 
                                   | ((0x7e0U & ((IData)(
                                                         (vlSelf->fs_to_ds_bus_r 
                                                          >> 0x19U)) 
                                                 << 5U)) 
                                      | (0x1eU & ((IData)(
                                                          (vlSelf->fs_to_ds_bus_r 
                                                           >> 8U)) 
                                                  << 1U)))));
    vlSelf->rd = (0x1fU & (IData)((vlSelf->fs_to_ds_bus_r 
                                   >> 7U)));
    vlSelf->inst = (IData)(vlSelf->fs_to_ds_bus_r);
    vlSelf->ds_pc = (IData)((vlSelf->fs_to_ds_bus_r 
                             >> 0x20U));
    vlSelf->imm_j = (((- (IData)((1U & (IData)((vlSelf->fs_to_ds_bus_r 
                                                >> 0x1fU))))) 
                      << 0x15U) | ((0x100000U & ((IData)(
                                                         (vlSelf->fs_to_ds_bus_r 
                                                          >> 0x1fU)) 
                                                 << 0x14U)) 
                                   | ((0xff000U & ((IData)(
                                                           (vlSelf->fs_to_ds_bus_r 
                                                            >> 0xcU)) 
                                                   << 0xcU)) 
                                      | ((0x800U & 
                                          ((IData)(
                                                   (vlSelf->fs_to_ds_bus_r 
                                                    >> 0x14U)) 
                                           << 0xbU)) 
                                         | (0x7feU 
                                            & ((IData)(
                                                       (vlSelf->fs_to_ds_bus_r 
                                                        >> 0x15U)) 
                                               << 1U))))));
    vlSelf->csr_addr = (0xfffU & (IData)((vlSelf->fs_to_ds_bus_r 
                                          >> 0x14U)));
    vlSelf->rs2 = (0x1fU & (IData)((vlSelf->fs_to_ds_bus_r 
                                    >> 0x14U)));
    vlSelf->rs1 = (0x1fU & (IData)((vlSelf->fs_to_ds_bus_r 
                                    >> 0xfU)));
    vlSelf->funct7 = (0x7fU & (IData)((vlSelf->fs_to_ds_bus_r 
                                       >> 0x19U)));
    vlSelf->funct3 = (7U & (IData)((vlSelf->fs_to_ds_bus_r 
                                    >> 0xcU)));
    vlSelf->opcode = (0x7fU & (IData)(vlSelf->fs_to_ds_bus_r));
    vlSelf->es_dep_need_stall = (1U & (IData)((vlSelf->es_to_ds_forward_bus 
                                               >> 0x26U)));
    vlSelf->es_forward_data = (IData)((vlSelf->es_to_ds_forward_bus 
                                       >> 6U));
    vlSelf->es_forward_enable = (1U & (IData)((vlSelf->es_to_ds_forward_bus 
                                               >> 5U)));
    vlSelf->es_dest = (0x1fU & (IData)(vlSelf->es_to_ds_forward_bus));
    vlSelf->ws_forward_data = (IData)((vlSelf->ws_to_ds_forward_bus 
                                       >> 6U));
    vlSelf->ws_forward_enable = (1U & (IData)((vlSelf->ws_to_ds_forward_bus 
                                               >> 5U)));
    vlSelf->ws_dest = (0x1fU & (IData)(vlSelf->ws_to_ds_forward_bus));
    vlSelf->imm_iu = (vlSelf->inst >> 0x14U);
    vlSelf->inst_ebreak = (0x100073U == vlSelf->inst);
    vlSelf->inst_ecall = (0x73U == vlSelf->inst);
    vlSelf->inst_mret = (0x30200073U == vlSelf->inst);
    vlSelf->cache_flush = (0x100fU == vlSelf->inst);
    vlSelf->imm_i = (((- (IData)((1U & (IData)((vlSelf->fs_to_ds_bus_r 
                                                >> 0x1fU))))) 
                      << 0xcU) | (IData)(vlSelf->csr_addr));
    vlSelf->imm_s = (((- (IData)((1U & (IData)((vlSelf->fs_to_ds_bus_r 
                                                >> 0x1fU))))) 
                      << 0xcU) | (((IData)(vlSelf->funct7) 
                                   << 5U) | (IData)(vlSelf->rd)));
    vlSelf->__VdfgTmp_h0ebf110f__0 = ((1U == (IData)(vlSelf->funct3)) 
                                      & (0U == (IData)(vlSelf->funct7)));
    vlSelf->inst_lui = (0x37U == (IData)(vlSelf->opcode));
    vlSelf->inst_auipc = (0x17U == (IData)(vlSelf->opcode));
    vlSelf->inst_j = (0x6fU == (IData)(vlSelf->opcode));
    vlSelf->inst_csrrs = ((0x73U == (IData)(vlSelf->opcode)) 
                          & (2U == (IData)(vlSelf->funct3)));
    vlSelf->inst_csrrw = ((0x73U == (IData)(vlSelf->opcode)) 
                          & (1U == (IData)(vlSelf->funct3)));
    vlSelf->inst_lhu = ((3U == (IData)(vlSelf->opcode)) 
                        & (5U == (IData)(vlSelf->funct3)));
    vlSelf->inst_iu = ((0x13U == (IData)(vlSelf->opcode)) 
                       & (3U == (IData)(vlSelf->funct3)));
    vlSelf->inst_lbu = ((3U == (IData)(vlSelf->opcode)) 
                        & (4U == (IData)(vlSelf->funct3)));
    vlSelf->inst_ori = ((0x13U == (IData)(vlSelf->opcode)) 
                        & (6U == (IData)(vlSelf->funct3)));
    vlSelf->inst_andi = ((0x13U == (IData)(vlSelf->opcode)) 
                         & (7U == (IData)(vlSelf->funct3)));
    vlSelf->inst_xori = ((0x13U == (IData)(vlSelf->opcode)) 
                         & (4U == (IData)(vlSelf->funct3)));
    vlSelf->inst_addi = ((0x13U == (IData)(vlSelf->opcode)) 
                         & (0U == (IData)(vlSelf->funct3)));
    vlSelf->inst_lh = ((3U == (IData)(vlSelf->opcode)) 
                       & (1U == (IData)(vlSelf->funct3)));
    vlSelf->inst_lw = ((3U == (IData)(vlSelf->opcode)) 
                       & (2U == (IData)(vlSelf->funct3)));
    vlSelf->inst_lb = ((3U == (IData)(vlSelf->opcode)) 
                       & (0U == (IData)(vlSelf->funct3)));
    vlSelf->inst_jalr = ((0x67U == (IData)(vlSelf->opcode)) 
                         & (0U == (IData)(vlSelf->funct3)));
    vlSelf->inst_sw = ((0x23U == (IData)(vlSelf->opcode)) 
                       & (2U == (IData)(vlSelf->funct3)));
    vlSelf->inst_sh = ((0x23U == (IData)(vlSelf->opcode)) 
                       & (1U == (IData)(vlSelf->funct3)));
    vlSelf->inst_sb = ((0x23U == (IData)(vlSelf->opcode)) 
                       & (0U == (IData)(vlSelf->funct3)));
    vlSelf->inst_slt = ((0x33U == (IData)(vlSelf->opcode)) 
                        & ((2U == (IData)(vlSelf->funct3)) 
                           & (0U == (IData)(vlSelf->funct7))));
    vlSelf->inst_or = ((0x33U == (IData)(vlSelf->opcode)) 
                       & ((6U == (IData)(vlSelf->funct3)) 
                          & (0U == (IData)(vlSelf->funct7))));
    vlSelf->inst_and = ((0x33U == (IData)(vlSelf->opcode)) 
                        & ((7U == (IData)(vlSelf->funct3)) 
                           & (0U == (IData)(vlSelf->funct7))));
    vlSelf->inst_xor = ((0x33U == (IData)(vlSelf->opcode)) 
                        & ((4U == (IData)(vlSelf->funct3)) 
                           & (0U == (IData)(vlSelf->funct7))));
    vlSelf->inst_sltu = ((0x33U == (IData)(vlSelf->opcode)) 
                         & ((3U == (IData)(vlSelf->funct3)) 
                            & (0U == (IData)(vlSelf->funct7))));
    vlSelf->inst_bne = ((0x63U == (IData)(vlSelf->opcode)) 
                        & (1U == (IData)(vlSelf->funct3)));
    vlSelf->inst_bge = ((0x63U == (IData)(vlSelf->opcode)) 
                        & (5U == (IData)(vlSelf->funct3)));
    vlSelf->inst_beq = ((0x63U == (IData)(vlSelf->opcode)) 
                        & (0U == (IData)(vlSelf->funct3)));
    vlSelf->inst_bgeu = ((0x63U == (IData)(vlSelf->opcode)) 
                         & (7U == (IData)(vlSelf->funct3)));
    vlSelf->inst_bltu = ((0x63U == (IData)(vlSelf->opcode)) 
                         & (6U == (IData)(vlSelf->funct3)));
    vlSelf->inst_blt = ((0x63U == (IData)(vlSelf->opcode)) 
                        & (4U == (IData)(vlSelf->funct3)));
    vlSelf->__VdfgTmp_h95492ba8__0 = ((0x13U == (IData)(vlSelf->opcode)) 
                                      & (5U == (IData)(vlSelf->funct3)));
    vlSelf->__VdfgTmp_h7a5d510f__0 = ((0x33U == (IData)(vlSelf->opcode)) 
                                      & (5U == (IData)(vlSelf->funct3)));
    vlSelf->__VdfgTmp_h499e0f17__0 = ((0x33U == (IData)(vlSelf->opcode)) 
                                      & (0U == (IData)(vlSelf->funct3)));
    if (vlSelf->inst_ebreak) {
        VysyxSoCFull___024unit____Vdpiimwrap_ebreak_TOP____024unit();
    }
    vlSelf->inst_fence = vlSelf->cache_flush;
    vlSelf->inst_slli = ((0x13U == (IData)(vlSelf->opcode)) 
                         & (IData)(vlSelf->__VdfgTmp_h0ebf110f__0));
    vlSelf->inst_sll = ((0x33U == (IData)(vlSelf->opcode)) 
                        & (IData)(vlSelf->__VdfgTmp_h0ebf110f__0));
    vlSelf->inst_u = ((IData)(vlSelf->inst_lui) | (IData)(vlSelf->inst_auipc));
    vlSelf->inst_jal = vlSelf->inst_j;
    vlSelf->csr_op = (((IData)(vlSelf->inst_csrrw) 
                       << 1U) | (IData)(vlSelf->inst_csrrs));
    vlSelf->res_from_csr = ((IData)(vlSelf->inst_csrrs) 
                            | (IData)(vlSelf->inst_csrrw));
    vlSelf->inst_sltiu = vlSelf->inst_iu;
    vlSelf->load_sign = ((IData)(vlSelf->inst_lh) | 
                         ((IData)(vlSelf->inst_lw) 
                          | (IData)(vlSelf->inst_lb)));
    vlSelf->__VdfgTmp_h20d514ff__0 = ((IData)(vlSelf->inst_lbu) 
                                      | (IData)(vlSelf->inst_lb));
    vlSelf->__VdfgTmp_h36cf7f3f__0 = ((IData)(vlSelf->inst_jalr) 
                                      | (IData)(vlSelf->inst_j));
    vlSelf->store = ((IData)(vlSelf->inst_sw) ? 0xfU
                      : ((IData)(vlSelf->inst_sh) ? 3U
                          : ((IData)(vlSelf->inst_sb)
                              ? 1U : 0U)));
    vlSelf->inst_s = ((IData)(vlSelf->inst_sb) | ((IData)(vlSelf->inst_sw) 
                                                  | (IData)(vlSelf->inst_sh)));
    vlSelf->inst_b = ((IData)(vlSelf->inst_bne) | ((IData)(vlSelf->inst_bge) 
                                                   | ((IData)(vlSelf->inst_beq) 
                                                      | ((IData)(vlSelf->inst_bgeu) 
                                                         | ((IData)(vlSelf->inst_bltu) 
                                                            | (IData)(vlSelf->inst_blt))))));
    vlSelf->inst_srli = ((IData)(vlSelf->__VdfgTmp_h95492ba8__0) 
                         & (0U == (IData)(vlSelf->funct7)));
    vlSelf->inst_srai = ((IData)(vlSelf->__VdfgTmp_h95492ba8__0) 
                         & (0x20U == (IData)(vlSelf->funct7)));
    vlSelf->inst_srl = ((IData)(vlSelf->__VdfgTmp_h7a5d510f__0) 
                        & (0U == (IData)(vlSelf->funct7)));
    vlSelf->inst_sra = ((IData)(vlSelf->__VdfgTmp_h7a5d510f__0) 
                        & (0x20U == (IData)(vlSelf->funct7)));
    vlSelf->inst_sub = ((IData)(vlSelf->__VdfgTmp_h499e0f17__0) 
                        & (0x20U == (IData)(vlSelf->funct7)));
    vlSelf->inst_add = ((IData)(vlSelf->__VdfgTmp_h499e0f17__0) 
                        & (0U == (IData)(vlSelf->funct7)));
    vlSelf->mem_ren = ((IData)(vlSelf->inst_lw) | (IData)(vlSelf->__VdfgTmp_h20d514ff__0));
    vlSelf->load = ((IData)(vlSelf->inst_lw) ? 0xfU
                     : (((IData)(vlSelf->inst_lh) | (IData)(vlSelf->inst_lhu))
                         ? 3U : ((IData)(vlSelf->__VdfgTmp_h20d514ff__0)
                                  ? 1U : 0U)));
    vlSelf->inst_i = ((IData)(vlSelf->inst_addi) | 
                      ((IData)(vlSelf->inst_jalr) | 
                       ((IData)(vlSelf->inst_lb) | 
                        ((IData)(vlSelf->inst_lw) | 
                         ((IData)(vlSelf->inst_lh) 
                          | ((IData)(vlSelf->inst_lhu) 
                             | ((IData)(vlSelf->inst_lbu) 
                                | ((IData)(vlSelf->inst_srai) 
                                   | ((IData)(vlSelf->inst_xori) 
                                      | ((IData)(vlSelf->inst_andi) 
                                         | ((IData)(vlSelf->inst_srli) 
                                            | ((IData)(vlSelf->inst_slli) 
                                               | (IData)(vlSelf->inst_ori)))))))))))));
    vlSelf->__VdfgTmp_h6876678a__0 = ((IData)(vlSelf->inst_addi) 
                                      | (IData)(vlSelf->inst_add));
    vlSelf->inst_r = ((IData)(vlSelf->inst_add) | ((IData)(vlSelf->inst_sub) 
                                                   | ((IData)(vlSelf->inst_xor) 
                                                      | ((IData)(vlSelf->inst_and) 
                                                         | ((IData)(vlSelf->inst_sltu) 
                                                            | ((IData)(vlSelf->inst_sll) 
                                                               | ((IData)(vlSelf->inst_or) 
                                                                  | ((IData)(vlSelf->inst_slt) 
                                                                     | ((IData)(vlSelf->inst_sra) 
                                                                        | (IData)(vlSelf->inst_srl))))))))));
    vlSelf->imm = ((IData)(vlSelf->inst_i) ? vlSelf->imm_i
                    : ((IData)(vlSelf->inst_iu) ? vlSelf->imm_i
                        : ((IData)(vlSelf->inst_u) ? vlSelf->imm_u
                            : ((IData)(vlSelf->inst_s)
                                ? vlSelf->imm_s : ((IData)(vlSelf->inst_j)
                                                    ? vlSelf->imm_j
                                                    : 0U)))));
    vlSelf->alu_op = (((IData)(vlSelf->inst_srl) << 0xbU) 
                      | (((IData)(vlSelf->inst_sra) 
                          << 0xaU) | (((IData)(vlSelf->inst_slt) 
                                       << 9U) | (((IData)(vlSelf->inst_srli) 
                                                  << 8U) 
                                                 | ((((IData)(vlSelf->inst_or) 
                                                      | (IData)(vlSelf->inst_ori)) 
                                                     << 7U) 
                                                    | ((((IData)(vlSelf->inst_sll) 
                                                         | (IData)(vlSelf->inst_slli)) 
                                                        << 6U) 
                                                       | ((((IData)(vlSelf->inst_and) 
                                                            | (IData)(vlSelf->inst_andi)) 
                                                           << 5U) 
                                                          | (((IData)(vlSelf->inst_srai) 
                                                              << 4U) 
                                                             | ((((IData)(vlSelf->inst_xor) 
                                                                  | (IData)(vlSelf->inst_xori)) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelf->inst_sub) 
                                                                    << 2U) 
                                                                   | ((((IData)(vlSelf->inst_iu) 
                                                                        | (IData)(vlSelf->inst_sltu)) 
                                                                       << 1U) 
                                                                      | ((IData)(vlSelf->__VdfgTmp_h6876678a__0) 
                                                                         | ((IData)(vlSelf->inst_lui) 
                                                                            | ((IData)(vlSelf->inst_auipc) 
                                                                               | ((IData)(vlSelf->inst_j) 
                                                                                | (IData)(vlSelf->inst_jalr))))))))))))))));
    vlSelf->rf_wen = ((IData)(vlSelf->__VdfgTmp_h6876678a__0) 
                      | ((IData)(vlSelf->inst_jalr) 
                         | ((IData)(vlSelf->inst_lw) 
                            | ((IData)(vlSelf->inst_lh) 
                               | ((IData)(vlSelf->inst_lbu) 
                                  | ((IData)(vlSelf->inst_lb) 
                                     | ((IData)(vlSelf->inst_lui) 
                                        | ((IData)(vlSelf->inst_auipc) 
                                           | ((IData)(vlSelf->inst_j) 
                                              | ((IData)(vlSelf->inst_iu) 
                                                 | ((IData)(vlSelf->inst_sub) 
                                                    | ((IData)(vlSelf->inst_xor) 
                                                       | ((IData)(vlSelf->inst_sltu) 
                                                          | ((IData)(vlSelf->inst_srai) 
                                                             | ((IData)(vlSelf->inst_and) 
                                                                | ((IData)(vlSelf->inst_sll) 
                                                                   | ((IData)(vlSelf->inst_xori) 
                                                                      | ((IData)(vlSelf->inst_andi) 
                                                                         | ((IData)(vlSelf->inst_or) 
                                                                            | ((IData)(vlSelf->inst_ori) 
                                                                               | ((IData)(vlSelf->inst_srli) 
                                                                                | ((IData)(vlSelf->inst_slli) 
                                                                                | ((IData)(vlSelf->inst_slt) 
                                                                                | ((IData)(vlSelf->inst_sra) 
                                                                                | ((IData)(vlSelf->inst_srl) 
                                                                                | ((IData)(vlSelf->inst_lhu) 
                                                                                | (IData)(vlSelf->res_from_csr)))))))))))))))))))))))))));
    vlSelf->inst_need_rs2 = ((IData)(vlSelf->inst_r) 
                             | ((IData)(vlSelf->inst_s) 
                                | (IData)(vlSelf->inst_b)));
    vlSelf->inst_need_rs1 = ((IData)(vlSelf->inst_r) 
                             | ((IData)(vlSelf->inst_i) 
                                | ((IData)(vlSelf->inst_s) 
                                   | ((IData)(vlSelf->inst_b) 
                                      | ((IData)(vlSelf->inst_iu) 
                                         | (IData)(vlSelf->res_from_csr))))));
    vlSelf->__VdfgTmp_ha8c610e1__0 = ((0U != (IData)(vlSelf->rs2)) 
                                      & (IData)(vlSelf->inst_need_rs2));
    vlSelf->__VdfgTmp_h18c9f4c4__0 = ((0U != (IData)(vlSelf->rs1)) 
                                      & (IData)(vlSelf->inst_need_rs1));
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269_IDU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IDU__2(VysyxSoCFull_ysyx_25110269_IDU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_25110269_IDU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IDU__2\n"); );
    // Init
    IData/*31:0*/ __Vdly__pref_cnt_alu;
    __Vdly__pref_cnt_alu = 0;
    IData/*31:0*/ __Vdly__pref_cnt_ls;
    __Vdly__pref_cnt_ls = 0;
    IData/*31:0*/ __Vdly__pref_cnt_br;
    __Vdly__pref_cnt_br = 0;
    IData/*31:0*/ __Vdly__pref_cnt_csr;
    __Vdly__pref_cnt_csr = 0;
    // Body
    __Vdly__pref_cnt_csr = vlSelf->pref_cnt_csr;
    __Vdly__pref_cnt_br = vlSelf->pref_cnt_br;
    __Vdly__pref_cnt_ls = vlSelf->pref_cnt_ls;
    __Vdly__pref_cnt_alu = vlSelf->pref_cnt_alu;
    if (vlSelf->reset) {
        __Vdly__pref_cnt_alu = 0U;
        __Vdly__pref_cnt_ls = 0U;
        __Vdly__pref_cnt_br = 0U;
        __Vdly__pref_cnt_csr = 0U;
        vlSelf->ds_valid = 0U;
    } else {
        if (((IData)(vlSelf->ds_state) & (IData)(vlSelf->es_allowin))) {
            if ((0U != (IData)(vlSelf->alu_op))) {
                __Vdly__pref_cnt_alu = ((IData)(1U) 
                                        + vlSelf->pref_cnt_alu);
            } else if (((0U != (IData)(vlSelf->load)) 
                        | (0U != (IData)(vlSelf->store)))) {
                __Vdly__pref_cnt_ls = ((IData)(1U) 
                                       + vlSelf->pref_cnt_ls);
            } else if ((((IData)(vlSelf->inst_b) | (IData)(vlSelf->inst_jalr)) 
                        | (IData)(vlSelf->inst_j))) {
                __Vdly__pref_cnt_br = ((IData)(1U) 
                                       + vlSelf->pref_cnt_br);
            } else if ((0U != (IData)(vlSelf->csr_op))) {
                __Vdly__pref_cnt_csr = ((IData)(1U) 
                                        + vlSelf->pref_cnt_csr);
            }
        }
        if (vlSelf->ds_allowin) {
            vlSelf->ds_valid = vlSelf->fs_to_ds_valid;
        }
    }
    if (((IData)(vlSelf->fs_to_ds_valid) & (IData)(vlSelf->ds_allowin))) {
        vlSelf->fs_to_ds_bus_r = vlSelf->fs_to_ds_bus;
    }
    vlSelf->pref_cnt_alu = __Vdly__pref_cnt_alu;
    vlSelf->pref_cnt_ls = __Vdly__pref_cnt_ls;
    vlSelf->pref_cnt_br = __Vdly__pref_cnt_br;
    vlSelf->pref_cnt_csr = __Vdly__pref_cnt_csr;
    vlSelf->ds_state = ((~ (IData)(vlSelf->reset)) 
                        & (IData)(vlSelf->next_state));
    vlSelf->imm_u = ((IData)((vlSelf->fs_to_ds_bus_r 
                              >> 0xcU)) << 0xcU);
    vlSelf->offset = (((- (IData)((1U & (IData)((vlSelf->fs_to_ds_bus_r 
                                                 >> 0x1fU))))) 
                       << 0xcU) | ((0x800U & ((IData)(
                                                      (vlSelf->fs_to_ds_bus_r 
                                                       >> 7U)) 
                                              << 0xbU)) 
                                   | ((0x7e0U & ((IData)(
                                                         (vlSelf->fs_to_ds_bus_r 
                                                          >> 0x19U)) 
                                                 << 5U)) 
                                      | (0x1eU & ((IData)(
                                                          (vlSelf->fs_to_ds_bus_r 
                                                           >> 8U)) 
                                                  << 1U)))));
    vlSelf->rd = (0x1fU & (IData)((vlSelf->fs_to_ds_bus_r 
                                   >> 7U)));
    vlSelf->inst = (IData)(vlSelf->fs_to_ds_bus_r);
    vlSelf->ds_pc = (IData)((vlSelf->fs_to_ds_bus_r 
                             >> 0x20U));
    vlSelf->imm_j = (((- (IData)((1U & (IData)((vlSelf->fs_to_ds_bus_r 
                                                >> 0x1fU))))) 
                      << 0x15U) | ((0x100000U & ((IData)(
                                                         (vlSelf->fs_to_ds_bus_r 
                                                          >> 0x1fU)) 
                                                 << 0x14U)) 
                                   | ((0xff000U & ((IData)(
                                                           (vlSelf->fs_to_ds_bus_r 
                                                            >> 0xcU)) 
                                                   << 0xcU)) 
                                      | ((0x800U & 
                                          ((IData)(
                                                   (vlSelf->fs_to_ds_bus_r 
                                                    >> 0x14U)) 
                                           << 0xbU)) 
                                         | (0x7feU 
                                            & ((IData)(
                                                       (vlSelf->fs_to_ds_bus_r 
                                                        >> 0x15U)) 
                                               << 1U))))));
    vlSelf->csr_addr = (0xfffU & (IData)((vlSelf->fs_to_ds_bus_r 
                                          >> 0x14U)));
    vlSelf->rs2 = (0x1fU & (IData)((vlSelf->fs_to_ds_bus_r 
                                    >> 0x14U)));
    vlSelf->rs1 = (0x1fU & (IData)((vlSelf->fs_to_ds_bus_r 
                                    >> 0xfU)));
    vlSelf->funct7 = (0x7fU & (IData)((vlSelf->fs_to_ds_bus_r 
                                       >> 0x19U)));
    vlSelf->funct3 = (7U & (IData)((vlSelf->fs_to_ds_bus_r 
                                    >> 0xcU)));
    vlSelf->opcode = (0x7fU & (IData)(vlSelf->fs_to_ds_bus_r));
    vlSelf->imm_iu = (vlSelf->inst >> 0x14U);
    vlSelf->inst_ebreak = (0x100073U == vlSelf->inst);
    vlSelf->inst_ecall = (0x73U == vlSelf->inst);
    vlSelf->inst_mret = (0x30200073U == vlSelf->inst);
    vlSelf->cache_flush = (0x100fU == vlSelf->inst);
    vlSelf->imm_i = (((- (IData)((1U & (IData)((vlSelf->fs_to_ds_bus_r 
                                                >> 0x1fU))))) 
                      << 0xcU) | (IData)(vlSelf->csr_addr));
    vlSelf->imm_s = (((- (IData)((1U & (IData)((vlSelf->fs_to_ds_bus_r 
                                                >> 0x1fU))))) 
                      << 0xcU) | (((IData)(vlSelf->funct7) 
                                   << 5U) | (IData)(vlSelf->rd)));
    vlSelf->__VdfgTmp_h0ebf110f__0 = ((1U == (IData)(vlSelf->funct3)) 
                                      & (0U == (IData)(vlSelf->funct7)));
    vlSelf->inst_lui = (0x37U == (IData)(vlSelf->opcode));
    vlSelf->inst_auipc = (0x17U == (IData)(vlSelf->opcode));
    vlSelf->inst_j = (0x6fU == (IData)(vlSelf->opcode));
    vlSelf->inst_csrrs = ((0x73U == (IData)(vlSelf->opcode)) 
                          & (2U == (IData)(vlSelf->funct3)));
    vlSelf->inst_csrrw = ((0x73U == (IData)(vlSelf->opcode)) 
                          & (1U == (IData)(vlSelf->funct3)));
    vlSelf->inst_lhu = ((3U == (IData)(vlSelf->opcode)) 
                        & (5U == (IData)(vlSelf->funct3)));
    vlSelf->inst_iu = ((0x13U == (IData)(vlSelf->opcode)) 
                       & (3U == (IData)(vlSelf->funct3)));
    vlSelf->inst_lbu = ((3U == (IData)(vlSelf->opcode)) 
                        & (4U == (IData)(vlSelf->funct3)));
    vlSelf->inst_ori = ((0x13U == (IData)(vlSelf->opcode)) 
                        & (6U == (IData)(vlSelf->funct3)));
    vlSelf->inst_andi = ((0x13U == (IData)(vlSelf->opcode)) 
                         & (7U == (IData)(vlSelf->funct3)));
    vlSelf->inst_xori = ((0x13U == (IData)(vlSelf->opcode)) 
                         & (4U == (IData)(vlSelf->funct3)));
    vlSelf->inst_addi = ((0x13U == (IData)(vlSelf->opcode)) 
                         & (0U == (IData)(vlSelf->funct3)));
    vlSelf->inst_lh = ((3U == (IData)(vlSelf->opcode)) 
                       & (1U == (IData)(vlSelf->funct3)));
    vlSelf->inst_lw = ((3U == (IData)(vlSelf->opcode)) 
                       & (2U == (IData)(vlSelf->funct3)));
    vlSelf->inst_lb = ((3U == (IData)(vlSelf->opcode)) 
                       & (0U == (IData)(vlSelf->funct3)));
    vlSelf->inst_jalr = ((0x67U == (IData)(vlSelf->opcode)) 
                         & (0U == (IData)(vlSelf->funct3)));
    vlSelf->inst_sw = ((0x23U == (IData)(vlSelf->opcode)) 
                       & (2U == (IData)(vlSelf->funct3)));
    vlSelf->inst_sh = ((0x23U == (IData)(vlSelf->opcode)) 
                       & (1U == (IData)(vlSelf->funct3)));
    vlSelf->inst_sb = ((0x23U == (IData)(vlSelf->opcode)) 
                       & (0U == (IData)(vlSelf->funct3)));
    vlSelf->inst_slt = ((0x33U == (IData)(vlSelf->opcode)) 
                        & ((2U == (IData)(vlSelf->funct3)) 
                           & (0U == (IData)(vlSelf->funct7))));
    vlSelf->inst_or = ((0x33U == (IData)(vlSelf->opcode)) 
                       & ((6U == (IData)(vlSelf->funct3)) 
                          & (0U == (IData)(vlSelf->funct7))));
    vlSelf->inst_and = ((0x33U == (IData)(vlSelf->opcode)) 
                        & ((7U == (IData)(vlSelf->funct3)) 
                           & (0U == (IData)(vlSelf->funct7))));
    vlSelf->inst_xor = ((0x33U == (IData)(vlSelf->opcode)) 
                        & ((4U == (IData)(vlSelf->funct3)) 
                           & (0U == (IData)(vlSelf->funct7))));
    vlSelf->inst_sltu = ((0x33U == (IData)(vlSelf->opcode)) 
                         & ((3U == (IData)(vlSelf->funct3)) 
                            & (0U == (IData)(vlSelf->funct7))));
    vlSelf->inst_bne = ((0x63U == (IData)(vlSelf->opcode)) 
                        & (1U == (IData)(vlSelf->funct3)));
    vlSelf->inst_bge = ((0x63U == (IData)(vlSelf->opcode)) 
                        & (5U == (IData)(vlSelf->funct3)));
    vlSelf->inst_beq = ((0x63U == (IData)(vlSelf->opcode)) 
                        & (0U == (IData)(vlSelf->funct3)));
    vlSelf->inst_bgeu = ((0x63U == (IData)(vlSelf->opcode)) 
                         & (7U == (IData)(vlSelf->funct3)));
    vlSelf->inst_bltu = ((0x63U == (IData)(vlSelf->opcode)) 
                         & (6U == (IData)(vlSelf->funct3)));
    vlSelf->inst_blt = ((0x63U == (IData)(vlSelf->opcode)) 
                        & (4U == (IData)(vlSelf->funct3)));
    vlSelf->__VdfgTmp_h95492ba8__0 = ((0x13U == (IData)(vlSelf->opcode)) 
                                      & (5U == (IData)(vlSelf->funct3)));
    vlSelf->__VdfgTmp_h7a5d510f__0 = ((0x33U == (IData)(vlSelf->opcode)) 
                                      & (5U == (IData)(vlSelf->funct3)));
    vlSelf->__VdfgTmp_h499e0f17__0 = ((0x33U == (IData)(vlSelf->opcode)) 
                                      & (0U == (IData)(vlSelf->funct3)));
    if (vlSelf->inst_ebreak) {
        VysyxSoCFull___024unit____Vdpiimwrap_ebreak_TOP____024unit();
    }
    vlSelf->inst_fence = vlSelf->cache_flush;
    vlSelf->inst_slli = ((0x13U == (IData)(vlSelf->opcode)) 
                         & (IData)(vlSelf->__VdfgTmp_h0ebf110f__0));
    vlSelf->inst_sll = ((0x33U == (IData)(vlSelf->opcode)) 
                        & (IData)(vlSelf->__VdfgTmp_h0ebf110f__0));
    vlSelf->inst_u = ((IData)(vlSelf->inst_lui) | (IData)(vlSelf->inst_auipc));
    vlSelf->inst_jal = vlSelf->inst_j;
    vlSelf->csr_op = (((IData)(vlSelf->inst_csrrw) 
                       << 1U) | (IData)(vlSelf->inst_csrrs));
    vlSelf->res_from_csr = ((IData)(vlSelf->inst_csrrs) 
                            | (IData)(vlSelf->inst_csrrw));
    vlSelf->inst_sltiu = vlSelf->inst_iu;
    vlSelf->load_sign = ((IData)(vlSelf->inst_lh) | 
                         ((IData)(vlSelf->inst_lw) 
                          | (IData)(vlSelf->inst_lb)));
    vlSelf->__VdfgTmp_h20d514ff__0 = ((IData)(vlSelf->inst_lbu) 
                                      | (IData)(vlSelf->inst_lb));
    vlSelf->__VdfgTmp_h36cf7f3f__0 = ((IData)(vlSelf->inst_jalr) 
                                      | (IData)(vlSelf->inst_j));
    vlSelf->store = ((IData)(vlSelf->inst_sw) ? 0xfU
                      : ((IData)(vlSelf->inst_sh) ? 3U
                          : ((IData)(vlSelf->inst_sb)
                              ? 1U : 0U)));
    vlSelf->inst_s = ((IData)(vlSelf->inst_sb) | ((IData)(vlSelf->inst_sw) 
                                                  | (IData)(vlSelf->inst_sh)));
    vlSelf->inst_b = ((IData)(vlSelf->inst_bne) | ((IData)(vlSelf->inst_bge) 
                                                   | ((IData)(vlSelf->inst_beq) 
                                                      | ((IData)(vlSelf->inst_bgeu) 
                                                         | ((IData)(vlSelf->inst_bltu) 
                                                            | (IData)(vlSelf->inst_blt))))));
    vlSelf->inst_srli = ((IData)(vlSelf->__VdfgTmp_h95492ba8__0) 
                         & (0U == (IData)(vlSelf->funct7)));
    vlSelf->inst_srai = ((IData)(vlSelf->__VdfgTmp_h95492ba8__0) 
                         & (0x20U == (IData)(vlSelf->funct7)));
    vlSelf->inst_srl = ((IData)(vlSelf->__VdfgTmp_h7a5d510f__0) 
                        & (0U == (IData)(vlSelf->funct7)));
    vlSelf->inst_sra = ((IData)(vlSelf->__VdfgTmp_h7a5d510f__0) 
                        & (0x20U == (IData)(vlSelf->funct7)));
    vlSelf->inst_sub = ((IData)(vlSelf->__VdfgTmp_h499e0f17__0) 
                        & (0x20U == (IData)(vlSelf->funct7)));
    vlSelf->inst_add = ((IData)(vlSelf->__VdfgTmp_h499e0f17__0) 
                        & (0U == (IData)(vlSelf->funct7)));
    vlSelf->mem_ren = ((IData)(vlSelf->inst_lw) | (IData)(vlSelf->__VdfgTmp_h20d514ff__0));
    vlSelf->load = ((IData)(vlSelf->inst_lw) ? 0xfU
                     : (((IData)(vlSelf->inst_lh) | (IData)(vlSelf->inst_lhu))
                         ? 3U : ((IData)(vlSelf->__VdfgTmp_h20d514ff__0)
                                  ? 1U : 0U)));
    vlSelf->inst_i = ((IData)(vlSelf->inst_addi) | 
                      ((IData)(vlSelf->inst_jalr) | 
                       ((IData)(vlSelf->inst_lb) | 
                        ((IData)(vlSelf->inst_lw) | 
                         ((IData)(vlSelf->inst_lh) 
                          | ((IData)(vlSelf->inst_lhu) 
                             | ((IData)(vlSelf->inst_lbu) 
                                | ((IData)(vlSelf->inst_srai) 
                                   | ((IData)(vlSelf->inst_xori) 
                                      | ((IData)(vlSelf->inst_andi) 
                                         | ((IData)(vlSelf->inst_srli) 
                                            | ((IData)(vlSelf->inst_slli) 
                                               | (IData)(vlSelf->inst_ori)))))))))))));
    vlSelf->__VdfgTmp_h6876678a__0 = ((IData)(vlSelf->inst_addi) 
                                      | (IData)(vlSelf->inst_add));
    vlSelf->inst_r = ((IData)(vlSelf->inst_add) | ((IData)(vlSelf->inst_sub) 
                                                   | ((IData)(vlSelf->inst_xor) 
                                                      | ((IData)(vlSelf->inst_and) 
                                                         | ((IData)(vlSelf->inst_sltu) 
                                                            | ((IData)(vlSelf->inst_sll) 
                                                               | ((IData)(vlSelf->inst_or) 
                                                                  | ((IData)(vlSelf->inst_slt) 
                                                                     | ((IData)(vlSelf->inst_sra) 
                                                                        | (IData)(vlSelf->inst_srl))))))))));
    vlSelf->imm = ((IData)(vlSelf->inst_i) ? vlSelf->imm_i
                    : ((IData)(vlSelf->inst_iu) ? vlSelf->imm_i
                        : ((IData)(vlSelf->inst_u) ? vlSelf->imm_u
                            : ((IData)(vlSelf->inst_s)
                                ? vlSelf->imm_s : ((IData)(vlSelf->inst_j)
                                                    ? vlSelf->imm_j
                                                    : 0U)))));
    vlSelf->alu_op = (((IData)(vlSelf->inst_srl) << 0xbU) 
                      | (((IData)(vlSelf->inst_sra) 
                          << 0xaU) | (((IData)(vlSelf->inst_slt) 
                                       << 9U) | (((IData)(vlSelf->inst_srli) 
                                                  << 8U) 
                                                 | ((((IData)(vlSelf->inst_or) 
                                                      | (IData)(vlSelf->inst_ori)) 
                                                     << 7U) 
                                                    | ((((IData)(vlSelf->inst_sll) 
                                                         | (IData)(vlSelf->inst_slli)) 
                                                        << 6U) 
                                                       | ((((IData)(vlSelf->inst_and) 
                                                            | (IData)(vlSelf->inst_andi)) 
                                                           << 5U) 
                                                          | (((IData)(vlSelf->inst_srai) 
                                                              << 4U) 
                                                             | ((((IData)(vlSelf->inst_xor) 
                                                                  | (IData)(vlSelf->inst_xori)) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelf->inst_sub) 
                                                                    << 2U) 
                                                                   | ((((IData)(vlSelf->inst_iu) 
                                                                        | (IData)(vlSelf->inst_sltu)) 
                                                                       << 1U) 
                                                                      | ((IData)(vlSelf->__VdfgTmp_h6876678a__0) 
                                                                         | ((IData)(vlSelf->inst_lui) 
                                                                            | ((IData)(vlSelf->inst_auipc) 
                                                                               | ((IData)(vlSelf->inst_j) 
                                                                                | (IData)(vlSelf->inst_jalr))))))))))))))));
    vlSelf->rf_wen = ((IData)(vlSelf->__VdfgTmp_h6876678a__0) 
                      | ((IData)(vlSelf->inst_jalr) 
                         | ((IData)(vlSelf->inst_lw) 
                            | ((IData)(vlSelf->inst_lh) 
                               | ((IData)(vlSelf->inst_lbu) 
                                  | ((IData)(vlSelf->inst_lb) 
                                     | ((IData)(vlSelf->inst_lui) 
                                        | ((IData)(vlSelf->inst_auipc) 
                                           | ((IData)(vlSelf->inst_j) 
                                              | ((IData)(vlSelf->inst_iu) 
                                                 | ((IData)(vlSelf->inst_sub) 
                                                    | ((IData)(vlSelf->inst_xor) 
                                                       | ((IData)(vlSelf->inst_sltu) 
                                                          | ((IData)(vlSelf->inst_srai) 
                                                             | ((IData)(vlSelf->inst_and) 
                                                                | ((IData)(vlSelf->inst_sll) 
                                                                   | ((IData)(vlSelf->inst_xori) 
                                                                      | ((IData)(vlSelf->inst_andi) 
                                                                         | ((IData)(vlSelf->inst_or) 
                                                                            | ((IData)(vlSelf->inst_ori) 
                                                                               | ((IData)(vlSelf->inst_srli) 
                                                                                | ((IData)(vlSelf->inst_slli) 
                                                                                | ((IData)(vlSelf->inst_slt) 
                                                                                | ((IData)(vlSelf->inst_sra) 
                                                                                | ((IData)(vlSelf->inst_srl) 
                                                                                | ((IData)(vlSelf->inst_lhu) 
                                                                                | (IData)(vlSelf->res_from_csr)))))))))))))))))))))))))));
    vlSelf->inst_need_rs2 = ((IData)(vlSelf->inst_r) 
                             | ((IData)(vlSelf->inst_s) 
                                | (IData)(vlSelf->inst_b)));
    vlSelf->inst_need_rs1 = ((IData)(vlSelf->inst_r) 
                             | ((IData)(vlSelf->inst_i) 
                                | ((IData)(vlSelf->inst_s) 
                                   | ((IData)(vlSelf->inst_b) 
                                      | ((IData)(vlSelf->inst_iu) 
                                         | (IData)(vlSelf->res_from_csr))))));
    vlSelf->__VdfgTmp_ha8c610e1__0 = ((0U != (IData)(vlSelf->rs2)) 
                                      & (IData)(vlSelf->inst_need_rs2));
    vlSelf->__VdfgTmp_h18c9f4c4__0 = ((0U != (IData)(vlSelf->rs1)) 
                                      & (IData)(vlSelf->inst_need_rs1));
}
