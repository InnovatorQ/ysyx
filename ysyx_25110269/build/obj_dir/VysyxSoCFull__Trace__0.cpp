// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VysyxSoCFull__Syms.h"


void VysyxSoCFull___024root__trace_chg_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedFst::Buffer* bufp);

void VysyxSoCFull___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_chg_top_0\n"); );
    // Init
    VysyxSoCFull___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VysyxSoCFull___024root*>(voidSelf);
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VysyxSoCFull___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VysyxSoCFull___024root__trace_chg_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgCData(oldp+0,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_out_awid),4);
        bufp->chgCData(oldp+1,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
        bufp->chgCData(oldp+2,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_out_arid),4);
        bufp->chgSData(oldp+3,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_out_arid)))),16);
        bufp->chgSData(oldp+4,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_out_awid)))),16);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[3U]) 
                     | vlSelf->__Vm_traceActivity[0xfU]))) {
        bufp->chgBit(oldp+5,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__nodeOut_bready) 
                              & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__idle_4)
                                  ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__readys_readys_1)
                                  : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__state_4_0)))));
        bufp->chgBit(oldp+6,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_8) 
                              & ((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_out_awid)))));
        bufp->chgBit(oldp+7,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & ((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_bT_9)))));
        bufp->chgBit(oldp+8,((0x7fffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_out_awid)) 
                                            >> 1U)))));
        bufp->chgBit(oldp+9,((0x7fffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 1U)))));
        bufp->chgBit(oldp+10,((0x3fffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_8) 
                                          & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_out_awid)) 
                                             >> 2U)))));
        bufp->chgBit(oldp+11,((0x3fffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                          & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                                             >> 2U)))));
        bufp->chgBit(oldp+12,((0x1fffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_8) 
                                          & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_out_awid)) 
                                             >> 3U)))));
        bufp->chgBit(oldp+13,((0x1fffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                          & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                                             >> 3U)))));
        bufp->chgBit(oldp+14,((0xfffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_out_awid)) 
                                            >> 4U)))));
        bufp->chgBit(oldp+15,((0xfffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 4U)))));
        bufp->chgBit(oldp+16,((0x7ffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_out_awid)) 
                                            >> 5U)))));
        bufp->chgBit(oldp+17,((0x7ffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 5U)))));
        bufp->chgBit(oldp+18,((0x3ffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_out_awid)) 
                                            >> 6U)))));
        bufp->chgBit(oldp+19,((0x3ffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 6U)))));
        bufp->chgBit(oldp+20,((0x1ffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_out_awid)) 
                                            >> 7U)))));
        bufp->chgBit(oldp+21,((0x1ffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 7U)))));
        bufp->chgBit(oldp+22,((0xffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_out_awid)) 
                                           >> 8U)))));
        bufp->chgBit(oldp+23,((0xffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 8U)))));
        bufp->chgBit(oldp+24,((0x7fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_out_awid)) 
                                           >> 9U)))));
        bufp->chgBit(oldp+25,((0x7fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 9U)))));
        bufp->chgBit(oldp+26,((0x3fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_out_awid)) 
                                           >> 0xaU)))));
        bufp->chgBit(oldp+27,((0x3fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 0xaU)))));
        bufp->chgBit(oldp+28,((0x1fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_out_awid)) 
                                           >> 0xbU)))));
        bufp->chgBit(oldp+29,((0x1fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 0xbU)))));
        bufp->chgBit(oldp+30,((0xfU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_out_awid)) 
                                          >> 0xcU)))));
        bufp->chgBit(oldp+31,((0xfU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xcU)))));
        bufp->chgBit(oldp+32,((7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_out_awid)) 
                                        >> 0xdU)))));
        bufp->chgBit(oldp+33,((7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                                        >> 0xdU)))));
        bufp->chgBit(oldp+34,((3U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_out_awid)) 
                                        >> 0xeU)))));
        bufp->chgBit(oldp+35,((3U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                                        >> 0xeU)))));
        bufp->chgBit(oldp+36,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_8) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_out_awid)) 
                                  >> 0xfU))));
        bufp->chgBit(oldp+37,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                                  >> 0xfU))));
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[3U]) 
                     | vlSelf->__Vm_traceActivity[0x10U]))) {
        bufp->chgBit(oldp+38,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_out_rready) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__idle_3)
                                   ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__readys_readys)
                                   : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__state_3_0)))));
        bufp->chgBit(oldp+39,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_out_rready) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__idle_3)
                                   ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__readys_readys) 
                                      >> 1U) : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__state_3_1)))));
        bufp->chgBit(oldp+40,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_rT_5)))));
        bufp->chgBit(oldp+41,((0x7fffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                          & ((((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_rT_5))))));
        bufp->chgBit(oldp+42,((0x3fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 0xaU) 
                                           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_rT_5))))));
        bufp->chgBit(oldp+43,((0x1fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 0xbU) 
                                           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_rT_5))))));
        bufp->chgBit(oldp+44,((0xfU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xcU) 
                                          & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_rT_5))))));
        bufp->chgBit(oldp+45,((7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 0xdU) & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_rT_5))))));
        bufp->chgBit(oldp+46,((3U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 0xeU) & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_rT_5))))));
        bufp->chgBit(oldp+47,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_rT_5)) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                                  >> 0xfU))));
        bufp->chgBit(oldp+48,((0x3fffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                          & ((((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                                              >> 2U) 
                                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_rT_5))))));
        bufp->chgBit(oldp+49,((0x1fffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                          & ((((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                                              >> 3U) 
                                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_rT_5))))));
        bufp->chgBit(oldp+50,((0xfffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 4U) 
                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_rT_5))))));
        bufp->chgBit(oldp+51,((0x7ffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 5U) 
                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_rT_5))))));
        bufp->chgBit(oldp+52,((0x3ffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 6U) 
                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_rT_5))))));
        bufp->chgBit(oldp+53,((0x1ffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 7U) 
                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_rT_5))))));
        bufp->chgBit(oldp+54,((0xffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 8U) 
                                           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_rT_5))))));
        bufp->chgBit(oldp+55,((0x7fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 9U) 
                                           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_rT_5))))));
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[3U]) 
                     | vlSelf->__Vm_traceActivity[0x12U]))) {
        bufp->chgBit(oldp+56,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                               & ((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_out_arid)))));
        bufp->chgBit(oldp+57,((0x7fffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                                          & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_out_arid)) 
                                             >> 1U)))));
        bufp->chgBit(oldp+58,((0x3fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_out_arid)) 
                                           >> 0xaU)))));
        bufp->chgBit(oldp+59,((0x1fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_out_arid)) 
                                           >> 0xbU)))));
        bufp->chgBit(oldp+60,((0xfU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_out_arid)) 
                                          >> 0xcU)))));
        bufp->chgBit(oldp+61,((7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_out_arid)) 
                                        >> 0xdU)))));
        bufp->chgBit(oldp+62,((3U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_out_arid)) 
                                        >> 0xeU)))));
        bufp->chgBit(oldp+63,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_out_arid)) 
                                  >> 0xfU))));
        bufp->chgBit(oldp+64,((0x3fffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                                          & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_out_arid)) 
                                             >> 2U)))));
        bufp->chgBit(oldp+65,((0x1fffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                                          & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_out_arid)) 
                                             >> 3U)))));
        bufp->chgBit(oldp+66,((0xfffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_out_arid)) 
                                            >> 4U)))));
        bufp->chgBit(oldp+67,((0x7ffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_out_arid)) 
                                            >> 5U)))));
        bufp->chgBit(oldp+68,((0x3ffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_out_arid)) 
                                            >> 6U)))));
        bufp->chgBit(oldp+69,((0x1ffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_out_arid)) 
                                            >> 7U)))));
        bufp->chgBit(oldp+70,((0xffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_out_arid)) 
                                           >> 8U)))));
        bufp->chgBit(oldp+71,((0x7fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_out_arid)) 
                                           >> 9U)))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[8U]))) {
        bufp->chgBit(oldp+72,((1U & (~ (IData)((0U 
                                                != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__len_1)))))));
        bufp->chgCData(oldp+73,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__len_1),8);
        bufp->chgCData(oldp+74,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
        bufp->chgBit(oldp+75,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__is_write));
        bufp->chgBit(oldp+76,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__reg_we));
        bufp->chgBit(oldp+77,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__reg_re));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[9U]))) {
        bufp->chgCData(oldp+78,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
        bufp->chgCData(oldp+79,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_out_wstrb),4);
        bufp->chgBit(oldp+80,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0_io_enq_valid));
        bufp->chgBit(oldp+81,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__in_0_wvalid));
        bufp->chgBit(oldp+82,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[0xbU]))) {
        bufp->chgBit(oldp+83,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
        bufp->chgBit(oldp+84,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
        bufp->chgBit(oldp+85,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
        bufp->chgBit(oldp+86,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
        bufp->chgBit(oldp+87,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
        bufp->chgBit(oldp+88,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[0xdU]))) {
        bufp->chgBit(oldp+89,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__in_0_awvalid) 
                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__requestAWIO_0_0))));
        bufp->chgIData(oldp+90,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_out_awaddr),32);
        bufp->chgBit(oldp+91,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__in_0_wvalid) 
                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___awIn_0_io_deq_bits))));
        bufp->chgIData(oldp+92,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_out_wdata),32);
        bufp->chgBit(oldp+93,((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__w_todo))));
        bufp->chgBit(oldp+94,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq));
        bufp->chgBit(oldp+95,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq));
        bufp->chgBit(oldp+96,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4delay_delayer_out_awvalid));
        bufp->chgBit(oldp+97,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4delay_delayer_out_wvalid));
        bufp->chgBit(oldp+98,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4xbar_auto_anon_out_0_awvalid));
        bufp->chgBit(oldp+99,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4xbar_auto_anon_out_0_wvalid));
        bufp->chgBit(oldp+100,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__nodeOut_awvalid));
        bufp->chgBit(oldp+101,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__nodeOut_wvalid));
        bufp->chgIData(oldp+102,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__addr_1),32);
        bufp->chgBit(oldp+103,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__wbeats_valid));
        bufp->chgSData(oldp+104,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__w_todo),9);
        bufp->chgBit(oldp+105,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
        bufp->chgIData(oldp+106,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
        bufp->chgBit(oldp+107,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
        bufp->chgBit(oldp+108,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4xbar_1_auto_anon_out_2_awvalid));
        bufp->chgIData(oldp+109,((0xfffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_out_awaddr)),28);
        bufp->chgBit(oldp+110,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__in_0_wvalid) 
                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                   >> 2U))));
        bufp->chgBit(oldp+111,((0x7800U == (0x7fffU 
                                            & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_out_awaddr 
                                               >> 0xdU)))));
        bufp->chgSData(oldp+112,((0x7ffU & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_out_awaddr 
                                            >> 2U))),11);
        bufp->chgBit(oldp+113,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__in_0_awvalid));
        bufp->chgCData(oldp+114,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT___awIn_0_io_deq_bits),2);
        bufp->chgBit(oldp+115,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4yank_auto_out_awvalid));
        bufp->chgBit(oldp+116,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__in_0_awvalid) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__requestAWIO_0_1))));
        bufp->chgBit(oldp+117,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__in_0_wvalid) 
                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                   >> 1U))));
        bufp->chgBit(oldp+118,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__requestAWIO_0_0));
        bufp->chgBit(oldp+119,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__requestAWIO_0_1));
        bufp->chgBit(oldp+120,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__requestAWIO_0_2));
        bufp->chgBit(oldp+121,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__in_0_awvalid));
        bufp->chgBit(oldp+122,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
        bufp->chgBit(oldp+123,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__in_0_wvalid));
        bufp->chgCData(oldp+124,(vlSymsp->TOP__ysyxSoCFull__asic.axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
        bufp->chgBit(oldp+125,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
        bufp->chgCData(oldp+126,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[0xfU]))) {
        bufp->chgBit(oldp+127,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4yank_auto_in_awready));
        bufp->chgBit(oldp+128,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4yank_auto_in_wready));
        bufp->chgBit(oldp+129,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__nodeOut_bready));
        bufp->chgBit(oldp+130,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__in_awready));
        bufp->chgBit(oldp+131,(vlSymsp->TOP__ysyxSoCFull__asic.axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
        bufp->chgBit(oldp+132,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q_1__DOT__do_enq));
        bufp->chgBit(oldp+133,(vlSymsp->TOP__ysyxSoCFull__asic.axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
        bufp->chgBit(oldp+134,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
        bufp->chgBit(oldp+135,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__nodeIn_awready));
        bufp->chgBit(oldp+136,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4xbar_1_auto_anon_out_2_bready));
        bufp->chgBit(oldp+137,(vlSymsp->TOP__ysyxSoCFull__asic.axi4ram__DOT____Vcellinp__mem_ext__W0_en));
        bufp->chgBit(oldp+138,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__anonIn_awready));
        bufp->chgBit(oldp+139,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__in_0_wready));
        bufp->chgBit(oldp+140,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__in_0_awready));
        bufp->chgBit(oldp+141,(vlSymsp->TOP__ysyxSoCFull__asic.axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
        bufp->chgBit(oldp+142,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
        bufp->chgBit(oldp+143,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[0x10U]))) {
        bufp->chgBit(oldp+144,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_out_rready));
        bufp->chgBit(oldp+145,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__nodeIn_arready));
        bufp->chgBit(oldp+146,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4xbar_1_auto_anon_out_2_rready));
        bufp->chgBit(oldp+147,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w));
        bufp->chgCData(oldp+148,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__axi_xbar__DOT__next_state),2);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[0x11U]))) {
        bufp->chgBit(oldp+149,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4yank_auto_out_arvalid) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__requestARIO_0_0))));
        bufp->chgIData(oldp+150,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_out_araddr),32);
        bufp->chgCData(oldp+151,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
        bufp->chgCData(oldp+152,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
        bufp->chgBit(oldp+153,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq));
        bufp->chgBit(oldp+154,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4delay_delayer_out_arvalid));
        bufp->chgBit(oldp+155,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4xbar_auto_anon_out_0_arvalid));
        bufp->chgBit(oldp+156,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
        bufp->chgBit(oldp+157,((1U & (~ (IData)((0U 
                                                 != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__len)))))));
        bufp->chgCData(oldp+158,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__len),8);
        bufp->chgIData(oldp+159,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__addr),32);
        bufp->chgIData(oldp+160,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
        bufp->chgCData(oldp+161,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
        bufp->chgBit(oldp+162,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4yank_auto_out_arvalid) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__requestARIO_0_2))));
        bufp->chgIData(oldp+163,((0xfffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_out_araddr)),28);
        bufp->chgSData(oldp+164,((0x7ffU & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_out_araddr 
                                            >> 2U))),11);
        bufp->chgBit(oldp+165,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__in_0_arvalid));
        bufp->chgBit(oldp+166,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4yank_auto_out_arvalid));
        bufp->chgBit(oldp+167,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4yank_auto_out_arvalid) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__requestARIO_0_1))));
        bufp->chgIData(oldp+168,((0x3fffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_out_araddr)),30);
        bufp->chgBit(oldp+169,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__requestARIO_0_0));
        bufp->chgBit(oldp+170,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__requestARIO_0_1));
        bufp->chgBit(oldp+171,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__requestARIO_0_2));
        bufp->chgIData(oldp+172,((0x3fffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_out_araddr)),32);
        bufp->chgBit(oldp+173,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lmrom__DOT___nodeIn_rid_T));
        bufp->chgIData(oldp+174,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lmrom__DOT___mrom_rdata),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[0x12U]))) {
        bufp->chgBit(oldp+175,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4delay_delayer_in_arready));
        bufp->chgBit(oldp+176,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4delay_delayer_in_awready));
        bufp->chgBit(oldp+177,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4delay_delayer_in_wready));
        bufp->chgBit(oldp+178,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4yank_auto_in_arready));
        bufp->chgBit(oldp+179,(vlSymsp->TOP__ysyxSoCFull__asic.axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
        bufp->chgBit(oldp+180,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q__DOT__do_enq));
        bufp->chgBit(oldp+181,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__ren));
        bufp->chgBit(oldp+182,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__anonIn_awready));
        bufp->chgBit(oldp+183,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__anonIn_arready));
        bufp->chgBit(oldp+184,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__in_0_wready));
        bufp->chgBit(oldp+185,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__in_0_awready));
        bufp->chgBit(oldp+186,(vlSymsp->TOP__ysyxSoCFull__asic.axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready));
        bufp->chgBit(oldp+187,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__do_deq));
        bufp->chgBit(oldp+188,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__do_enq));
        bufp->chgBit(oldp+189,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__in_0_arready));
        bufp->chgIData(oldp+190,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w),32);
        bufp->chgCData(oldp+191,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w),4);
        bufp->chgBit(oldp+192,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w));
        bufp->chgBit(oldp+193,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w));
        bufp->chgBit(oldp+194,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w));
        bufp->chgBit(oldp+195,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w));
        bufp->chgCData(oldp+196,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r),4);
        bufp->chgCData(oldp+197,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r),4);
        bufp->chgSData(oldp+198,((0x1feU & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                            >> 1U))),13);
        bufp->chgSData(oldp+199,((0x1fffU & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                             >> 0xcU))),13);
        bufp->chgCData(oldp+200,((3U & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                        >> 0xaU))),2);
        bufp->chgBit(oldp+201,((1U & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                      >> 0x19U))));
        bufp->chgCData(oldp+202,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r),4);
        bufp->chgBit(oldp+203,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__axi_xbar__DOT__arready));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[0xeU]))) {
        bufp->chgBit(oldp+204,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___apbdelay_delayer_in_pready));
        bufp->chgBit(oldp+205,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__nodeIn_bvalid));
        bufp->chgBit(oldp+206,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__nodeIn_rvalid));
        bufp->chgBit(oldp+207,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq));
        bufp->chgBit(oldp+208,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq));
        bufp->chgBit(oldp+209,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done));
        bufp->chgCData(oldp+210,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__FINAL_COUNT),8);
        bufp->chgCData(oldp+211,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgSData(oldp+212,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__led),16);
        bufp->chgCData(oldp+213,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__segs
                                 [0U]),8);
        bufp->chgCData(oldp+214,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__segs
                                 [1U]),8);
        bufp->chgCData(oldp+215,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__segs
                                 [2U]),8);
        bufp->chgCData(oldp+216,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__segs
                                 [3U]),8);
        bufp->chgCData(oldp+217,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__segs
                                 [4U]),8);
        bufp->chgCData(oldp+218,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__segs
                                 [5U]),8);
        bufp->chgCData(oldp+219,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__segs
                                 [6U]),8);
        bufp->chgCData(oldp+220,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__segs
                                 [7U]),8);
        bufp->chgCData(oldp+221,((0xffU & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__vga_data 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+222,((0xffU & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__vga_data 
                                           >> 8U))),8);
        bufp->chgCData(oldp+223,((0xffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__vga_data)),8);
        bufp->chgBit(oldp+224,((0x60U < (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__x_cnt))));
        bufp->chgBit(oldp+225,((2U < (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__y_cnt))));
        bufp->chgBit(oldp+226,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__h_valid) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__v_valid))));
        bufp->chgBit(oldp+227,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi42apb_auto_out_psel));
        bufp->chgBit(oldp+228,((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state))));
        bufp->chgIData(oldp+229,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi42apb_auto_out_pwdata),32);
        bufp->chgIData(oldp+230,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ready)
                                   ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__fifo
                                  [vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__r_ptr]
                                   : 0U)),32);
        bufp->chgIData(oldp+231,(((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                   [3U] << 0x18U) | 
                                  ((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                    [2U] << 0x10U) 
                                   | ((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                       [1U] << 8U) 
                                      | vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                      [0U])))),32);
        bufp->chgBit(oldp+232,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__accept_write));
        bufp->chgBit(oldp+233,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)))));
        bufp->chgCData(oldp+234,((0xfU & (IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                                  >> 0x2bU)))),4);
        bufp->chgIData(oldp+235,((IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                          >> 0xbU))),32);
        bufp->chgCData(oldp+236,((0xffU & (IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                                   >> 3U)))),8);
        bufp->chgCData(oldp+237,((7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data))),3);
        bufp->chgBit(oldp+238,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
        bufp->chgIData(oldp+239,((IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
                                          >> 4U))),32);
        bufp->chgCData(oldp+240,((0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data))),4);
        bufp->chgBit(oldp+241,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)))));
        bufp->chgCData(oldp+242,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__bid_reg),4);
        bufp->chgCData(oldp+243,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__resp_hold),2);
        bufp->chgBit(oldp+244,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__accept_read));
        bufp->chgBit(oldp+245,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)))));
        bufp->chgCData(oldp+246,((0xfU & (IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                                  >> 0x2bU)))),4);
        bufp->chgIData(oldp+247,((IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                          >> 0xbU))),32);
        bufp->chgCData(oldp+248,((0xffU & (IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                                   >> 3U)))),8);
        bufp->chgCData(oldp+249,((7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data))),3);
        bufp->chgBit(oldp+250,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)))));
        bufp->chgCData(oldp+251,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__rid_reg),4);
        bufp->chgCData(oldp+252,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state),2);
        bufp->chgBit(oldp+253,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__is_write_r));
        bufp->chgIData(oldp+254,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__araddr_reg_r),32);
        bufp->chgIData(oldp+255,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__awaddr_reg_r),32);
        bufp->chgIData(oldp+256,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__wdata_reg_r),32);
        bufp->chgCData(oldp+257,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__wstrb_reg_r),4);
        bufp->chgCData(oldp+258,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__resp_hold_r),2);
        bufp->chgIData(oldp+259,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__nodeIn_rdata_r),32);
        bufp->chgBit(oldp+260,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)))));
        bufp->chgBit(oldp+261,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)))));
        bufp->chgBit(oldp+262,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)))));
        bufp->chgCData(oldp+263,((0xfU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data) 
                                          >> 2U))),4);
        bufp->chgCData(oldp+264,((3U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data))),2);
        bufp->chgBit(oldp+265,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)))));
        bufp->chgBit(oldp+266,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
        bufp->chgCData(oldp+267,((0xfU & (IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                                  >> 0x23U)))),4);
        bufp->chgIData(oldp+268,((IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                          >> 3U))),32);
        bufp->chgCData(oldp+269,((3U & (IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                                >> 1U)))),2);
        bufp->chgBit(oldp+270,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data))));
        bufp->chgBit(oldp+271,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap));
        bufp->chgBit(oldp+272,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
        bufp->chgBit(oldp+273,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
        bufp->chgBit(oldp+274,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
        bufp->chgBit(oldp+275,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty));
        bufp->chgBit(oldp+276,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full));
        bufp->chgCData(oldp+277,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data),6);
        bufp->chgCData(oldp+278,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__bid_reg) 
                                   << 2U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__resp_hold))),6);
        bufp->chgCData(oldp+279,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[0]),6);
        bufp->chgCData(oldp+280,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[1]),6);
        bufp->chgBit(oldp+281,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq));
        bufp->chgBit(oldp+282,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap));
        bufp->chgBit(oldp+283,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
        bufp->chgBit(oldp+284,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
        bufp->chgBit(oldp+285,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
        bufp->chgBit(oldp+286,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty));
        bufp->chgBit(oldp+287,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full));
        bufp->chgQData(oldp+288,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data),39);
        bufp->chgQData(oldp+290,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[0]),39);
        bufp->chgQData(oldp+292,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[1]),39);
        bufp->chgBit(oldp+294,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq));
        bufp->chgBit(oldp+295,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap));
        bufp->chgBit(oldp+296,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
        bufp->chgBit(oldp+297,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
        bufp->chgBit(oldp+298,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
        bufp->chgBit(oldp+299,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty));
        bufp->chgBit(oldp+300,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full));
        bufp->chgQData(oldp+301,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data),47);
        bufp->chgQData(oldp+303,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[0]),47);
        bufp->chgQData(oldp+305,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[1]),47);
        bufp->chgBit(oldp+307,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq));
        bufp->chgBit(oldp+308,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap));
        bufp->chgBit(oldp+309,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
        bufp->chgBit(oldp+310,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
        bufp->chgBit(oldp+311,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
        bufp->chgBit(oldp+312,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty));
        bufp->chgBit(oldp+313,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full));
        bufp->chgQData(oldp+314,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data),47);
        bufp->chgQData(oldp+316,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[0]),47);
        bufp->chgQData(oldp+318,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[1]),47);
        bufp->chgBit(oldp+320,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq));
        bufp->chgBit(oldp+321,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap));
        bufp->chgBit(oldp+322,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
        bufp->chgBit(oldp+323,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
        bufp->chgBit(oldp+324,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
        bufp->chgBit(oldp+325,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty));
        bufp->chgBit(oldp+326,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full));
        bufp->chgQData(oldp+327,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data),36);
        bufp->chgQData(oldp+329,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[0]),36);
        bufp->chgQData(oldp+331,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[1]),36);
        bufp->chgBit(oldp+333,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq));
        bufp->chgBit(oldp+334,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q_1__DOT__full)))));
        bufp->chgBit(oldp+335,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
        bufp->chgBit(oldp+336,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_in_bvalid));
        bufp->chgCData(oldp+337,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_bT_9),4);
        bufp->chgCData(oldp+338,((3U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4yank_auto_in_bresp) 
                                        | ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_15) 
                                             << 0x1eU) 
                                            | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_14) 
                                                << 0x1cU) 
                                               | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_13) 
                                                   << 0x1aU) 
                                                  | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_12) 
                                                      << 0x18U) 
                                                     | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_11) 
                                                         << 0x16U) 
                                                        | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_10) 
                                                            << 0x14U) 
                                                           | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_9) 
                                                               << 0x12U) 
                                                              | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_8) 
                                                                  << 0x10U) 
                                                                 | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_7) 
                                                                     << 0xeU) 
                                                                    | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_6) 
                                                                        << 0xcU) 
                                                                       | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_5) 
                                                                           << 0xaU) 
                                                                          | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_4) 
                                                                              << 8U) 
                                                                             | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_3) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_0)))))))))))))))) 
                                           >> (0x1fU 
                                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_bT_9) 
                                                  << 1U)))))),2);
        bufp->chgBit(oldp+339,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q__DOT__full)))));
        bufp->chgBit(oldp+340,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__in_0_rvalid));
        bufp->chgCData(oldp+341,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_rT_20),4);
        bufp->chgIData(oldp+342,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_0)
                                    ? (IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                               >> 3U))
                                    : 0U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_1)
                                               ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lmrom__DOT__nodeIn_rdata_r
                                               : 0U) 
                                             | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_2)
                                                 ? 
                                                ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_REG)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                     ? 
                                                    (vlSymsp->TOP__ysyxSoCFull__asic.__VdfgTmp_hed8e2367__0 
                                                     >> 0x18U)
                                                     : 0U)
                                                    : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r3)) 
                                                  << 0x18U) 
                                                 | ((0xff0000U 
                                                     & (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_REG)
                                                          ? 
                                                         ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                           ? 
                                                          (vlSymsp->TOP__ysyxSoCFull__asic.__VdfgTmp_hed8e2367__0 
                                                           >> 0x10U)
                                                           : 0U)
                                                          : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r2)) 
                                                        << 0x10U)) 
                                                    | ((0xff00U 
                                                        & (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_REG)
                                                             ? 
                                                            ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                              ? 
                                                             (vlSymsp->TOP__ysyxSoCFull__asic.__VdfgTmp_hed8e2367__0 
                                                              >> 8U)
                                                              : 0U)
                                                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r1)) 
                                                           << 8U)) 
                                                       | (0xffU 
                                                          & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_REG)
                                                              ? 
                                                             ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                               ? vlSymsp->TOP__ysyxSoCFull__asic.__VdfgTmp_hed8e2367__0
                                                               : 0U)
                                                              : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r0))))))
                                                 : 0U)))),32);
        bufp->chgCData(oldp+343,((3U & (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_0)
                                          ? (IData)(
                                                    (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                                     >> 1U))
                                          : 0U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_2)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__r_sel1)
                                                     ? 0U
                                                     : 3U)
                                                    : 0U)))),2);
        bufp->chgBit(oldp+344,((((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                   << 0xfU) | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                                << 0xeU) 
                                               | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                                   << 0xdU) 
                                                  | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                      << 0xcU) 
                                                     | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                         << 0xbU) 
                                                        | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                            << 0xaU) 
                                                           | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                               << 9U) 
                                                              | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                                  << 8U) 
                                                                 | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                     << 7U) 
                                                                    | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                        << 6U) 
                                                                       | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                           << 5U) 
                                                                          | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                              << 4U) 
                                                                             | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                                 >> (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_rT_5))));
        bufp->chgBit(oldp+345,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__in_0_bvalid));
        bufp->chgCData(oldp+346,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4yank_auto_in_bresp),2);
        bufp->chgBit(oldp+347,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4yank_auto_in_becho_real_last));
        bufp->chgBit(oldp+348,((1U & ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                        << 0xfU) | 
                                       (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                         << 0xeU) | 
                                        (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                          << 0xdU) 
                                         | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                             << 0xcU) 
                                            | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                << 0xbU) 
                                               | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                   << 0xaU) 
                                                  | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                      << 9U) 
                                                     | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                         << 8U) 
                                                        | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                            << 7U) 
                                                           | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                               << 6U) 
                                                              | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                  << 5U) 
                                                                 | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                     << 4U) 
                                                                    | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                        << 3U) 
                                                                       | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                           << 2U) 
                                                                          | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                              << 1U) 
                                                                             | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                                      >> (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_rT_20)))));
        bufp->chgBit(oldp+349,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_rT_5));
        bufp->chgBit(oldp+350,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__w_counter))));
        bufp->chgBit(oldp+351,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__busy));
        bufp->chgIData(oldp+352,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__r_addr),32);
        bufp->chgCData(oldp+353,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__r_len),8);
        bufp->chgBit(oldp+354,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__busy_1));
        bufp->chgIData(oldp+355,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__r_addr_1),32);
        bufp->chgCData(oldp+356,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__r_len_1),8);
        bufp->chgBit(oldp+357,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__wbeats_latched));
        bufp->chgSData(oldp+358,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__w_counter),9);
        bufp->chgCData(oldp+359,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_0),2);
        bufp->chgCData(oldp+360,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_1),2);
        bufp->chgCData(oldp+361,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_2),2);
        bufp->chgCData(oldp+362,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_3),2);
        bufp->chgCData(oldp+363,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_4),2);
        bufp->chgCData(oldp+364,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_5),2);
        bufp->chgCData(oldp+365,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_6),2);
        bufp->chgCData(oldp+366,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_7),2);
        bufp->chgCData(oldp+367,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_8),2);
        bufp->chgCData(oldp+368,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_9),2);
        bufp->chgCData(oldp+369,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_10),2);
        bufp->chgCData(oldp+370,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_11),2);
        bufp->chgCData(oldp+371,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_12),2);
        bufp->chgCData(oldp+372,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_13),2);
        bufp->chgCData(oldp+373,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_14),2);
        bufp->chgCData(oldp+374,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_15),2);
        bufp->chgQData(oldp+375,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q__DOT__ram),49);
        bufp->chgBit(oldp+377,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q__DOT__full));
        bufp->chgQData(oldp+378,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q_1__DOT__ram),49);
        bufp->chgBit(oldp+380,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q_1__DOT__full));
        bufp->chgQData(oldp+381,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
        bufp->chgBit(oldp+383,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full));
        bufp->chgBit(oldp+384,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__w_full));
        bufp->chgCData(oldp+385,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__w_id),4);
        bufp->chgCData(oldp+386,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__w_sel1)
                                   ? 0U : 3U)),2);
        bufp->chgBit(oldp+387,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__r_full));
        bufp->chgCData(oldp+388,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__r_id),4);
        bufp->chgIData(oldp+389,(((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_REG)
                                     ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                         ? (vlSymsp->TOP__ysyxSoCFull__asic.__VdfgTmp_hed8e2367__0 
                                            >> 0x18U)
                                         : 0U) : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r3)) 
                                   << 0x18U) | ((0xff0000U 
                                                 & (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_REG)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                       ? 
                                                      (vlSymsp->TOP__ysyxSoCFull__asic.__VdfgTmp_hed8e2367__0 
                                                       >> 0x10U)
                                                       : 0U)
                                                      : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r2)) 
                                                    << 0x10U)) 
                                                | ((0xff00U 
                                                    & (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_REG)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                          ? 
                                                         (vlSymsp->TOP__ysyxSoCFull__asic.__VdfgTmp_hed8e2367__0 
                                                          >> 8U)
                                                          : 0U)
                                                         : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r1)) 
                                                       << 8U)) 
                                                   | (0xffU 
                                                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_REG)
                                                          ? 
                                                         ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                           ? vlSymsp->TOP__ysyxSoCFull__asic.__VdfgTmp_hed8e2367__0
                                                           : 0U)
                                                          : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r0))))))),32);
        bufp->chgCData(oldp+390,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__r_sel1)
                                   ? 0U : 3U)),2);
        bufp->chgBit(oldp+391,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__r_sel1));
        bufp->chgBit(oldp+392,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__w_sel1));
        bufp->chgBit(oldp+393,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_REG));
        bufp->chgCData(oldp+394,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r0),8);
        bufp->chgCData(oldp+395,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r1),8);
        bufp->chgCData(oldp+396,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r2),8);
        bufp->chgCData(oldp+397,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r3),8);
        bufp->chgIData(oldp+398,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT___mem_ext_R0_data),32);
        bufp->chgCData(oldp+399,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_0_count),3);
        bufp->chgBit(oldp+400,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_0_last));
        bufp->chgCData(oldp+401,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_0_count),3);
        bufp->chgBit(oldp+402,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_0_last));
        bufp->chgCData(oldp+403,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_1_count),3);
        bufp->chgBit(oldp+404,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_1_last));
        bufp->chgCData(oldp+405,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_1_count),3);
        bufp->chgBit(oldp+406,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_1_last));
        bufp->chgCData(oldp+407,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_2_count),3);
        bufp->chgBit(oldp+408,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_2_last));
        bufp->chgCData(oldp+409,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_2_count),3);
        bufp->chgBit(oldp+410,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_2_last));
        bufp->chgCData(oldp+411,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_3_count),3);
        bufp->chgBit(oldp+412,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_3_last));
        bufp->chgCData(oldp+413,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_3_count),3);
        bufp->chgBit(oldp+414,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_3_last));
        bufp->chgCData(oldp+415,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_4_count),3);
        bufp->chgBit(oldp+416,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_4_last));
        bufp->chgCData(oldp+417,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_4_count),3);
        bufp->chgBit(oldp+418,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_4_last));
        bufp->chgCData(oldp+419,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_5_count),3);
        bufp->chgBit(oldp+420,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_5_last));
        bufp->chgCData(oldp+421,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_5_count),3);
        bufp->chgBit(oldp+422,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_5_last));
        bufp->chgCData(oldp+423,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_6_count),3);
        bufp->chgBit(oldp+424,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_6_last));
        bufp->chgCData(oldp+425,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_6_count),3);
        bufp->chgBit(oldp+426,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_6_last));
        bufp->chgCData(oldp+427,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_7_count),3);
        bufp->chgBit(oldp+428,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_7_last));
        bufp->chgCData(oldp+429,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_7_count),3);
        bufp->chgBit(oldp+430,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_7_last));
        bufp->chgCData(oldp+431,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_8_count),3);
        bufp->chgBit(oldp+432,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_8_last));
        bufp->chgCData(oldp+433,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_8_count),3);
        bufp->chgBit(oldp+434,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_8_last));
        bufp->chgCData(oldp+435,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_9_count),3);
        bufp->chgBit(oldp+436,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_9_last));
        bufp->chgCData(oldp+437,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_9_count),3);
        bufp->chgBit(oldp+438,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_9_last));
        bufp->chgCData(oldp+439,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_10_count),3);
        bufp->chgBit(oldp+440,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_10_last));
        bufp->chgCData(oldp+441,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_10_count),3);
        bufp->chgBit(oldp+442,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_10_last));
        bufp->chgCData(oldp+443,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_11_count),3);
        bufp->chgBit(oldp+444,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_11_last));
        bufp->chgCData(oldp+445,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_11_count),3);
        bufp->chgBit(oldp+446,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_11_last));
        bufp->chgCData(oldp+447,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_12_count),3);
        bufp->chgBit(oldp+448,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_12_last));
        bufp->chgCData(oldp+449,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_12_count),3);
        bufp->chgBit(oldp+450,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_12_last));
        bufp->chgCData(oldp+451,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_13_count),3);
        bufp->chgBit(oldp+452,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_13_last));
        bufp->chgCData(oldp+453,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_13_count),3);
        bufp->chgBit(oldp+454,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_13_last));
        bufp->chgCData(oldp+455,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_14_count),3);
        bufp->chgBit(oldp+456,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_14_last));
        bufp->chgCData(oldp+457,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_14_count),3);
        bufp->chgBit(oldp+458,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_14_last));
        bufp->chgCData(oldp+459,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_15_count),3);
        bufp->chgBit(oldp+460,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_15_last));
        bufp->chgCData(oldp+461,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_15_count),3);
        bufp->chgBit(oldp+462,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_15_last));
        bufp->chgBit(oldp+463,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__latched));
        bufp->chgBit(oldp+464,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__idle_2));
        bufp->chgCData(oldp+465,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__readys_mask),2);
        bufp->chgBit(oldp+466,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__state_2_0));
        bufp->chgBit(oldp+467,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__state_2_1));
        bufp->chgBit(oldp+468,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__idle_3));
        bufp->chgCData(oldp+469,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__readys_mask_1),2);
        bufp->chgBit(oldp+470,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__state_3_0));
        bufp->chgBit(oldp+471,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__state_3_1));
        bufp->chgBit(oldp+472,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__full)))));
        bufp->chgBit(oldp+473,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__wrap));
        bufp->chgBit(oldp+474,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__wrap_1));
        bufp->chgBit(oldp+475,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__maybe_full));
        bufp->chgBit(oldp+476,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__ptr_match));
        bufp->chgBit(oldp+477,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__empty));
        bufp->chgBit(oldp+478,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__full));
        bufp->chgCData(oldp+479,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                                 [vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__wrap_1]),2);
        bufp->chgCData(oldp+480,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),2);
        bufp->chgCData(oldp+481,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),2);
        bufp->chgBit(oldp+482,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lmrom__DOT__state)))));
        bufp->chgBit(oldp+483,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lmrom__DOT__state));
        bufp->chgCData(oldp+484,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lmrom__DOT__nodeIn_rid_r),4);
        bufp->chgIData(oldp+485,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lmrom__DOT__nodeIn_rdata_r),32);
        bufp->chgSData(oldp+486,((0xffffU & ((IData)(1U) 
                                             << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_rT_20)))),16);
        bufp->chgSData(oldp+487,((0xffffU & ((IData)(1U) 
                                             << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_bT_9)))),16);
        bufp->chgBit(oldp+488,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_0_count));
        bufp->chgBit(oldp+489,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_0_count));
        bufp->chgBit(oldp+490,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_1_count));
        bufp->chgBit(oldp+491,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_1_count));
        bufp->chgBit(oldp+492,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_2_count));
        bufp->chgBit(oldp+493,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_2_count));
        bufp->chgBit(oldp+494,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_3_count));
        bufp->chgBit(oldp+495,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_3_count));
        bufp->chgBit(oldp+496,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_4_count));
        bufp->chgBit(oldp+497,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_4_count));
        bufp->chgBit(oldp+498,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_5_count));
        bufp->chgBit(oldp+499,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_5_count));
        bufp->chgBit(oldp+500,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_6_count));
        bufp->chgBit(oldp+501,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_6_count));
        bufp->chgBit(oldp+502,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_7_count));
        bufp->chgBit(oldp+503,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_7_count));
        bufp->chgBit(oldp+504,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_8_count));
        bufp->chgBit(oldp+505,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_8_count));
        bufp->chgBit(oldp+506,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_9_count));
        bufp->chgBit(oldp+507,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_9_count));
        bufp->chgBit(oldp+508,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_10_count));
        bufp->chgBit(oldp+509,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_10_count));
        bufp->chgBit(oldp+510,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_11_count));
        bufp->chgBit(oldp+511,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_11_count));
        bufp->chgBit(oldp+512,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_12_count));
        bufp->chgBit(oldp+513,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_12_count));
        bufp->chgBit(oldp+514,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_13_count));
        bufp->chgBit(oldp+515,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_13_count));
        bufp->chgBit(oldp+516,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_14_count));
        bufp->chgBit(oldp+517,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_14_count));
        bufp->chgBit(oldp+518,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_15_count));
        bufp->chgBit(oldp+519,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_15_count));
        bufp->chgBit(oldp+520,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__latched));
        bufp->chgBit(oldp+521,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__idle_3));
        bufp->chgBit(oldp+522,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__anyValid));
        bufp->chgCData(oldp+523,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__readys_valid),3);
        bufp->chgCData(oldp+524,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__readys_mask),3);
        bufp->chgCData(oldp+525,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__readys_unready),6);
        bufp->chgCData(oldp+526,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__readys_readys),3);
        bufp->chgBit(oldp+527,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__prefixOR_1));
        bufp->chgBit(oldp+528,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__winner_3_1));
        bufp->chgBit(oldp+529,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__winner_3_2));
        bufp->chgBit(oldp+530,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__state_3_0));
        bufp->chgBit(oldp+531,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__state_3_1));
        bufp->chgBit(oldp+532,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__state_3_2));
        bufp->chgBit(oldp+533,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_0));
        bufp->chgBit(oldp+534,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_1));
        bufp->chgBit(oldp+535,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_2));
        bufp->chgBit(oldp+536,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__idle_4));
        bufp->chgBit(oldp+537,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__anyValid_1));
        bufp->chgCData(oldp+538,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__readys_valid_1),3);
        bufp->chgCData(oldp+539,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__readys_mask_1),3);
        bufp->chgCData(oldp+540,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__readys_unready_1),6);
        bufp->chgCData(oldp+541,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__readys_readys_1),3);
        bufp->chgBit(oldp+542,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__winner_4_0));
        bufp->chgBit(oldp+543,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__winner_4_2));
        bufp->chgBit(oldp+544,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__state_4_0));
        bufp->chgBit(oldp+545,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__state_4_2));
        bufp->chgBit(oldp+546,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_4_0));
        bufp->chgBit(oldp+547,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_4_2));
        bufp->chgBit(oldp+548,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
        bufp->chgBit(oldp+549,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
        bufp->chgBit(oldp+550,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
        bufp->chgBit(oldp+551,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
        bufp->chgBit(oldp+552,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
        bufp->chgBit(oldp+553,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__empty));
        bufp->chgBit(oldp+554,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__full));
        bufp->chgCData(oldp+555,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                                 [vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
        bufp->chgCData(oldp+556,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
        bufp->chgCData(oldp+557,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
        bufp->chgBit(oldp+558,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
        bufp->chgBit(oldp+559,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
        bufp->chgBit(oldp+560,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
        bufp->chgBit(oldp+561,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+562,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
        bufp->chgBit(oldp+563,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
        bufp->chgBit(oldp+564,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
        bufp->chgBit(oldp+565,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+566,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
        bufp->chgBit(oldp+567,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
        bufp->chgBit(oldp+568,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
        bufp->chgBit(oldp+569,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+570,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
        bufp->chgBit(oldp+571,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
        bufp->chgBit(oldp+572,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
        bufp->chgBit(oldp+573,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+574,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
        bufp->chgBit(oldp+575,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
        bufp->chgBit(oldp+576,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
        bufp->chgBit(oldp+577,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+578,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
        bufp->chgBit(oldp+579,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
        bufp->chgBit(oldp+580,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
        bufp->chgBit(oldp+581,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+582,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
        bufp->chgBit(oldp+583,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
        bufp->chgBit(oldp+584,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
        bufp->chgBit(oldp+585,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+586,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
        bufp->chgBit(oldp+587,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
        bufp->chgBit(oldp+588,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
        bufp->chgBit(oldp+589,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+590,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
        bufp->chgBit(oldp+591,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
        bufp->chgBit(oldp+592,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
        bufp->chgBit(oldp+593,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+594,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
        bufp->chgBit(oldp+595,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
        bufp->chgBit(oldp+596,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
        bufp->chgBit(oldp+597,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+598,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
        bufp->chgBit(oldp+599,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
        bufp->chgBit(oldp+600,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
        bufp->chgBit(oldp+601,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+602,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
        bufp->chgBit(oldp+603,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
        bufp->chgBit(oldp+604,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
        bufp->chgBit(oldp+605,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+606,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
        bufp->chgBit(oldp+607,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
        bufp->chgBit(oldp+608,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
        bufp->chgBit(oldp+609,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+610,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
        bufp->chgBit(oldp+611,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
        bufp->chgBit(oldp+612,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
        bufp->chgBit(oldp+613,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+614,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
        bufp->chgBit(oldp+615,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
        bufp->chgBit(oldp+616,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
        bufp->chgBit(oldp+617,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+618,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
        bufp->chgBit(oldp+619,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
        bufp->chgBit(oldp+620,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
        bufp->chgBit(oldp+621,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+622,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
        bufp->chgBit(oldp+623,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
        bufp->chgBit(oldp+624,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
        bufp->chgBit(oldp+625,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+626,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
        bufp->chgBit(oldp+627,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
        bufp->chgBit(oldp+628,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
        bufp->chgBit(oldp+629,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+630,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
        bufp->chgBit(oldp+631,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
        bufp->chgBit(oldp+632,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
        bufp->chgBit(oldp+633,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+634,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
        bufp->chgBit(oldp+635,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
        bufp->chgBit(oldp+636,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
        bufp->chgBit(oldp+637,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+638,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
        bufp->chgBit(oldp+639,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
        bufp->chgBit(oldp+640,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
        bufp->chgBit(oldp+641,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+642,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
        bufp->chgBit(oldp+643,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
        bufp->chgBit(oldp+644,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
        bufp->chgBit(oldp+645,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+646,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
        bufp->chgBit(oldp+647,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
        bufp->chgBit(oldp+648,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
        bufp->chgBit(oldp+649,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+650,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
        bufp->chgBit(oldp+651,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
        bufp->chgBit(oldp+652,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
        bufp->chgBit(oldp+653,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+654,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
        bufp->chgBit(oldp+655,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
        bufp->chgBit(oldp+656,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
        bufp->chgBit(oldp+657,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+658,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
        bufp->chgBit(oldp+659,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
        bufp->chgBit(oldp+660,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
        bufp->chgBit(oldp+661,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+662,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
        bufp->chgBit(oldp+663,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
        bufp->chgBit(oldp+664,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
        bufp->chgBit(oldp+665,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+666,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
        bufp->chgBit(oldp+667,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
        bufp->chgBit(oldp+668,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
        bufp->chgBit(oldp+669,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+670,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
        bufp->chgBit(oldp+671,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
        bufp->chgBit(oldp+672,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
        bufp->chgBit(oldp+673,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+674,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
        bufp->chgBit(oldp+675,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
        bufp->chgBit(oldp+676,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
        bufp->chgBit(oldp+677,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+678,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
        bufp->chgBit(oldp+679,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
        bufp->chgBit(oldp+680,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
        bufp->chgBit(oldp+681,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+682,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
        bufp->chgBit(oldp+683,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
        bufp->chgBit(oldp+684,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
        bufp->chgBit(oldp+685,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+686,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+687,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+688,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+689,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
        bufp->chgBit(oldp+690,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
        bufp->chgBit(oldp+691,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
        bufp->chgBit(oldp+692,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
        bufp->chgBit(oldp+693,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
        bufp->chgBit(oldp+694,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
        bufp->chgBit(oldp+695,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
        bufp->chgCData(oldp+696,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__segs[0]),8);
        bufp->chgCData(oldp+697,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__segs[1]),8);
        bufp->chgCData(oldp+698,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__segs[2]),8);
        bufp->chgCData(oldp+699,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__segs[3]),8);
        bufp->chgCData(oldp+700,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__segs[4]),8);
        bufp->chgCData(oldp+701,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__segs[5]),8);
        bufp->chgCData(oldp+702,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__segs[6]),8);
        bufp->chgCData(oldp+703,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__segs[7]),8);
        bufp->chgSData(oldp+704,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__buffer),10);
        bufp->chgCData(oldp+705,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__count),4);
        bufp->chgCData(oldp+706,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_clk_sync),3);
        bufp->chgCData(oldp+707,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__fifo[0]),8);
        bufp->chgCData(oldp+708,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__fifo[1]),8);
        bufp->chgCData(oldp+709,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__fifo[2]),8);
        bufp->chgCData(oldp+710,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__fifo[3]),8);
        bufp->chgCData(oldp+711,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__fifo[4]),8);
        bufp->chgCData(oldp+712,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__fifo[5]),8);
        bufp->chgCData(oldp+713,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__fifo[6]),8);
        bufp->chgCData(oldp+714,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__fifo[7]),8);
        bufp->chgCData(oldp+715,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__w_ptr),3);
        bufp->chgCData(oldp+716,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__r_ptr),3);
        bufp->chgBit(oldp+717,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__overflow));
        bufp->chgBit(oldp+718,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ready));
        bufp->chgBit(oldp+719,((IData)((4U == (6U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_clk_sync))))));
        bufp->chgCData(oldp+720,((0xffU & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi42apb_auto_out_pwdata 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+721,((vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi42apb_auto_out_pwdata 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+722,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
        bufp->chgCData(oldp+723,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
        bufp->chgCData(oldp+724,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
        bufp->chgCData(oldp+725,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
        bufp->chgCData(oldp+726,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
        bufp->chgCData(oldp+727,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
        bufp->chgCData(oldp+728,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
        bufp->chgCData(oldp+729,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
        bufp->chgCData(oldp+730,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
        bufp->chgCData(oldp+731,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
        bufp->chgCData(oldp+732,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
        bufp->chgCData(oldp+733,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
        bufp->chgCData(oldp+734,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
        bufp->chgCData(oldp+735,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
        bufp->chgCData(oldp+736,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
        bufp->chgCData(oldp+737,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
        bufp->chgCData(oldp+738,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
        bufp->chgCData(oldp+739,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
        bufp->chgCData(oldp+740,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
        bufp->chgCData(oldp+741,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
        bufp->chgCData(oldp+742,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
        bufp->chgCData(oldp+743,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
        bufp->chgCData(oldp+744,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
        bufp->chgCData(oldp+745,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
        bufp->chgCData(oldp+746,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
        bufp->chgCData(oldp+747,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
        bufp->chgCData(oldp+748,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
        bufp->chgCData(oldp+749,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
        bufp->chgCData(oldp+750,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
        bufp->chgCData(oldp+751,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
        bufp->chgCData(oldp+752,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
        bufp->chgCData(oldp+753,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
        bufp->chgCData(oldp+754,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
        bufp->chgCData(oldp+755,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
        bufp->chgCData(oldp+756,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
        bufp->chgCData(oldp+757,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
        bufp->chgCData(oldp+758,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
        bufp->chgSData(oldp+759,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__x_cnt),10);
        bufp->chgSData(oldp+760,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__y_cnt),10);
        bufp->chgBit(oldp+761,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__h_valid));
        bufp->chgBit(oldp+762,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__v_valid));
        bufp->chgSData(oldp+763,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__h_valid)
                                   ? (0x3ffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__x_cnt) 
                                                - (IData)(0x91U)))
                                   : 0U)),10);
        bufp->chgSData(oldp+764,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__v_valid)
                                   ? (0x3ffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__y_cnt) 
                                                - (IData)(0x24U)))
                                   : 0U)),10);
        bufp->chgIData(oldp+765,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__vga_data),24);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgCData(oldp+766,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__axi_xbar__DOT__state),2);
        bufp->chgIData(oldp+767,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__axi_xbar__DOT__raddr),32);
        bufp->chgIData(oldp+768,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__clint__DOT__mtime_l),32);
        bufp->chgIData(oldp+769,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__clint__DOT__mtime_h),32);
        bufp->chgCData(oldp+770,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__clint__DOT__lfsr),8);
        bufp->chgCData(oldp+771,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__clint__DOT__random_delay),5);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgCData(oldp+772,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__state),3);
        bufp->chgCData(oldp+773,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__dio_r),4);
        bufp->chgCData(oldp+774,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__mode),8);
        bufp->chgCData(oldp+775,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__cmd_reg),8);
        bufp->chgIData(oldp+776,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__addr_reg),24);
        bufp->chgCData(oldp+777,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__bit_count),8);
        bufp->chgBit(oldp+778,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__dio_oe));
        bufp->chgCData(oldp+779,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__dio_out),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgBit(oldp+780,((IData)((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                         >> 4U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__serial_out)))));
        bufp->chgBit(oldp+781,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__spi_sck));
        bufp->chgBit(oldp+782,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
        bufp->chgBit(oldp+783,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                      >> 2U))));
        bufp->chgBit(oldp+784,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                      >> 1U))));
        bufp->chgBit(oldp+785,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
        bufp->chgCData(oldp+786,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__sdram_cs),2);
        bufp->chgSData(oldp+787,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q),13);
        bufp->chgCData(oldp+788,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q),2);
        bufp->chgCData(oldp+789,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q),4);
        bufp->chgBit(oldp+790,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4delay_delayer_in_rvalid));
        bufp->chgCData(oldp+791,((0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w))),4);
        bufp->chgIData(oldp+792,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
                                 [vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr]),32);
        bufp->chgBit(oldp+793,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                      >> 4U))));
        bufp->chgBit(oldp+794,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4delay_delayer_in_bvalid));
        bufp->chgBit(oldp+795,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
        bufp->chgBit(oldp+796,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
        bufp->chgCData(oldp+797,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_dout),4);
        bufp->chgBit(oldp+798,(((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state))
                                 ? (0xeU > (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                 : (8U > (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
        bufp->chgBit(oldp+799,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
        bufp->chgBit(oldp+800,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
        bufp->chgBit(oldp+801,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
        bufp->chgBit(oldp+802,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck));
        bufp->chgBit(oldp+803,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n));
        bufp->chgCData(oldp+804,(((8U > (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi__DOT__counter))
                                   ? (1U & (0x35U >> 
                                            (7U & ((IData)(7U) 
                                                   - (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi__DOT__counter)))))
                                   : 0U)),4);
        bufp->chgBit(oldp+805,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n)))));
        bufp->chgBit(oldp+806,((8U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi__DOT__counter))));
        bufp->chgBit(oldp+807,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode));
        bufp->chgCData(oldp+808,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state),2);
        bufp->chgCData(oldp+809,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state),2);
        bufp->chgCData(oldp+810,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
        bufp->chgIData(oldp+811,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
        bufp->chgCData(oldp+812,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__byte_index),2);
        bufp->chgCData(oldp+813,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state),2);
        bufp->chgCData(oldp+814,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
        bufp->chgIData(oldp+815,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
        bufp->chgBit(oldp+816,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi__DOT__state));
        bufp->chgCData(oldp+817,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi__DOT__counter),8);
        bufp->chgBit(oldp+818,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)))));
        bufp->chgIData(oldp+819,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q),32);
        bufp->chgBit(oldp+820,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_accept_w));
        bufp->chgIData(oldp+821,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q),32);
        bufp->chgBit(oldp+822,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q));
        bufp->chgIData(oldp+823,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask),32);
        bufp->chgCData(oldp+824,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q),8);
        bufp->chgIData(oldp+825,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q),32);
        bufp->chgBit(oldp+826,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q));
        bufp->chgBit(oldp+827,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q));
        bufp->chgCData(oldp+828,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q),4);
        bufp->chgCData(oldp+829,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q),2);
        bufp->chgCData(oldp+830,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q),8);
        bufp->chgBit(oldp+831,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q));
        bufp->chgBit(oldp+832,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q));
        bufp->chgBit(oldp+833,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
        bufp->chgBit(oldp+834,((4U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
        bufp->chgBit(oldp+835,((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
        bufp->chgCData(oldp+836,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w),6);
        bufp->chgBit(oldp+837,(((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                    >> 5U)) & (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))));
        bufp->chgBit(oldp+838,(((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                   >> 5U))));
        bufp->chgBit(oldp+839,((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
        bufp->chgBit(oldp+840,((((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                                | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q))));
        bufp->chgBit(oldp+841,((1U & ((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                                          | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                                      | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)))));
        bufp->chgCData(oldp+842,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[0]),6);
        bufp->chgCData(oldp+843,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[1]),6);
        bufp->chgCData(oldp+844,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[2]),6);
        bufp->chgCData(oldp+845,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[3]),6);
        bufp->chgCData(oldp+846,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr),2);
        bufp->chgCData(oldp+847,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr),2);
        bufp->chgCData(oldp+848,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count),3);
        bufp->chgBit(oldp+849,((4U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
        bufp->chgIData(oldp+850,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[0]),32);
        bufp->chgIData(oldp+851,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[1]),32);
        bufp->chgIData(oldp+852,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[2]),32);
        bufp->chgIData(oldp+853,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[3]),32);
        bufp->chgCData(oldp+854,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr),2);
        bufp->chgCData(oldp+855,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr),2);
        bufp->chgCData(oldp+856,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count),3);
        bufp->chgCData(oldp+857,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q),4);
        bufp->chgBit(oldp+858,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q));
        bufp->chgBit(oldp+859,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cs));
        bufp->chgIData(oldp+860,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q),32);
        bufp->chgCData(oldp+861,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_buffer_q),4);
        bufp->chgBit(oldp+862,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q));
        bufp->chgCData(oldp+863,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q),4);
        bufp->chgSData(oldp+864,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0]),13);
        bufp->chgSData(oldp+865,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1]),13);
        bufp->chgSData(oldp+866,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2]),13);
        bufp->chgSData(oldp+867,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3]),13);
        bufp->chgCData(oldp+868,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q),4);
        bufp->chgCData(oldp+869,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q),4);
        bufp->chgCData(oldp+870,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q),4);
        bufp->chgCData(oldp+871,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q),4);
        bufp->chgIData(oldp+872,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q),17);
        bufp->chgIData(oldp+873,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q),32);
        bufp->chgIData(oldp+874,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx),32);
        bufp->chgCData(oldp+875,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q),4);
        bufp->chgWData(oldp+876,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state),80);
        bufp->chgSData(oldp+879,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
        bufp->chgCData(oldp+880,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
        bufp->chgWData(oldp+881,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
        bufp->chgBit(oldp+885,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
        bufp->chgSData(oldp+886,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
        bufp->chgBit(oldp+887,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
        bufp->chgBit(oldp+888,((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
        bufp->chgBit(oldp+889,((1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                         >> 1U)))));
        bufp->chgBit(oldp+890,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
        bufp->chgBit(oldp+891,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__interrupt));
        bufp->chgBit(oldp+892,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U))));
        bufp->chgBit(oldp+893,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__enable));
        bufp->chgBit(oldp+894,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
        bufp->chgCData(oldp+895,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
        bufp->chgCData(oldp+896,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
        bufp->chgCData(oldp+897,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
        bufp->chgCData(oldp+898,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
        bufp->chgCData(oldp+899,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
        bufp->chgCData(oldp+900,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
        bufp->chgSData(oldp+901,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
        bufp->chgCData(oldp+902,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
        bufp->chgBit(oldp+903,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
        bufp->chgBit(oldp+904,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
        bufp->chgBit(oldp+905,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
        bufp->chgSData(oldp+906,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
        bufp->chgCData(oldp+907,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
        bufp->chgBit(oldp+908,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
        bufp->chgBit(oldp+909,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
        bufp->chgBit(oldp+910,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                      >> 7U))));
        bufp->chgBit(oldp+911,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 4U))));
        bufp->chgBit(oldp+912,((IData)((0x10U != (0x12U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
        bufp->chgBit(oldp+913,((IData)((0x11U == (0x11U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
        bufp->chgBit(oldp+914,((IData)((0x14U == (0x14U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
        bufp->chgBit(oldp+915,((IData)((0x18U == (0x18U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
        bufp->chgCData(oldp+916,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                   << 7U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                              << 6U) 
                                             | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                                 << 5U) 
                                                | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                                    << 4U) 
                                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                       << 3U) 
                                                      | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                          << 2U) 
                                                         | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                             << 1U) 
                                                            | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))))))),8);
        bufp->chgBit(oldp+917,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
        bufp->chgBit(oldp+918,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
        bufp->chgBit(oldp+919,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__VdfgTmp_hc8b8208b__0) 
                                      >> 1U))));
        bufp->chgBit(oldp+920,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__VdfgTmp_hc8b8208b__0))));
        bufp->chgBit(oldp+921,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__VdfgTmp_hc8b8208b__0) 
                                      >> 2U))));
        bufp->chgBit(oldp+922,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
        bufp->chgBit(oldp+923,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
        bufp->chgBit(oldp+924,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
        bufp->chgBit(oldp+925,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
        bufp->chgBit(oldp+926,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
        bufp->chgBit(oldp+927,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
        bufp->chgBit(oldp+928,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
        bufp->chgBit(oldp+929,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
        bufp->chgBit(oldp+930,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
        bufp->chgBit(oldp+931,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
        bufp->chgBit(oldp+932,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
        bufp->chgBit(oldp+933,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
        bufp->chgBit(oldp+934,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
        bufp->chgBit(oldp+935,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
        bufp->chgBit(oldp+936,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
        bufp->chgBit(oldp+937,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
        bufp->chgBit(oldp+938,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
        bufp->chgBit(oldp+939,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
        bufp->chgBit(oldp+940,((0U != (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [0U] | (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                               [1U] 
                                               | (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                  [2U] 
                                                  | (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                     [3U] 
                                                     | (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                        [4U] 
                                                        | (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                           [5U] 
                                                           | (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                              [6U] 
                                                              | (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                 [7U] 
                                                                 | (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                    [8U] 
                                                                    | (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                       [9U] 
                                                                       | (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                          [0xaU] 
                                                                          | (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                             [0xbU] 
                                                                             | (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xcU] 
                                                                                | (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xdU] 
                                                                                | (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xeU] 
                                                                                | vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xfU]))))))))))))))))));
        bufp->chgBit(oldp+941,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
        bufp->chgCData(oldp+942,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
        bufp->chgCData(oldp+943,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
        bufp->chgCData(oldp+944,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
        bufp->chgCData(oldp+945,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
        bufp->chgSData(oldp+946,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
        bufp->chgBit(oldp+947,((1U & (~ (IData)((0U 
                                                 != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
        bufp->chgCData(oldp+948,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
        bufp->chgCData(oldp+949,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
        bufp->chgBit(oldp+950,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
        bufp->chgBit(oldp+951,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
        bufp->chgCData(oldp+952,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
        bufp->chgBit(oldp+953,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
        bufp->chgBit(oldp+954,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
        bufp->chgBit(oldp+955,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
        bufp->chgBit(oldp+956,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
        bufp->chgBit(oldp+957,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
        bufp->chgBit(oldp+958,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
        bufp->chgBit(oldp+959,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
        bufp->chgBit(oldp+960,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
        bufp->chgBit(oldp+961,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
        bufp->chgBit(oldp+962,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
        bufp->chgBit(oldp+963,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
        bufp->chgBit(oldp+964,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
        bufp->chgBit(oldp+965,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
        bufp->chgBit(oldp+966,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
        bufp->chgBit(oldp+967,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
        bufp->chgBit(oldp+968,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
        bufp->chgBit(oldp+969,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
        bufp->chgBit(oldp+970,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
        bufp->chgBit(oldp+971,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
        bufp->chgBit(oldp+972,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
        bufp->chgBit(oldp+973,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
        bufp->chgBit(oldp+974,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
        bufp->chgBit(oldp+975,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
        bufp->chgBit(oldp+976,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
        bufp->chgCData(oldp+977,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
        bufp->chgCData(oldp+978,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
        bufp->chgCData(oldp+979,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
        bufp->chgBit(oldp+980,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
        bufp->chgBit(oldp+981,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
        bufp->chgBit(oldp+982,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
        bufp->chgBit(oldp+983,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
        bufp->chgBit(oldp+984,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
        bufp->chgCData(oldp+985,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
        bufp->chgBit(oldp+986,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
        bufp->chgSData(oldp+987,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
        bufp->chgBit(oldp+988,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
        bufp->chgBit(oldp+989,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
        bufp->chgBit(oldp+990,((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
        bufp->chgBit(oldp+991,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
        bufp->chgBit(oldp+992,((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
        bufp->chgCData(oldp+993,((0xfU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                          - (IData)(1U)))),4);
        bufp->chgSData(oldp+994,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
        bufp->chgCData(oldp+995,((0xffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                           >> 2U))),8);
        bufp->chgCData(oldp+996,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
        bufp->chgCData(oldp+997,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
        bufp->chgCData(oldp+998,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
        bufp->chgCData(oldp+999,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
        bufp->chgCData(oldp+1000,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
        bufp->chgCData(oldp+1001,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
        bufp->chgCData(oldp+1002,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
        bufp->chgCData(oldp+1003,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
        bufp->chgCData(oldp+1004,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
        bufp->chgCData(oldp+1005,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
        bufp->chgCData(oldp+1006,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
        bufp->chgCData(oldp+1007,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
        bufp->chgCData(oldp+1008,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
        bufp->chgCData(oldp+1009,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
        bufp->chgCData(oldp+1010,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
        bufp->chgCData(oldp+1011,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
        bufp->chgCData(oldp+1012,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
        bufp->chgCData(oldp+1013,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
        bufp->chgCData(oldp+1014,((0xfU & ((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
        bufp->chgCData(oldp+1015,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0U]),3);
        bufp->chgCData(oldp+1016,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [1U]),3);
        bufp->chgCData(oldp+1017,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [2U]),3);
        bufp->chgCData(oldp+1018,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [3U]),3);
        bufp->chgCData(oldp+1019,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [4U]),3);
        bufp->chgCData(oldp+1020,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [5U]),3);
        bufp->chgCData(oldp+1021,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [6U]),3);
        bufp->chgCData(oldp+1022,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [7U]),3);
        bufp->chgCData(oldp+1023,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [8U]),3);
        bufp->chgCData(oldp+1024,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [9U]),3);
        bufp->chgCData(oldp+1025,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0xaU]),3);
        bufp->chgCData(oldp+1026,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0xbU]),3);
        bufp->chgCData(oldp+1027,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0xcU]),3);
        bufp->chgCData(oldp+1028,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0xdU]),3);
        bufp->chgCData(oldp+1029,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0xeU]),3);
        bufp->chgCData(oldp+1030,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0xfU]),3);
        bufp->chgCData(oldp+1031,((0xffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                            >> 3U))),8);
        bufp->chgCData(oldp+1032,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
        bufp->chgCData(oldp+1033,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
        bufp->chgCData(oldp+1034,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
        bufp->chgBit(oldp+1035,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
        bufp->chgBit(oldp+1036,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
        bufp->chgBit(oldp+1037,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
        bufp->chgBit(oldp+1038,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
        bufp->chgBit(oldp+1039,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
        bufp->chgCData(oldp+1040,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
        bufp->chgCData(oldp+1041,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
        bufp->chgCData(oldp+1042,((0xfU & ((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgCData(oldp+1043,(vlSymsp->TOP__ysyxSoCFull.__PVT__bitrev__DOT__bit_cnt),3);
        bufp->chgBit(oldp+1044,(vlSymsp->TOP__ysyxSoCFull.__PVT__bitrev__DOT__rx_done));
        bufp->chgCData(oldp+1045,(vlSymsp->TOP__ysyxSoCFull.__PVT__bitrev__DOT__rx_shift_reg),8);
        bufp->chgCData(oldp+1046,(((0x80U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__bitrev__DOT__rx_shift_reg) 
                                             << 7U)) 
                                   | ((0x40U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__bitrev__DOT__rx_shift_reg) 
                                                << 5U)) 
                                      | ((0x20U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__bitrev__DOT__rx_shift_reg) 
                                                   << 3U)) 
                                         | ((0x10U 
                                             & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__bitrev__DOT__rx_shift_reg) 
                                                << 1U)) 
                                            | ((8U 
                                                & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__bitrev__DOT__rx_shift_reg) 
                                                   >> 1U)) 
                                               | ((4U 
                                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__bitrev__DOT__rx_shift_reg) 
                                                      >> 3U)) 
                                                  | ((2U 
                                                      & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__bitrev__DOT__rx_shift_reg) 
                                                         >> 5U)) 
                                                     | (1U 
                                                        & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__bitrev__DOT__rx_shift_reg) 
                                                           >> 7U)))))))))),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
        bufp->chgIData(oldp+1047,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi42apb_auto_out_paddr),32);
        bufp->chgBit(oldp+1048,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__is_write));
        bufp->chgCData(oldp+1049,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi42apb_auto_out_pstrb),4);
        bufp->chgBit(oldp+1050,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___apbxbar_auto_anon_out_5_psel));
        bufp->chgBit(oldp+1051,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___apbxbar_auto_anon_out_5_penable));
        bufp->chgIData(oldp+1052,((0x3fffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi42apb_auto_out_paddr)),30);
        bufp->chgBit(oldp+1053,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___apbxbar_auto_anon_out_5_penable) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___apbxbar_auto_anon_out_5_psel))));
        bufp->chgIData(oldp+1054,((0x1fffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi42apb_auto_out_paddr)),29);
        bufp->chgBit(oldp+1055,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___lkeyboard_auto_in_pready));
        bufp->chgBit(oldp+1056,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___apbxbar_auto_anon_out_3_psel));
        bufp->chgBit(oldp+1057,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___apbxbar_auto_anon_out_3_penable));
        bufp->chgBit(oldp+1058,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___lgpio_auto_in_pready));
        bufp->chgBit(oldp+1059,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___apbxbar_auto_anon_out_2_psel));
        bufp->chgBit(oldp+1060,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___apbxbar_auto_anon_out_1_psel));
        bufp->chgBit(oldp+1061,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___apbxbar_auto_anon_out_1_penable));
        bufp->chgBit(oldp+1062,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___apbxbar_auto_anon_out_1_penable) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___apbxbar_auto_anon_out_1_psel))));
        bufp->chgBit(oldp+1063,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___apbxbar_auto_anon_out_0_psel));
        bufp->chgBit(oldp+1064,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___apbxbar_auto_anon_out_0_penable));
        bufp->chgBit(oldp+1065,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_0));
        bufp->chgBit(oldp+1066,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_1));
        bufp->chgBit(oldp+1067,((0U == (3U & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi42apb_auto_out_paddr 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+1068,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_3));
        bufp->chgBit(oldp+1069,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_4));
        bufp->chgBit(oldp+1070,((2U == (3U & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi42apb_auto_out_paddr 
                                              >> 0x1cU)))));
        bufp->chgIData(oldp+1071,((0x1fffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi42apb_auto_out_paddr)),32);
        bufp->chgBit(oldp+1072,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
        bufp->chgBit(oldp+1073,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
        bufp->chgCData(oldp+1074,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
        bufp->chgCData(oldp+1075,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
        bufp->chgCData(oldp+1076,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
        bufp->chgIData(oldp+1077,((0xfffffcU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi42apb_auto_out_paddr)),24);
        bufp->chgIData(oldp+1078,((0xffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi42apb_auto_out_paddr)),24);
        bufp->chgIData(oldp+1079,((0x3fffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi42apb_auto_out_paddr)),32);
        bufp->chgBit(oldp+1080,((3U == (3U & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi42apb_auto_out_paddr 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+1081,((0x10001U == (0x3ffffU 
                                              & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi42apb_auto_out_paddr 
                                                 >> 0xcU)))));
        bufp->chgCData(oldp+1082,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xip_state),3);
        bufp->chgIData(oldp+1083,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xip_data),32);
        bufp->chgBit(oldp+1084,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xip_ready));
        bufp->chgBit(oldp+1085,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xip_active));
        bufp->chgCData(oldp+1086,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_wb_adr_i),5);
        bufp->chgIData(oldp+1087,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_wb_dat_i),32);
        bufp->chgCData(oldp+1088,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xip_active)
                                    ? 0xfU : 0U)),4);
        bufp->chgBit(oldp+1089,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_wb_we_i));
        bufp->chgBit(oldp+1090,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_wb_stb_i));
        bufp->chgBit(oldp+1091,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_wb_cyc_i));
        bufp->chgBit(oldp+1092,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                 & (0x14U == (0x1cU 
                                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_wb_adr_i))))));
        bufp->chgBit(oldp+1093,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                 & (0x10U == (0x1cU 
                                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_wb_adr_i))))));
        bufp->chgCData(oldp+1094,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
        bufp->chgBit(oldp+1095,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                 & (0x18U == (0x1cU 
                                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_wb_adr_i))))));
        bufp->chgCData(oldp+1096,(vlSymsp->TOP__ysyxSoCFull__asic.lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
        bufp->chgCData(oldp+1097,((7U & vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi42apb_auto_out_paddr)),3);
        bufp->chgCData(oldp+1098,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__reg_dat8_w),8);
        bufp->chgCData(oldp+1099,(vlSymsp->TOP__ysyxSoCFull__asic.luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xaU])) {
        bufp->chgCData(oldp+1100,(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__state),3);
        bufp->chgCData(oldp+1101,(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__counter),8);
        bufp->chgCData(oldp+1102,(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__cmd),8);
        bufp->chgIData(oldp+1103,(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__addr),24);
        bufp->chgIData(oldp+1104,(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__data),32);
        bufp->chgBit(oldp+1105,(((1U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__state)) 
                                 & (0x17U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__counter)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xbU])) {
        bufp->chgBit(oldp+1106,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__psram_sck));
        bufp->chgBit(oldp+1107,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__psram_ce_n));
        bufp->chgBit(oldp+1108,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__in_0_bvalid));
        bufp->chgCData(oldp+1109,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT___in_0_bT_5),4);
        bufp->chgBit(oldp+1110,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__in_0_rvalid));
        bufp->chgCData(oldp+1111,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT___in_0_rT_12),4);
        bufp->chgBit(oldp+1112,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT___in_0_rT_3));
        bufp->chgSData(oldp+1113,((0xffffU & ((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT___in_0_rT_12)))),16);
        bufp->chgSData(oldp+1114,((0xffffU & ((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT___in_0_bT_5)))),16);
        bufp->chgBit(oldp+1115,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__anyValid));
        bufp->chgCData(oldp+1116,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__readys_valid),2);
        bufp->chgCData(oldp+1117,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__readys_unready),4);
        bufp->chgCData(oldp+1118,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__readys_readys),2);
        bufp->chgBit(oldp+1119,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__prefixOR_1));
        bufp->chgBit(oldp+1120,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__winner_2_1));
        bufp->chgBit(oldp+1121,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_2_0));
        bufp->chgBit(oldp+1122,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_2_1));
        bufp->chgBit(oldp+1123,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__anyValid_1));
        bufp->chgCData(oldp+1124,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__readys_valid_1),2);
        bufp->chgCData(oldp+1125,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__readys_unready_1),4);
        bufp->chgCData(oldp+1126,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__readys_readys_1),2);
        bufp->chgBit(oldp+1127,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__winner_3_0));
        bufp->chgBit(oldp+1128,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__winner_3_1));
        bufp->chgBit(oldp+1129,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_3_0));
        bufp->chgBit(oldp+1130,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_3_1));
        bufp->chgCData(oldp+1131,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__dout),4);
        bufp->chgCData(oldp+1132,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__douten),4);
        bufp->chgCData(oldp+1133,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
        bufp->chgBit(oldp+1134,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
        bufp->chgBit(oldp+1135,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
        bufp->chgBit(oldp+1136,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
        bufp->chgBit(oldp+1137,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd_qpi));
        bufp->chgBit(oldp+1138,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr_qpi));
        bufp->chgCData(oldp+1139,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate),2);
        bufp->chgBit(oldp+1140,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi__DOT__nstate));
        bufp->chgCData(oldp+1141,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__reg_dat8_r),8);
        bufp->chgCData(oldp+1142,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xcU])) {
        bufp->chgBit(oldp+1143,(vlSymsp->TOP__ysyxSoCFull.__Vcellinp__bitrev__ss));
        bufp->chgBit(oldp+1144,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__spi_mosi));
        bufp->chgBit(oldp+1145,(vlSymsp->TOP__ysyxSoCFull.__Vcellinp__flash__ss));
        bufp->chgCData(oldp+1146,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__spi_ss),8);
        bufp->chgBit(oldp+1147,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_irq_out));
        bufp->chgIData(oldp+1148,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_wb_dat_o),32);
        bufp->chgBit(oldp+1149,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_wb_ack_o));
        bufp->chgSData(oldp+1150,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
        bufp->chgBit(oldp+1151,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                       >> 9U))));
        bufp->chgBit(oldp+1152,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                       >> 0xaU))));
        bufp->chgCData(oldp+1153,((0x7fU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
        bufp->chgBit(oldp+1154,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                       >> 8U))));
        bufp->chgBit(oldp+1155,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1156,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1157,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1158,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
        bufp->chgBit(oldp+1159,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
        bufp->chgBit(oldp+1160,((1U & (~ (IData)((0U 
                                                  != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
        bufp->chgCData(oldp+1161,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
        bufp->chgCData(oldp+1162,((0xffU & ((0x800U 
                                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                             ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                                - (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                             : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                                - (IData)(1U))))),8);
        bufp->chgCData(oldp+1163,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
        bufp->chgBit(oldp+1164,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
        bufp->chgBit(oldp+1165,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    }
    bufp->chgBit(oldp+1166,(vlSelf->clock));
    bufp->chgBit(oldp+1167,(vlSelf->reset));
    bufp->chgSData(oldp+1168,(vlSelf->externalPins_gpio_out),16);
    bufp->chgSData(oldp+1169,(vlSelf->externalPins_gpio_in),16);
    bufp->chgCData(oldp+1170,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->chgCData(oldp+1171,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->chgCData(oldp+1172,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->chgCData(oldp+1173,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->chgCData(oldp+1174,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->chgCData(oldp+1175,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->chgCData(oldp+1176,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->chgCData(oldp+1177,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->chgBit(oldp+1178,(vlSelf->externalPins_ps2_clk));
    bufp->chgBit(oldp+1179,(vlSelf->externalPins_ps2_data));
    bufp->chgCData(oldp+1180,(vlSelf->externalPins_vga_r),8);
    bufp->chgCData(oldp+1181,(vlSelf->externalPins_vga_g),8);
    bufp->chgCData(oldp+1182,(vlSelf->externalPins_vga_b),8);
    bufp->chgBit(oldp+1183,(vlSelf->externalPins_vga_hsync));
    bufp->chgBit(oldp+1184,(vlSelf->externalPins_vga_vsync));
    bufp->chgBit(oldp+1185,(vlSelf->externalPins_vga_valid));
    bufp->chgBit(oldp+1186,(vlSelf->externalPins_uart_rx));
    bufp->chgBit(oldp+1187,(vlSelf->externalPins_uart_tx));
    bufp->chgBit(oldp+1188,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__Vcellinp__bitrev__ss) 
                                   | (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__bitrev__DOT__tx_shift_reg)))));
    bufp->chgCData(oldp+1189,(vlSymsp->TOP__ysyxSoCFull.__PVT__bitrev__DOT__tx_shift_reg),8);
    bufp->chgBit(oldp+1190,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__Vcellinp__flash__ss) 
                                   | ((((2U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__state)) 
                                        & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__counter)))
                                        ? vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__data_bswap
                                        : vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__data) 
                                      >> 0x1fU)))));
    bufp->chgIData(oldp+1191,(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__rdata),32);
    bufp->chgIData(oldp+1192,(((0xfffffeU & (vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__addr 
                                             << 1U)) 
                               | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__spi_mosi))),32);
    bufp->chgIData(oldp+1193,(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__data_bswap),32);
    bufp->chgCData(oldp+1194,(vlSymsp->TOP__ysyxSoCFull.__PVT___dio_wire),4);
    bufp->chgBit(oldp+1195,((1U & (((IData)(vlSymsp->TOP__ysyxSoCFull.__Vcellinp__bitrev__ss) 
                                    | (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__bitrev__DOT__tx_shift_reg)) 
                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull.__Vcellinp__flash__ss) 
                                      | ((((2U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__state)) 
                                           & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__counter)))
                                           ? vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__data_bswap
                                           : vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__data) 
                                         >> 0x1fU))))));
    bufp->chgBit(oldp+1196,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->chgIData(oldp+1197,(vlSymsp->TOP__ysyxSoCFull.__PVT___dq_wire),32);
    bufp->chgIData(oldp+1198,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___apbdelay_delayer_in_prdata),32);
    bufp->chgBit(oldp+1199,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_4) 
                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi42apb_auto_out_psel))));
    bufp->chgBit(oldp+1200,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_4) 
                             & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state)))));
    bufp->chgIData(oldp+1201,((((~ (IData)(vlSelf->reset)) 
                                & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__is_write)) 
                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___lgpio_auto_in_pready)))
                                ? (IData)(vlSelf->externalPins_gpio_in)
                                : 0U)),32);
    bufp->chgBit(oldp+1202,((IData)(((0U == (0x30000000U 
                                             & vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi42apb_auto_out_paddr)) 
                                     & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state))))));
    bufp->chgBit(oldp+1203,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done)) 
                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___apbxbar_auto_anon_out_2_psel))));
    bufp->chgIData(oldp+1204,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___apbxbar_auto_anon_out_1_psel)
                                ? (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__reg_dat8_r) 
                                    << 0x18U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                     << 8U) 
                                                    | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__reg_dat8_r))))
                                : 0U)),32);
    bufp->chgBit(oldp+1205,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xip_active)
                              ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xip_ready)
                              : (IData)(((0x10001000U 
                                          == (0x3ffff000U 
                                              & vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi42apb_auto_out_paddr)) 
                                         & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_wb_ack_o))))));
    bufp->chgIData(oldp+1206,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xip_active)
                                ? ((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xip_data 
                                    << 0x18U) | ((0xff0000U 
                                                  & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xip_data 
                                                     << 8U)) 
                                                 | ((0xff00U 
                                                     & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xip_data 
                                                        >> 8U)) 
                                                    | (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xip_data 
                                                       >> 0x18U))))
                                : vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_wb_dat_o)),32);
    bufp->chgIData(oldp+1207,(((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state))
                                ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT___apbdelay_delayer_in_prdata
                                : vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->chgQData(oldp+1208,((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__rid_reg)) 
                                << 0x23U) | (((QData)((IData)(
                                                              ((1U 
                                                                == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state))
                                                                ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT___apbdelay_delayer_in_prdata
                                                                : vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__nodeIn_rdata_r))) 
                                              << 3U) 
                                             | (QData)((IData)(
                                                               (1U 
                                                                | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__resp_hold) 
                                                                   << 1U))))))),39);
    bufp->chgQData(oldp+1210,((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_out_arid)) 
                                << 0x2bU) | (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_out_araddr)) 
                                              << 0xbU) 
                                             | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___deq_q_io_deq_bits_size))))),47);
    bufp->chgQData(oldp+1212,((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_out_awid)) 
                                << 0x2bU) | (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_out_awaddr)) 
                                              << 0xbU) 
                                             | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___deq_q_1_io_deq_bits_size))))),47);
    bufp->chgQData(oldp+1214,((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_out_wdata)) 
                                << 4U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4frag_auto_out_wstrb)))),36);
    bufp->chgCData(oldp+1216,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_arid),4);
    bufp->chgIData(oldp+1217,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_araddr),32);
    bufp->chgCData(oldp+1218,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_arlen),8);
    bufp->chgCData(oldp+1219,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_arsize),3);
    bufp->chgCData(oldp+1220,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_arburst),2);
    bufp->chgBit(oldp+1221,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_rready) 
                             & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__idle_2)
                                 ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__readys_readys) 
                                    >> 1U) : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__state_2_1)))));
    bufp->chgCData(oldp+1222,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awid),4);
    bufp->chgIData(oldp+1223,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awaddr),32);
    bufp->chgCData(oldp+1224,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awlen),8);
    bufp->chgCData(oldp+1225,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awsize),3);
    bufp->chgCData(oldp+1226,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awburst),2);
    bufp->chgIData(oldp+1227,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_wdata),32);
    bufp->chgCData(oldp+1228,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_wstrb),4);
    bufp->chgBit(oldp+1229,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_wlast));
    bufp->chgBit(oldp+1230,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_bready) 
                             & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__idle_3)
                                 ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__readys_readys_1) 
                                    >> 1U) : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__state_3_1)))));
    bufp->chgBit(oldp+1231,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_bready) 
                             & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__idle_3)
                                 ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__readys_readys_1)
                                 : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__state_3_0)))));
    bufp->chgBit(oldp+1232,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                    : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_wlast)))));
    bufp->chgBit(oldp+1233,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4xbar_1_auto_anon_out_2_awvalid) 
                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->chgBit(oldp+1234,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awvalid));
    bufp->chgBit(oldp+1235,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__in_0_wready) 
                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0))));
    bufp->chgBit(oldp+1236,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_wvalid));
    bufp->chgBit(oldp+1237,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_bready));
    bufp->chgCData(oldp+1238,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_3_0)
                                ? (3U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4yank_auto_in_bresp) 
                                         | ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_15) 
                                              << 0x1eU) 
                                             | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_14) 
                                                 << 0x1cU) 
                                                | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_13) 
                                                    << 0x1aU) 
                                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_12) 
                                                       << 0x18U) 
                                                      | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_11) 
                                                          << 0x16U) 
                                                         | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_10) 
                                                             << 0x14U) 
                                                            | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_9) 
                                                                << 0x12U) 
                                                               | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_8) 
                                                                   << 0x10U) 
                                                                  | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_7) 
                                                                      << 0xeU) 
                                                                     | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_6) 
                                                                         << 0xcU) 
                                                                        | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_5) 
                                                                            << 0xaU) 
                                                                           | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_4) 
                                                                               << 8U) 
                                                                              | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_3) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_0)))))))))))))))) 
                                            >> (0x1fU 
                                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_bT_9) 
                                                   << 1U)))))
                                : 0U)),2);
    bufp->chgBit(oldp+1239,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_arvalid));
    bufp->chgBit(oldp+1240,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_rready));
    bufp->chgIData(oldp+1241,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_2_0)
                                 ? (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_0)
                                      ? (IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                                 >> 3U))
                                      : 0U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_1)
                                                 ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lmrom__DOT__nodeIn_rdata_r
                                                 : 0U) 
                                               | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_2)
                                                   ? 
                                                  ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_REG)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                       ? 
                                                      (vlSymsp->TOP__ysyxSoCFull__asic.__VdfgTmp_hed8e2367__0 
                                                       >> 0x18U)
                                                       : 0U)
                                                      : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r3)) 
                                                    << 0x18U) 
                                                   | ((0xff0000U 
                                                       & (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_REG)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                             ? 
                                                            (vlSymsp->TOP__ysyxSoCFull__asic.__VdfgTmp_hed8e2367__0 
                                                             >> 0x10U)
                                                             : 0U)
                                                            : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r2)) 
                                                          << 0x10U)) 
                                                      | ((0xff00U 
                                                          & (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_REG)
                                                               ? 
                                                              ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                ? 
                                                               (vlSymsp->TOP__ysyxSoCFull__asic.__VdfgTmp_hed8e2367__0 
                                                                >> 8U)
                                                                : 0U)
                                                               : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r1)) 
                                                             << 8U)) 
                                                         | (0xffU 
                                                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_REG)
                                                                ? 
                                                               ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                 ? vlSymsp->TOP__ysyxSoCFull__asic.__VdfgTmp_hed8e2367__0
                                                                 : 0U)
                                                                : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r0))))))
                                                   : 0U)))
                                 : 0U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_2_1)
                                           ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
                                          [vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr]
                                           : 0U))),32);
    bufp->chgCData(oldp+1242,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_2_0)
                                ? (3U & (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_0)
                                           ? (IData)(
                                                     (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                                      >> 1U))
                                           : 0U) | 
                                         ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_2)
                                           ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__r_sel1)
                                               ? 0U
                                               : 3U)
                                           : 0U))) : 0U)),2);
    bufp->chgBit(oldp+1243,((((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q__DOT__full)) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__requestARIO_0_0)) 
                             | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__requestARIO_0_1) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4delay_delayer_in_arready)))));
    bufp->chgBit(oldp+1244,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__requestARIO_0_0));
    bufp->chgBit(oldp+1245,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__requestARIO_0_1));
    bufp->chgBit(oldp+1246,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__requestAWIO_0_0));
    bufp->chgBit(oldp+1247,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__requestAWIO_0_1));
    bufp->chgSData(oldp+1248,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_arid)))),16);
    bufp->chgSData(oldp+1249,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awid)))),16);
    bufp->chgCData(oldp+1250,(vlSymsp->TOP__ysyxSoCFull__asic.axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits),2);
    bufp->chgBit(oldp+1251,(((~ (IData)(vlSelf->reset)) 
                             & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__is_write)) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___lgpio_auto_in_pready)))));
    bufp->chgBit(oldp+1252,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                              ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                              : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done))));
    bufp->chgIData(oldp+1253,(((0xffff0000U & vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi42apb_auto_out_pwdata) 
                               | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                   << 8U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->chgBit(oldp+1254,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___apbxbar_auto_anon_out_2_psel) 
                             & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state)))));
    bufp->chgBit(oldp+1255,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->chgCData(oldp+1256,((0xffU & ((2U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state))
                                         ? ((IData)(7U) 
                                            + ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                               << 1U))
                                         : ((IData)(0xdU) 
                                            + ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                               << 1U))))),8);
    bufp->chgCData(oldp+1257,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4delay_delayer_out_awvalid)
                                ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awlen)
                                : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4delay_delayer_out_arvalid)
                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_arlen)
                                    : 0U))),8);
    bufp->chgCData(oldp+1258,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4delay_delayer_out_arvalid) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4delay_delayer_in_arready))
                                ? (0x20U | (((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_arlen)) 
                                             << 4U) 
                                            | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_arid)))
                                : (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4delay_delayer_out_awvalid) 
                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4delay_delayer_in_awready))
                                    ? (((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awlen)) 
                                        << 4U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awid))
                                    : (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w) 
                                        << 5U) | ((
                                                   (0U 
                                                    == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q)) 
                                                   << 4U) 
                                                  | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q)))))),6);
    bufp->chgBit(oldp+1259,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4delay_delayer_out_wvalid))));
    bufp->chgIData(oldp+1260,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->chgSData(oldp+1261,(((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                [vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                << 3U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__VdfgTmp_hc8b8208b__0))),11);
    bufp->chgCData(oldp+1262,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                              [vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->chgBit(oldp+1263,(((~ (IData)(vlSelf->reset)) 
                             & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__is_write)) 
                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___apbxbar_auto_anon_out_5_penable) 
                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___apbxbar_auto_anon_out_5_psel))))));
    bufp->chgBit(oldp+1264,(((~ (IData)(vlSelf->reset)) 
                             & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___apbxbar_auto_anon_out_5_psel) 
                                & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___apbxbar_auto_anon_out_5_penable)) 
                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__is_write))))));
    bufp->chgBit(oldp+1265,(vlSymsp->TOP__ysyxSoCFull__sdram0.clk));
    bufp->chgBit(oldp+1266,(vlSymsp->TOP__ysyxSoCFull__sdram0.cke));
    bufp->chgBit(oldp+1267,(vlSymsp->TOP__ysyxSoCFull__sdram0.cs));
    bufp->chgBit(oldp+1268,(vlSymsp->TOP__ysyxSoCFull__sdram0.ras));
    bufp->chgBit(oldp+1269,(vlSymsp->TOP__ysyxSoCFull__sdram0.cas));
    bufp->chgBit(oldp+1270,(vlSymsp->TOP__ysyxSoCFull__sdram0.we));
    bufp->chgSData(oldp+1271,(vlSymsp->TOP__ysyxSoCFull__sdram0.a),13);
    bufp->chgCData(oldp+1272,(vlSymsp->TOP__ysyxSoCFull__sdram0.ba),2);
    bufp->chgCData(oldp+1273,(vlSymsp->TOP__ysyxSoCFull__sdram0.dqm),2);
    bufp->chgSData(oldp+1274,(vlSymsp->TOP__ysyxSoCFull__sdram0.dq),16);
    bufp->chgCData(oldp+1275,(vlSymsp->TOP__ysyxSoCFull__sdram0.cmd),4);
    bufp->chgCData(oldp+1276,(vlSymsp->TOP__ysyxSoCFull__sdram0.cas_latency),3);
    bufp->chgCData(oldp+1277,(vlSymsp->TOP__ysyxSoCFull__sdram0.burst_length),3);
    bufp->chgCData(oldp+1278,(vlSymsp->TOP__ysyxSoCFull__sdram0.read_latency),3);
    bufp->chgCData(oldp+1279,(vlSymsp->TOP__ysyxSoCFull__sdram0.in_read),4);
    bufp->chgCData(oldp+1280,(vlSymsp->TOP__ysyxSoCFull__sdram0.bank_active),4);
    bufp->chgSData(oldp+1281,(vlSymsp->TOP__ysyxSoCFull__sdram0.active_row[0]),13);
    bufp->chgSData(oldp+1282,(vlSymsp->TOP__ysyxSoCFull__sdram0.active_row[1]),13);
    bufp->chgSData(oldp+1283,(vlSymsp->TOP__ysyxSoCFull__sdram0.active_row[2]),13);
    bufp->chgSData(oldp+1284,(vlSymsp->TOP__ysyxSoCFull__sdram0.active_row[3]),13);
    bufp->chgSData(oldp+1285,(vlSymsp->TOP__ysyxSoCFull__sdram0.read_data_pipe),16);
    bufp->chgBit(oldp+1286,(vlSymsp->TOP__ysyxSoCFull__sdram0.read_valid_pipe));
    bufp->chgIData(oldp+1287,(vlSymsp->TOP__ysyxSoCFull__sdram0.shift_reg),32);
    bufp->chgBit(oldp+1288,(vlSymsp->TOP__ysyxSoCFull__sdram0.data_out_en));
    bufp->chgSData(oldp+1289,(vlSymsp->TOP__ysyxSoCFull__sdram0.data_out),16);
    bufp->chgBit(oldp+1290,(vlSymsp->TOP__ysyxSoCFull__sdram1.clk));
    bufp->chgBit(oldp+1291,(vlSymsp->TOP__ysyxSoCFull__sdram1.cke));
    bufp->chgBit(oldp+1292,(vlSymsp->TOP__ysyxSoCFull__sdram1.cs));
    bufp->chgBit(oldp+1293,(vlSymsp->TOP__ysyxSoCFull__sdram1.ras));
    bufp->chgBit(oldp+1294,(vlSymsp->TOP__ysyxSoCFull__sdram1.cas));
    bufp->chgBit(oldp+1295,(vlSymsp->TOP__ysyxSoCFull__sdram1.we));
    bufp->chgSData(oldp+1296,(vlSymsp->TOP__ysyxSoCFull__sdram1.a),13);
    bufp->chgCData(oldp+1297,(vlSymsp->TOP__ysyxSoCFull__sdram1.ba),2);
    bufp->chgCData(oldp+1298,(vlSymsp->TOP__ysyxSoCFull__sdram1.dqm),2);
    bufp->chgSData(oldp+1299,(vlSymsp->TOP__ysyxSoCFull__sdram1.dq),16);
    bufp->chgCData(oldp+1300,(vlSymsp->TOP__ysyxSoCFull__sdram1.cmd),4);
    bufp->chgCData(oldp+1301,(vlSymsp->TOP__ysyxSoCFull__sdram1.cas_latency),3);
    bufp->chgCData(oldp+1302,(vlSymsp->TOP__ysyxSoCFull__sdram1.burst_length),3);
    bufp->chgCData(oldp+1303,(vlSymsp->TOP__ysyxSoCFull__sdram1.read_latency),3);
    bufp->chgCData(oldp+1304,(vlSymsp->TOP__ysyxSoCFull__sdram1.in_read),4);
    bufp->chgCData(oldp+1305,(vlSymsp->TOP__ysyxSoCFull__sdram1.bank_active),4);
    bufp->chgSData(oldp+1306,(vlSymsp->TOP__ysyxSoCFull__sdram1.active_row[0]),13);
    bufp->chgSData(oldp+1307,(vlSymsp->TOP__ysyxSoCFull__sdram1.active_row[1]),13);
    bufp->chgSData(oldp+1308,(vlSymsp->TOP__ysyxSoCFull__sdram1.active_row[2]),13);
    bufp->chgSData(oldp+1309,(vlSymsp->TOP__ysyxSoCFull__sdram1.active_row[3]),13);
    bufp->chgSData(oldp+1310,(vlSymsp->TOP__ysyxSoCFull__sdram1.read_data_pipe),16);
    bufp->chgBit(oldp+1311,(vlSymsp->TOP__ysyxSoCFull__sdram1.read_valid_pipe));
    bufp->chgIData(oldp+1312,(vlSymsp->TOP__ysyxSoCFull__sdram1.shift_reg),32);
    bufp->chgBit(oldp+1313,(vlSymsp->TOP__ysyxSoCFull__sdram1.data_out_en));
    bufp->chgSData(oldp+1314,(vlSymsp->TOP__ysyxSoCFull__sdram1.data_out),16);
    bufp->chgBit(oldp+1315,(vlSymsp->TOP__ysyxSoCFull__sdram2.clk));
    bufp->chgBit(oldp+1316,(vlSymsp->TOP__ysyxSoCFull__sdram2.cke));
    bufp->chgBit(oldp+1317,(vlSymsp->TOP__ysyxSoCFull__sdram2.cs));
    bufp->chgBit(oldp+1318,(vlSymsp->TOP__ysyxSoCFull__sdram2.ras));
    bufp->chgBit(oldp+1319,(vlSymsp->TOP__ysyxSoCFull__sdram2.cas));
    bufp->chgBit(oldp+1320,(vlSymsp->TOP__ysyxSoCFull__sdram2.we));
    bufp->chgSData(oldp+1321,(vlSymsp->TOP__ysyxSoCFull__sdram2.a),13);
    bufp->chgCData(oldp+1322,(vlSymsp->TOP__ysyxSoCFull__sdram2.ba),2);
    bufp->chgCData(oldp+1323,(vlSymsp->TOP__ysyxSoCFull__sdram2.dqm),2);
    bufp->chgSData(oldp+1324,(vlSymsp->TOP__ysyxSoCFull__sdram2.dq),16);
    bufp->chgCData(oldp+1325,(vlSymsp->TOP__ysyxSoCFull__sdram2.cmd),4);
    bufp->chgCData(oldp+1326,(vlSymsp->TOP__ysyxSoCFull__sdram2.cas_latency),3);
    bufp->chgCData(oldp+1327,(vlSymsp->TOP__ysyxSoCFull__sdram2.burst_length),3);
    bufp->chgCData(oldp+1328,(vlSymsp->TOP__ysyxSoCFull__sdram2.read_latency),3);
    bufp->chgCData(oldp+1329,(vlSymsp->TOP__ysyxSoCFull__sdram2.in_read),4);
    bufp->chgCData(oldp+1330,(vlSymsp->TOP__ysyxSoCFull__sdram2.bank_active),4);
    bufp->chgSData(oldp+1331,(vlSymsp->TOP__ysyxSoCFull__sdram2.active_row[0]),13);
    bufp->chgSData(oldp+1332,(vlSymsp->TOP__ysyxSoCFull__sdram2.active_row[1]),13);
    bufp->chgSData(oldp+1333,(vlSymsp->TOP__ysyxSoCFull__sdram2.active_row[2]),13);
    bufp->chgSData(oldp+1334,(vlSymsp->TOP__ysyxSoCFull__sdram2.active_row[3]),13);
    bufp->chgSData(oldp+1335,(vlSymsp->TOP__ysyxSoCFull__sdram2.read_data_pipe),16);
    bufp->chgBit(oldp+1336,(vlSymsp->TOP__ysyxSoCFull__sdram2.read_valid_pipe));
    bufp->chgIData(oldp+1337,(vlSymsp->TOP__ysyxSoCFull__sdram2.shift_reg),32);
    bufp->chgBit(oldp+1338,(vlSymsp->TOP__ysyxSoCFull__sdram2.data_out_en));
    bufp->chgSData(oldp+1339,(vlSymsp->TOP__ysyxSoCFull__sdram2.data_out),16);
    bufp->chgBit(oldp+1340,(vlSymsp->TOP__ysyxSoCFull__sdram3.clk));
    bufp->chgBit(oldp+1341,(vlSymsp->TOP__ysyxSoCFull__sdram3.cke));
    bufp->chgBit(oldp+1342,(vlSymsp->TOP__ysyxSoCFull__sdram3.cs));
    bufp->chgBit(oldp+1343,(vlSymsp->TOP__ysyxSoCFull__sdram3.ras));
    bufp->chgBit(oldp+1344,(vlSymsp->TOP__ysyxSoCFull__sdram3.cas));
    bufp->chgBit(oldp+1345,(vlSymsp->TOP__ysyxSoCFull__sdram3.we));
    bufp->chgSData(oldp+1346,(vlSymsp->TOP__ysyxSoCFull__sdram3.a),13);
    bufp->chgCData(oldp+1347,(vlSymsp->TOP__ysyxSoCFull__sdram3.ba),2);
    bufp->chgCData(oldp+1348,(vlSymsp->TOP__ysyxSoCFull__sdram3.dqm),2);
    bufp->chgSData(oldp+1349,(vlSymsp->TOP__ysyxSoCFull__sdram3.dq),16);
    bufp->chgCData(oldp+1350,(vlSymsp->TOP__ysyxSoCFull__sdram3.cmd),4);
    bufp->chgCData(oldp+1351,(vlSymsp->TOP__ysyxSoCFull__sdram3.cas_latency),3);
    bufp->chgCData(oldp+1352,(vlSymsp->TOP__ysyxSoCFull__sdram3.burst_length),3);
    bufp->chgCData(oldp+1353,(vlSymsp->TOP__ysyxSoCFull__sdram3.read_latency),3);
    bufp->chgCData(oldp+1354,(vlSymsp->TOP__ysyxSoCFull__sdram3.in_read),4);
    bufp->chgCData(oldp+1355,(vlSymsp->TOP__ysyxSoCFull__sdram3.bank_active),4);
    bufp->chgSData(oldp+1356,(vlSymsp->TOP__ysyxSoCFull__sdram3.active_row[0]),13);
    bufp->chgSData(oldp+1357,(vlSymsp->TOP__ysyxSoCFull__sdram3.active_row[1]),13);
    bufp->chgSData(oldp+1358,(vlSymsp->TOP__ysyxSoCFull__sdram3.active_row[2]),13);
    bufp->chgSData(oldp+1359,(vlSymsp->TOP__ysyxSoCFull__sdram3.active_row[3]),13);
    bufp->chgSData(oldp+1360,(vlSymsp->TOP__ysyxSoCFull__sdram3.read_data_pipe),16);
    bufp->chgBit(oldp+1361,(vlSymsp->TOP__ysyxSoCFull__sdram3.read_valid_pipe));
    bufp->chgIData(oldp+1362,(vlSymsp->TOP__ysyxSoCFull__sdram3.shift_reg),32);
    bufp->chgBit(oldp+1363,(vlSymsp->TOP__ysyxSoCFull__sdram3.data_out_en));
    bufp->chgSData(oldp+1364,(vlSymsp->TOP__ysyxSoCFull__sdram3.data_out),16);
    bufp->chgBit(oldp+1365,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_0) 
                             | (IData)(vlSelf->reset))));
    bufp->chgBit(oldp+1366,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.clock));
    bufp->chgBit(oldp+1367,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset));
    bufp->chgBit(oldp+1368,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_interrupt));
    bufp->chgBit(oldp+1369,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awready));
    bufp->chgBit(oldp+1370,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_wready));
    bufp->chgBit(oldp+1371,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_bvalid));
    bufp->chgCData(oldp+1372,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_bresp),2);
    bufp->chgCData(oldp+1373,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_bid),4);
    bufp->chgBit(oldp+1374,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_arready));
    bufp->chgBit(oldp+1375,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_rvalid));
    bufp->chgCData(oldp+1376,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_rresp),2);
    bufp->chgIData(oldp+1377,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_rdata),32);
    bufp->chgBit(oldp+1378,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_rlast));
    bufp->chgCData(oldp+1379,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_rid),4);
    bufp->chgBit(oldp+1380,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_slave_awready));
    bufp->chgBit(oldp+1381,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_slave_awvalid));
    bufp->chgIData(oldp+1382,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_slave_awaddr),32);
    bufp->chgCData(oldp+1383,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_slave_awid),4);
    bufp->chgCData(oldp+1384,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_slave_awlen),8);
    bufp->chgCData(oldp+1385,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_slave_awsize),3);
    bufp->chgCData(oldp+1386,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_slave_awburst),2);
    bufp->chgBit(oldp+1387,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_slave_wready));
    bufp->chgBit(oldp+1388,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_slave_wvalid));
    bufp->chgIData(oldp+1389,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_slave_wdata),32);
    bufp->chgCData(oldp+1390,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_slave_wstrb),4);
    bufp->chgBit(oldp+1391,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_slave_wlast));
    bufp->chgBit(oldp+1392,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_slave_bready));
    bufp->chgBit(oldp+1393,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_slave_bvalid));
    bufp->chgCData(oldp+1394,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_slave_bresp),2);
    bufp->chgCData(oldp+1395,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_slave_bid),4);
    bufp->chgBit(oldp+1396,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_slave_arready));
    bufp->chgBit(oldp+1397,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_slave_arvalid));
    bufp->chgIData(oldp+1398,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_slave_araddr),32);
    bufp->chgCData(oldp+1399,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_slave_arid),4);
    bufp->chgCData(oldp+1400,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_slave_arlen),8);
    bufp->chgCData(oldp+1401,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_slave_arsize),3);
    bufp->chgCData(oldp+1402,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_slave_arburst),2);
    bufp->chgBit(oldp+1403,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_slave_rready));
    bufp->chgBit(oldp+1404,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_slave_rvalid));
    bufp->chgCData(oldp+1405,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_slave_rresp),2);
    bufp->chgIData(oldp+1406,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_slave_rdata),32);
    bufp->chgBit(oldp+1407,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_slave_rlast));
    bufp->chgCData(oldp+1408,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_slave_rid),4);
    bufp->chgBit(oldp+1409,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.inst_finish));
    bufp->chgBit(oldp+1410,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.fs_to_ds_valid));
    bufp->chgBit(oldp+1411,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.ds_allowin));
    bufp->chgBit(oldp+1412,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.ds_to_es_valid));
    bufp->chgBit(oldp+1413,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.es_allowin));
    bufp->chgBit(oldp+1414,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.es_to_ms_valid));
    bufp->chgBit(oldp+1415,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.ms_allowin));
    bufp->chgBit(oldp+1416,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.ms_to_ws_valid));
    bufp->chgBit(oldp+1417,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.ws_allowin));
    bufp->chgQData(oldp+1418,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.fs_to_ds_bus),64);
    bufp->chgWData(oldp+1420,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.ds_to_es_bus),225);
    bufp->chgWData(oldp+1428,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.es_to_ms_bus),176);
    bufp->chgWData(oldp+1434,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.ms_to_ws_bus),235);
    bufp->chgQData(oldp+1442,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.br_bus),33);
    bufp->chgQData(oldp+1444,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.es_to_ds_forward_bus),39);
    bufp->chgQData(oldp+1446,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.ms_to_ds_forward_bus),39);
    bufp->chgQData(oldp+1448,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.ws_to_ds_forward_bus),38);
    bufp->chgIData(oldp+1450,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.seq_pc),32);
    bufp->chgBit(oldp+1451,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.br_stall));
    bufp->chgBit(oldp+1452,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.br_taken));
    bufp->chgIData(oldp+1453,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.br_target),32);
    bufp->chgBit(oldp+1454,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.mret));
    bufp->chgBit(oldp+1455,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.ecall));
    bufp->chgBit(oldp+1456,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.fence));
    bufp->chgBit(oldp+1457,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.rf_wen));
    bufp->chgBit(oldp+1458,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.csr_wen));
    bufp->chgBit(oldp+1459,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.mem_wen));
    bufp->chgBit(oldp+1460,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.mem_ren));
    bufp->chgCData(oldp+1461,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.mem_op),4);
    bufp->chgCData(oldp+1462,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.load),4);
    bufp->chgBit(oldp+1463,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.load_sign));
    bufp->chgCData(oldp+1464,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.store),4);
    bufp->chgBit(oldp+1465,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.res_from_csr));
    bufp->chgCData(oldp+1466,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.rd),5);
    bufp->chgCData(oldp+1467,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.rs1),5);
    bufp->chgCData(oldp+1468,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.rs2),5);
    bufp->chgSData(oldp+1469,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.csr_addr),12);
    bufp->chgSData(oldp+1470,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.wr_csr_addr),12);
    bufp->chgIData(oldp+1471,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.csr_data),32);
    bufp->chgIData(oldp+1472,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.wr_csr_data),32);
    bufp->chgIData(oldp+1473,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.src1),32);
    bufp->chgIData(oldp+1474,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.src2),32);
    bufp->chgSData(oldp+1475,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.alu_op),12);
    bufp->chgCData(oldp+1476,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.csr_op),2);
    bufp->chgIData(oldp+1477,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.rs1_data),32);
    bufp->chgIData(oldp+1478,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.rs2_data),32);
    bufp->chgIData(oldp+1479,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.alu_result),32);
    bufp->chgIData(oldp+1480,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.load_data),32);
    bufp->chgIData(oldp+1481,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.st_data),32);
    bufp->chgIData(oldp+1482,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.csr_result),32);
    bufp->chgIData(oldp+1483,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.wb_data),32);
    bufp->chgBit(oldp+1484,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.cache_flush));
    bufp->chgBit(oldp+1485,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.ifu_arvalid));
    bufp->chgIData(oldp+1486,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.ifu_araddr),32);
    bufp->chgIData(oldp+1487,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.ifu_rdata),32);
    bufp->chgBit(oldp+1488,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.ifu_rvalid));
    bufp->chgBit(oldp+1489,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.icache_arvalid));
    bufp->chgIData(oldp+1490,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.icache_araddr),32);
    bufp->chgCData(oldp+1491,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.icache_arlen),8);
    bufp->chgCData(oldp+1492,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.icache_arsize),3);
    bufp->chgBit(oldp+1493,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.icache_arready));
    bufp->chgCData(oldp+1494,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.icache_arburst),2);
    bufp->chgIData(oldp+1495,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.icache_rdata),32);
    bufp->chgBit(oldp+1496,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.icache_rvalid));
    bufp->chgCData(oldp+1497,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.icache_rresp),2);
    bufp->chgBit(oldp+1498,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.icache_rready));
    bufp->chgBit(oldp+1499,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.icache_rlast));
    bufp->chgBit(oldp+1500,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.lsu_arvalid));
    bufp->chgBit(oldp+1501,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.lsu_arready));
    bufp->chgBit(oldp+1502,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.lsu_rvalid));
    bufp->chgBit(oldp+1503,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.lsu_rready));
    bufp->chgBit(oldp+1504,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.lsu_awvalid));
    bufp->chgBit(oldp+1505,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.lsu_awready));
    bufp->chgBit(oldp+1506,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.lsu_wvalid));
    bufp->chgBit(oldp+1507,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.lsu_wready));
    bufp->chgBit(oldp+1508,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.lsu_wlast));
    bufp->chgBit(oldp+1509,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.lsu_bvalid));
    bufp->chgBit(oldp+1510,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.lsu_bready));
    bufp->chgIData(oldp+1511,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.lsu_awaddr),32);
    bufp->chgIData(oldp+1512,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.lsu_wdata),32);
    bufp->chgIData(oldp+1513,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.lsu_araddr),32);
    bufp->chgIData(oldp+1514,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.lsu_rdata),32);
    bufp->chgCData(oldp+1515,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.lsu_awlen),8);
    bufp->chgCData(oldp+1516,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.lsu_arlen),8);
    bufp->chgCData(oldp+1517,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.lsu_wstrb),4);
    bufp->chgCData(oldp+1518,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.lsu_awsize),3);
    bufp->chgCData(oldp+1519,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.lsu_arsize),3);
    bufp->chgCData(oldp+1520,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.lsu_rresp),2);
    bufp->chgCData(oldp+1521,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.lsu_bresp),2);
    bufp->chgBit(oldp+1522,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.clint_arvalid));
    bufp->chgBit(oldp+1523,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.clint_arready));
    bufp->chgBit(oldp+1524,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.clint_rvalid));
    bufp->chgBit(oldp+1525,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.clint_rready));
    bufp->chgIData(oldp+1526,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.clint_araddr),32);
    bufp->chgIData(oldp+1527,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.clint_rdata),32);
    bufp->chgCData(oldp+1528,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.clint_arlen),8);
    bufp->chgCData(oldp+1529,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.clint_arsize),3);
    bufp->chgCData(oldp+1530,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.clint_rresp),2);
    bufp->chgIData(oldp+1531,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.ds_pc),32);
    bufp->chgIData(oldp+1532,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.csr_mtvec),32);
    bufp->chgIData(oldp+1533,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.csr_mepc),32);
    bufp->chgBit(oldp+1534,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__axi_xbar__DOT__arvalid));
    bufp->chgBit(oldp+1535,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__axi_xbar__DOT__rready));
    bufp->chgBit(oldp+1536,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__axi_xbar__DOT__rvalid));
    bufp->chgIData(oldp+1537,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__axi_xbar__DOT__araddr),32);
    bufp->chgIData(oldp+1538,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__axi_xbar__DOT__rdata),32);
    bufp->chgCData(oldp+1539,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__axi_xbar__DOT__arlen),8);
    bufp->chgCData(oldp+1540,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__axi_xbar__DOT__arsize),3);
    bufp->chgCData(oldp+1541,(((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__axi_xbar__DOT__state))
                                ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.icache_arburst)
                                : 0U)),2);
    bufp->chgCData(oldp+1542,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__axi_xbar__DOT__rresp),2);
    bufp->chgBit(oldp+1543,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.clock));
    bufp->chgBit(oldp+1544,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.reset));
    bufp->chgBit(oldp+1545,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.arvalid));
    bufp->chgIData(oldp+1546,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.araddr),32);
    bufp->chgCData(oldp+1547,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.arlen),8);
    bufp->chgCData(oldp+1548,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.arsize),3);
    bufp->chgBit(oldp+1549,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.arready));
    bufp->chgBit(oldp+1550,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.rvalid));
    bufp->chgIData(oldp+1551,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.rdata),32);
    bufp->chgCData(oldp+1552,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.rresp),2);
    bufp->chgBit(oldp+1553,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.rready));
    bufp->chgBit(oldp+1554,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.awvalid));
    bufp->chgIData(oldp+1555,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.awaddr),32);
    bufp->chgCData(oldp+1556,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.awlen),8);
    bufp->chgCData(oldp+1557,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.awsize),3);
    bufp->chgBit(oldp+1558,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.awready));
    bufp->chgBit(oldp+1559,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.wvalid));
    bufp->chgIData(oldp+1560,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.wdata),32);
    bufp->chgCData(oldp+1561,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.wstrb),4);
    bufp->chgBit(oldp+1562,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.wlast));
    bufp->chgBit(oldp+1563,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.wready));
    bufp->chgBit(oldp+1564,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.bvalid));
    bufp->chgCData(oldp+1565,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.bresp),2);
    bufp->chgBit(oldp+1566,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.bready));
    bufp->chgBit(oldp+1567,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.es_to_ms_valid));
    bufp->chgWData(oldp+1568,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.es_to_ms_bus),176);
    bufp->chgBit(oldp+1574,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.ms_to_ws_valid));
    bufp->chgWData(oldp+1575,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.ms_to_ws_bus),235);
    bufp->chgQData(oldp+1583,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.ms_to_ds_forward_bus),39);
    bufp->chgBit(oldp+1585,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.ws_allowin));
    bufp->chgBit(oldp+1586,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.ms_allowin));
    bufp->chgCData(oldp+1587,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.ms_state),3);
    bufp->chgCData(oldp+1588,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.next_state),3);
    bufp->chgCData(oldp+1589,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.delay_count),5);
    bufp->chgWData(oldp+1590,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.es_to_ms_bus_r),176);
    bufp->chgBit(oldp+1596,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.ms_ready_go));
    bufp->chgBit(oldp+1597,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.ms_valid));
    bufp->chgIData(oldp+1598,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.pref_cnt_l),32);
    bufp->chgIData(oldp+1599,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.pref_cnt_s),32);
    bufp->chgIData(oldp+1600,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.delay_cnt),32);
    bufp->chgBit(oldp+1601,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.access_start));
    bufp->chgIData(oldp+1602,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.ms_pc),32);
    bufp->chgIData(oldp+1603,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.load_data),32);
    bufp->chgIData(oldp+1604,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.ms_alu_result),32);
    bufp->chgIData(oldp+1605,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.mem_addr),32);
    bufp->chgIData(oldp+1606,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.st_data),32);
    bufp->chgIData(oldp+1607,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.csr_data),32);
    bufp->chgCData(oldp+1608,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.dest),5);
    bufp->chgCData(oldp+1609,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.load),4);
    bufp->chgCData(oldp+1610,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.store),4);
    bufp->chgBit(oldp+1611,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.load_sign));
    bufp->chgBit(oldp+1612,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.res_from_csr));
    bufp->chgBit(oldp+1613,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.rf_wen));
    bufp->chgBit(oldp+1614,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.is_ls));
    bufp->chgIData(oldp+1615,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.mem_rdata),32);
    bufp->chgBit(oldp+1616,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.mem_wen));
    bufp->chgCData(oldp+1617,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.byte_offset),2);
    bufp->chgCData(oldp+1618,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.selected_byte),8);
    bufp->chgSData(oldp+1619,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.selected_halfword),16);
    bufp->chgIData(oldp+1620,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.forward_data),32);
    bufp->chgBit(oldp+1621,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.dep_need_stall));
    bufp->chgBit(oldp+1622,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.forward_enable));
    bufp->chgBit(oldp+1623,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.clock));
    bufp->chgBit(oldp+1624,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.reset));
    bufp->chgBit(oldp+1625,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.inst_finish));
    bufp->chgBit(oldp+1626,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.ds_allowin));
    bufp->chgQData(oldp+1627,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.br_bus),33);
    bufp->chgBit(oldp+1629,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.fence));
    bufp->chgBit(oldp+1630,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.ecall));
    bufp->chgBit(oldp+1631,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.mret));
    bufp->chgIData(oldp+1632,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.csr_mtvec),32);
    bufp->chgIData(oldp+1633,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.csr_mepc),32);
    bufp->chgBit(oldp+1634,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.fs_to_ds_valid));
    bufp->chgQData(oldp+1635,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.fs_to_ds_bus),64);
    bufp->chgBit(oldp+1637,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.arvalid));
    bufp->chgIData(oldp+1638,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.araddr),32);
    bufp->chgBit(oldp+1639,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.rvalid));
    bufp->chgIData(oldp+1640,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.rdata),32);
    bufp->chgIData(oldp+1641,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.pref_cnt),32);
    bufp->chgQData(oldp+1642,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.delay_cnt),64);
    bufp->chgBit(oldp+1644,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.access_start));
    bufp->chgCData(oldp+1645,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.fs_state),2);
    bufp->chgIData(oldp+1646,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.ifu_rdata),32);
    bufp->chgIData(oldp+1647,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.pc),32);
    bufp->chgBit(oldp+1648,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.fs_valid));
    bufp->chgIData(oldp+1649,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.next_pc),32);
    bufp->chgIData(oldp+1650,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.seq_pc),32);
    bufp->chgBit(oldp+1651,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.to_fs_valid));
    bufp->chgBit(oldp+1652,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.fs_allowin));
    bufp->chgBit(oldp+1653,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.fs_ready_go));
    bufp->chgBit(oldp+1654,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.btb_pre_error_flush));
    bufp->chgIData(oldp+1655,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.btb_pre_error_flushtarget),32);
    bufp->chgBit(oldp+1656,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.flush_sign));
    bufp->chgIData(oldp+1657,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.next_pc_reg),32);
    bufp->chgBit(oldp+1658,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.clock));
    bufp->chgBit(oldp+1659,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.reset));
    bufp->chgBit(oldp+1660,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.ds_to_es_valid));
    bufp->chgWData(oldp+1661,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.ds_to_es_bus),225);
    bufp->chgBit(oldp+1669,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.ms_allowin));
    bufp->chgBit(oldp+1670,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.es_allowin));
    bufp->chgBit(oldp+1671,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.es_to_ms_valid));
    bufp->chgWData(oldp+1672,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.es_to_ms_bus),176);
    bufp->chgQData(oldp+1678,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.forward_bus),39);
    bufp->chgIData(oldp+1680,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.pref_cnt),32);
    bufp->chgWData(oldp+1681,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.ds_to_es_bus_r),225);
    bufp->chgBit(oldp+1689,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.es_valid));
    bufp->chgBit(oldp+1690,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.es_ready_go));
    bufp->chgBit(oldp+1691,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.res_from_csr));
    bufp->chgBit(oldp+1692,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.rf_wen));
    bufp->chgBit(oldp+1693,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.load_sign));
    bufp->chgCData(oldp+1694,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.load),4);
    bufp->chgCData(oldp+1695,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.store),4);
    bufp->chgSData(oldp+1696,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.alu_op),12);
    bufp->chgIData(oldp+1697,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.alu_src1),32);
    bufp->chgIData(oldp+1698,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.alu_src2),32);
    bufp->chgIData(oldp+1699,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.mem_addr),32);
    bufp->chgIData(oldp+1700,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.st_data),32);
    bufp->chgCData(oldp+1701,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.shamt),5);
    bufp->chgCData(oldp+1702,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.dest),5);
    bufp->chgIData(oldp+1703,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.csr_data),32);
    bufp->chgIData(oldp+1704,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.es_pc),32);
    bufp->chgIData(oldp+1705,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.alu_result),32);
    bufp->chgBit(oldp+1706,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.forward_enable));
    bufp->chgBit(oldp+1707,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.dep_need_stall));
    bufp->chgBit(oldp+1708,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.es_state));
    bufp->chgBit(oldp+1709,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.next_state));
    bufp->chgBit(oldp+1710,((1U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.ds_to_es_bus_r[0U] 
                                   >> 0x15U))));
    bufp->chgBit(oldp+1711,((1U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.ds_to_es_bus_r[0U] 
                                   >> 0x16U))));
    bufp->chgBit(oldp+1712,((1U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.ds_to_es_bus_r[0U] 
                                   >> 0x17U))));
    bufp->chgBit(oldp+1713,((1U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.ds_to_es_bus_r[0U] 
                                   >> 0x18U))));
    bufp->chgBit(oldp+1714,((1U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.ds_to_es_bus_r[0U] 
                                   >> 0x19U))));
    bufp->chgBit(oldp+1715,((1U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.ds_to_es_bus_r[0U] 
                                   >> 0x1aU))));
    bufp->chgBit(oldp+1716,((1U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.ds_to_es_bus_r[0U] 
                                   >> 0x1bU))));
    bufp->chgBit(oldp+1717,((1U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.ds_to_es_bus_r[0U] 
                                   >> 0x1cU))));
    bufp->chgBit(oldp+1718,((1U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.ds_to_es_bus_r[0U] 
                                   >> 0x1dU))));
    bufp->chgBit(oldp+1719,((1U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.ds_to_es_bus_r[0U] 
                                   >> 0x1eU))));
    bufp->chgBit(oldp+1720,((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.ds_to_es_bus_r[0U] 
                             >> 0x1fU)));
    bufp->chgBit(oldp+1721,((1U & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.ds_to_es_bus_r[1U])));
    bufp->chgIData(oldp+1722,((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.alu_src1 
                               + (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.__PVT__alu__DOT__adder_b 
                                  + (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.__PVT__alu__DOT__adder_cin)))),32);
    bufp->chgIData(oldp+1723,((1U & (~ (IData)((1ULL 
                                                & (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.alu_src1)) 
                                                    + 
                                                    ((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.__PVT__alu__DOT__adder_b)) 
                                                     + (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.__PVT__alu__DOT__adder_cin)))) 
                                                   >> 0x20U)))))),32);
    bufp->chgIData(oldp+1724,((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.alu_src1 
                               ^ vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.alu_src2)),32);
    bufp->chgIData(oldp+1725,((((0x1fU >= ((IData)(0x20U) 
                                           - (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.shamt)))
                                 ? ((- (IData)((1U 
                                                & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.ds_to_es_bus_r[6U]))) 
                                    << ((IData)(0x20U) 
                                        - (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.shamt)))
                                 : 0U) | vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.__PVT__alu__DOT__srli_result)),32);
    bufp->chgIData(oldp+1726,((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.alu_src1 
                               & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.alu_src2)),32);
    bufp->chgIData(oldp+1727,((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.alu_src1 
                               << (0x1fU & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.ds_to_es_bus_r[4U] 
                                            >> 1U)))),32);
    bufp->chgIData(oldp+1728,((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.alu_src1 
                               | vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.alu_src2)),32);
    bufp->chgIData(oldp+1729,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.__PVT__alu__DOT__srli_result),32);
    bufp->chgIData(oldp+1730,((1U & ((1U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.ds_to_es_bus_r[6U] 
                                            ^ vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.ds_to_es_bus_r[5U]))
                                      ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.ds_to_es_bus_r[6U]
                                      : (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.alu_src1 
                                         < vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.alu_src2)))),32);
    bufp->chgIData(oldp+1731,((((0x1fU >= ((IData)(0x20U) 
                                           - (0x1fU 
                                              & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.ds_to_es_bus_r[4U] 
                                                 >> 1U))))
                                 ? ((- (IData)((1U 
                                                & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.ds_to_es_bus_r[6U]))) 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.ds_to_es_bus_r[4U] 
                                            >> 1U))))
                                 : 0U) | vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.__PVT__alu__DOT__srl_result)),32);
    bufp->chgIData(oldp+1732,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.__PVT__alu__DOT__srl_result),32);
    bufp->chgIData(oldp+1733,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.__PVT__alu__DOT__adder_b),32);
    bufp->chgBit(oldp+1734,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.__PVT__alu__DOT__adder_cin));
    bufp->chgBit(oldp+1735,((1U & (IData)((1ULL & (
                                                   ((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.alu_src1)) 
                                                    + 
                                                    ((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.__PVT__alu__DOT__adder_b)) 
                                                     + (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.__PVT__alu__DOT__adder_cin)))) 
                                                   >> 0x20U))))));
    bufp->chgIData(oldp+1736,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__csr.ds_pc),32);
    bufp->chgBit(oldp+1737,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__csr.clock));
    bufp->chgBit(oldp+1738,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__csr.reset));
    bufp->chgBit(oldp+1739,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__csr.ecall));
    bufp->chgBit(oldp+1740,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__csr.mret));
    bufp->chgSData(oldp+1741,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__csr.rd_addr),12);
    bufp->chgIData(oldp+1742,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__csr.rd_data),32);
    bufp->chgBit(oldp+1743,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__csr.csr_wen));
    bufp->chgSData(oldp+1744,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__csr.wr_addr),12);
    bufp->chgIData(oldp+1745,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__csr.wr_data),32);
    bufp->chgIData(oldp+1746,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__csr.csr_mepc),32);
    bufp->chgIData(oldp+1747,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__csr.csr_mtvec),32);
    bufp->chgIData(oldp+1748,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__csr.csr_mcycle),32);
    bufp->chgIData(oldp+1749,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__csr.csr_mcycle_h),32);
    bufp->chgIData(oldp+1750,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__csr.csr_mvendorid),32);
    bufp->chgIData(oldp+1751,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__csr.csr_marchid),32);
    bufp->chgIData(oldp+1752,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__csr.csr_mstatus),32);
    bufp->chgIData(oldp+1753,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__csr.csr_mcause),32);
    bufp->chgBit(oldp+1754,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.clock));
    bufp->chgBit(oldp+1755,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.reset));
    bufp->chgBit(oldp+1756,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.ms_to_ws_valid));
    bufp->chgWData(oldp+1757,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.ms_to_ws_bus),235);
    bufp->chgBit(oldp+1765,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.ws_allowin));
    bufp->chgCData(oldp+1766,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.rs1),5);
    bufp->chgCData(oldp+1767,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.rs2),5);
    bufp->chgIData(oldp+1768,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.rf1_data),32);
    bufp->chgIData(oldp+1769,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.rf2_data),32);
    bufp->chgQData(oldp+1770,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.ws_to_ds_forward_bus),38);
    bufp->chgBit(oldp+1772,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.inst_finish));
    bufp->chgWData(oldp+1773,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.ms_to_ws_bus_r),235);
    bufp->chgIData(oldp+1781,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.debug_mem_addr),32);
    bufp->chgIData(oldp+1782,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.debug_mem_wdata),32);
    bufp->chgIData(oldp+1783,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.debug_mem_rdata),32);
    bufp->chgIData(oldp+1784,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.ws_pc),32);
    bufp->chgIData(oldp+1785,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.alu_result),32);
    bufp->chgCData(oldp+1786,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.load),4);
    bufp->chgIData(oldp+1787,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.load_data),32);
    bufp->chgCData(oldp+1788,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.dest),5);
    bufp->chgBit(oldp+1789,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.res_from_csr));
    bufp->chgBit(oldp+1790,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.rf_wen));
    bufp->chgIData(oldp+1791,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.csr_data),32);
    bufp->chgIData(oldp+1792,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.wb_data),32);
    bufp->chgIData(oldp+1793,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.ws_to_ds_forward_data),32);
    bufp->chgBit(oldp+1794,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.ws_to_ds_forward_enable));
    bufp->chgBit(oldp+1795,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.ws_ready_go));
    bufp->chgBit(oldp+1796,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.ws_valid));
    bufp->chgBit(oldp+1797,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.ws_state));
    bufp->chgBit(oldp+1798,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.next_state));
    bufp->chgBit(oldp+1799,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.clock));
    bufp->chgBit(oldp+1800,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.reset));
    bufp->chgQData(oldp+1801,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.fs_to_ds_bus),64);
    bufp->chgBit(oldp+1803,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.fs_to_ds_valid));
    bufp->chgCData(oldp+1804,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.rs1),5);
    bufp->chgCData(oldp+1805,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.rs2),5);
    bufp->chgIData(oldp+1806,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.rf1_data),32);
    bufp->chgIData(oldp+1807,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.rf2_data),32);
    bufp->chgBit(oldp+1808,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.es_allowin));
    bufp->chgBit(oldp+1809,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.ds_to_es_valid));
    bufp->chgWData(oldp+1810,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.ds_to_es_bus),225);
    bufp->chgBit(oldp+1818,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.cache_flush));
    bufp->chgQData(oldp+1819,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.es_to_ds_forward_bus),39);
    bufp->chgQData(oldp+1821,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.ms_to_ds_forward_bus),39);
    bufp->chgQData(oldp+1823,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.ws_to_ds_forward_bus),38);
    bufp->chgBit(oldp+1825,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.ds_allowin));
    bufp->chgQData(oldp+1826,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.br_bus),33);
    bufp->chgBit(oldp+1828,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.fence));
    bufp->chgBit(oldp+1829,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.ecall));
    bufp->chgBit(oldp+1830,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.mret));
    bufp->chgIData(oldp+1831,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.csr_data),32);
    bufp->chgIData(oldp+1832,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.csr_result),32);
    bufp->chgSData(oldp+1833,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.csr_addr),12);
    bufp->chgCData(oldp+1834,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.csr_op),2);
    bufp->chgBit(oldp+1835,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.ds_valid));
    bufp->chgBit(oldp+1836,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.ds_ready_go));
    bufp->chgIData(oldp+1837,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.pref_cnt_alu),32);
    bufp->chgIData(oldp+1838,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.pref_cnt_ls),32);
    bufp->chgIData(oldp+1839,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.pref_cnt_br),32);
    bufp->chgIData(oldp+1840,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.pref_cnt_csr),32);
    bufp->chgQData(oldp+1841,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.fs_to_ds_bus_r),64);
    bufp->chgIData(oldp+1843,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.ds_pc),32);
    bufp->chgBit(oldp+1844,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.valid));
    bufp->chgCData(oldp+1845,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.opcode),7);
    bufp->chgCData(oldp+1846,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.funct3),3);
    bufp->chgCData(oldp+1847,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.funct7),7);
    bufp->chgIData(oldp+1848,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.imm),32);
    bufp->chgIData(oldp+1849,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.src1),32);
    bufp->chgIData(oldp+1850,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.src2),32);
    bufp->chgIData(oldp+1851,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.mem_addr),32);
    bufp->chgIData(oldp+1852,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.st_data),32);
    bufp->chgIData(oldp+1853,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.br_target),32);
    bufp->chgBit(oldp+1854,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.br_taken));
    bufp->chgSData(oldp+1855,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.alu_op),12);
    bufp->chgCData(oldp+1856,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.rd),5);
    bufp->chgCData(oldp+1857,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.load),4);
    bufp->chgCData(oldp+1858,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.store),4);
    bufp->chgBit(oldp+1859,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.load_sign));
    bufp->chgBit(oldp+1860,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.mem_ren));
    bufp->chgBit(oldp+1861,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.res_from_csr));
    bufp->chgBit(oldp+1862,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.rf_wen));
    bufp->chgBit(oldp+1863,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.inst_need_rs1));
    bufp->chgBit(oldp+1864,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.inst_need_rs2));
    bufp->chgIData(oldp+1865,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.rs1_data),32);
    bufp->chgIData(oldp+1866,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.rs2_data),32);
    bufp->chgBit(oldp+1867,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.es_dep_need_stall));
    bufp->chgBit(oldp+1868,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.es_forward_enable));
    bufp->chgIData(oldp+1869,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.es_forward_data),32);
    bufp->chgCData(oldp+1870,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.es_dest),5);
    bufp->chgBit(oldp+1871,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.ms_dep_need_stall));
    bufp->chgBit(oldp+1872,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.ms_forward_enable));
    bufp->chgIData(oldp+1873,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.ms_forward_data),32);
    bufp->chgCData(oldp+1874,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.ms_dest),5);
    bufp->chgBit(oldp+1875,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.ws_forward_enable));
    bufp->chgIData(oldp+1876,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.ws_forward_data),32);
    bufp->chgCData(oldp+1877,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.ws_dest),5);
    bufp->chgIData(oldp+1878,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.inst),32);
    bufp->chgBit(oldp+1879,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.inst_i));
    bufp->chgBit(oldp+1880,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.inst_iu));
    bufp->chgBit(oldp+1881,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.inst_u));
    bufp->chgBit(oldp+1882,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.inst_r));
    bufp->chgBit(oldp+1883,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.inst_s));
    bufp->chgBit(oldp+1884,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.inst_b));
    bufp->chgBit(oldp+1885,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.inst_j));
    bufp->chgBit(oldp+1886,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.inst_fence));
    bufp->chgBit(oldp+1887,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.inst_add));
    bufp->chgBit(oldp+1888,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.inst_addi));
    bufp->chgBit(oldp+1889,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.inst_sub));
    bufp->chgBit(oldp+1890,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.inst_andi));
    bufp->chgBit(oldp+1891,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.inst_and));
    bufp->chgBit(oldp+1892,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.inst_or));
    bufp->chgBit(oldp+1893,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.inst_ori));
    bufp->chgBit(oldp+1894,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.inst_xori));
    bufp->chgBit(oldp+1895,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.inst_xor));
    bufp->chgBit(oldp+1896,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.inst_lui));
    bufp->chgBit(oldp+1897,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.inst_jalr));
    bufp->chgBit(oldp+1898,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.inst_lb));
    bufp->chgBit(oldp+1899,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.inst_lw));
    bufp->chgBit(oldp+1900,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.inst_lh));
    bufp->chgBit(oldp+1901,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.inst_lhu));
    bufp->chgBit(oldp+1902,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.inst_lbu));
    bufp->chgBit(oldp+1903,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.inst_sb));
    bufp->chgBit(oldp+1904,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.inst_sh));
    bufp->chgBit(oldp+1905,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.inst_sw));
    bufp->chgBit(oldp+1906,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.inst_auipc));
    bufp->chgBit(oldp+1907,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.inst_jal));
    bufp->chgBit(oldp+1908,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.inst_sll));
    bufp->chgBit(oldp+1909,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.inst_slli));
    bufp->chgBit(oldp+1910,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.inst_slt));
    bufp->chgBit(oldp+1911,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.inst_srli));
    bufp->chgBit(oldp+1912,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.inst_srl));
    bufp->chgBit(oldp+1913,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.inst_srai));
    bufp->chgBit(oldp+1914,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.inst_sra));
    bufp->chgBit(oldp+1915,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.inst_sltu));
    bufp->chgBit(oldp+1916,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.inst_sltiu));
    bufp->chgBit(oldp+1917,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.inst_bne));
    bufp->chgBit(oldp+1918,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.inst_bge));
    bufp->chgBit(oldp+1919,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.inst_beq));
    bufp->chgBit(oldp+1920,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.inst_bgeu));
    bufp->chgBit(oldp+1921,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.inst_blt));
    bufp->chgBit(oldp+1922,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.inst_bltu));
    bufp->chgBit(oldp+1923,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.inst_ebreak));
    bufp->chgBit(oldp+1924,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.inst_csrrs));
    bufp->chgBit(oldp+1925,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.inst_csrrw));
    bufp->chgBit(oldp+1926,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.inst_ecall));
    bufp->chgBit(oldp+1927,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.inst_mret));
    bufp->chgIData(oldp+1928,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.imm_i),32);
    bufp->chgIData(oldp+1929,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.imm_iu),32);
    bufp->chgIData(oldp+1930,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.imm_u),32);
    bufp->chgIData(oldp+1931,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.imm_s),32);
    bufp->chgIData(oldp+1932,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.imm_j),32);
    bufp->chgIData(oldp+1933,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.offset),32);
    bufp->chgBit(oldp+1934,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.rs1_lt_rd_sign));
    bufp->chgBit(oldp+1935,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.ds_state));
    bufp->chgBit(oldp+1936,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.next_state));
    bufp->chgBit(oldp+1937,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.rs1_forward_stall));
    bufp->chgBit(oldp+1938,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.rs2_forward_stall));
    bufp->chgBit(oldp+1939,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.clock));
    bufp->chgBit(oldp+1940,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.reset));
    bufp->chgBit(oldp+1941,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.rvalid));
    bufp->chgIData(oldp+1942,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.raddr),32);
    bufp->chgIData(oldp+1943,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.rdata),32);
    bufp->chgBit(oldp+1944,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.valid));
    bufp->chgBit(oldp+1945,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.i_arvalid));
    bufp->chgIData(oldp+1946,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.i_araddr),32);
    bufp->chgCData(oldp+1947,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.i_arlen),8);
    bufp->chgCData(oldp+1948,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.i_arsize),3);
    bufp->chgBit(oldp+1949,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.i_arready));
    bufp->chgCData(oldp+1950,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.i_arburst),2);
    bufp->chgBit(oldp+1951,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.i_rvalid));
    bufp->chgIData(oldp+1952,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.i_rdata),32);
    bufp->chgCData(oldp+1953,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.i_rresp),2);
    bufp->chgBit(oldp+1954,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.i_rready));
    bufp->chgBit(oldp+1955,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.i_rlast));
    bufp->chgBit(oldp+1956,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.cache_flush));
    bufp->chgQData(oldp+1957,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.icache[0]),64);
    bufp->chgQData(oldp+1959,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.icache[1]),64);
    bufp->chgQData(oldp+1961,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.icache[2]),64);
    bufp->chgQData(oldp+1963,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.icache[3]),64);
    bufp->chgQData(oldp+1965,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.icache[4]),64);
    bufp->chgQData(oldp+1967,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.icache[5]),64);
    bufp->chgQData(oldp+1969,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.icache[6]),64);
    bufp->chgQData(oldp+1971,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.icache[7]),64);
    bufp->chgBit(oldp+1973,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.valid_array[0]));
    bufp->chgBit(oldp+1974,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.valid_array[1]));
    bufp->chgBit(oldp+1975,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.valid_array[2]));
    bufp->chgBit(oldp+1976,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.valid_array[3]));
    bufp->chgBit(oldp+1977,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.valid_array[4]));
    bufp->chgBit(oldp+1978,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.valid_array[5]));
    bufp->chgBit(oldp+1979,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.valid_array[6]));
    bufp->chgBit(oldp+1980,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.valid_array[7]));
    bufp->chgIData(oldp+1981,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.tag_array[0]),26);
    bufp->chgIData(oldp+1982,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.tag_array[1]),26);
    bufp->chgIData(oldp+1983,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.tag_array[2]),26);
    bufp->chgIData(oldp+1984,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.tag_array[3]),26);
    bufp->chgIData(oldp+1985,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.tag_array[4]),26);
    bufp->chgIData(oldp+1986,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.tag_array[5]),26);
    bufp->chgIData(oldp+1987,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.tag_array[6]),26);
    bufp->chgIData(oldp+1988,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.tag_array[7]),26);
    bufp->chgCData(oldp+1989,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.w_ptr),8);
    bufp->chgCData(oldp+1990,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.set_index),3);
    bufp->chgCData(oldp+1991,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.offset),3);
    bufp->chgIData(oldp+1992,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.tag),26);
    bufp->chgBit(oldp+1993,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.uncache_addr));
    bufp->chgBit(oldp+1994,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.hit));
    bufp->chgIData(oldp+1995,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.o_rdata),32);
    bufp->chgIData(oldp+1996,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.i_rdata_r),32);
    bufp->chgCData(oldp+1997,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.state),2);
    bufp->chgIData(oldp+1998,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.miss_cnt),32);
    bufp->chgIData(oldp+1999,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.hit_cnt),32);
    bufp->chgIData(oldp+2000,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.penalty_cnt),32);
    bufp->chgBit(oldp+2001,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.access_start));
    bufp->chgIData(oldp+2002,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.i),32);
    bufp->chgBit(oldp+2003,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf.clock));
    bufp->chgCData(oldp+2004,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf.raddr1),5);
    bufp->chgIData(oldp+2005,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf.rdata1),32);
    bufp->chgCData(oldp+2006,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf.raddr2),5);
    bufp->chgIData(oldp+2007,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf.rdata2),32);
    bufp->chgBit(oldp+2008,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf.wen));
    bufp->chgCData(oldp+2009,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf.waddr),5);
    bufp->chgIData(oldp+2010,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf.wdata),32);
    bufp->chgIData(oldp+2011,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf.regs[0]),32);
    bufp->chgIData(oldp+2012,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf.regs[1]),32);
    bufp->chgIData(oldp+2013,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf.regs[2]),32);
    bufp->chgIData(oldp+2014,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf.regs[3]),32);
    bufp->chgIData(oldp+2015,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf.regs[4]),32);
    bufp->chgIData(oldp+2016,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf.regs[5]),32);
    bufp->chgIData(oldp+2017,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf.regs[6]),32);
    bufp->chgIData(oldp+2018,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf.regs[7]),32);
    bufp->chgIData(oldp+2019,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf.regs[8]),32);
    bufp->chgIData(oldp+2020,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf.regs[9]),32);
    bufp->chgIData(oldp+2021,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf.regs[10]),32);
    bufp->chgIData(oldp+2022,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf.regs[11]),32);
    bufp->chgIData(oldp+2023,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf.regs[12]),32);
    bufp->chgIData(oldp+2024,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf.regs[13]),32);
    bufp->chgIData(oldp+2025,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf.regs[14]),32);
    bufp->chgIData(oldp+2026,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf.regs[15]),32);
}

void VysyxSoCFull___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_cleanup\n"); );
    // Init
    VysyxSoCFull___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VysyxSoCFull___024root*>(voidSelf);
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xaU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xbU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xcU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xeU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xfU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x10U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x11U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x12U] = 0U;
}
