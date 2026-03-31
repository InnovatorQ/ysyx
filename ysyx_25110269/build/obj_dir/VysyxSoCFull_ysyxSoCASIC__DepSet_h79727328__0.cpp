// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull_ysyxSoCASIC.h"

extern const VlUnpacked<CData/*1:0*/, 256> VysyxSoCFull__ConstPool__TABLE_h94d9a3ff_0;
extern const VlUnpacked<CData/*1:0*/, 256> VysyxSoCFull__ConstPool__TABLE_hbbada217_0;
extern const VlUnpacked<CData/*7:0*/, 256> VysyxSoCFull__ConstPool__TABLE_h972e961f_0;

VL_INLINE_OPT void VysyxSoCFull_ysyxSoCASIC___act_sequent__TOP__ysyxSoCFull__asic__0(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___act_sequent__TOP__ysyxSoCFull__asic__0\n"); );
    // Init
    CData/*0:0*/ axi42apb__DOT____VdfgTmp_h78415cc4__0;
    axi42apb__DOT____VdfgTmp_h78415cc4__0 = 0;
    CData/*7:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    // Body
    __Vtableidx6 = ((((IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done)
                       ? 0U : 2U) << 6U) | ((((IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done)
                                               ? 0U
                                               : 1U) 
                                             << 4U) 
                                            | (((IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd_qpi) 
                                                << 3U) 
                                               | (((IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd) 
                                                   << 2U) 
                                                  | (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)))));
    if ((1U & VysyxSoCFull__ConstPool__TABLE_h94d9a3ff_0
         [__Vtableidx6])) {
        vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate 
            = VysyxSoCFull__ConstPool__TABLE_hbbada217_0
            [__Vtableidx6];
    }
    if ((2U & VysyxSoCFull__ConstPool__TABLE_h94d9a3ff_0
         [__Vtableidx6])) {
        vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__FINAL_COUNT 
            = VysyxSoCFull__ConstPool__TABLE_h972e961f_0
            [__Vtableidx6];
    }
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done 
        = ((IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
           == ((IData)(1U) + (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__FINAL_COUNT)));
    vlSelf->__PVT___apbdelay_delayer_in_pready = (1U 
                                                  & (~ 
                                                     (((~ 
                                                        ((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__xip_active)
                                                          ? (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__xip_ready)
                                                          : (IData)(
                                                                    ((0x10001000U 
                                                                      == 
                                                                      (0x3ffff000U 
                                                                       & vlSelf->__PVT___axi42apb_auto_out_paddr)) 
                                                                     & (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_ack_o))))) 
                                                       & (IData)(vlSelf->__PVT__apbxbar__DOT__sel_0)) 
                                                      | (((~ 
                                                           ((IData)(vlSelf->__PVT___apbxbar_auto_anon_out_1_penable) 
                                                            & (IData)(vlSelf->__PVT___apbxbar_auto_anon_out_1_psel))) 
                                                          & (IData)(vlSelf->__PVT__apbxbar__DOT__sel_1)) 
                                                         | ((IData)(
                                                                    ((0U 
                                                                      == 
                                                                      (0x30000000U 
                                                                       & vlSelf->__PVT___axi42apb_auto_out_paddr)) 
                                                                     & (~ 
                                                                        (((IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                                                           ? (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                                                           : (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done)) 
                                                                         & (IData)(vlSelf->__PVT___apbxbar_auto_anon_out_2_psel))))) 
                                                            | (((~ (IData)(vlSelf->__PVT___lgpio_auto_in_pready)) 
                                                                & (IData)(vlSelf->__PVT__apbxbar__DOT__sel_3)) 
                                                               | (((~ (IData)(vlSelf->__PVT___lkeyboard_auto_in_pready)) 
                                                                   & (IData)(vlSelf->__PVT__apbxbar__DOT__sel_4)) 
                                                                  | (IData)(
                                                                            ((0x20000000U 
                                                                              == 
                                                                              (0x30000000U 
                                                                               & vlSelf->__PVT___axi42apb_auto_out_paddr)) 
                                                                             & (~ 
                                                                                ((IData)(vlSelf->__PVT___apbxbar_auto_anon_out_5_penable) 
                                                                                & (IData)(vlSelf->__PVT___apbxbar_auto_anon_out_5_psel))))))))))));
    axi42apb__DOT____VdfgTmp_h78415cc4__0 = (((IData)(vlSelf->__PVT___apbdelay_delayer_in_pready) 
                                              & (1U 
                                                 == (IData)(vlSelf->__PVT__axi42apb__DOT__state))) 
                                             | (2U 
                                                == (IData)(vlSelf->__PVT__axi42apb__DOT__state)));
    vlSelf->__PVT__axi42apb__DOT__nodeIn_rvalid = (
                                                   (~ (IData)(vlSelf->__PVT__axi42apb__DOT__is_write)) 
                                                   & (IData)(axi42apb__DOT____VdfgTmp_h78415cc4__0));
    vlSelf->__PVT__axi42apb__DOT__nodeIn_bvalid = ((IData)(vlSelf->__PVT__axi42apb__DOT__is_write) 
                                                   & (IData)(axi42apb__DOT____VdfgTmp_h78415cc4__0));
    vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq 
        = ((~ (IData)(vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)) 
           & (IData)(vlSelf->__PVT__axi42apb__DOT__nodeIn_rvalid));
    vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq 
        = ((~ (IData)(vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)) 
           & (IData)(vlSelf->__PVT__axi42apb__DOT__nodeIn_bvalid));
}

extern const VlUnpacked<CData/*0:0*/, 256> VysyxSoCFull__ConstPool__TABLE_hb7a25adb_0;

VL_INLINE_OPT void VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__1(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__1\n"); );
    // Init
    CData/*1:0*/ __PVT__axi4xbar__DOT___readys_filter_T_1;
    __PVT__axi4xbar__DOT___readys_filter_T_1 = 0;
    CData/*1:0*/ __PVT__axi4xbar__DOT___readys_filter_T_3;
    __PVT__axi4xbar__DOT___readys_filter_T_3 = 0;
    CData/*7:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    // Body
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out 
        = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram
        [vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom];
    vlSelf->__PVT__axi4xbar__DOT__anyValid = ((IData)(vlSelf->__PVT__axi4xbar_1__DOT__in_0_rvalid) 
                                              | (IData)(vlSelf->__PVT___axi4delay_delayer_in_rvalid));
    vlSelf->__PVT__axi4xbar__DOT__readys_valid = (((IData)(vlSelf->__PVT___axi4delay_delayer_in_rvalid) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__axi4xbar_1__DOT__in_0_rvalid));
    vlSelf->__PVT__axi4xbar__DOT__readys_valid_1 = 
        (((IData)(vlSelf->__PVT___axi4delay_delayer_in_bvalid) 
          << 1U) | (IData)(vlSelf->__PVT___axi4frag_auto_in_bvalid));
    vlSelf->__PVT__axi4xbar__DOT__anyValid_1 = ((IData)(vlSelf->__PVT___axi4frag_auto_in_bvalid) 
                                                | (IData)(vlSelf->__PVT___axi4delay_delayer_in_bvalid));
    vlSelf->luart__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h4267b00d__0 
        = ((~ ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
               >> 7U)) & (0U == (7U & vlSelf->__PVT___axi42apb_auto_out_paddr)));
    vlSelf->__PVT__luart__DOT__muart__DOT__reg_dat8_r 
        = (0xffU & ((4U & vlSelf->__PVT___axi42apb_auto_out_paddr)
                     ? ((2U & vlSelf->__PVT___axi42apb_auto_out_paddr)
                         ? ((1U & vlSelf->__PVT___axi42apb_auto_out_paddr)
                             ? (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                             : (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                         : ((1U & vlSelf->__PVT___axi42apb_auto_out_paddr)
                             ? (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                 << 7U) | (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                            << 6U) 
                                           | (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                               << 5U) 
                                              | (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))))))
                             : 0U)) : ((2U & vlSelf->__PVT___axi42apb_auto_out_paddr)
                                        ? ((1U & vlSelf->__PVT___axi42apb_auto_out_paddr)
                                            ? (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                            : (0xc0U 
                                               | (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                        : ((1U & vlSelf->__PVT___axi42apb_auto_out_paddr)
                                            ? ((0x80U 
                                                & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                ? ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                   >> 8U)
                                                : (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                            : ((0x80U 
                                                & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                ? (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                : vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                               [vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom])))));
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done 
        = ((IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter) 
           == ((IData)(1U) + (0xffU & ((2U == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state))
                                        ? ((IData)(7U) 
                                           + ((IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                              << 1U))
                                        : ((IData)(0xdU) 
                                           + ((IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                              << 1U))))));
    if (vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi__DOT__state) {
        if (vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi__DOT__state) {
            vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi__DOT__nstate 
                = (8U != (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi__DOT__counter));
        }
    } else {
        vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi__DOT__nstate 
            = ((IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode) 
               & ((IData)(vlSelf->__PVT___apbxbar_auto_anon_out_2_psel) 
                  & (0U == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state))));
    }
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout 
        = (0xfU & ((2U == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state))
                    ? ((0U == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                        ? 3U : ((1U == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                 ? 8U : ((2U == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                          ? (vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                             >> 0x14U)
                                          : ((3U == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                              ? (vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                 >> 0x10U)
                                              : ((4U 
                                                  == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                  ? 
                                                 (vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                  >> 0xcU)
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                   ? 
                                                  (vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                   >> 8U)
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                    ? 
                                                   (vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                    >> 4U)
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                     ? vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                      ? 
                                                     ((IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0) 
                                                      >> 4U)
                                                      : 
                                                     ((9U 
                                                       == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                       ? (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)
                                                       : 
                                                      ((0xaU 
                                                        == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                        ? 
                                                       ((IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                                        >> 4U)
                                                        : 
                                                       ((0xbU 
                                                         == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                         ? (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1)
                                                         : 
                                                        ((0xcU 
                                                          == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                          ? 
                                                         (vlSelf->__PVT___axi42apb_auto_out_pwdata 
                                                          >> 0x14U)
                                                          : 
                                                         ((0xdU 
                                                           == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                           ? 
                                                          (vlSelf->__PVT___axi42apb_auto_out_pwdata 
                                                           >> 0x10U)
                                                           : 
                                                          ((0xeU 
                                                            == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                            ? 
                                                           (vlSelf->__PVT___axi42apb_auto_out_pwdata 
                                                            >> 0x1cU)
                                                            : 
                                                           (vlSelf->__PVT___axi42apb_auto_out_pwdata 
                                                            >> 0x18U))))))))))))))))
                    : ((8U > (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                        ? (1U & (0x38U >> (7U & ((IData)(7U) 
                                                 - (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter)))))
                        : ((8U == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                            ? (vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                               >> 0x14U) : ((9U == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                             ? (vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                >> 0x10U)
                                             : ((0xaU 
                                                 == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                 ? 
                                                (vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                 >> 0xcU)
                                                 : 
                                                ((0xbU 
                                                  == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                  ? 
                                                 (vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                  >> 8U)
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                   ? 
                                                  (vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                   >> 4U)
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                    ? vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0) 
                                                     >> 4U)
                                                     : 
                                                    ((0xfU 
                                                      == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                      ? (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)
                                                      : 
                                                     ((0x10U 
                                                       == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                                       >> 4U)
                                                       : 
                                                      ((0x11U 
                                                        == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                        ? (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1)
                                                        : 
                                                       ((0x12U 
                                                         == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                         ? 
                                                        (vlSelf->__PVT___axi42apb_auto_out_pwdata 
                                                         >> 0x14U)
                                                         : 
                                                        ((0x13U 
                                                          == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                          ? 
                                                         (vlSelf->__PVT___axi42apb_auto_out_pwdata 
                                                          >> 0x10U)
                                                          : 
                                                         ((0x14U 
                                                           == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                           ? 
                                                          (vlSelf->__PVT___axi42apb_auto_out_pwdata 
                                                           >> 0x1cU)
                                                           : 
                                                          (vlSelf->__PVT___axi42apb_auto_out_pwdata 
                                                           >> 0x18U)))))))))))))))));
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd 
        = ((1U == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
           & (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd_qpi 
        = ((2U == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
           & (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    if (vlSelf->lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h33334145__0) {
        vlSelf->__PVT__psram_sck = vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck;
        vlSelf->__PVT__psram_ce_n = vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n;
    } else if (vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we) {
        vlSelf->__PVT__psram_sck = vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
        vlSelf->__PVT__psram_ce_n = vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n;
    } else {
        vlSelf->__PVT__psram_sck = vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
        vlSelf->__PVT__psram_ce_n = vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n;
    }
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr 
        = ((1U == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
           & (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr_qpi 
        = ((2U == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
           & (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    if ((0U == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state))) {
        vlSelf->__PVT__lpsram__DOT__mpsram__DOT__douten 
            = (0xfU & (- (IData)((1U & (~ (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n))))));
        vlSelf->__PVT__lpsram__DOT__mpsram__DOT__dout 
            = ((8U > (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi__DOT__counter))
                ? (1U & (0x35U >> (7U & ((IData)(7U) 
                                         - (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi__DOT__counter)))))
                : 0U);
    } else if (vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we) {
        vlSelf->__PVT__lpsram__DOT__mpsram__DOT__douten 
            = (0xfU & (- (IData)((1U & (~ (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n))))));
        vlSelf->__PVT__lpsram__DOT__mpsram__DOT__dout 
            = vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout;
    } else {
        vlSelf->__PVT__lpsram__DOT__mpsram__DOT__douten 
            = (0xfU & (- (IData)(((1U == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state))
                                   ? (0xeU > (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                   : (8U > (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))))));
        vlSelf->__PVT__lpsram__DOT__mpsram__DOT__dout 
            = vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_dout;
    }
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__msr_read 
        = ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (6U == (7U & vlSelf->__PVT___axi42apb_auto_out_paddr))));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__iir_read 
        = ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (2U == (7U & vlSelf->__PVT___axi42apb_auto_out_paddr))));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition 
        = ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (5U == (7U & vlSelf->__PVT___axi42apb_auto_out_paddr))));
    __PVT__axi4xbar__DOT___readys_filter_T_1 = ((~ (IData)(vlSelf->__PVT__axi4xbar__DOT__readys_mask)) 
                                                & (IData)(vlSelf->__PVT__axi4xbar__DOT__readys_valid));
    __PVT__axi4xbar__DOT___readys_filter_T_3 = ((~ (IData)(vlSelf->__PVT__axi4xbar__DOT__readys_mask_1)) 
                                                & (IData)(vlSelf->__PVT__axi4xbar__DOT__readys_valid_1));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write 
        = ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__reg_we) 
           & (IData)(vlSelf->luart__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h4267b00d__0));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read 
        = ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__reg_re) 
           & (IData)(vlSelf->luart__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h4267b00d__0));
    __Vtableidx7 = ((((IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                       ? 0U : 2U) << 6U) | ((((IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                               ? 0U
                                               : 1U) 
                                             << 4U) 
                                            | (((IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr_qpi) 
                                                << 3U) 
                                               | (((IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr) 
                                                   << 2U) 
                                                  | (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)))));
    if (VysyxSoCFull__ConstPool__TABLE_hb7a25adb_0[__Vtableidx7]) {
        vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate 
            = VysyxSoCFull__ConstPool__TABLE_hbbada217_0
            [__Vtableidx7];
    }
    vlSelf->psram_dio__en = (0xfU & (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__douten));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask 
        = ((~ (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d)) 
           & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    vlSelf->__PVT__axi4xbar__DOT__readys_unready = 
        (((4U & ((IData)(__PVT__axi4xbar__DOT___readys_filter_T_1) 
                 << 1U)) | (((2U & ((IData)(__PVT__axi4xbar__DOT___readys_filter_T_1) 
                                    << 1U)) | (IData)(vlSelf->__PVT___axi4delay_delayer_in_rvalid)) 
                            | (IData)(__PVT__axi4xbar__DOT___readys_filter_T_1))) 
         | ((IData)(vlSelf->__PVT__axi4xbar__DOT__readys_mask) 
            << 2U));
    vlSelf->__PVT__axi4xbar__DOT__readys_unready_1 
        = (((4U & ((IData)(__PVT__axi4xbar__DOT___readys_filter_T_3) 
                   << 1U)) | (((2U & ((IData)(__PVT__axi4xbar__DOT___readys_filter_T_3) 
                                      << 1U)) | (IData)(vlSelf->__PVT___axi4delay_delayer_in_bvalid)) 
                              | (IData)(__PVT__axi4xbar__DOT___readys_filter_T_3))) 
           | ((IData)(vlSelf->__PVT__axi4xbar__DOT__readys_mask_1) 
              << 2U));
    vlSelf->lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0 
        = ((0xcU & (IData)(vlSelf->lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0)) 
           | (3U & ((IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__douten) 
                    & (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__dout))));
    vlSelf->lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1 
        = ((3U & (IData)(vlSelf->lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1)) 
           | (0xcU & ((IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__douten) 
                      & (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__dout))));
    vlSelf->__PVT__axi4xbar__DOT__readys_readys = (3U 
                                                   & (~ 
                                                      (((IData)(vlSelf->__PVT__axi4xbar__DOT__readys_unready) 
                                                        >> 2U) 
                                                       & (IData)(vlSelf->__PVT__axi4xbar__DOT__readys_unready))));
    vlSelf->__PVT__axi4xbar__DOT__readys_readys_1 = 
        (3U & (~ (((IData)(vlSelf->__PVT__axi4xbar__DOT__readys_unready_1) 
                   >> 2U) & (IData)(vlSelf->__PVT__axi4xbar__DOT__readys_unready_1))));
    vlSelf->__PVT__axi4xbar__DOT__winner_2_1 = (((IData)(vlSelf->__PVT__axi4xbar__DOT__readys_readys) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT___axi4delay_delayer_in_rvalid));
    vlSelf->__PVT__axi4xbar__DOT__prefixOR_1 = ((IData)(vlSelf->__PVT__axi4xbar__DOT__readys_readys) 
                                                & (IData)(vlSelf->__PVT__axi4xbar_1__DOT__in_0_rvalid));
    if (vlSelf->__PVT__axi4xbar__DOT__idle_2) {
        vlSelf->__PVT__axi4xbar__DOT__in_0_rvalid = vlSelf->__PVT__axi4xbar__DOT__anyValid;
        vlSelf->__PVT__axi4xbar__DOT__muxState_2_1 
            = vlSelf->__PVT__axi4xbar__DOT__winner_2_1;
        vlSelf->__PVT__axi4xbar__DOT__muxState_2_0 
            = vlSelf->__PVT__axi4xbar__DOT__prefixOR_1;
    } else {
        vlSelf->__PVT__axi4xbar__DOT__in_0_rvalid = 
            (((IData)(vlSelf->__PVT__axi4xbar_1__DOT__in_0_rvalid) 
              & (IData)(vlSelf->__PVT__axi4xbar__DOT__state_2_0)) 
             | ((IData)(vlSelf->__PVT___axi4delay_delayer_in_rvalid) 
                & (IData)(vlSelf->__PVT__axi4xbar__DOT__state_2_1)));
        vlSelf->__PVT__axi4xbar__DOT__muxState_2_1 
            = vlSelf->__PVT__axi4xbar__DOT__state_2_1;
        vlSelf->__PVT__axi4xbar__DOT__muxState_2_0 
            = vlSelf->__PVT__axi4xbar__DOT__state_2_0;
    }
    vlSelf->__PVT__axi4xbar__DOT__winner_3_1 = (((IData)(vlSelf->__PVT__axi4xbar__DOT__readys_readys_1) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT___axi4delay_delayer_in_bvalid));
    vlSelf->__PVT__axi4xbar__DOT__winner_3_0 = ((IData)(vlSelf->__PVT__axi4xbar__DOT__readys_readys_1) 
                                                & (IData)(vlSelf->__PVT___axi4frag_auto_in_bvalid));
    if (vlSelf->__PVT__axi4xbar__DOT__idle_3) {
        vlSelf->__PVT__axi4xbar__DOT__in_0_bvalid = vlSelf->__PVT__axi4xbar__DOT__anyValid_1;
        vlSelf->__PVT__axi4xbar__DOT__muxState_3_1 
            = vlSelf->__PVT__axi4xbar__DOT__winner_3_1;
        vlSelf->__PVT__axi4xbar__DOT__muxState_3_0 
            = vlSelf->__PVT__axi4xbar__DOT__winner_3_0;
    } else {
        vlSelf->__PVT__axi4xbar__DOT__in_0_bvalid = 
            (((IData)(vlSelf->__PVT___axi4frag_auto_in_bvalid) 
              & (IData)(vlSelf->__PVT__axi4xbar__DOT__state_3_0)) 
             | ((IData)(vlSelf->__PVT___axi4delay_delayer_in_bvalid) 
                & (IData)(vlSelf->__PVT__axi4xbar__DOT__state_3_1)));
        vlSelf->__PVT__axi4xbar__DOT__muxState_3_1 
            = vlSelf->__PVT__axi4xbar__DOT__state_3_1;
        vlSelf->__PVT__axi4xbar__DOT__muxState_3_0 
            = vlSelf->__PVT__axi4xbar__DOT__state_3_0;
    }
    vlSelf->__PVT__axi4xbar__DOT___in_0_rT_12 = (0xfU 
                                                 & (((IData)(vlSelf->__PVT__axi4xbar__DOT__muxState_2_0)
                                                      ? (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_20)
                                                      : 0U) 
                                                    | ((IData)(vlSelf->__PVT__axi4xbar__DOT__muxState_2_1)
                                                        ? (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w)
                                                        : 0U)));
    vlSelf->__PVT__axi4xbar__DOT___in_0_rT_3 = (((IData)(vlSelf->__PVT__axi4xbar__DOT__muxState_2_0) 
                                                 & (((((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                                       << 0xfU) 
                                                      | (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                                          << 0xeU) 
                                                         | (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                                             << 0xdU) 
                                                            | (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                                << 0xcU) 
                                                               | (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                                   << 0xbU) 
                                                                  | (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                                      << 0xaU) 
                                                                     | (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                                         << 9U) 
                                                                        | (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                                            << 8U) 
                                                                           | (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                               << 7U) 
                                                                              | (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                                                     >> (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                                                    & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_5))) 
                                                | ((IData)(vlSelf->__PVT__axi4xbar__DOT__muxState_2_1) 
                                                   & ((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                                      >> 4U)));
    vlSelf->__PVT__axi4xbar__DOT___in_0_bT_5 = (0xfU 
                                                & (((IData)(vlSelf->__PVT__axi4xbar__DOT__muxState_3_0)
                                                     ? (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_bT_9)
                                                     : 0U) 
                                                   | ((IData)(vlSelf->__PVT__axi4xbar__DOT__muxState_3_1)
                                                       ? (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w)
                                                       : 0U)));
}
