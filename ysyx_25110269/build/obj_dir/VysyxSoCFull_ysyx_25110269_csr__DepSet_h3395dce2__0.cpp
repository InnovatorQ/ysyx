// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull_ysyx_25110269_csr.h"

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269_csr___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__csr__0(VysyxSoCFull_ysyx_25110269_csr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_25110269_csr___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__csr__0\n"); );
    // Body
    vlSelf->rd_data = (((- (IData)((0xb00U == (IData)(vlSelf->rd_addr)))) 
                        & vlSelf->csr_mcycle) | (((- (IData)(
                                                             (0xb80U 
                                                              == (IData)(vlSelf->rd_addr)))) 
                                                  & vlSelf->csr_mcycle_h) 
                                                 | (((- (IData)(
                                                                (0xf11U 
                                                                 == (IData)(vlSelf->rd_addr)))) 
                                                     & vlSelf->csr_mvendorid) 
                                                    | (((- (IData)(
                                                                   (0xf12U 
                                                                    == (IData)(vlSelf->rd_addr)))) 
                                                        & vlSelf->csr_marchid) 
                                                       | (((- (IData)(
                                                                      (0x341U 
                                                                       == (IData)(vlSelf->rd_addr)))) 
                                                           & vlSelf->csr_mepc) 
                                                          | (((- (IData)(
                                                                         (0x342U 
                                                                          == (IData)(vlSelf->rd_addr)))) 
                                                              & vlSelf->csr_mcause) 
                                                             | (((- (IData)(
                                                                            (0x305U 
                                                                             == (IData)(vlSelf->rd_addr)))) 
                                                                 & vlSelf->csr_mtvec) 
                                                                | ((- (IData)(
                                                                              (0x300U 
                                                                               == (IData)(vlSelf->rd_addr)))) 
                                                                   & vlSelf->csr_mstatus))))))));
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269_csr___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__csr__0(VysyxSoCFull_ysyx_25110269_csr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_25110269_csr___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__csr__0\n"); );
    // Init
    IData/*31:0*/ __Vdly__csr_mcycle;
    __Vdly__csr_mcycle = 0;
    IData/*31:0*/ __Vdly__csr_mcycle_h;
    __Vdly__csr_mcycle_h = 0;
    // Body
    __Vdly__csr_mcycle_h = vlSelf->csr_mcycle_h;
    __Vdly__csr_mcycle = vlSelf->csr_mcycle;
    if (vlSelf->reset) {
        __Vdly__csr_mcycle = 0U;
        __Vdly__csr_mcycle_h = 0U;
        vlSelf->csr_mvendorid = 0x79737978U;
        vlSelf->csr_marchid = 0x59ff3519U;
        vlSelf->csr_mstatus = 0U;
        vlSelf->csr_mcause = 0U;
        vlSelf->csr_mtvec = 0U;
        vlSelf->csr_mepc = 0U;
    } else {
        if ((0xffffffffU > vlSelf->csr_mcycle)) {
            __Vdly__csr_mcycle = ((IData)(1U) + vlSelf->csr_mcycle);
        } else {
            __Vdly__csr_mcycle_h = ((IData)(1U) + vlSelf->csr_mcycle_h);
            __Vdly__csr_mcycle = 0U;
        }
        if (vlSelf->ecall) {
            vlSelf->csr_mstatus = 0x1800U;
        }
        if (vlSelf->mret) {
            vlSelf->csr_mstatus = 0x80U;
        }
        if (vlSelf->csr_wen) {
            if ((0x341U != (IData)(vlSelf->wr_addr))) {
                if ((0x342U == (IData)(vlSelf->wr_addr))) {
                    vlSelf->csr_mcause = vlSelf->wr_data;
                }
                if ((0x342U != (IData)(vlSelf->wr_addr))) {
                    if ((0x305U == (IData)(vlSelf->wr_addr))) {
                        vlSelf->csr_mtvec = vlSelf->wr_data;
                    }
                }
            }
            if ((0x341U == (IData)(vlSelf->wr_addr))) {
                vlSelf->csr_mepc = vlSelf->wr_data;
            }
        }
        if (vlSelf->ecall) {
            vlSelf->csr_mcause = 0xbU;
            vlSelf->csr_mepc = vlSelf->ds_pc;
        }
    }
    vlSelf->csr_mcycle = __Vdly__csr_mcycle;
    vlSelf->csr_mcycle_h = __Vdly__csr_mcycle_h;
}
