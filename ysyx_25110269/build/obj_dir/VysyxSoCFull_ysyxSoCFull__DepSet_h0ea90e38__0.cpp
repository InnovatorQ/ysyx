// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull_ysyxSoCFull.h"

VL_INLINE_OPT void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__2(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__2\n"); );
    // Body
    vlSelf->__Vdly__bitrev__DOT__tx_shift_reg = vlSelf->__PVT__bitrev__DOT__tx_shift_reg;
    vlSelf->__Vdly__bitrev__DOT__tx_shift_reg = ((IData)(vlSelf->__Vcellinp__bitrev__ss)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->__PVT__bitrev__DOT__rx_done)
                                                   ? 
                                                  ((0x80U 
                                                    & ((IData)(vlSelf->__PVT__bitrev__DOT__rx_shift_reg) 
                                                       << 7U)) 
                                                   | ((0x40U 
                                                       & ((IData)(vlSelf->__PVT__bitrev__DOT__rx_shift_reg) 
                                                          << 5U)) 
                                                      | ((0x20U 
                                                          & ((IData)(vlSelf->__PVT__bitrev__DOT__rx_shift_reg) 
                                                             << 3U)) 
                                                         | ((0x10U 
                                                             & ((IData)(vlSelf->__PVT__bitrev__DOT__rx_shift_reg) 
                                                                << 1U)) 
                                                            | ((8U 
                                                                & ((IData)(vlSelf->__PVT__bitrev__DOT__rx_shift_reg) 
                                                                   >> 1U)) 
                                                               | ((4U 
                                                                   & ((IData)(vlSelf->__PVT__bitrev__DOT__rx_shift_reg) 
                                                                      >> 3U)) 
                                                                  | ((2U 
                                                                      & ((IData)(vlSelf->__PVT__bitrev__DOT__rx_shift_reg) 
                                                                         >> 5U)) 
                                                                     | (1U 
                                                                        & ((IData)(vlSelf->__PVT__bitrev__DOT__rx_shift_reg) 
                                                                           >> 7U)))))))))
                                                   : 
                                                  (0x7fU 
                                                   & ((IData)(vlSelf->__PVT__bitrev__DOT__tx_shift_reg) 
                                                      >> 1U))));
}

VL_INLINE_OPT void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__10(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__10\n"); );
    // Body
    vlSelf->__PVT__bitrev__DOT__rx_shift_reg = vlSelf->__Vdly__bitrev__DOT__rx_shift_reg;
    if (vlSelf->__Vcellinp__bitrev__ss) {
        vlSelf->__Vdly__bitrev__DOT__bit_cnt = 0U;
    } else {
        vlSelf->__Vdly__bitrev__DOT__bit_cnt = (7U 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__bitrev__DOT__bit_cnt)));
        vlSelf->__PVT__bitrev__DOT__rx_done = (7U == (IData)(vlSelf->__PVT__bitrev__DOT__bit_cnt));
    }
    vlSelf->__PVT__bitrev__DOT__bit_cnt = vlSelf->__Vdly__bitrev__DOT__bit_cnt;
}

VL_INLINE_OPT void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__11(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__11\n"); );
    // Body
    vlSelf->__PVT__bitrev__DOT__tx_shift_reg = vlSelf->__Vdly__bitrev__DOT__tx_shift_reg;
}

VL_INLINE_OPT void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__12(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__12\n"); );
    // Body
    vlSelf->__PVT__flash__DOT__data = vlSelf->__Vdly__flash__DOT__data;
    vlSelf->__PVT__flash__DOT__addr = vlSelf->__Vdly__flash__DOT__addr;
    vlSelf->__PVT__flash__DOT__cmd = vlSelf->__Vdly__flash__DOT__cmd;
    vlSelf->__PVT__flash__DOT__counter = vlSelf->__Vdly__flash__DOT__counter;
    vlSelf->__PVT__flash__DOT__state = vlSelf->__Vdly__flash__DOT__state;
}
