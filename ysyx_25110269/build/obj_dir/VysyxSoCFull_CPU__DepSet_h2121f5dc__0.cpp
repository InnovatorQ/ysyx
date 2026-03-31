// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull_CPU.h"
#include "VysyxSoCFull__Syms.h"

VL_INLINE_OPT void VysyxSoCFull_CPU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__0(VysyxSoCFull_CPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VysyxSoCFull_CPU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__0\n"); );
    // Body
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.clock 
        = vlSymsp->TOP.clock;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_0) 
           | (IData)(vlSymsp->TOP.reset));
}

VL_INLINE_OPT void VysyxSoCFull_CPU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__1(VysyxSoCFull_CPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VysyxSoCFull_CPU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__1\n"); );
    // Body
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_arready 
        = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__anonIn_arready;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_wready 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__in_0_wready) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0));
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awready 
        = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__anonIn_awready;
}

VL_INLINE_OPT void VysyxSoCFull_CPU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__0(VysyxSoCFull_CPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VysyxSoCFull_CPU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__0\n"); );
    // Body
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_0) 
           | (IData)(vlSymsp->TOP.reset));
}

VL_INLINE_OPT void VysyxSoCFull_CPU___nba_comb__TOP__ysyxSoCFull__asic__cpu__0(VysyxSoCFull_CPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VysyxSoCFull_CPU___nba_comb__TOP__ysyxSoCFull__asic__cpu__0\n"); );
    // Body
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_rvalid 
        = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__in_0_rvalid;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_bvalid 
        = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__in_0_bvalid;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_rresp 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_2_0)
            ? (3U & (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_0)
                       ? (IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                  >> 1U)) : 0U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_2)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__r_sel1)
                                                     ? 0U
                                                     : 3U)
                                                    : 0U)))
            : 0U);
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_rdata 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_2_0)
             ? (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_0)
                  ? (IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                             >> 3U)) : 0U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_1)
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
                       : 0U));
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_bresp 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_3_0)
            ? (3U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4yank_auto_in_bresp) 
                     | ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_15) 
                          << 0x1eU) | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_14) 
                                        << 0x1cU) | 
                                       (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_13) 
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
                        >> (0x1fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___in_0_bT_9) 
                                     << 1U))))) : 0U);
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_rid 
        = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT___in_0_rT_12;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_rlast 
        = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT___in_0_rT_3;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_bid 
        = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT___in_0_bT_5;
}
