// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull_ysyxSoCASIC.h"

extern "C" void mrom_read(int raddr, int* rdata);

VL_INLINE_OPT void VysyxSoCFull_ysyxSoCASIC____Vdpiimwrap_lmrom__DOT__mrom__DOT__mrom_read_TOP__ysyxSoCFull__asic(IData/*31:0*/ raddr, IData/*31:0*/ &rdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC____Vdpiimwrap_lmrom__DOT__mrom__DOT__mrom_read_TOP__ysyxSoCFull__asic\n"); );
    // Body
    int raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    int rdata__Vcvt;
    mrom_read(raddr__Vcvt, &rdata__Vcvt);
    rdata = rdata__Vcvt;
}

VL_INLINE_OPT void VysyxSoCFull_ysyxSoCASIC___ico_sequent__TOP__ysyxSoCFull__asic__0(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___ico_sequent__TOP__ysyxSoCFull__asic__0\n"); );
    // Init
    CData/*0:0*/ luart__DOT__muart__DOT____VdfgTmp_hc1925006__0;
    luart__DOT__muart__DOT____VdfgTmp_hc1925006__0 = 0;
    // Body
    if (vlSelf->__PVT__axi4frag__DOT__deq_q_1__DOT__full) {
        vlSelf->__PVT__axi4frag__DOT___deq_q_1_io_deq_bits_burst 
            = (3U & (IData)(vlSelf->__PVT__axi4frag__DOT__deq_q_1__DOT__ram));
        vlSelf->__PVT___axi4frag_auto_out_awid = (0xfU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__axi4frag__DOT__deq_q_1__DOT__ram 
                                                             >> 0x2dU)));
    } else {
        vlSelf->__PVT__axi4frag__DOT___deq_q_1_io_deq_bits_burst 
            = (3U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awburst));
        vlSelf->__PVT___axi4frag_auto_out_awid = (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awid));
    }
    vlSelf->__PVT__lgpio__DOT__mgpio__DOT__is_write 
        = ((~ (IData)(vlSymsp->TOP.reset)) & ((IData)(vlSelf->__PVT___apbxbar_auto_anon_out_3_psel) 
                                              & ((~ (IData)(vlSelf->__PVT___apbxbar_auto_anon_out_3_penable)) 
                                                 & (IData)(vlSelf->__PVT__axi42apb__DOT__is_write))));
    vlSelf->__PVT___apbdelay_delayer_in_prdata = (((IData)(vlSelf->__PVT__apbxbar__DOT__sel_0)
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__xip_active)
                                                     ? 
                                                    ((vlSelf->__PVT__lspi__DOT__mspi__DOT__xip_data 
                                                      << 0x18U) 
                                                     | ((0xff0000U 
                                                         & (vlSelf->__PVT__lspi__DOT__mspi__DOT__xip_data 
                                                            << 8U)) 
                                                        | ((0xff00U 
                                                            & (vlSelf->__PVT__lspi__DOT__mspi__DOT__xip_data 
                                                               >> 8U)) 
                                                           | (vlSelf->__PVT__lspi__DOT__mspi__DOT__xip_data 
                                                              >> 0x18U))))
                                                     : vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_dat_o)
                                                    : 0U) 
                                                  | (((IData)(vlSelf->__PVT__apbxbar__DOT__sel_1)
                                                       ? 
                                                      ((IData)(vlSelf->__PVT___apbxbar_auto_anon_out_1_psel)
                                                        ? 
                                                       (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                         << 0x18U) 
                                                        | (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                            << 0x10U) 
                                                           | (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                               << 8U) 
                                                              | (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__reg_dat8_r))))
                                                        : 0U)
                                                       : 0U) 
                                                     | (((0U 
                                                          == 
                                                          (3U 
                                                           & (vlSelf->__PVT___axi42apb_auto_out_paddr 
                                                              >> 0x1cU)))
                                                          ? 
                                                         ((vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                           [3U] 
                                                           << 0x18U) 
                                                          | ((vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                              [2U] 
                                                              << 0x10U) 
                                                             | ((vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                                 [1U] 
                                                                 << 8U) 
                                                                | vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                                [0U])))
                                                          : 0U) 
                                                        | (((IData)(vlSelf->__PVT__apbxbar__DOT__sel_3)
                                                             ? 
                                                            (((~ (IData)(vlSymsp->TOP.reset)) 
                                                              & ((~ (IData)(vlSelf->__PVT__axi42apb__DOT__is_write)) 
                                                                 & (IData)(vlSelf->__PVT___lgpio_auto_in_pready)))
                                                              ? (IData)(vlSymsp->TOP.externalPins_gpio_in)
                                                              : 0U)
                                                             : 0U) 
                                                           | (((IData)(vlSelf->__PVT__apbxbar__DOT__sel_4)
                                                                ? 
                                                               ((IData)(vlSelf->__PVT__lkeyboard__DOT__mps2__DOT__ready)
                                                                 ? 
                                                                vlSelf->__PVT__lkeyboard__DOT__mps2__DOT__fifo
                                                                [vlSelf->__PVT__lkeyboard__DOT__mps2__DOT__r_ptr]
                                                                 : 0U)
                                                                : 0U) 
                                                              | ((2U 
                                                                  == 
                                                                  (3U 
                                                                   & (vlSelf->__PVT___axi42apb_auto_out_paddr 
                                                                      >> 0x1cU)))
                                                                  ? vlSelf->__PVT___lvga_auto_in_prdata
                                                                  : 0U))))));
    luart__DOT__muart__DOT____VdfgTmp_hc1925006__0 
        = ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelf->__PVT___apbxbar_auto_anon_out_1_penable)) 
                                              & (IData)(vlSelf->__PVT___apbxbar_auto_anon_out_1_psel)));
    vlSelf->__PVT___axi4frag_auto_out_arid = (0xfU 
                                              & ((IData)(vlSelf->__PVT__axi4frag__DOT__deq_q__DOT__full)
                                                  ? (IData)(
                                                            (vlSelf->__PVT__axi4frag__DOT__deq_q__DOT__ram 
                                                             >> 0x2dU))
                                                  : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_arid)));
    vlSelf->__PVT__luart__DOT__muart__DOT__reg_we = 
        ((IData)(luart__DOT__muart__DOT____VdfgTmp_hc1925006__0) 
         & (IData)(vlSelf->__PVT__axi42apb__DOT__is_write));
    vlSelf->__PVT__luart__DOT__muart__DOT__reg_re = 
        ((~ (IData)(vlSelf->__PVT__axi42apb__DOT__is_write)) 
         & (IData)(luart__DOT__muart__DOT____VdfgTmp_hc1925006__0));
    vlSelf->axi4yank__DOT____VdfgTmp_h73aa1639__0 = 
        (1U & (((0x8000U & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)) 
                            << 0xfU)) | ((0x4000U & 
                                          ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)) 
                                           << 0xeU)) 
                                         | ((0x2000U 
                                             & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)) 
                                                << 0xdU)) 
                                            | ((0x1000U 
                                                & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)) 
                                                   << 0xcU)) 
                                               | ((0x800U 
                                                   & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)) 
                                                      << 0xbU)) 
                                                  | ((0x400U 
                                                      & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)) 
                                                         << 0xaU)) 
                                                     | ((0x200U 
                                                         & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)) 
                                                            << 9U)) 
                                                        | ((0x100U 
                                                            & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)) 
                                                               << 8U)) 
                                                           | ((0x80U 
                                                               & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)) 
                                                                  << 7U)) 
                                                              | ((0x40U 
                                                                  & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)) 
                                                                     << 6U)) 
                                                                 | ((0x20U 
                                                                     & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)) 
                                                                        << 5U)) 
                                                                    | ((0x10U 
                                                                        & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)) 
                                                                           << 4U)) 
                                                                       | ((8U 
                                                                           & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)) 
                                                                              << 3U)) 
                                                                          | ((4U 
                                                                              & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)) 
                                                                                << 2U)) 
                                                                             | ((2U 
                                                                                & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))))))))))))))))) 
               >> (IData)(vlSelf->__PVT___axi4frag_auto_out_arid)));
    vlSelf->axi4yank__DOT____VdfgTmp_he7a0eac8__0 = 
        (1U & (((0x8000U & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)) 
                            << 0xfU)) | ((0x4000U & 
                                          ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)) 
                                           << 0xeU)) 
                                         | ((0x2000U 
                                             & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)) 
                                                << 0xdU)) 
                                            | ((0x1000U 
                                                & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)) 
                                                   << 0xcU)) 
                                               | ((0x800U 
                                                   & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)) 
                                                      << 0xbU)) 
                                                  | ((0x400U 
                                                      & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)) 
                                                         << 0xaU)) 
                                                     | ((0x200U 
                                                         & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)) 
                                                            << 9U)) 
                                                        | ((0x100U 
                                                            & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)) 
                                                               << 8U)) 
                                                           | ((0x80U 
                                                               & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)) 
                                                                  << 7U)) 
                                                              | ((0x40U 
                                                                  & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)) 
                                                                     << 6U)) 
                                                                 | ((0x20U 
                                                                     & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)) 
                                                                        << 5U)) 
                                                                    | ((0x10U 
                                                                        & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)) 
                                                                           << 4U)) 
                                                                       | ((8U 
                                                                           & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)) 
                                                                              << 3U)) 
                                                                          | ((4U 
                                                                              & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)) 
                                                                                << 2U)) 
                                                                             | ((2U 
                                                                                & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))))))))))))))))) 
               >> (IData)(vlSelf->__PVT___axi4frag_auto_out_awid)));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write 
        = ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__reg_we) 
           & (IData)(vlSelf->luart__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h4267b00d__0));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read 
        = ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__reg_re) 
           & (IData)(vlSelf->luart__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h4267b00d__0));
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
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask 
        = ((~ (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d)) 
           & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
}

VL_INLINE_OPT void VysyxSoCFull_ysyxSoCASIC___ico_sequent__TOP__ysyxSoCFull__asic__1(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___ico_sequent__TOP__ysyxSoCFull__asic__1\n"); );
    // Body
    vlSelf->__PVT__axi4frag__DOT___deq_q_1_io_deq_bits_len 
        = (0xffU & ((IData)(vlSelf->__PVT__axi4frag__DOT__deq_q_1__DOT__full)
                     ? (IData)((vlSelf->__PVT__axi4frag__DOT__deq_q_1__DOT__ram 
                                >> 5U)) : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awlen)));
    vlSelf->__PVT__axi4frag__DOT__len_1 = ((IData)(vlSelf->__PVT__axi4frag__DOT__busy_1)
                                            ? (IData)(vlSelf->__PVT__axi4frag__DOT__r_len_1)
                                            : (IData)(vlSelf->__PVT__axi4frag__DOT___deq_q_1_io_deq_bits_len));
}

VL_INLINE_OPT void VysyxSoCFull_ysyxSoCASIC___ico_sequent__TOP__ysyxSoCFull__asic__2(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___ico_sequent__TOP__ysyxSoCFull__asic__2\n"); );
    // Init
    SData/*15:0*/ __PVT__axi4xbar__DOT___GEN_0;
    __PVT__axi4xbar__DOT___GEN_0 = 0;
    // Body
    vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_15_T_4 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_bready) 
           & (IData)(vlSelf->__PVT__axi4xbar__DOT__in_0_bvalid));
    vlSelf->__PVT__axi4frag__DOT__nodeOut_bready = 
        (1U & ((~ (IData)(vlSelf->__PVT___axi4yank_auto_in_becho_real_last)) 
               | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_bready) 
                  & ((IData)(vlSelf->__PVT__axi4xbar__DOT__idle_3)
                      ? (IData)(vlSelf->__PVT__axi4xbar__DOT__readys_readys_1)
                      : (IData)(vlSelf->__PVT__axi4xbar__DOT__state_3_0)))));
    if (vlSelf->__PVT__axi4frag__DOT__in_wdeq_q__DOT__full) {
        vlSelf->__PVT___axi4frag_auto_out_wstrb = (0xfU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                                                              >> 1U)));
        vlSelf->__PVT___axi4frag_auto_out_wdata = (IData)(
                                                          (vlSelf->__PVT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                                                           >> 5U));
    } else {
        vlSelf->__PVT___axi4frag_auto_out_wstrb = (0xfU 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_wstrb));
        vlSelf->__PVT___axi4frag_auto_out_wdata = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_wdata;
    }
    if (vlSelf->__PVT__axi4frag__DOT__deq_q_1__DOT__full) {
        vlSelf->__PVT__axi4frag__DOT___deq_q_1_io_deq_bits_size 
            = (7U & (IData)((vlSelf->__PVT__axi4frag__DOT__deq_q_1__DOT__ram 
                             >> 2U)));
        vlSelf->__PVT__axi4frag__DOT___deq_q_1_io_deq_bits_addr 
            = (IData)((vlSelf->__PVT__axi4frag__DOT__deq_q_1__DOT__ram 
                       >> 0xdU));
    } else {
        vlSelf->__PVT__axi4frag__DOT___deq_q_1_io_deq_bits_size 
            = (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awsize));
        vlSelf->__PVT__axi4frag__DOT___deq_q_1_io_deq_bits_addr 
            = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awaddr;
    }
    vlSelf->__PVT__axi4xbar__DOT__requestAWIO_0_0 = 
        (1U & ((~ (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awaddr 
                   >> 0x1fU)) | (0U == ((4U & ((~ (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awaddr 
                                                   >> 0x1fU)) 
                                               << 2U)) 
                                        | (3U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awaddr 
                                                 >> 0x1cU))))));
    vlSelf->__PVT__axi4xbar__DOT__requestAWIO_0_1 = 
        (0U == ((4U & (4U ^ (4U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awaddr 
                                   >> 0x1dU)))) | (3U 
                                                   & (2U 
                                                      ^ 
                                                      (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awaddr 
                                                       >> 0x1cU)))));
    vlSelf->__PVT__axi4xbar__DOT__awIn_0_io_enq_valid 
        = ((~ (IData)(vlSelf->__PVT__axi4xbar__DOT__latched)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awvalid));
    vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4 
        = ((IData)(vlSelf->__PVT__axi4frag__DOT__nodeOut_bready) 
           & (IData)(vlSelf->__PVT__axi4xbar_1__DOT__in_0_bvalid));
    vlSelf->__PVT___axi4xbar_1_auto_anon_out_2_bready 
        = ((IData)(vlSelf->__PVT__axi4frag__DOT__nodeOut_bready) 
           & ((IData)(vlSelf->__PVT__axi4xbar_1__DOT__idle_4)
               ? ((IData)(vlSelf->__PVT__axi4xbar_1__DOT__readys_readys_1) 
                  >> 2U) : (IData)(vlSelf->__PVT__axi4xbar_1__DOT__state_4_2)));
    vlSelf->__PVT__axi4frag__DOT__addr_1 = ((IData)(vlSelf->__PVT__axi4frag__DOT__busy_1)
                                             ? vlSelf->__PVT__axi4frag__DOT__r_addr_1
                                             : vlSelf->__PVT__axi4frag__DOT___deq_q_1_io_deq_bits_addr);
    vlSelf->axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits 
        = (((IData)(vlSelf->__PVT__axi4xbar__DOT__requestAWIO_0_1) 
            << 1U) | (IData)(vlSelf->__PVT__axi4xbar__DOT__requestAWIO_0_0));
    __PVT__axi4xbar__DOT___GEN_0 = (((((0U == (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_15_count)) 
                                       | ((IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_15_last) 
                                          == (IData)(vlSelf->__PVT__axi4xbar__DOT__requestAWIO_0_1))) 
                                      & (7U != (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_15_count))) 
                                     << 0xfU) | (((
                                                   ((0U 
                                                     == (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_14_count)) 
                                                    | ((IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_14_last) 
                                                       == (IData)(vlSelf->__PVT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                   & (7U 
                                                      != (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_14_count))) 
                                                  << 0xeU) 
                                                 | (((((0U 
                                                        == (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_13_count)) 
                                                       | ((IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_13_last) 
                                                          == (IData)(vlSelf->__PVT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                      & (7U 
                                                         != (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_13_count))) 
                                                     << 0xdU) 
                                                    | (((((0U 
                                                           == (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_12_count)) 
                                                          | ((IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_12_last) 
                                                             == (IData)(vlSelf->__PVT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                         & (7U 
                                                            != (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_12_count))) 
                                                        << 0xcU) 
                                                       | (((((0U 
                                                              == (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_11_count)) 
                                                             | ((IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_11_last) 
                                                                == (IData)(vlSelf->__PVT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                            & (7U 
                                                               != (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_11_count))) 
                                                           << 0xbU) 
                                                          | (((((0U 
                                                                 == (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_10_count)) 
                                                                | ((IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_10_last) 
                                                                   == (IData)(vlSelf->__PVT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                               & (7U 
                                                                  != (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_10_count))) 
                                                              << 0xaU) 
                                                             | (((((0U 
                                                                    == (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_9_count)) 
                                                                   | ((IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_9_last) 
                                                                      == (IData)(vlSelf->__PVT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                                  & (7U 
                                                                     != (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_9_count))) 
                                                                 << 9U) 
                                                                | (((((0U 
                                                                       == (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_8_count)) 
                                                                      | ((IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_8_last) 
                                                                         == (IData)(vlSelf->__PVT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                                     & (7U 
                                                                        != (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_8_count))) 
                                                                    << 8U) 
                                                                   | (((((0U 
                                                                          == (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_7_count)) 
                                                                         | ((IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_7_last) 
                                                                            == (IData)(vlSelf->__PVT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                                        & (7U 
                                                                           != (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_7_count))) 
                                                                       << 7U) 
                                                                      | (((((0U 
                                                                             == (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_6_count)) 
                                                                            | ((IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_6_last) 
                                                                               == (IData)(vlSelf->__PVT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                                           & (7U 
                                                                              != (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_6_count))) 
                                                                          << 6U) 
                                                                         | (((((0U 
                                                                                == (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_5_count)) 
                                                                               | ((IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_5_last) 
                                                                                == (IData)(vlSelf->__PVT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                                              & (7U 
                                                                                != (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_5_count))) 
                                                                             << 5U) 
                                                                            | (((((0U 
                                                                                == (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_4_count)) 
                                                                                | ((IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_4_last) 
                                                                                == (IData)(vlSelf->__PVT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                                                & (7U 
                                                                                != (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_4_count))) 
                                                                                << 4U) 
                                                                               | (((((0U 
                                                                                == (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_3_count)) 
                                                                                | ((IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_3_last) 
                                                                                == (IData)(vlSelf->__PVT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                                                & (7U 
                                                                                != (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_3_count))) 
                                                                                << 3U) 
                                                                                | (((((0U 
                                                                                == (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_2_count)) 
                                                                                | ((IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_2_last) 
                                                                                == (IData)(vlSelf->__PVT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                                                & (7U 
                                                                                != (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_2_count))) 
                                                                                << 2U) 
                                                                                | (((((0U 
                                                                                == (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_1_count)) 
                                                                                | ((IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_1_last) 
                                                                                == (IData)(vlSelf->__PVT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                                                & (7U 
                                                                                != (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_1_count))) 
                                                                                << 1U) 
                                                                                | (((0U 
                                                                                == (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_0_count)) 
                                                                                | ((IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_0_last) 
                                                                                == (IData)(vlSelf->__PVT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                                                & (7U 
                                                                                != (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_0_count))))))))))))))))));
    vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0 
        = (1U & ((~ (IData)(vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__empty)) 
                 | (IData)(vlSelf->__PVT__axi4xbar__DOT__awIn_0_io_enq_valid)));
    vlSelf->axi4ram__DOT____VdfgTmp_h8d807e6f__0 = 
        (1U & ((~ (IData)(vlSelf->__PVT__axi4ram__DOT__w_full)) 
               | (IData)(vlSelf->__PVT___axi4xbar_1_auto_anon_out_2_bready)));
    vlSelf->__PVT___axi4frag_auto_out_awaddr = (~ (
                                                   ((~ 
                                                     (vlSelf->__PVT__axi4frag__DOT__addr_1 
                                                      >> 2U)) 
                                                    << 2U) 
                                                   | (3U 
                                                      & ((~ 
                                                          ((IData)(3U) 
                                                           << (IData)(vlSelf->__PVT__axi4frag__DOT___deq_q_1_io_deq_bits_size))) 
                                                         | (~ vlSelf->__PVT__axi4frag__DOT__addr_1)))));
    vlSelf->__PVT__axi4xbar__DOT___awIn_0_io_deq_bits 
        = ((IData)(vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__empty)
            ? (IData)(vlSelf->axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits)
            : vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory
           [vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__wrap_1]);
    vlSelf->axi4xbar__DOT____VdfgTmp_h1a379823__0 = 
        (1U & (((~ (IData)(vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__full)) 
                | (IData)(vlSelf->__PVT__axi4xbar__DOT__latched)) 
               & ((IData)(__PVT__axi4xbar__DOT___GEN_0) 
                  >> (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awid))));
    vlSelf->__PVT__axi4xbar__DOT__in_0_wvalid = ((IData)(vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0) 
                                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_wvalid));
    vlSelf->__PVT__axi4xbar_1__DOT__requestAWIO_0_1 
        = (0U == ((6U & (4U ^ (0x1eU & (vlSelf->__PVT___axi4frag_auto_out_awaddr 
                                        >> 0x1bU)))) 
                  | (1U & (vlSelf->__PVT___axi4frag_auto_out_awaddr 
                           >> 0x18U))));
    vlSelf->__PVT__axi4xbar_1__DOT__requestAWIO_0_0 
        = ((0U == ((2U & (vlSelf->__PVT___axi4frag_auto_out_awaddr 
                          >> 0x1cU)) | (1U & (vlSelf->__PVT___axi4frag_auto_out_awaddr 
                                              >> 0x18U)))) 
           | ((0U == ((6U & (4U ^ (0x1eU & (vlSelf->__PVT___axi4frag_auto_out_awaddr 
                                            >> 0x1bU)))) 
                      | (1U & (~ (vlSelf->__PVT___axi4frag_auto_out_awaddr 
                                  >> 0x18U))))) | (3U 
                                                   == 
                                                   (3U 
                                                    & (vlSelf->__PVT___axi4frag_auto_out_awaddr 
                                                       >> 0x1cU)))));
    vlSelf->__PVT__axi4xbar_1__DOT__requestAWIO_0_2 
        = (0U == ((6U & (vlSelf->__PVT___axi4frag_auto_out_awaddr 
                         >> 0x1bU)) | (1U & (~ (vlSelf->__PVT___axi4frag_auto_out_awaddr 
                                                >> 0x18U)))));
    vlSelf->__PVT__axi4xbar__DOT__in_0_awvalid = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awvalid) 
                                                  & (IData)(vlSelf->axi4xbar__DOT____VdfgTmp_h1a379823__0));
    vlSelf->__PVT___axi4delay_delayer_out_wvalid = 
        ((IData)(vlSelf->__PVT__axi4xbar__DOT__in_0_wvalid) 
         & ((IData)(vlSelf->__PVT__axi4xbar__DOT___awIn_0_io_deq_bits) 
            >> 1U));
    vlSelf->__PVT___axi4xbar_auto_anon_out_0_wvalid 
        = ((IData)(vlSelf->__PVT__axi4xbar__DOT__in_0_wvalid) 
           & (IData)(vlSelf->__PVT__axi4xbar__DOT___awIn_0_io_deq_bits));
    vlSelf->axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits 
        = (((IData)(vlSelf->__PVT__axi4xbar_1__DOT__requestAWIO_0_2) 
            << 2U) | (((IData)(vlSelf->__PVT__axi4xbar_1__DOT__requestAWIO_0_1) 
                       << 1U) | (IData)(vlSelf->__PVT__axi4xbar_1__DOT__requestAWIO_0_0)));
    vlSelf->__PVT___axi4xbar_auto_anon_out_0_awvalid 
        = ((IData)(vlSelf->__PVT__axi4xbar__DOT__in_0_awvalid) 
           & (IData)(vlSelf->__PVT__axi4xbar__DOT__requestAWIO_0_0));
    vlSelf->__PVT___axi4delay_delayer_out_awvalid = 
        ((IData)(vlSelf->__PVT__axi4xbar__DOT__in_0_awvalid) 
         & (IData)(vlSelf->__PVT__axi4xbar__DOT__requestAWIO_0_1));
    vlSelf->__PVT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0 
        = ((IData)(vlSelf->__PVT__axi4frag__DOT__in_wdeq_q__DOT__full) 
           | (IData)(vlSelf->__PVT___axi4xbar_auto_anon_out_0_wvalid));
    vlSelf->__PVT__axi4xbar_1__DOT___awIn_0_io_deq_bits 
        = ((IData)(vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__empty)
            ? (IData)(vlSelf->axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits)
            : vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
           [vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]);
    vlSelf->__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0 
        = ((IData)(vlSelf->__PVT__axi4frag__DOT__deq_q_1__DOT__full) 
           | (IData)(vlSelf->__PVT___axi4xbar_auto_anon_out_0_awvalid));
    vlSelf->__PVT__axi4frag__DOT__wbeats_valid = ((~ (IData)(vlSelf->__PVT__axi4frag__DOT__wbeats_latched)) 
                                                  & (IData)(vlSelf->__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    vlSelf->__PVT__axi4frag__DOT__nodeOut_awvalid = 
        ((IData)(vlSelf->__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0) 
         & (IData)(vlSelf->__PVT__axi4frag__DOT___in_awready_T));
    vlSelf->__PVT__axi4frag__DOT__w_todo = ((0U == (IData)(vlSelf->__PVT__axi4frag__DOT__w_counter))
                                             ? (IData)(vlSelf->__PVT__axi4frag__DOT__wbeats_valid)
                                             : (IData)(vlSelf->__PVT__axi4frag__DOT__w_counter));
    vlSelf->axi4frag__DOT____VdfgTmp_ha2215a43__0 = 
        ((0U != (IData)(vlSelf->__PVT__axi4frag__DOT__w_counter)) 
         | (IData)(vlSelf->__PVT__axi4frag__DOT__wbeats_valid));
    vlSelf->__PVT___axi4yank_auto_out_awvalid = ((IData)(vlSelf->__PVT__axi4frag__DOT__nodeOut_awvalid) 
                                                 & (IData)(vlSelf->axi4yank__DOT____VdfgTmp_he7a0eac8__0));
    vlSelf->__PVT__axi4frag__DOT__nodeOut_wvalid = 
        ((IData)(vlSelf->__PVT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0) 
         & (IData)(vlSelf->axi4frag__DOT____VdfgTmp_ha2215a43__0));
    vlSelf->__PVT__axi4xbar_1__DOT__in_0_awvalid = 
        ((IData)(vlSelf->__PVT___axi4yank_auto_out_awvalid) 
         & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___anonIn_awready_T));
    vlSelf->__PVT__axi4xbar_1__DOT__awIn_0_io_enq_valid 
        = ((~ (IData)(vlSelf->__PVT__axi4xbar_1__DOT__latched)) 
           & (IData)(vlSelf->__PVT___axi4yank_auto_out_awvalid));
    vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq 
        = ((~ (IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)) 
           & ((IData)(vlSelf->__PVT__axi4xbar_1__DOT__in_0_awvalid) 
              & (IData)(vlSelf->__PVT__axi4xbar_1__DOT__requestAWIO_0_0)));
    vlSelf->__PVT___axi4xbar_1_auto_anon_out_2_awvalid 
        = ((IData)(vlSelf->__PVT__axi4xbar_1__DOT__in_0_awvalid) 
           & (IData)(vlSelf->__PVT__axi4xbar_1__DOT__requestAWIO_0_2));
    vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0 
        = (1U & ((~ (IData)(vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__empty)) 
                 | (IData)(vlSelf->__PVT__axi4xbar_1__DOT__awIn_0_io_enq_valid)));
    vlSelf->__PVT__axi4xbar_1__DOT__in_0_wready = (1U 
                                                   & (((~ (IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)) 
                                                       & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awIn_0_io_deq_bits)) 
                                                      | (((IData)(vlSelf->__PVT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                                          >> 2U) 
                                                         & ((IData)(vlSelf->__PVT___axi4xbar_1_auto_anon_out_2_awvalid) 
                                                            & (IData)(vlSelf->axi4ram__DOT____VdfgTmp_h8d807e6f__0)))));
    vlSelf->__PVT__axi4xbar_1__DOT__in_0_wvalid = ((IData)(vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0) 
                                                   & (IData)(vlSelf->__PVT__axi4frag__DOT__nodeOut_wvalid));
    vlSelf->__PVT___axi4yank_auto_in_wready = ((IData)(vlSelf->__PVT__axi4xbar_1__DOT__in_0_wready) 
                                               & (IData)(vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    vlSelf->axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready 
        = ((IData)(vlSelf->__PVT__axi4frag__DOT__nodeOut_wvalid) 
           & ((1U == (IData)(vlSelf->__PVT__axi4frag__DOT__w_todo)) 
              & (IData)(vlSelf->__PVT__axi4xbar_1__DOT__in_0_wready)));
    vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq 
        = ((~ (IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)) 
           & ((IData)(vlSelf->__PVT__axi4xbar_1__DOT__in_0_wvalid) 
              & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awIn_0_io_deq_bits)));
    vlSelf->__PVT__axi4ram__DOT__nodeIn_awready = (
                                                   ((IData)(vlSelf->__PVT__axi4xbar_1__DOT__in_0_wvalid) 
                                                    & ((IData)(vlSelf->__PVT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                                       >> 2U)) 
                                                   & (IData)(vlSelf->axi4ram__DOT____VdfgTmp_h8d807e6f__0));
    vlSelf->axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready 
        = ((IData)(vlSelf->__PVT___axi4yank_auto_in_wready) 
           & (IData)(vlSelf->axi4frag__DOT____VdfgTmp_ha2215a43__0));
    vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__do_deq 
        = ((~ (IData)(vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__empty)) 
           & ((IData)(vlSelf->axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready) 
              & (IData)(vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0)));
    vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__do_enq 
        = ((~ ((IData)(vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__empty) 
               & (IData)(vlSelf->axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready))) 
           & ((~ (IData)(vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__full)) 
              & (IData)(vlSelf->__PVT__axi4xbar_1__DOT__awIn_0_io_enq_valid)));
    vlSelf->__PVT__axi4ram__DOT___GEN = ((IData)(vlSelf->__PVT__axi4ram__DOT__nodeIn_awready) 
                                         & (IData)(vlSelf->__PVT___axi4xbar_1_auto_anon_out_2_awvalid));
    vlSelf->__PVT__axi4xbar_1__DOT__in_0_awready = 
        (((~ (IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)) 
          & (IData)(vlSelf->__PVT__axi4xbar_1__DOT__requestAWIO_0_0)) 
         | ((IData)(vlSelf->__PVT__axi4xbar_1__DOT__requestAWIO_0_2) 
            & (IData)(vlSelf->__PVT__axi4ram__DOT__nodeIn_awready)));
    vlSelf->__PVT__axi4frag__DOT__in_wdeq_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelf->__PVT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
               & (IData)(vlSelf->axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready))) 
           & ((~ (IData)(vlSelf->__PVT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
              & (IData)(vlSelf->__PVT___axi4xbar_auto_anon_out_0_wvalid)));
    vlSelf->axi4ram__DOT____Vcellinp__mem_ext__W0_en 
        = ((IData)(vlSelf->__PVT__axi4ram__DOT___GEN) 
           & (0xf000000U == (0xfffe000U & vlSelf->__PVT___axi4frag_auto_out_awaddr)));
    vlSelf->__PVT__axi4xbar_1__DOT__anonIn_awready 
        = ((IData)(vlSelf->__PVT__axi4xbar_1__DOT__in_0_awready) 
           & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___anonIn_awready_T));
    vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1 
        = ((IData)(vlSelf->__PVT__axi4xbar_1__DOT__anonIn_awready) 
           & (IData)(vlSelf->__PVT___axi4yank_auto_out_awvalid));
    vlSelf->__PVT__axi4yank__DOT___GEN_8 = ((IData)(vlSelf->__PVT__axi4frag__DOT__nodeOut_awvalid) 
                                            & (IData)(vlSelf->__PVT__axi4xbar_1__DOT__anonIn_awready));
    vlSelf->__PVT___axi4yank_auto_in_awready = ((IData)(vlSelf->__PVT__axi4xbar_1__DOT__anonIn_awready) 
                                                & (IData)(vlSelf->axi4yank__DOT____VdfgTmp_he7a0eac8__0));
    vlSelf->__PVT__axi4frag__DOT__in_awready = ((IData)(vlSelf->__PVT___axi4yank_auto_in_awready) 
                                                & (IData)(vlSelf->__PVT__axi4frag__DOT___in_awready_T));
    vlSelf->axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready 
        = ((~ (IData)((0U != (IData)(vlSelf->__PVT__axi4frag__DOT__len_1)))) 
           & (IData)(vlSelf->__PVT__axi4frag__DOT__in_awready));
    vlSelf->__PVT__axi4frag__DOT__deq_q_1__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelf->__PVT__axi4frag__DOT__deq_q_1__DOT__full)) 
               & (IData)(vlSelf->axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready))) 
           & ((~ (IData)(vlSelf->__PVT__axi4frag__DOT__deq_q_1__DOT__full)) 
              & (IData)(vlSelf->__PVT___axi4xbar_auto_anon_out_0_awvalid)));
}

VL_INLINE_OPT void VysyxSoCFull_ysyxSoCASIC___ico_sequent__TOP__ysyxSoCFull__asic__3(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___ico_sequent__TOP__ysyxSoCFull__asic__3\n"); );
    // Body
    vlSelf->axi4xbar__DOT____VdfgTmp_h52ee47fe__0 = 
        (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_rready) 
          & (IData)(vlSelf->__PVT__axi4xbar__DOT__in_0_rvalid)) 
         & (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_rT_3));
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w 
        = (((IData)(vlSelf->__PVT___axi4delay_delayer_in_rvalid) 
            & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_rready) 
               & ((IData)(vlSelf->__PVT__axi4xbar__DOT__idle_2)
                   ? ((IData)(vlSelf->__PVT__axi4xbar__DOT__readys_readys) 
                      >> 1U) : (IData)(vlSelf->__PVT__axi4xbar__DOT__state_2_1)))) 
           | (((IData)(vlSelf->__PVT___axi4delay_delayer_in_bvalid) 
               & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_bready) 
                  & ((IData)(vlSelf->__PVT__axi4xbar__DOT__idle_3)
                      ? ((IData)(vlSelf->__PVT__axi4xbar__DOT__readys_readys_1) 
                         >> 1U) : (IData)(vlSelf->__PVT__axi4xbar__DOT__state_3_1)))) 
              | ((~ ((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                     >> 4U)) & (IData)(vlSelf->lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgTmp_h95df1406__0))));
    vlSelf->__PVT___axi4frag_auto_out_rready = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_rready) 
                                                & ((IData)(vlSelf->__PVT__axi4xbar__DOT__idle_2)
                                                    ? (IData)(vlSelf->__PVT__axi4xbar__DOT__readys_readys)
                                                    : (IData)(vlSelf->__PVT__axi4xbar__DOT__state_2_0)));
    if (vlSelf->__PVT__axi4frag__DOT__deq_q__DOT__full) {
        vlSelf->__PVT__axi4frag__DOT___deq_q_io_deq_bits_burst 
            = (3U & (IData)(vlSelf->__PVT__axi4frag__DOT__deq_q__DOT__ram));
        vlSelf->__PVT__axi4frag__DOT___deq_q_io_deq_bits_len 
            = (0xffU & (IData)((vlSelf->__PVT__axi4frag__DOT__deq_q__DOT__ram 
                                >> 5U)));
        vlSelf->__PVT__axi4frag__DOT___deq_q_io_deq_bits_size 
            = (7U & (IData)((vlSelf->__PVT__axi4frag__DOT__deq_q__DOT__ram 
                             >> 2U)));
        vlSelf->__PVT__axi4frag__DOT___deq_q_io_deq_bits_addr 
            = (IData)((vlSelf->__PVT__axi4frag__DOT__deq_q__DOT__ram 
                       >> 0xdU));
    } else {
        vlSelf->__PVT__axi4frag__DOT___deq_q_io_deq_bits_burst 
            = (3U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_arburst));
        vlSelf->__PVT__axi4frag__DOT___deq_q_io_deq_bits_len 
            = (0xffU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_arlen));
        vlSelf->__PVT__axi4frag__DOT___deq_q_io_deq_bits_size 
            = (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_arsize));
        vlSelf->__PVT__axi4frag__DOT___deq_q_io_deq_bits_addr 
            = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_araddr;
    }
    vlSelf->__PVT__axi4xbar__DOT__requestARIO_0_0 = 
        (1U & ((~ (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_araddr 
                   >> 0x1fU)) | (0U == ((4U & ((~ (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_araddr 
                                                   >> 0x1fU)) 
                                               << 2U)) 
                                        | (3U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_araddr 
                                                 >> 0x1cU))))));
    vlSelf->__PVT__axi4xbar__DOT__requestARIO_0_1 = 
        (0U == ((4U & (4U ^ (4U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_araddr 
                                   >> 0x1dU)))) | (3U 
                                                   & (2U 
                                                      ^ 
                                                      (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_araddr 
                                                       >> 0x1cU)))));
    vlSelf->__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4 
        = ((IData)(vlSelf->__PVT___axi4frag_auto_out_rready) 
           & (IData)(vlSelf->__PVT__axi4xbar_1__DOT__in_0_rvalid));
    vlSelf->__PVT___axi4xbar_1_auto_anon_out_2_rready 
        = ((IData)(vlSelf->__PVT___axi4frag_auto_out_rready) 
           & ((IData)(vlSelf->__PVT__axi4xbar_1__DOT__idle_3)
               ? ((IData)(vlSelf->__PVT__axi4xbar_1__DOT__readys_readys) 
                  >> 2U) : (IData)(vlSelf->__PVT__axi4xbar_1__DOT__state_3_2)));
    if (vlSelf->__PVT__axi4frag__DOT__busy) {
        vlSelf->__PVT__axi4frag__DOT__len = vlSelf->__PVT__axi4frag__DOT__r_len;
        vlSelf->__PVT__axi4frag__DOT__addr = vlSelf->__PVT__axi4frag__DOT__r_addr;
    } else {
        vlSelf->__PVT__axi4frag__DOT__len = vlSelf->__PVT__axi4frag__DOT___deq_q_io_deq_bits_len;
        vlSelf->__PVT__axi4frag__DOT__addr = vlSelf->__PVT__axi4frag__DOT___deq_q_io_deq_bits_addr;
    }
    vlSelf->__PVT__axi4xbar__DOT___GEN = (((((0U == (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_15_count)) 
                                             | ((IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_15_last) 
                                                == (IData)(vlSelf->__PVT__axi4xbar__DOT__requestARIO_0_1))) 
                                            & (7U != (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_15_count))) 
                                           << 0xfU) 
                                          | (((((0U 
                                                 == (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_14_count)) 
                                                | ((IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_14_last) 
                                                   == (IData)(vlSelf->__PVT__axi4xbar__DOT__requestARIO_0_1))) 
                                               & (7U 
                                                  != (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_14_count))) 
                                              << 0xeU) 
                                             | (((((0U 
                                                    == (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_13_count)) 
                                                   | ((IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_13_last) 
                                                      == (IData)(vlSelf->__PVT__axi4xbar__DOT__requestARIO_0_1))) 
                                                  & (7U 
                                                     != (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_13_count))) 
                                                 << 0xdU) 
                                                | (((((0U 
                                                       == (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_12_count)) 
                                                      | ((IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_12_last) 
                                                         == (IData)(vlSelf->__PVT__axi4xbar__DOT__requestARIO_0_1))) 
                                                     & (7U 
                                                        != (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_12_count))) 
                                                    << 0xcU) 
                                                   | (((((0U 
                                                          == (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_11_count)) 
                                                         | ((IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_11_last) 
                                                            == (IData)(vlSelf->__PVT__axi4xbar__DOT__requestARIO_0_1))) 
                                                        & (7U 
                                                           != (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_11_count))) 
                                                       << 0xbU) 
                                                      | (((((0U 
                                                             == (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_10_count)) 
                                                            | ((IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_10_last) 
                                                               == (IData)(vlSelf->__PVT__axi4xbar__DOT__requestARIO_0_1))) 
                                                           & (7U 
                                                              != (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_10_count))) 
                                                          << 0xaU) 
                                                         | (((((0U 
                                                                == (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_9_count)) 
                                                               | ((IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_9_last) 
                                                                  == (IData)(vlSelf->__PVT__axi4xbar__DOT__requestARIO_0_1))) 
                                                              & (7U 
                                                                 != (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_9_count))) 
                                                             << 9U) 
                                                            | (((((0U 
                                                                   == (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_8_count)) 
                                                                  | ((IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_8_last) 
                                                                     == (IData)(vlSelf->__PVT__axi4xbar__DOT__requestARIO_0_1))) 
                                                                 & (7U 
                                                                    != (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_8_count))) 
                                                                << 8U) 
                                                               | (((((0U 
                                                                      == (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_7_count)) 
                                                                     | ((IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_7_last) 
                                                                        == (IData)(vlSelf->__PVT__axi4xbar__DOT__requestARIO_0_1))) 
                                                                    & (7U 
                                                                       != (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_7_count))) 
                                                                   << 7U) 
                                                                  | (((((0U 
                                                                         == (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_6_count)) 
                                                                        | ((IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_6_last) 
                                                                           == (IData)(vlSelf->__PVT__axi4xbar__DOT__requestARIO_0_1))) 
                                                                       & (7U 
                                                                          != (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_6_count))) 
                                                                      << 6U) 
                                                                     | (((((0U 
                                                                            == (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_5_count)) 
                                                                           | ((IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_5_last) 
                                                                              == (IData)(vlSelf->__PVT__axi4xbar__DOT__requestARIO_0_1))) 
                                                                          & (7U 
                                                                             != (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_5_count))) 
                                                                         << 5U) 
                                                                        | (((((0U 
                                                                               == (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_4_count)) 
                                                                              | ((IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_4_last) 
                                                                                == (IData)(vlSelf->__PVT__axi4xbar__DOT__requestARIO_0_1))) 
                                                                             & (7U 
                                                                                != (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_4_count))) 
                                                                            << 4U) 
                                                                           | (((((0U 
                                                                                == (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_3_count)) 
                                                                                | ((IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_3_last) 
                                                                                == (IData)(vlSelf->__PVT__axi4xbar__DOT__requestARIO_0_1))) 
                                                                                & (7U 
                                                                                != (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_3_count))) 
                                                                               << 3U) 
                                                                              | (((((0U 
                                                                                == (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_2_count)) 
                                                                                | ((IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_2_last) 
                                                                                == (IData)(vlSelf->__PVT__axi4xbar__DOT__requestARIO_0_1))) 
                                                                                & (7U 
                                                                                != (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_2_count))) 
                                                                                << 2U) 
                                                                                | (((((0U 
                                                                                == (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_1_count)) 
                                                                                | ((IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_1_last) 
                                                                                == (IData)(vlSelf->__PVT__axi4xbar__DOT__requestARIO_0_1))) 
                                                                                & (7U 
                                                                                != (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_1_count))) 
                                                                                << 1U) 
                                                                                | (((0U 
                                                                                == (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_0_count)) 
                                                                                | ((IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_0_last) 
                                                                                == (IData)(vlSelf->__PVT__axi4xbar__DOT__requestARIO_0_1))) 
                                                                                & (7U 
                                                                                != (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_0_count))))))))))))))))));
    vlSelf->axi4xbar_1__DOT____VdfgTmp_h026b18ec__0 
        = ((IData)(vlSelf->__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_5));
    vlSelf->__PVT__axi4ram__DOT__nodeIn_arready = (1U 
                                                   & ((~ (IData)(vlSelf->__PVT__axi4ram__DOT__r_full)) 
                                                      | (IData)(vlSelf->__PVT___axi4xbar_1_auto_anon_out_2_rready)));
    vlSelf->__PVT___axi4frag_auto_out_araddr = (~ (
                                                   ((~ 
                                                     (vlSelf->__PVT__axi4frag__DOT__addr 
                                                      >> 2U)) 
                                                    << 2U) 
                                                   | (3U 
                                                      & ((~ 
                                                          ((IData)(3U) 
                                                           << (IData)(vlSelf->__PVT__axi4frag__DOT___deq_q_io_deq_bits_size))) 
                                                         | (~ vlSelf->__PVT__axi4frag__DOT__addr)))));
    vlSelf->axi4xbar__DOT____VdfgTmp_h3f210cd0__0 = 
        (1U & ((IData)(vlSelf->__PVT__axi4xbar__DOT___GEN) 
               >> (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_arid)));
    vlSelf->__PVT__axi4xbar_1__DOT__requestARIO_0_0 
        = ((0U == ((2U & (vlSelf->__PVT___axi4frag_auto_out_araddr 
                          >> 0x1cU)) | (1U & (vlSelf->__PVT___axi4frag_auto_out_araddr 
                                              >> 0x18U)))) 
           | ((0U == ((6U & (4U ^ (0x1eU & (vlSelf->__PVT___axi4frag_auto_out_araddr 
                                            >> 0x1bU)))) 
                      | (1U & (~ (vlSelf->__PVT___axi4frag_auto_out_araddr 
                                  >> 0x18U))))) | (3U 
                                                   == 
                                                   (3U 
                                                    & (vlSelf->__PVT___axi4frag_auto_out_araddr 
                                                       >> 0x1cU)))));
    vlSelf->__PVT__axi4xbar_1__DOT__requestARIO_0_2 
        = (0U == ((6U & (vlSelf->__PVT___axi4frag_auto_out_araddr 
                         >> 0x1bU)) | (1U & (~ (vlSelf->__PVT___axi4frag_auto_out_araddr 
                                                >> 0x18U)))));
    vlSelf->__PVT__axi4xbar_1__DOT__requestARIO_0_1 
        = (0U == ((6U & (4U ^ (0x1eU & (vlSelf->__PVT___axi4frag_auto_out_araddr 
                                        >> 0x1bU)))) 
                  | (1U & (vlSelf->__PVT___axi4frag_auto_out_araddr 
                           >> 0x18U))));
    vlSelf->__PVT__axi4xbar__DOT__in_0_arvalid = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_arvalid) 
                                                  & (IData)(vlSelf->axi4xbar__DOT____VdfgTmp_h3f210cd0__0));
    vlSelf->__PVT__axi4xbar_1__DOT__in_0_arready = 
        (((~ (IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)) 
          & (IData)(vlSelf->__PVT__axi4xbar_1__DOT__requestARIO_0_0)) 
         | (((~ (IData)(vlSelf->__PVT__lmrom__DOT__state)) 
             & (IData)(vlSelf->__PVT__axi4xbar_1__DOT__requestARIO_0_1)) 
            | ((IData)(vlSelf->__PVT__axi4xbar_1__DOT__requestARIO_0_2) 
               & (IData)(vlSelf->__PVT__axi4ram__DOT__nodeIn_arready))));
    vlSelf->__PVT___axi4xbar_auto_anon_out_0_arvalid 
        = ((IData)(vlSelf->__PVT__axi4xbar__DOT__in_0_arvalid) 
           & (IData)(vlSelf->__PVT__axi4xbar__DOT__requestARIO_0_0));
    vlSelf->__PVT___axi4delay_delayer_out_arvalid = 
        ((IData)(vlSelf->__PVT__axi4xbar__DOT__in_0_arvalid) 
         & (IData)(vlSelf->__PVT__axi4xbar__DOT__requestARIO_0_1));
    vlSelf->__PVT___axi4yank_auto_in_arready = ((IData)(vlSelf->__PVT__axi4xbar_1__DOT__in_0_arready) 
                                                & (IData)(vlSelf->axi4yank__DOT____VdfgTmp_h73aa1639__0));
    vlSelf->__PVT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0 
        = ((IData)(vlSelf->__PVT__axi4frag__DOT__deq_q__DOT__full) 
           | (IData)(vlSelf->__PVT___axi4xbar_auto_anon_out_0_arvalid));
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w 
        = (((IData)(vlSelf->__PVT___axi4delay_delayer_out_arvalid) 
            | (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q)) 
           & ((~ (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q)) 
              & ((4U != (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                 & (((~ ((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                         | (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                     | (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                    | ((~ (IData)(vlSelf->__PVT___axi4delay_delayer_out_awvalid)) 
                       | (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q))))));
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w 
        = (((IData)(vlSelf->__PVT___axi4delay_delayer_out_awvalid) 
            | (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q)) 
           & ((~ (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q)) 
              & ((4U != (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                 & ((((~ (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                      & (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                     | (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q)) 
                    | ((~ (IData)(vlSelf->__PVT___axi4delay_delayer_out_arvalid)) 
                       | (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q))))));
    vlSelf->axi4frag__DOT____Vcellinp__deq_q__io_deq_ready 
        = ((~ (IData)((0U != (IData)(vlSelf->__PVT__axi4frag__DOT__len)))) 
           & (IData)(vlSelf->__PVT___axi4yank_auto_in_arready));
    vlSelf->__PVT__axi4yank__DOT___GEN_2 = ((IData)(vlSelf->__PVT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0) 
                                            & (IData)(vlSelf->__PVT__axi4xbar_1__DOT__in_0_arready));
    vlSelf->__PVT___axi4yank_auto_out_arvalid = ((IData)(vlSelf->__PVT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0) 
                                                 & (IData)(vlSelf->axi4yank__DOT____VdfgTmp_h73aa1639__0));
    vlSelf->__PVT___axi4delay_delayer_in_arready = 
        ((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w) 
         & ((~ (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q)) 
            & (IData)(vlSelf->lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgTmp_h0622eded__0)));
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
        = (((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q) 
            | (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q))
            ? vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q
            : ((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w)
                ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awaddr
                : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_araddr));
    vlSelf->__PVT___axi4delay_delayer_in_wready = ((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
                                                   & (IData)(vlSelf->lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgTmp_h0622eded__0));
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w 
        = (((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
            & (IData)(vlSelf->__PVT___axi4delay_delayer_out_wvalid))
            ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_wstrb)
            : 0U);
    vlSelf->__PVT___axi4delay_delayer_in_awready = 
        ((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
         & ((~ (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q)) 
            & (IData)(vlSelf->lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgTmp_h0622eded__0)));
    vlSelf->__PVT__axi4frag__DOT__deq_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelf->__PVT__axi4frag__DOT__deq_q__DOT__full)) 
               & (IData)(vlSelf->axi4frag__DOT____Vcellinp__deq_q__io_deq_ready))) 
           & ((~ (IData)(vlSelf->__PVT__axi4frag__DOT__deq_q__DOT__full)) 
              & (IData)(vlSelf->__PVT___axi4xbar_auto_anon_out_0_arvalid)));
    vlSelf->__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1 
        = ((IData)(vlSelf->__PVT__axi4xbar_1__DOT__in_0_arready) 
           & (IData)(vlSelf->__PVT___axi4yank_auto_out_arvalid));
    vlSelf->__PVT__axi4ram__DOT__ren = ((IData)(vlSelf->__PVT__axi4ram__DOT__nodeIn_arready) 
                                        & ((IData)(vlSelf->__PVT___axi4yank_auto_out_arvalid) 
                                           & (IData)(vlSelf->__PVT__axi4xbar_1__DOT__requestARIO_0_2)));
    vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq 
        = ((~ (IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)) 
           & ((IData)(vlSelf->__PVT___axi4yank_auto_out_arvalid) 
              & (IData)(vlSelf->__PVT__axi4xbar_1__DOT__requestARIO_0_0)));
    vlSelf->__PVT__lmrom__DOT___nodeIn_rid_T = ((~ (IData)(vlSelf->__PVT__lmrom__DOT__state)) 
                                                & ((IData)(vlSelf->__PVT___axi4yank_auto_out_arvalid) 
                                                   & (IData)(vlSelf->__PVT__axi4xbar_1__DOT__requestARIO_0_1)));
    vlSelf->__PVT__axi4xbar__DOT__anonIn_arready = 
        ((((~ (IData)(vlSelf->__PVT__axi4frag__DOT__deq_q__DOT__full)) 
           & (IData)(vlSelf->__PVT__axi4xbar__DOT__requestARIO_0_0)) 
          | ((IData)(vlSelf->__PVT__axi4xbar__DOT__requestARIO_0_1) 
             & (IData)(vlSelf->__PVT___axi4delay_delayer_in_arready))) 
         & (IData)(vlSelf->axi4xbar__DOT____VdfgTmp_h3f210cd0__0));
    vlSelf->__PVT__axi4xbar__DOT__in_0_wready = (1U 
                                                 & (((~ (IData)(vlSelf->__PVT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
                                                     & (IData)(vlSelf->__PVT__axi4xbar__DOT___awIn_0_io_deq_bits)) 
                                                    | (((IData)(vlSelf->__PVT__axi4xbar__DOT___awIn_0_io_deq_bits) 
                                                        >> 1U) 
                                                       & (IData)(vlSelf->__PVT___axi4delay_delayer_in_wready))));
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w 
        = (((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w) 
            | (0U != (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w))) 
           & (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_accept_w));
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w 
        = ((0U != (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w)) 
           | (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w));
    vlSelf->__PVT__axi4xbar__DOT__in_0_awready = ((
                                                   (~ (IData)(vlSelf->__PVT__axi4frag__DOT__deq_q_1__DOT__full)) 
                                                   & (IData)(vlSelf->__PVT__axi4xbar__DOT__requestAWIO_0_0)) 
                                                  | ((IData)(vlSelf->__PVT__axi4xbar__DOT__requestAWIO_0_1) 
                                                     & (IData)(vlSelf->__PVT___axi4delay_delayer_in_awready)));
    if (vlSelf->__PVT__lmrom__DOT___nodeIn_rid_T) {
        VysyxSoCFull_ysyxSoCASIC____Vdpiimwrap_lmrom__DOT__mrom__DOT__mrom_read_TOP__ysyxSoCFull__asic(
                                                                                (0x3fffffffU 
                                                                                & vlSelf->__PVT___axi4frag_auto_out_araddr), vlSelf->__Vtask_lmrom__DOT__mrom__DOT__mrom_read__0__rdata);
        vlSelf->__PVT__lmrom__DOT___mrom_rdata = vlSelf->__Vtask_lmrom__DOT__mrom__DOT__mrom_read__0__rdata;
    } else {
        vlSelf->__PVT__lmrom__DOT___mrom_rdata = 0U;
    }
    vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_15_T_1 
        = ((IData)(vlSelf->__PVT__axi4xbar__DOT__anonIn_arready) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_arvalid));
    vlSelf->axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_wvalid) 
           & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_wlast) 
              & (IData)(vlSelf->__PVT__axi4xbar__DOT__in_0_wready)));
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
        = vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q;
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r 
        = vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q;
    if ((8U & (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r 
            = ((4U & (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                ? 0U : ((2U & (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                         ? 0U : ((1U & (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                                  ? 6U : 2U)));
        if ((1U & (~ ((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                          >> 1U)))) {
                vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
                    = ((1U & (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                        ? 2U : ((9U == (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r))
                                 ? 9U : 3U));
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
        if ((2U & (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r = 0U;
            if ((1U & (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 2U;
                if ((((~ (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q)) 
                      & (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w)) 
                     & (0U != (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w)))) {
                    if ((((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q) 
                          >> (3U & (vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                    >> 0xaU))) & ((0x1fffU 
                                                   & (vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                                      >> 0xcU)) 
                                                  == 
                                                  vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q
                                                  [
                                                  (3U 
                                                   & (vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                                      >> 0xaU))]))) {
                        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 6U;
                    }
                }
            } else {
                vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 7U;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r = 2U;
            vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 2U;
            if ((((~ (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q)) 
                  & (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w)) 
                 & (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w))) {
                if ((((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q) 
                      >> (3U & (vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                >> 0xaU))) & ((0x1fffU 
                                               & (vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                                  >> 0xcU)) 
                                              == vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q
                                              [(3U 
                                                & (vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                                   >> 0xaU))]))) {
                    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r = 0U;
                    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 4U;
                }
            }
        } else {
            vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r = 0U;
            vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 5U;
        }
    } else if ((2U & (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
        if ((1U & (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r 
                = (0xfU & 2U);
            vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
                = vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r;
        } else {
            vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r 
                = (0xfU & 0U);
            if (vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q) {
                vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
                    = ((0U != (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q))
                        ? 8U : 9U);
                vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r = 9U;
            } else if (vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w) {
                if ((((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q) 
                      >> (3U & (vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                >> 0xaU))) & ((0x1fffU 
                                               & (vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                                  >> 0xcU)) 
                                              == vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q
                                              [(3U 
                                                & (vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                                   >> 0xaU))]))) {
                    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
                        = ((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w)
                            ? 4U : 6U);
                } else if ((1U & ((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q) 
                                  >> (3U & (vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                            >> 0xaU))))) {
                    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 8U;
                    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r 
                        = ((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w)
                            ? 4U : 6U);
                } else {
                    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 3U;
                    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r 
                        = ((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w)
                            ? 4U : 6U);
                }
            }
        }
    } else if ((1U & (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r 
            = (0xfU & ((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q) 
                       - (IData)(1U)));
        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
            = vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q;
    } else {
        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r 
            = (0xfU & 0U);
        if (vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q) {
            vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 2U;
        }
    }
    vlSelf->__PVT__axi4xbar__DOT__anonIn_awready = 
        ((IData)(vlSelf->__PVT__axi4xbar__DOT__in_0_awready) 
         & (IData)(vlSelf->axi4xbar__DOT____VdfgTmp_h1a379823__0));
    vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_0_T_2 
        = (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_arid)) 
           & (IData)(vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_15_T_1));
    vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_1_T_2 
        = (0x7fffU & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_arid)) 
                       >> 1U) & (IData)(vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_15_T_1)));
    vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_2_T_2 
        = (0x3fffU & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_arid)) 
                       >> 2U) & (IData)(vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_15_T_1)));
    vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_3_T_2 
        = (0x1fffU & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_arid)) 
                       >> 3U) & (IData)(vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_15_T_1)));
    vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_4_T_2 
        = (0xfffU & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_arid)) 
                      >> 4U) & (IData)(vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_15_T_1)));
    vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_5_T_2 
        = (0x7ffU & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_arid)) 
                      >> 5U) & (IData)(vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_15_T_1)));
    vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_6_T_2 
        = (0x3ffU & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_arid)) 
                      >> 6U) & (IData)(vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_15_T_1)));
    vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_7_T_2 
        = (0x1ffU & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_arid)) 
                      >> 7U) & (IData)(vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_15_T_1)));
    vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_8_T_2 
        = (0xffU & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_arid)) 
                     >> 8U) & (IData)(vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_15_T_1)));
    vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_9_T_2 
        = (0x7fU & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_arid)) 
                     >> 9U) & (IData)(vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_15_T_1)));
    vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_10_T_2 
        = (0x3fU & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_arid)) 
                     >> 0xaU) & (IData)(vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_15_T_1)));
    vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_11_T_2 
        = (0x1fU & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_arid)) 
                     >> 0xbU) & (IData)(vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_15_T_1)));
    vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_12_T_2 
        = (0xfU & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_arid)) 
                    >> 0xcU) & (IData)(vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_15_T_1)));
    vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_13_T_2 
        = (7U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_arid)) 
                  >> 0xdU) & (IData)(vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_15_T_1)));
    vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_14_T_2 
        = (3U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_arid)) 
                  >> 0xeU) & (IData)(vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_15_T_1)));
    vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_15_T_2 
        = ((IData)(vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_15_T_1) 
           & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_arid)) 
              >> 0xfU));
    vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__do_deq 
        = ((~ (IData)(vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__empty)) 
           & ((IData)(vlSelf->axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready) 
              & (IData)(vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0)));
    vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__do_enq 
        = ((~ ((IData)(vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__empty) 
               & (IData)(vlSelf->axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready))) 
           & ((~ (IData)(vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__full)) 
              & (IData)(vlSelf->__PVT__axi4xbar__DOT__awIn_0_io_enq_valid)));
    vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_15_T_1 
        = ((IData)(vlSelf->__PVT__axi4xbar__DOT__anonIn_awready) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awvalid));
    vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_0_T_2 
        = (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awid)) 
           & (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_15_T_1));
    vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_1_T_2 
        = (0x7fffU & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awid)) 
                       >> 1U) & (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_15_T_1)));
    vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_2_T_2 
        = (0x3fffU & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awid)) 
                       >> 2U) & (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_15_T_1)));
    vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_3_T_2 
        = (0x1fffU & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awid)) 
                       >> 3U) & (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_15_T_1)));
    vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_4_T_2 
        = (0xfffU & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awid)) 
                      >> 4U) & (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_15_T_1)));
    vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_5_T_2 
        = (0x7ffU & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awid)) 
                      >> 5U) & (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_15_T_1)));
    vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_6_T_2 
        = (0x3ffU & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awid)) 
                      >> 6U) & (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_15_T_1)));
    vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_7_T_2 
        = (0x1ffU & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awid)) 
                      >> 7U) & (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_15_T_1)));
    vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_8_T_2 
        = (0xffU & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awid)) 
                     >> 8U) & (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_15_T_1)));
    vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_9_T_2 
        = (0x7fU & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awid)) 
                     >> 9U) & (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_15_T_1)));
    vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_10_T_2 
        = (0x3fU & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awid)) 
                     >> 0xaU) & (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_15_T_1)));
    vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_11_T_2 
        = (0x1fU & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awid)) 
                     >> 0xbU) & (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_15_T_1)));
    vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_12_T_2 
        = (0xfU & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awid)) 
                    >> 0xcU) & (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_15_T_1)));
    vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_13_T_2 
        = (7U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awid)) 
                  >> 0xdU) & (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_15_T_1)));
    vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_14_T_2 
        = (3U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awid)) 
                  >> 0xeU) & (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_15_T_1)));
    vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_15_T_2 
        = ((IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_15_T_1) 
           & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awid)) 
              >> 0xfU));
}

VL_INLINE_OPT void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__0(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__0\n"); );
    // Init
    CData/*2:0*/ __PVT__axi4xbar_1__DOT___readys_filter_T_1;
    __PVT__axi4xbar_1__DOT___readys_filter_T_1 = 0;
    CData/*3:0*/ __PVT__axi4xbar_1__DOT___GEN_1;
    __PVT__axi4xbar_1__DOT___GEN_1 = 0;
    CData/*2:0*/ __PVT__axi4xbar_1__DOT___readys_filter_T_3;
    __PVT__axi4xbar_1__DOT___readys_filter_T_3 = 0;
    CData/*3:0*/ __PVT__axi4xbar_1__DOT___GEN_2;
    __PVT__axi4xbar_1__DOT___GEN_2 = 0;
    IData/*18:0*/ lvga__DOT__mvga__DOT____VdfgTmp_he6b15335__0;
    lvga__DOT__mvga__DOT____VdfgTmp_he6b15335__0 = 0;
    SData/*15:0*/ __PVT__axi4yank__DOT__unnamedblk1__DOT___GEN_4;
    __PVT__axi4yank__DOT__unnamedblk1__DOT___GEN_4 = 0;
    SData/*15:0*/ __PVT__axi4yank__DOT__unnamedblk1__DOT___GEN_5;
    __PVT__axi4yank__DOT__unnamedblk1__DOT___GEN_5 = 0;
    CData/*0:0*/ __PVT__axi4frag__DOT__unnamedblk1__DOT___GEN_0;
    __PVT__axi4frag__DOT__unnamedblk1__DOT___GEN_0 = 0;
    CData/*0:0*/ __PVT__axi4frag__DOT__unnamedblk1__DOT___GEN_1;
    __PVT__axi4frag__DOT__unnamedblk1__DOT___GEN_1 = 0;
    CData/*0:0*/ __Vdly__axi4xbar__DOT__idle_3;
    __Vdly__axi4xbar__DOT__idle_3 = 0;
    CData/*0:0*/ __Vdly__axi4xbar__DOT__idle_2;
    __Vdly__axi4xbar__DOT__idle_2 = 0;
    CData/*0:0*/ __Vdly__axi4xbar__DOT__awIn_0__DOT__wrap;
    __Vdly__axi4xbar__DOT__awIn_0__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__axi4xbar__DOT__awIn_0__DOT__wrap_1;
    __Vdly__axi4xbar__DOT__awIn_0__DOT__wrap_1 = 0;
    CData/*0:0*/ __Vdlyvdim0__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvdim0__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*1:0*/ __Vdlyvval__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvval__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvset__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdly__axi4xbar_1__DOT__idle_3;
    __Vdly__axi4xbar_1__DOT__idle_3 = 0;
    CData/*0:0*/ __Vdly__axi4xbar_1__DOT__idle_4;
    __Vdly__axi4xbar_1__DOT__idle_4 = 0;
    CData/*0:0*/ __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap;
    __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap_1;
    __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap_1 = 0;
    CData/*0:0*/ __Vdlyvdim0__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvdim0__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*2:0*/ __Vdlyvval__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvval__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvset__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*3:0*/ __Vdlyvdim0__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    __Vdlyvdim0__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0;
    CData/*7:0*/ __Vdlyvval__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    __Vdlyvval__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    __Vdlyvset__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0;
    CData/*3:0*/ __Vdlyvdim0__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    __Vdlyvdim0__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0;
    CData/*7:0*/ __Vdlyvval__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    __Vdlyvval__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    __Vdlyvset__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0;
    CData/*7:0*/ __Vdlyvval__lgpio__DOT__mgpio__DOT__segs__v0;
    __Vdlyvval__lgpio__DOT__mgpio__DOT__segs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lgpio__DOT__mgpio__DOT__segs__v0;
    __Vdlyvset__lgpio__DOT__mgpio__DOT__segs__v0 = 0;
    CData/*7:0*/ __Vdlyvval__lgpio__DOT__mgpio__DOT__segs__v1;
    __Vdlyvval__lgpio__DOT__mgpio__DOT__segs__v1 = 0;
    CData/*7:0*/ __Vdlyvval__lgpio__DOT__mgpio__DOT__segs__v2;
    __Vdlyvval__lgpio__DOT__mgpio__DOT__segs__v2 = 0;
    CData/*7:0*/ __Vdlyvval__lgpio__DOT__mgpio__DOT__segs__v3;
    __Vdlyvval__lgpio__DOT__mgpio__DOT__segs__v3 = 0;
    CData/*7:0*/ __Vdlyvval__lgpio__DOT__mgpio__DOT__segs__v4;
    __Vdlyvval__lgpio__DOT__mgpio__DOT__segs__v4 = 0;
    CData/*7:0*/ __Vdlyvval__lgpio__DOT__mgpio__DOT__segs__v5;
    __Vdlyvval__lgpio__DOT__mgpio__DOT__segs__v5 = 0;
    CData/*7:0*/ __Vdlyvval__lgpio__DOT__mgpio__DOT__segs__v6;
    __Vdlyvval__lgpio__DOT__mgpio__DOT__segs__v6 = 0;
    CData/*7:0*/ __Vdlyvval__lgpio__DOT__mgpio__DOT__segs__v7;
    __Vdlyvval__lgpio__DOT__mgpio__DOT__segs__v7 = 0;
    CData/*2:0*/ __Vdly__lkeyboard__DOT__mps2__DOT__ps2_clk_sync;
    __Vdly__lkeyboard__DOT__mps2__DOT__ps2_clk_sync = 0;
    CData/*3:0*/ __Vdly__lkeyboard__DOT__mps2__DOT__count;
    __Vdly__lkeyboard__DOT__mps2__DOT__count = 0;
    CData/*2:0*/ __Vdly__lkeyboard__DOT__mps2__DOT__w_ptr;
    __Vdly__lkeyboard__DOT__mps2__DOT__w_ptr = 0;
    CData/*2:0*/ __Vdly__lkeyboard__DOT__mps2__DOT__r_ptr;
    __Vdly__lkeyboard__DOT__mps2__DOT__r_ptr = 0;
    CData/*0:0*/ __Vdly__lkeyboard__DOT__mps2__DOT__overflow;
    __Vdly__lkeyboard__DOT__mps2__DOT__overflow = 0;
    CData/*0:0*/ __Vdly__lkeyboard__DOT__mps2__DOT__ready;
    __Vdly__lkeyboard__DOT__mps2__DOT__ready = 0;
    CData/*2:0*/ __Vdlyvdim0__lkeyboard__DOT__mps2__DOT__fifo__v0;
    __Vdlyvdim0__lkeyboard__DOT__mps2__DOT__fifo__v0 = 0;
    CData/*7:0*/ __Vdlyvval__lkeyboard__DOT__mps2__DOT__fifo__v0;
    __Vdlyvval__lkeyboard__DOT__mps2__DOT__fifo__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lkeyboard__DOT__mps2__DOT__fifo__v0;
    __Vdlyvset__lkeyboard__DOT__mps2__DOT__fifo__v0 = 0;
    SData/*9:0*/ __Vdly__lvga__DOT__mvga__DOT__x_cnt;
    __Vdly__lvga__DOT__mvga__DOT__x_cnt = 0;
    SData/*9:0*/ __Vdly__lvga__DOT__mvga__DOT__y_cnt;
    __Vdly__lvga__DOT__mvga__DOT__y_cnt = 0;
    IData/*18:0*/ __Vdlyvdim0__lvga__DOT__mvga__DOT__vga_mem__v0;
    __Vdlyvdim0__lvga__DOT__mvga__DOT__vga_mem__v0 = 0;
    IData/*23:0*/ __Vdlyvval__lvga__DOT__mvga__DOT__vga_mem__v0;
    __Vdlyvval__lvga__DOT__mvga__DOT__vga_mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lvga__DOT__mvga__DOT__vga_mem__v0;
    __Vdlyvset__lvga__DOT__mvga__DOT__vga_mem__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0;
    __Vdlyvdim0__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0 = 0;
    CData/*7:0*/ __Vdlyvval__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0;
    __Vdlyvval__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0;
    __Vdlyvset__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v1;
    __Vdlyvdim0__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v1 = 0;
    CData/*7:0*/ __Vdlyvval__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v1;
    __Vdlyvval__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v1 = 0;
    CData/*0:0*/ __Vdlyvset__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v1;
    __Vdlyvset__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v1 = 0;
    CData/*0:0*/ __Vdly__axi4ram__DOT__w_full;
    __Vdly__axi4ram__DOT__w_full = 0;
    SData/*10:0*/ __Vdlyvdim0__axi4ram__DOT__mem_ext__DOT__Memory__v0;
    __Vdlyvdim0__axi4ram__DOT__mem_ext__DOT__Memory__v0 = 0;
    CData/*4:0*/ __Vdlyvlsb__axi4ram__DOT__mem_ext__DOT__Memory__v0;
    __Vdlyvlsb__axi4ram__DOT__mem_ext__DOT__Memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__axi4ram__DOT__mem_ext__DOT__Memory__v0;
    __Vdlyvval__axi4ram__DOT__mem_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__axi4ram__DOT__mem_ext__DOT__Memory__v0;
    __Vdlyvset__axi4ram__DOT__mem_ext__DOT__Memory__v0 = 0;
    SData/*10:0*/ __Vdlyvdim0__axi4ram__DOT__mem_ext__DOT__Memory__v1;
    __Vdlyvdim0__axi4ram__DOT__mem_ext__DOT__Memory__v1 = 0;
    CData/*4:0*/ __Vdlyvlsb__axi4ram__DOT__mem_ext__DOT__Memory__v1;
    __Vdlyvlsb__axi4ram__DOT__mem_ext__DOT__Memory__v1 = 0;
    CData/*7:0*/ __Vdlyvval__axi4ram__DOT__mem_ext__DOT__Memory__v1;
    __Vdlyvval__axi4ram__DOT__mem_ext__DOT__Memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__axi4ram__DOT__mem_ext__DOT__Memory__v1;
    __Vdlyvset__axi4ram__DOT__mem_ext__DOT__Memory__v1 = 0;
    SData/*10:0*/ __Vdlyvdim0__axi4ram__DOT__mem_ext__DOT__Memory__v2;
    __Vdlyvdim0__axi4ram__DOT__mem_ext__DOT__Memory__v2 = 0;
    CData/*4:0*/ __Vdlyvlsb__axi4ram__DOT__mem_ext__DOT__Memory__v2;
    __Vdlyvlsb__axi4ram__DOT__mem_ext__DOT__Memory__v2 = 0;
    CData/*7:0*/ __Vdlyvval__axi4ram__DOT__mem_ext__DOT__Memory__v2;
    __Vdlyvval__axi4ram__DOT__mem_ext__DOT__Memory__v2 = 0;
    CData/*0:0*/ __Vdlyvset__axi4ram__DOT__mem_ext__DOT__Memory__v2;
    __Vdlyvset__axi4ram__DOT__mem_ext__DOT__Memory__v2 = 0;
    SData/*10:0*/ __Vdlyvdim0__axi4ram__DOT__mem_ext__DOT__Memory__v3;
    __Vdlyvdim0__axi4ram__DOT__mem_ext__DOT__Memory__v3 = 0;
    CData/*4:0*/ __Vdlyvlsb__axi4ram__DOT__mem_ext__DOT__Memory__v3;
    __Vdlyvlsb__axi4ram__DOT__mem_ext__DOT__Memory__v3 = 0;
    CData/*7:0*/ __Vdlyvval__axi4ram__DOT__mem_ext__DOT__Memory__v3;
    __Vdlyvval__axi4ram__DOT__mem_ext__DOT__Memory__v3 = 0;
    CData/*0:0*/ __Vdlyvset__axi4ram__DOT__mem_ext__DOT__Memory__v3;
    __Vdlyvset__axi4ram__DOT__mem_ext__DOT__Memory__v3 = 0;
    CData/*1:0*/ __Vdly__axi42apb__DOT__state;
    __Vdly__axi42apb__DOT__state = 0;
    CData/*0:0*/ __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap;
    __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1;
    __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1 = 0;
    CData/*0:0*/ __Vdlyvdim0__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvdim0__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    QData/*46:0*/ __Vdlyvval__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvval__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvset__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap;
    __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1;
    __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1 = 0;
    CData/*0:0*/ __Vdlyvdim0__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvdim0__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    QData/*35:0*/ __Vdlyvval__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvval__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvset__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap;
    __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1;
    __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1 = 0;
    CData/*0:0*/ __Vdlyvdim0__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvdim0__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*5:0*/ __Vdlyvval__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvval__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvset__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap;
    __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1;
    __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1 = 0;
    CData/*0:0*/ __Vdlyvdim0__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvdim0__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    QData/*46:0*/ __Vdlyvval__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvval__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvset__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap;
    __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1;
    __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1 = 0;
    CData/*0:0*/ __Vdlyvdim0__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvdim0__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    QData/*38:0*/ __Vdlyvval__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvval__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvset__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_1__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_1__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_2__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_2__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_3__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_3__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_4__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_4__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_5__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_5__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_6__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_6__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_7__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_7__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_8__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_8__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_9__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_9__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_10__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_10__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_11__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_11__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_12__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_12__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_13__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_13__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_14__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_14__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_15__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_15__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_16__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_16__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_17__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_17__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_18__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_18__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_19__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_19__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_20__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_20__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_21__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_21__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_22__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_22__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_23__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_23__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_24__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_24__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_25__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_25__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_26__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_26__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_27__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_27__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_28__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_28__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_29__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_29__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_30__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_30__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_31__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_31__DOT__full = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_0;
    __Vdly__axi4frag__DOT__error_0 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_1;
    __Vdly__axi4frag__DOT__error_1 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_2;
    __Vdly__axi4frag__DOT__error_2 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_3;
    __Vdly__axi4frag__DOT__error_3 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_4;
    __Vdly__axi4frag__DOT__error_4 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_5;
    __Vdly__axi4frag__DOT__error_5 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_6;
    __Vdly__axi4frag__DOT__error_6 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_7;
    __Vdly__axi4frag__DOT__error_7 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_8;
    __Vdly__axi4frag__DOT__error_8 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_9;
    __Vdly__axi4frag__DOT__error_9 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_10;
    __Vdly__axi4frag__DOT__error_10 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_11;
    __Vdly__axi4frag__DOT__error_11 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_12;
    __Vdly__axi4frag__DOT__error_12 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_13;
    __Vdly__axi4frag__DOT__error_13 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_14;
    __Vdly__axi4frag__DOT__error_14 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_15;
    __Vdly__axi4frag__DOT__error_15 = 0;
    CData/*0:0*/ __Vdly__axi4frag__DOT__deq_q__DOT__full;
    __Vdly__axi4frag__DOT__deq_q__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4frag__DOT__deq_q_1__DOT__full;
    __Vdly__axi4frag__DOT__deq_q_1__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4frag__DOT__in_wdeq_q__DOT__full;
    __Vdly__axi4frag__DOT__in_wdeq_q__DOT__full = 0;
    // Body
    __Vdly__lkeyboard__DOT__mps2__DOT__ps2_clk_sync 
        = vlSelf->__PVT__lkeyboard__DOT__mps2__DOT__ps2_clk_sync;
    __Vdly__lvga__DOT__mvga__DOT__x_cnt = vlSelf->__PVT__lvga__DOT__mvga__DOT__x_cnt;
    __Vdly__lvga__DOT__mvga__DOT__y_cnt = vlSelf->__PVT__lvga__DOT__mvga__DOT__y_cnt;
    __Vdlyvset__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdly__lkeyboard__DOT__mps2__DOT__overflow = vlSelf->__PVT__lkeyboard__DOT__mps2__DOT__overflow;
    __Vdly__lkeyboard__DOT__mps2__DOT__w_ptr = vlSelf->__PVT__lkeyboard__DOT__mps2__DOT__w_ptr;
    __Vdly__lkeyboard__DOT__mps2__DOT__count = vlSelf->__PVT__lkeyboard__DOT__mps2__DOT__count;
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & ((IData)(vlSelf->__PVT__axi4xbar_1__DOT__in_0_awvalid) 
                        & (IData)(vlSelf->__PVT__axi4xbar_1__DOT__requestAWIO_0_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2930: Assertion failed in %NysyxSoCFull.asic.lmrom: Assertion failed: do not support write operations\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2930, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2932: Assertion failed in %NysyxSoCFull.asic.lmrom\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2932, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & ((IData)(vlSelf->__PVT__axi4xbar_1__DOT__in_0_wvalid) 
                        & ((IData)(vlSelf->__PVT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                           >> 1U))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2936: Assertion failed in %NysyxSoCFull.asic.lmrom: Assertion failed: do not support write operations\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2936, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2938: Assertion failed in %NysyxSoCFull.asic.lmrom\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2938, "");
    }
    __Vdly__lkeyboard__DOT__mps2__DOT__ready = vlSelf->__PVT__lkeyboard__DOT__mps2__DOT__ready;
    __Vdly__lkeyboard__DOT__mps2__DOT__r_ptr = vlSelf->__PVT__lkeyboard__DOT__mps2__DOT__r_ptr;
    __Vdlyvset__lkeyboard__DOT__mps2__DOT__fifo__v0 = 0U;
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0U == ((0x200U & ((~ ((IData)(vlSelf->__PVT___axi4yank_auto_in_wready) 
                                              & (IData)(vlSelf->__PVT__axi4frag__DOT__nodeOut_wvalid))) 
                                          << 9U)) | (IData)(vlSelf->__PVT__axi4frag__DOT__w_todo)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5057: Assertion failed in %NysyxSoCFull.asic.axi4frag: Assertion failed at Fragmenter.scala:181\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5057, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5059: Assertion failed in %NysyxSoCFull.asic.axi4frag\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5059, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ (((~ (IData)(vlSelf->__PVT__axi4frag__DOT__nodeOut_wvalid)) 
                                  | (~ ((IData)(vlSelf->__PVT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                         ? (IData)(vlSelf->__PVT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                         : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_wlast)))) 
                                 | (1U == (IData)(vlSelf->__PVT__axi4frag__DOT__w_todo)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5063: Assertion failed in %NysyxSoCFull.asic.axi4frag: Assertion failed at Fragmenter.scala:190\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5063, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5065: Assertion failed in %NysyxSoCFull.asic.axi4frag\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5065, "");
    }
    __Vdly__axi4frag__DOT__in_wdeq_q__DOT__full = vlSelf->__PVT__axi4frag__DOT__in_wdeq_q__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_15__DOT__full 
        = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_14__DOT__full 
        = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_13__DOT__full 
        = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_12__DOT__full 
        = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_11__DOT__full 
        = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_10__DOT__full 
        = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_9__DOT__full 
        = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_8__DOT__full 
        = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_7__DOT__full 
        = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_6__DOT__full 
        = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_5__DOT__full 
        = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_4__DOT__full 
        = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_3__DOT__full 
        = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_2__DOT__full 
        = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_1__DOT__full 
        = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap__DOT__full 
        = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__full;
    __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap = vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap;
    __Vdlyvset__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0 = 0U;
    __Vdlyvset__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v1 = 0U;
    __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap_1 = vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1;
    __Vdlyvset__axi4ram__DOT__mem_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__axi4ram__DOT__mem_ext__DOT__Memory__v1 = 0U;
    __Vdlyvset__axi4ram__DOT__mem_ext__DOT__Memory__v2 = 0U;
    __Vdlyvset__axi4ram__DOT__mem_ext__DOT__Memory__v3 = 0U;
    __Vdly__axi4frag__DOT__deq_q__DOT__full = vlSelf->__PVT__axi4frag__DOT__deq_q__DOT__full;
    __Vdlyvset__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__lgpio__DOT__mgpio__DOT__segs__v0 = 0U;
    __Vdly__axi4xbar__DOT__awIn_0__DOT__wrap = vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__wrap;
    __Vdlyvset__lvga__DOT__mvga__DOT__vga_mem__v0 = 0U;
    __Vdly__axi4xbar__DOT__awIn_0__DOT__wrap_1 = vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__wrap_1;
    __Vdly__axi4xbar__DOT__idle_2 = vlSelf->__PVT__axi4xbar__DOT__idle_2;
    __Vdly__axi4frag__DOT__deq_q_1__DOT__full = vlSelf->__PVT__axi4frag__DOT__deq_q_1__DOT__full;
    vlSelf->__Vdly__lspi__DOT__mspi__DOT__xip_state 
        = vlSelf->__PVT__lspi__DOT__mspi__DOT__xip_state;
    __Vdlyvset__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap 
        = vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap;
    __Vdlyvset__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0U;
    __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap 
        = vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap;
    __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap 
        = vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap;
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (~ (IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty))) 
                     & (0U != (0xffU & (IData)((vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                                >> 3U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:3307: Assertion failed in %NysyxSoCFull.asic.axi42apb: Assertion failed at AXI4ToAPB.scala:61\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 3307, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:3309: Assertion failed in %NysyxSoCFull.asic.axi42apb\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 3309, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (~ (IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty))) 
                     & (0U != (0xffU & (IData)((vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                                >> 3U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:3313: Assertion failed in %NysyxSoCFull.asic.axi42apb: Assertion failed at AXI4ToAPB.scala:62\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 3313, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:3315: Assertion failed in %NysyxSoCFull.asic.axi42apb\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 3315, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (~ (IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty))) 
                     & (2U < (7U & (IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:3319: Assertion failed in %NysyxSoCFull.asic.axi42apb: Assertion failed at AXI4ToAPB.scala:64\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 3319, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:3321: Assertion failed in %NysyxSoCFull.asic.axi42apb\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 3321, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (~ (IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty))) 
                     & (2U < (7U & (IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:3325: Assertion failed in %NysyxSoCFull.asic.axi42apb: Assertion failed at AXI4ToAPB.scala:65\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 3325, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:3327: Assertion failed in %NysyxSoCFull.asic.axi42apb\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 3327, "");
    }
    __Vdly__axi4xbar_1__DOT__idle_3 = vlSelf->__PVT__axi4xbar_1__DOT__idle_3;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_31__DOT__full 
        = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_30__DOT__full 
        = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_29__DOT__full 
        = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_28__DOT__full 
        = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_27__DOT__full 
        = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_26__DOT__full 
        = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_25__DOT__full 
        = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_24__DOT__full 
        = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_23__DOT__full 
        = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_22__DOT__full 
        = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_21__DOT__full 
        = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_20__DOT__full 
        = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_19__DOT__full 
        = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_18__DOT__full 
        = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_17__DOT__full 
        = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_16__DOT__full 
        = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full;
    __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap 
        = vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap;
    __Vdlyvset__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0U;
    __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1 
        = vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1;
    __Vdly__axi4frag__DOT__error_15 = vlSelf->__PVT__axi4frag__DOT__error_15;
    __Vdly__axi4frag__DOT__error_14 = vlSelf->__PVT__axi4frag__DOT__error_14;
    __Vdly__axi4frag__DOT__error_13 = vlSelf->__PVT__axi4frag__DOT__error_13;
    __Vdly__axi4frag__DOT__error_12 = vlSelf->__PVT__axi4frag__DOT__error_12;
    __Vdly__axi4frag__DOT__error_11 = vlSelf->__PVT__axi4frag__DOT__error_11;
    __Vdly__axi4frag__DOT__error_10 = vlSelf->__PVT__axi4frag__DOT__error_10;
    __Vdly__axi4frag__DOT__error_9 = vlSelf->__PVT__axi4frag__DOT__error_9;
    __Vdly__axi4frag__DOT__error_8 = vlSelf->__PVT__axi4frag__DOT__error_8;
    __Vdly__axi4frag__DOT__error_7 = vlSelf->__PVT__axi4frag__DOT__error_7;
    __Vdly__axi4frag__DOT__error_6 = vlSelf->__PVT__axi4frag__DOT__error_6;
    __Vdly__axi4frag__DOT__error_5 = vlSelf->__PVT__axi4frag__DOT__error_5;
    __Vdly__axi4frag__DOT__error_4 = vlSelf->__PVT__axi4frag__DOT__error_4;
    __Vdly__axi4frag__DOT__error_3 = vlSelf->__PVT__axi4frag__DOT__error_3;
    __Vdly__axi4frag__DOT__error_2 = vlSelf->__PVT__axi4frag__DOT__error_2;
    __Vdly__axi4frag__DOT__error_1 = vlSelf->__PVT__axi4frag__DOT__error_1;
    __Vdly__axi4frag__DOT__error_0 = vlSelf->__PVT__axi4frag__DOT__error_0;
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0U == ((8U & ((~ (((IData)(1U) 
                                           << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_rT_12)) 
                                          & (IData)(vlSelf->axi4xbar__DOT____VdfgTmp_h52ee47fe__0))) 
                                      << 3U)) | (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_0_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:592: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 592, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:594: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 594, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (IData)(vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_0_T_2)) 
                                 | (7U != (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_0_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:598: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 598, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:600: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 600, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0U == ((8U & ((~ (((IData)(1U) 
                                           << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_bT_5)) 
                                          & (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_15_T_4))) 
                                      << 3U)) | (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_0_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:604: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 604, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:606: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 606, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_0_T_2)) 
                                 | (7U != (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_0_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:610: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 610, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:612: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 612, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0U == ((8U & ((~ (0x7fffU & 
                                          ((((IData)(1U) 
                                             << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_rT_12)) 
                                            >> 1U) 
                                           & (IData)(vlSelf->axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))) 
                                      << 3U)) | (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_1_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:616: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 616, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:618: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 618, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (IData)(vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_1_T_2)) 
                                 | (7U != (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_1_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:622: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 622, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:624: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 624, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0U == ((8U & ((~ (0x7fffU & 
                                          ((((IData)(1U) 
                                             << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_bT_5)) 
                                            >> 1U) 
                                           & (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))) 
                                      << 3U)) | (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_1_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:628: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 628, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:630: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 630, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_1_T_2)) 
                                 | (7U != (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_1_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:634: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 634, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:636: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 636, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0U == ((8U & ((~ (0x3fffU & 
                                          ((((IData)(1U) 
                                             << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_rT_12)) 
                                            >> 2U) 
                                           & (IData)(vlSelf->axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))) 
                                      << 3U)) | (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_2_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:640: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 640, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:642: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 642, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (IData)(vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_2_T_2)) 
                                 | (7U != (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_2_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:646: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 646, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:648: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 648, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0U == ((8U & ((~ (0x3fffU & 
                                          ((((IData)(1U) 
                                             << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_bT_5)) 
                                            >> 2U) 
                                           & (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))) 
                                      << 3U)) | (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_2_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:652: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 652, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:654: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 654, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_2_T_2)) 
                                 | (7U != (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_2_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:658: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 658, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:660: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 660, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0U == ((8U & ((~ (0x1fffU & 
                                          ((((IData)(1U) 
                                             << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_rT_12)) 
                                            >> 3U) 
                                           & (IData)(vlSelf->axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))) 
                                      << 3U)) | (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_3_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:664: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 664, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:666: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 666, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (IData)(vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_3_T_2)) 
                                 | (7U != (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_3_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:670: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 670, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:672: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 672, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0U == ((8U & ((~ (0x1fffU & 
                                          ((((IData)(1U) 
                                             << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_bT_5)) 
                                            >> 3U) 
                                           & (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))) 
                                      << 3U)) | (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_3_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:676: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 676, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:678: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 678, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_3_T_2)) 
                                 | (7U != (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_3_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:682: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 682, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:684: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 684, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0U == ((8U & ((~ (0xfffU & 
                                          ((((IData)(1U) 
                                             << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_rT_12)) 
                                            >> 4U) 
                                           & (IData)(vlSelf->axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))) 
                                      << 3U)) | (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_4_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:688: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 688, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:690: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 690, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (IData)(vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_4_T_2)) 
                                 | (7U != (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_4_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:694: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 694, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:696: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 696, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0U == ((8U & ((~ (0xfffU & 
                                          ((((IData)(1U) 
                                             << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_bT_5)) 
                                            >> 4U) 
                                           & (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))) 
                                      << 3U)) | (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_4_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:700: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 700, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:702: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 702, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_4_T_2)) 
                                 | (7U != (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_4_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:706: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 706, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:708: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 708, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0U == ((8U & ((~ (0x7ffU & 
                                          ((((IData)(1U) 
                                             << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_rT_12)) 
                                            >> 5U) 
                                           & (IData)(vlSelf->axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))) 
                                      << 3U)) | (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_5_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:712: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 712, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:714: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 714, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (IData)(vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_5_T_2)) 
                                 | (7U != (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_5_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:718: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 718, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:720: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 720, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0U == ((8U & ((~ (0x7ffU & 
                                          ((((IData)(1U) 
                                             << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_bT_5)) 
                                            >> 5U) 
                                           & (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))) 
                                      << 3U)) | (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_5_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:724: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 724, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:726: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 726, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_5_T_2)) 
                                 | (7U != (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_5_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:730: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 730, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:732: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 732, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0U == ((8U & ((~ (0x3ffU & 
                                          ((((IData)(1U) 
                                             << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_rT_12)) 
                                            >> 6U) 
                                           & (IData)(vlSelf->axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))) 
                                      << 3U)) | (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_6_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:736: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 736, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:738: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 738, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (IData)(vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_6_T_2)) 
                                 | (7U != (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_6_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:742: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 742, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:744: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 744, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0U == ((8U & ((~ (0x3ffU & 
                                          ((((IData)(1U) 
                                             << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_bT_5)) 
                                            >> 6U) 
                                           & (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))) 
                                      << 3U)) | (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_6_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:748: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 748, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:750: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 750, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_6_T_2)) 
                                 | (7U != (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_6_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:754: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 754, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:756: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 756, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0U == ((8U & ((~ (0x1ffU & 
                                          ((((IData)(1U) 
                                             << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_rT_12)) 
                                            >> 7U) 
                                           & (IData)(vlSelf->axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))) 
                                      << 3U)) | (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_7_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:760: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 760, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:762: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 762, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (IData)(vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_7_T_2)) 
                                 | (7U != (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_7_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:766: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 766, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:768: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 768, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0U == ((8U & ((~ (0x1ffU & 
                                          ((((IData)(1U) 
                                             << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_bT_5)) 
                                            >> 7U) 
                                           & (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))) 
                                      << 3U)) | (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_7_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:772: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 772, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:774: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 774, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_7_T_2)) 
                                 | (7U != (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_7_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:778: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 778, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:780: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 780, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0U == ((8U & ((~ (0xffU & (
                                                   (((IData)(1U) 
                                                     << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_rT_12)) 
                                                    >> 8U) 
                                                   & (IData)(vlSelf->axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))) 
                                      << 3U)) | (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_8_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:784: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 784, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:786: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 786, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (IData)(vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_8_T_2)) 
                                 | (7U != (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_8_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:790: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 790, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:792: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 792, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0U == ((8U & ((~ (0xffU & (
                                                   (((IData)(1U) 
                                                     << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_bT_5)) 
                                                    >> 8U) 
                                                   & (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))) 
                                      << 3U)) | (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_8_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:796: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 796, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:798: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 798, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_8_T_2)) 
                                 | (7U != (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_8_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:802: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 802, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:804: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 804, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0U == ((8U & ((~ (0x7fU & (
                                                   (((IData)(1U) 
                                                     << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_rT_12)) 
                                                    >> 9U) 
                                                   & (IData)(vlSelf->axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))) 
                                      << 3U)) | (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_9_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:808: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 808, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:810: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 810, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (IData)(vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_9_T_2)) 
                                 | (7U != (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_9_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:814: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 814, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:816: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 816, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0U == ((8U & ((~ (0x7fU & (
                                                   (((IData)(1U) 
                                                     << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_bT_5)) 
                                                    >> 9U) 
                                                   & (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))) 
                                      << 3U)) | (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_9_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:820: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 820, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:822: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 822, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_9_T_2)) 
                                 | (7U != (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_9_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:826: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 826, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:828: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 828, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0U == ((8U & ((~ (0x3fU & (
                                                   (((IData)(1U) 
                                                     << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_rT_12)) 
                                                    >> 0xaU) 
                                                   & (IData)(vlSelf->axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))) 
                                      << 3U)) | (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_10_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:832: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 832, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:834: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 834, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (IData)(vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_10_T_2)) 
                                 | (7U != (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_10_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:838: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 838, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:840: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 840, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0U == ((8U & ((~ (0x3fU & (
                                                   (((IData)(1U) 
                                                     << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_bT_5)) 
                                                    >> 0xaU) 
                                                   & (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))) 
                                      << 3U)) | (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_10_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:844: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 844, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:846: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 846, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_10_T_2)) 
                                 | (7U != (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_10_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:850: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 850, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:852: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 852, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0U == ((8U & ((~ (0x1fU & (
                                                   (((IData)(1U) 
                                                     << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_rT_12)) 
                                                    >> 0xbU) 
                                                   & (IData)(vlSelf->axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))) 
                                      << 3U)) | (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_11_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:856: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 856, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:858: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 858, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (IData)(vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_11_T_2)) 
                                 | (7U != (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_11_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:862: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 862, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:864: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 864, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0U == ((8U & ((~ (0x1fU & (
                                                   (((IData)(1U) 
                                                     << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_bT_5)) 
                                                    >> 0xbU) 
                                                   & (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))) 
                                      << 3U)) | (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_11_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:868: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 868, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:870: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 870, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_11_T_2)) 
                                 | (7U != (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_11_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:874: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 874, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:876: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 876, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0U == ((8U & ((~ (0xfU & ((
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_rT_12)) 
                                                   >> 0xcU) 
                                                  & (IData)(vlSelf->axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))) 
                                      << 3U)) | (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_12_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:880: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 880, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:882: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 882, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (IData)(vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_12_T_2)) 
                                 | (7U != (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_12_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:886: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 886, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:888: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 888, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0U == ((8U & ((~ (0xfU & ((
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_bT_5)) 
                                                   >> 0xcU) 
                                                  & (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))) 
                                      << 3U)) | (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_12_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:892: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 892, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:894: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 894, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_12_T_2)) 
                                 | (7U != (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_12_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:898: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 898, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:900: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 900, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0U == ((8U & ((~ (7U & ((((IData)(1U) 
                                                  << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_rT_12)) 
                                                 >> 0xdU) 
                                                & (IData)(vlSelf->axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))) 
                                      << 3U)) | (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_13_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:904: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 904, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:906: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 906, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (IData)(vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_13_T_2)) 
                                 | (7U != (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_13_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:910: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 910, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:912: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 912, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0U == ((8U & ((~ (7U & ((((IData)(1U) 
                                                  << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_bT_5)) 
                                                 >> 0xdU) 
                                                & (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))) 
                                      << 3U)) | (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_13_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:916: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 916, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:918: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 918, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_13_T_2)) 
                                 | (7U != (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_13_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:922: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 922, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:924: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 924, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0U == ((8U & ((~ (3U & ((((IData)(1U) 
                                                  << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_rT_12)) 
                                                 >> 0xeU) 
                                                & (IData)(vlSelf->axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))) 
                                      << 3U)) | (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_14_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:928: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 928, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:930: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 930, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (IData)(vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_14_T_2)) 
                                 | (7U != (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_14_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:934: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 934, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:936: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 936, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0U == ((8U & ((~ (3U & ((((IData)(1U) 
                                                  << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_bT_5)) 
                                                 >> 0xeU) 
                                                & (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))) 
                                      << 3U)) | (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_14_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:940: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 940, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:942: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 942, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_14_T_2)) 
                                 | (7U != (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_14_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:946: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 946, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:948: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 948, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0U == ((8U & ((~ ((IData)(vlSelf->axi4xbar__DOT____VdfgTmp_h52ee47fe__0) 
                                          & (((IData)(1U) 
                                              << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_rT_12)) 
                                             >> 0xfU))) 
                                      << 3U)) | (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_15_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:952: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 952, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:954: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 954, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (IData)(vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_15_T_2)) 
                                 | (7U != (IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_15_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:958: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 958, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:960: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 960, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0U == ((8U & ((~ ((IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_15_T_4) 
                                          & (((IData)(1U) 
                                              << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_bT_5)) 
                                             >> 0xfU))) 
                                      << 3U)) | (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_15_count)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:964: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 964, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:966: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 966, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_15_T_2)) 
                                 | (7U != (IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_15_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:970: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 970, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:972: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 972, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (IData)(vlSelf->__PVT__axi4xbar__DOT__prefixOR_1)) 
                                 | (~ (IData)(vlSelf->__PVT__axi4xbar__DOT__winner_2_1)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:976: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:286\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 976, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:978: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 978, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ (((~ (IData)(vlSelf->__PVT__axi4xbar__DOT__anyValid)) 
                                  | (IData)(vlSelf->__PVT__axi4xbar__DOT__prefixOR_1)) 
                                 | (IData)(vlSelf->__PVT__axi4xbar__DOT__winner_2_1))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:982: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:288\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 982, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:984: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 984, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (IData)(vlSelf->__PVT__axi4xbar__DOT__winner_3_0)) 
                                 | (~ (IData)(vlSelf->__PVT__axi4xbar__DOT__winner_3_1)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:988: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:286\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 988, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:990: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 990, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ (((~ (IData)(vlSelf->__PVT__axi4xbar__DOT__anyValid_1)) 
                                  | (IData)(vlSelf->__PVT__axi4xbar__DOT__winner_3_0)) 
                                 | (IData)(vlSelf->__PVT__axi4xbar__DOT__winner_3_1))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:994: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:288\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 994, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:996: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 996, "");
    }
    __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1 
        = vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1;
    __Vdly__axi4xbar__DOT__idle_3 = vlSelf->__PVT__axi4xbar__DOT__idle_3;
    __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1 
        = vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1;
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                                     & (IData)(vlSelf->axi4xbar_1__DOT____VdfgTmp_h026b18ec__0))) 
                                 | (IData)(vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_0_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1764: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1764, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1766: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1766, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_arid)) 
                                     & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1))) 
                                 | (~ (IData)(vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_0_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1770: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1770, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1772: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1772, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                                     & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4))) 
                                 | (IData)(vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_0_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1776: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1776, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1778: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1778, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_awid)) 
                                     & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1))) 
                                 | (~ (IData)(vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_0_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1782: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1782, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1784: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1784, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (0x7fffU & ((((IData)(1U) 
                                                  << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->axi4xbar_1__DOT____VdfgTmp_h026b18ec__0)))) 
                                 | (IData)(vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_1_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1788: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1788, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1790: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1790, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (0x7fffU & ((((IData)(1U) 
                                                  << (IData)(vlSelf->__PVT___axi4frag_auto_out_arid)) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                 | (~ (IData)(vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_1_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1794: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1794, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1796: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1796, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (0x7fffU & ((((IData)(1U) 
                                                  << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4)))) 
                                 | (IData)(vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_1_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1800: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1800, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1802: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1802, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (0x7fffU & ((((IData)(1U) 
                                                  << (IData)(vlSelf->__PVT___axi4frag_auto_out_awid)) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                 | (~ (IData)(vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_1_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1806: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1806, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1808: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1808, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (0x3fffU & ((((IData)(1U) 
                                                  << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->axi4xbar_1__DOT____VdfgTmp_h026b18ec__0)))) 
                                 | (IData)(vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_2_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1812: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1812, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1814: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1814, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (0x3fffU & ((((IData)(1U) 
                                                  << (IData)(vlSelf->__PVT___axi4frag_auto_out_arid)) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                 | (~ (IData)(vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_2_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1818: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1818, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1820: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1820, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (0x3fffU & ((((IData)(1U) 
                                                  << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4)))) 
                                 | (IData)(vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_2_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1824: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1824, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1826: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1826, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (0x3fffU & ((((IData)(1U) 
                                                  << (IData)(vlSelf->__PVT___axi4frag_auto_out_awid)) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                 | (~ (IData)(vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_2_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1830: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1830, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1832: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1832, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (0x1fffU & ((((IData)(1U) 
                                                  << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                                                 >> 3U) 
                                                & (IData)(vlSelf->axi4xbar_1__DOT____VdfgTmp_h026b18ec__0)))) 
                                 | (IData)(vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_3_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1836: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1836, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1838: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1838, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (0x1fffU & ((((IData)(1U) 
                                                  << (IData)(vlSelf->__PVT___axi4frag_auto_out_arid)) 
                                                 >> 3U) 
                                                & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                 | (~ (IData)(vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_3_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1842: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1842, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1844: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1844, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (0x1fffU & ((((IData)(1U) 
                                                  << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                                                 >> 3U) 
                                                & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4)))) 
                                 | (IData)(vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_3_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1848: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1848, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1850: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1850, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (0x1fffU & ((((IData)(1U) 
                                                  << (IData)(vlSelf->__PVT___axi4frag_auto_out_awid)) 
                                                 >> 3U) 
                                                & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                 | (~ (IData)(vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_3_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1854: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1854, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1856: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1856, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (0xfffU & ((((IData)(1U) 
                                                 << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                                                >> 4U) 
                                               & (IData)(vlSelf->axi4xbar_1__DOT____VdfgTmp_h026b18ec__0)))) 
                                 | (IData)(vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_4_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1860: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1860, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1862: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1862, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (0xfffU & ((((IData)(1U) 
                                                 << (IData)(vlSelf->__PVT___axi4frag_auto_out_arid)) 
                                                >> 4U) 
                                               & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                 | (~ (IData)(vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_4_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1866: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1866, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1868: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1868, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (0xfffU & ((((IData)(1U) 
                                                 << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                                                >> 4U) 
                                               & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4)))) 
                                 | (IData)(vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_4_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1872: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1872, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1874: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1874, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (0xfffU & ((((IData)(1U) 
                                                 << (IData)(vlSelf->__PVT___axi4frag_auto_out_awid)) 
                                                >> 4U) 
                                               & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                 | (~ (IData)(vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_4_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1878: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1878, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1880: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1880, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (0x7ffU & ((((IData)(1U) 
                                                 << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                                                >> 5U) 
                                               & (IData)(vlSelf->axi4xbar_1__DOT____VdfgTmp_h026b18ec__0)))) 
                                 | (IData)(vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_5_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1884: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1884, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1886: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1886, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (0x7ffU & ((((IData)(1U) 
                                                 << (IData)(vlSelf->__PVT___axi4frag_auto_out_arid)) 
                                                >> 5U) 
                                               & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                 | (~ (IData)(vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_5_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1890: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1890, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1892: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1892, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (0x7ffU & ((((IData)(1U) 
                                                 << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                                                >> 5U) 
                                               & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4)))) 
                                 | (IData)(vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_5_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1896: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1896, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1898: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1898, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (0x7ffU & ((((IData)(1U) 
                                                 << (IData)(vlSelf->__PVT___axi4frag_auto_out_awid)) 
                                                >> 5U) 
                                               & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                 | (~ (IData)(vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_5_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1902: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1902, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1904: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1904, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (0x3ffU & ((((IData)(1U) 
                                                 << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                                                >> 6U) 
                                               & (IData)(vlSelf->axi4xbar_1__DOT____VdfgTmp_h026b18ec__0)))) 
                                 | (IData)(vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_6_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1908: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1908, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1910: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1910, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (0x3ffU & ((((IData)(1U) 
                                                 << (IData)(vlSelf->__PVT___axi4frag_auto_out_arid)) 
                                                >> 6U) 
                                               & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                 | (~ (IData)(vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_6_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1914: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1914, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1916: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1916, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (0x3ffU & ((((IData)(1U) 
                                                 << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                                                >> 6U) 
                                               & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4)))) 
                                 | (IData)(vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_6_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1920: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1920, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1922: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1922, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (0x3ffU & ((((IData)(1U) 
                                                 << (IData)(vlSelf->__PVT___axi4frag_auto_out_awid)) 
                                                >> 6U) 
                                               & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                 | (~ (IData)(vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_6_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1926: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1926, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1928: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1928, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (0x1ffU & ((((IData)(1U) 
                                                 << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                                                >> 7U) 
                                               & (IData)(vlSelf->axi4xbar_1__DOT____VdfgTmp_h026b18ec__0)))) 
                                 | (IData)(vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_7_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1932: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1932, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1934: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1934, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (0x1ffU & ((((IData)(1U) 
                                                 << (IData)(vlSelf->__PVT___axi4frag_auto_out_arid)) 
                                                >> 7U) 
                                               & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                 | (~ (IData)(vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_7_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1938: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1938, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1940: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1940, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (0x1ffU & ((((IData)(1U) 
                                                 << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                                                >> 7U) 
                                               & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4)))) 
                                 | (IData)(vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_7_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1944: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1944, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1946: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1946, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (0x1ffU & ((((IData)(1U) 
                                                 << (IData)(vlSelf->__PVT___axi4frag_auto_out_awid)) 
                                                >> 7U) 
                                               & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                 | (~ (IData)(vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_7_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1950: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1950, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1952: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1952, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (0xffU & ((((IData)(1U) 
                                                << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                                               >> 8U) 
                                              & (IData)(vlSelf->axi4xbar_1__DOT____VdfgTmp_h026b18ec__0)))) 
                                 | (IData)(vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_8_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1956: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1956, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1958: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1958, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (0xffU & ((((IData)(1U) 
                                                << (IData)(vlSelf->__PVT___axi4frag_auto_out_arid)) 
                                               >> 8U) 
                                              & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                 | (~ (IData)(vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_8_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1962: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1962, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1964: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1964, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (0xffU & ((((IData)(1U) 
                                                << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                                               >> 8U) 
                                              & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4)))) 
                                 | (IData)(vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_8_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1968: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1968, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1970: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1970, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (0xffU & ((((IData)(1U) 
                                                << (IData)(vlSelf->__PVT___axi4frag_auto_out_awid)) 
                                               >> 8U) 
                                              & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                 | (~ (IData)(vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_8_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1974: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1974, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1976: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1976, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (0x7fU & ((((IData)(1U) 
                                                << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                                               >> 9U) 
                                              & (IData)(vlSelf->axi4xbar_1__DOT____VdfgTmp_h026b18ec__0)))) 
                                 | (IData)(vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_9_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1980: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1980, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1982: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1982, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (0x7fU & ((((IData)(1U) 
                                                << (IData)(vlSelf->__PVT___axi4frag_auto_out_arid)) 
                                               >> 9U) 
                                              & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                 | (~ (IData)(vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_9_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1986: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1986, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1988: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1988, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (0x7fU & ((((IData)(1U) 
                                                << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                                               >> 9U) 
                                              & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4)))) 
                                 | (IData)(vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_9_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1992: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1992, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1994: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1994, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (0x7fU & ((((IData)(1U) 
                                                << (IData)(vlSelf->__PVT___axi4frag_auto_out_awid)) 
                                               >> 9U) 
                                              & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                 | (~ (IData)(vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_9_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:1998: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1998, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2000: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2000, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (0x3fU & ((((IData)(1U) 
                                                << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                                               >> 0xaU) 
                                              & (IData)(vlSelf->axi4xbar_1__DOT____VdfgTmp_h026b18ec__0)))) 
                                 | (IData)(vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_10_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2004: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2004, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2006: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2006, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (0x3fU & ((((IData)(1U) 
                                                << (IData)(vlSelf->__PVT___axi4frag_auto_out_arid)) 
                                               >> 0xaU) 
                                              & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                 | (~ (IData)(vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_10_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2010: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2010, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2012: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2012, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (0x3fU & ((((IData)(1U) 
                                                << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                                               >> 0xaU) 
                                              & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4)))) 
                                 | (IData)(vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_10_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2016: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2016, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2018: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2018, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (0x3fU & ((((IData)(1U) 
                                                << (IData)(vlSelf->__PVT___axi4frag_auto_out_awid)) 
                                               >> 0xaU) 
                                              & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                 | (~ (IData)(vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_10_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2022: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2022, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2024: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2024, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (0x1fU & ((((IData)(1U) 
                                                << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                                               >> 0xbU) 
                                              & (IData)(vlSelf->axi4xbar_1__DOT____VdfgTmp_h026b18ec__0)))) 
                                 | (IData)(vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_11_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2028: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2028, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2030: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2030, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (0x1fU & ((((IData)(1U) 
                                                << (IData)(vlSelf->__PVT___axi4frag_auto_out_arid)) 
                                               >> 0xbU) 
                                              & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                 | (~ (IData)(vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_11_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2034: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2034, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2036: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2036, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (0x1fU & ((((IData)(1U) 
                                                << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                                               >> 0xbU) 
                                              & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4)))) 
                                 | (IData)(vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_11_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2040: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2040, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2042: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2042, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (0x1fU & ((((IData)(1U) 
                                                << (IData)(vlSelf->__PVT___axi4frag_auto_out_awid)) 
                                               >> 0xbU) 
                                              & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                 | (~ (IData)(vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_11_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2046: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2046, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2048: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2048, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (0xfU & ((((IData)(1U) 
                                               << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                                              >> 0xcU) 
                                             & (IData)(vlSelf->axi4xbar_1__DOT____VdfgTmp_h026b18ec__0)))) 
                                 | (IData)(vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_12_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2052: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2052, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2054: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2054, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (0xfU & ((((IData)(1U) 
                                               << (IData)(vlSelf->__PVT___axi4frag_auto_out_arid)) 
                                              >> 0xcU) 
                                             & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                 | (~ (IData)(vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_12_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2058: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2058, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2060: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2060, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (0xfU & ((((IData)(1U) 
                                               << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                                              >> 0xcU) 
                                             & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4)))) 
                                 | (IData)(vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_12_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2064: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2064, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2066: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2066, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (0xfU & ((((IData)(1U) 
                                               << (IData)(vlSelf->__PVT___axi4frag_auto_out_awid)) 
                                              >> 0xcU) 
                                             & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                 | (~ (IData)(vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_12_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2070: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2070, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2072: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2072, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (7U & ((((IData)(1U) 
                                             << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 0xdU) 
                                           & (IData)(vlSelf->axi4xbar_1__DOT____VdfgTmp_h026b18ec__0)))) 
                                 | (IData)(vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_13_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2076: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2076, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2078: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2078, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (7U & ((((IData)(1U) 
                                             << (IData)(vlSelf->__PVT___axi4frag_auto_out_arid)) 
                                            >> 0xdU) 
                                           & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                 | (~ (IData)(vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_13_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2082: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2082, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2084: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2084, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (7U & ((((IData)(1U) 
                                             << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 0xdU) 
                                           & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4)))) 
                                 | (IData)(vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_13_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2088: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2088, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2090: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2090, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (7U & ((((IData)(1U) 
                                             << (IData)(vlSelf->__PVT___axi4frag_auto_out_awid)) 
                                            >> 0xdU) 
                                           & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                 | (~ (IData)(vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_13_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2094: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2094, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2096: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2096, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (3U & ((((IData)(1U) 
                                             << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 0xeU) 
                                           & (IData)(vlSelf->axi4xbar_1__DOT____VdfgTmp_h026b18ec__0)))) 
                                 | (IData)(vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_14_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2100: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2100, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2102: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2102, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (3U & ((((IData)(1U) 
                                             << (IData)(vlSelf->__PVT___axi4frag_auto_out_arid)) 
                                            >> 0xeU) 
                                           & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                 | (~ (IData)(vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_14_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2106: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2106, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2108: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2108, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (3U & ((((IData)(1U) 
                                             << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 0xeU) 
                                           & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4)))) 
                                 | (IData)(vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_14_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2112: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2112, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2114: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2114, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (3U & ((((IData)(1U) 
                                             << (IData)(vlSelf->__PVT___axi4frag_auto_out_awid)) 
                                            >> 0xeU) 
                                           & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                 | (~ (IData)(vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_14_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2118: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2118, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2120: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2120, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ ((IData)(vlSelf->axi4xbar_1__DOT____VdfgTmp_h026b18ec__0) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xfU))) 
                                 | (IData)(vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_15_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2124: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2124, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2126: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2126, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ ((IData)(vlSelf->__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->__PVT___axi4frag_auto_out_arid)) 
                                        >> 0xfU))) 
                                 | (~ (IData)(vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_15_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2130: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2130, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2132: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2132, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ ((IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                                        >> 0xfU))) 
                                 | (IData)(vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_15_count))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2136: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2136, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2138: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2138, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ ((IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->__PVT___axi4frag_auto_out_awid)) 
                                        >> 0xfU))) 
                                 | (~ (IData)(vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_15_count)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2142: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2142, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2144: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2144, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ (((~ (IData)(vlSelf->__PVT__axi4xbar_1__DOT__prefixOR_1)) 
                                  | (~ (IData)(vlSelf->__PVT__axi4xbar_1__DOT__winner_3_1))) 
                                 & ((~ ((IData)(vlSelf->__PVT__axi4xbar_1__DOT__prefixOR_1) 
                                        | (IData)(vlSelf->__PVT__axi4xbar_1__DOT__winner_3_1))) 
                                    | (~ (IData)(vlSelf->__PVT__axi4xbar_1__DOT__winner_3_2))))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2150: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:286\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2150, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2152: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2152, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((((~ (IData)(vlSelf->__PVT__axi4xbar_1__DOT__anyValid)) 
                                   | (IData)(vlSelf->__PVT__axi4xbar_1__DOT__prefixOR_1)) 
                                  | (IData)(vlSelf->__PVT__axi4xbar_1__DOT__winner_3_1)) 
                                 | (IData)(vlSelf->__PVT__axi4xbar_1__DOT__winner_3_2))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2156: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:288\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2156, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2158: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2158, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (IData)(vlSelf->__PVT__axi4xbar_1__DOT__winner_4_0)) 
                                 | (~ (IData)(vlSelf->__PVT__axi4xbar_1__DOT__winner_4_2)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2162: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:286\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2162, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2164: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2164, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ (((~ (IData)(vlSelf->__PVT__axi4xbar_1__DOT__anyValid_1)) 
                                  | (IData)(vlSelf->__PVT__axi4xbar_1__DOT__winner_4_0)) 
                                 | (IData)(vlSelf->__PVT__axi4xbar_1__DOT__winner_4_2))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2168: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:288\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2168, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:2170: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2170, "");
    }
    __Vdlyvset__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1 
        = vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1;
    __Vdly__axi42apb__DOT__state = vlSelf->__PVT__axi42apb__DOT__state;
    __Vdlyvset__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap 
        = vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap;
    __Vdly__axi4ram__DOT__w_full = vlSelf->__PVT__axi4ram__DOT__w_full;
    __Vdly__axi4xbar_1__DOT__idle_4 = vlSelf->__PVT__axi4xbar_1__DOT__idle_4;
    __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1 
        = vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1;
    __PVT__axi4yank__DOT__unnamedblk1__DOT___GEN_4 
        = (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full) 
            << 0xfU) | (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full) 
                         << 0xeU) | (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full) 
                                      << 0xdU) | (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__full))))))))))))))));
    __PVT__axi4yank__DOT__unnamedblk1__DOT___GEN_5 
        = (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full) 
            << 0xfU) | (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full) 
                         << 0xeU) | (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full) 
                                      << 0xdU) | (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full))))))))))))))));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (IData)(vlSelf->__PVT__axi4xbar_1__DOT__in_0_rvalid)) 
                                 | ((IData)(__PVT__axi4yank__DOT__unnamedblk1__DOT___GEN_4) 
                                    >> (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_20)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4377: Assertion failed in %NysyxSoCFull.asic.axi4yank.unnamedblk1: Assertion failed at UserYanker.scala:69\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4377, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4379: Assertion failed in %NysyxSoCFull.asic.axi4yank.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4379, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (IData)(vlSelf->__PVT__axi4xbar_1__DOT__in_0_bvalid)) 
                                 | ((IData)(__PVT__axi4yank__DOT__unnamedblk1__DOT___GEN_5) 
                                    >> (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_bT_9)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4383: Assertion failed in %NysyxSoCFull.asic.axi4yank.unnamedblk1: Assertion failed at UserYanker.scala:98\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4383, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4385: Assertion failed in %NysyxSoCFull.asic.axi4yank.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4385, "");
    }
    __Vdly__lkeyboard__DOT__mps2__DOT__ps2_clk_sync 
        = ((6U & ((IData)(vlSelf->__PVT__lkeyboard__DOT__mps2__DOT__ps2_clk_sync) 
                  << 1U)) | (IData)(vlSymsp->TOP.externalPins_ps2_clk));
    if (vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__do_enq) {
        __Vdlyvval__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits;
        __Vdlyvset__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap;
    }
    vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_15_count 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 (((IData)(vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_15_count) 
                   + ((IData)(vlSelf->__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_arid)) 
                         >> 0xfU))) - ((IData)(vlSelf->axi4xbar_1__DOT____VdfgTmp_h026b18ec__0) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xfU)))));
    vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_14_count 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 (((IData)(vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_14_count) 
                   + (3U & ((((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_arid)) 
                             >> 0xeU) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                  - (3U & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                            >> 0xeU) & (IData)(vlSelf->axi4xbar_1__DOT____VdfgTmp_h026b18ec__0))))));
    vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_5_count 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 (((IData)(vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_5_count) 
                   + (0x7ffU & ((((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_arid)) 
                                 >> 5U) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                  - (0x7ffU & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                                >> 5U) & (IData)(vlSelf->axi4xbar_1__DOT____VdfgTmp_h026b18ec__0))))));
    vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_3_count 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 (((IData)(vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_3_count) 
                   + (0x1fffU & ((((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_arid)) 
                                  >> 3U) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                  - (0x1fffU & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 >> 3U) & (IData)(vlSelf->axi4xbar_1__DOT____VdfgTmp_h026b18ec__0))))));
    vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_2_count 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 (((IData)(vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_2_count) 
                   + (0x3fffU & ((((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_arid)) 
                                  >> 2U) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                  - (0x3fffU & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 >> 2U) & (IData)(vlSelf->axi4xbar_1__DOT____VdfgTmp_h026b18ec__0))))));
    vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_1_count 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 (((IData)(vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_1_count) 
                   + (0x7fffU & ((((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_arid)) 
                                  >> 1U) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                  - (0x7fffU & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 >> 1U) & (IData)(vlSelf->axi4xbar_1__DOT____VdfgTmp_h026b18ec__0))))));
    vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_0_count 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 (((IData)(vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_0_count) 
                   + (((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_arid)) 
                      & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1))) 
                  - (((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                     & (IData)(vlSelf->axi4xbar_1__DOT____VdfgTmp_h026b18ec__0)))));
    vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_4_count 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 (((IData)(vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_4_count) 
                   + (0xfffU & ((((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_arid)) 
                                 >> 4U) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                  - (0xfffU & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                                >> 4U) & (IData)(vlSelf->axi4xbar_1__DOT____VdfgTmp_h026b18ec__0))))));
    vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_6_count 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 (((IData)(vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_6_count) 
                   + (0x3ffU & ((((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_arid)) 
                                 >> 6U) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                  - (0x3ffU & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                                >> 6U) & (IData)(vlSelf->axi4xbar_1__DOT____VdfgTmp_h026b18ec__0))))));
    vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_7_count 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 (((IData)(vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_7_count) 
                   + (0x1ffU & ((((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_arid)) 
                                 >> 7U) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                  - (0x1ffU & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                                >> 7U) & (IData)(vlSelf->axi4xbar_1__DOT____VdfgTmp_h026b18ec__0))))));
    vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_8_count 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 (((IData)(vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_8_count) 
                   + (0xffU & ((((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_arid)) 
                                >> 8U) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                  - (0xffU & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                               >> 8U) & (IData)(vlSelf->axi4xbar_1__DOT____VdfgTmp_h026b18ec__0))))));
    vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_9_count 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 (((IData)(vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_9_count) 
                   + (0x7fU & ((((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_arid)) 
                                >> 9U) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                  - (0x7fU & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                               >> 9U) & (IData)(vlSelf->axi4xbar_1__DOT____VdfgTmp_h026b18ec__0))))));
    vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_10_count 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 (((IData)(vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_10_count) 
                   + (0x3fU & ((((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_arid)) 
                                >> 0xaU) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                  - (0x3fU & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                               >> 0xaU) & (IData)(vlSelf->axi4xbar_1__DOT____VdfgTmp_h026b18ec__0))))));
    vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_11_count 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 (((IData)(vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_11_count) 
                   + (0x1fU & ((((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_arid)) 
                                >> 0xbU) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                  - (0x1fU & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                               >> 0xbU) & (IData)(vlSelf->axi4xbar_1__DOT____VdfgTmp_h026b18ec__0))))));
    vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_12_count 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 (((IData)(vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_12_count) 
                   + (0xfU & ((((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_arid)) 
                               >> 0xcU) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                  - (0xfU & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                              >> 0xcU) & (IData)(vlSelf->axi4xbar_1__DOT____VdfgTmp_h026b18ec__0))))));
    vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_13_count 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 (((IData)(vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_13_count) 
                   + (7U & ((((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_arid)) 
                             >> 0xdU) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                  - (7U & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                            >> 0xdU) & (IData)(vlSelf->axi4xbar_1__DOT____VdfgTmp_h026b18ec__0))))));
    vlSelf->__PVT__axi4xbar_1__DOT__latched = ((~ (IData)(vlSymsp->TOP.reset)) 
                                               & ((~ 
                                                   ((IData)(vlSelf->__PVT__axi4xbar_1__DOT__in_0_awready) 
                                                    & (IData)(vlSelf->__PVT__axi4xbar_1__DOT__in_0_awvalid))) 
                                                  & (((~ (IData)(vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__full)) 
                                                      & (IData)(vlSelf->__PVT__axi4xbar_1__DOT__awIn_0_io_enq_valid)) 
                                                     | (IData)(vlSelf->__PVT__axi4xbar_1__DOT__latched))));
    if ((1U == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state))) {
        if (((0x14U <= (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)) 
             & ((IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                <= (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__FINAL_COUNT)))) {
            if (vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck) {
                __Vdlyvval__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0 
                    = ((0xf0U & (vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                 [vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__byte_index] 
                                 << 4U)) | (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT___dio_wire));
                __Vdlyvset__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0 = 1U;
                __Vdlyvdim0__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0 
                    = vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__byte_index;
            }
        }
    } else if ((2U == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state))) {
        if (((0xeU <= (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)) 
             & ((IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                <= (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__FINAL_COUNT)))) {
            if (vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck) {
                __Vdlyvval__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v1 
                    = ((0xf0U & (vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                 [vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__byte_index] 
                                 << 4U)) | (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT___dio_wire));
                __Vdlyvset__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v1 = 1U;
                __Vdlyvdim0__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v1 
                    = vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__byte_index;
            }
        }
    }
    if (((IData)(vlSelf->axi4ram__DOT____Vcellinp__mem_ext__W0_en) 
         & (IData)(vlSelf->__PVT___axi4frag_auto_out_wstrb))) {
        __Vdlyvval__axi4ram__DOT__mem_ext__DOT__Memory__v0 
            = (0xffU & vlSelf->__PVT___axi4frag_auto_out_wdata);
        __Vdlyvset__axi4ram__DOT__mem_ext__DOT__Memory__v0 = 1U;
        __Vdlyvlsb__axi4ram__DOT__mem_ext__DOT__Memory__v0 = 0U;
        __Vdlyvdim0__axi4ram__DOT__mem_ext__DOT__Memory__v0 
            = (0x7ffU & (vlSelf->__PVT___axi4frag_auto_out_awaddr 
                         >> 2U));
    }
    if (((IData)(vlSelf->axi4ram__DOT____Vcellinp__mem_ext__W0_en) 
         & ((IData)(vlSelf->__PVT___axi4frag_auto_out_wstrb) 
            >> 1U))) {
        __Vdlyvval__axi4ram__DOT__mem_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->__PVT___axi4frag_auto_out_wdata 
                        >> 8U));
        __Vdlyvset__axi4ram__DOT__mem_ext__DOT__Memory__v1 = 1U;
        __Vdlyvlsb__axi4ram__DOT__mem_ext__DOT__Memory__v1 = 8U;
        __Vdlyvdim0__axi4ram__DOT__mem_ext__DOT__Memory__v1 
            = (0x7ffU & (vlSelf->__PVT___axi4frag_auto_out_awaddr 
                         >> 2U));
    }
    if (((IData)(vlSelf->axi4ram__DOT____Vcellinp__mem_ext__W0_en) 
         & ((IData)(vlSelf->__PVT___axi4frag_auto_out_wstrb) 
            >> 2U))) {
        __Vdlyvval__axi4ram__DOT__mem_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->__PVT___axi4frag_auto_out_wdata 
                        >> 0x10U));
        __Vdlyvset__axi4ram__DOT__mem_ext__DOT__Memory__v2 = 1U;
        __Vdlyvlsb__axi4ram__DOT__mem_ext__DOT__Memory__v2 = 0x10U;
        __Vdlyvdim0__axi4ram__DOT__mem_ext__DOT__Memory__v2 
            = (0x7ffU & (vlSelf->__PVT___axi4frag_auto_out_awaddr 
                         >> 2U));
    }
    if (((IData)(vlSelf->axi4ram__DOT____Vcellinp__mem_ext__W0_en) 
         & ((IData)(vlSelf->__PVT___axi4frag_auto_out_wstrb) 
            >> 3U))) {
        __Vdlyvval__axi4ram__DOT__mem_ext__DOT__Memory__v3 
            = (vlSelf->__PVT___axi4frag_auto_out_wdata 
               >> 0x18U);
        __Vdlyvset__axi4ram__DOT__mem_ext__DOT__Memory__v3 = 1U;
        __Vdlyvlsb__axi4ram__DOT__mem_ext__DOT__Memory__v3 = 0x18U;
        __Vdlyvdim0__axi4ram__DOT__mem_ext__DOT__Memory__v3 
            = (0x7ffU & (vlSelf->__PVT___axi4frag_auto_out_awaddr 
                         >> 2U));
    }
    if (vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__do_enq) {
        __Vdlyvval__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits;
        __Vdlyvset__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__wrap;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (vlSelf->__PVT__lgpio__DOT__mgpio__DOT__is_write) {
            if ((0x10002000U != (0x1fffffffU & vlSelf->__PVT___axi42apb_auto_out_paddr))) {
                if ((0x10002008U == (0x1fffffffU & vlSelf->__PVT___axi42apb_auto_out_paddr))) {
                    __Vdlyvval__lgpio__DOT__mgpio__DOT__segs__v0 
                        = (0x10U | (0xfU & vlSelf->__PVT___axi42apb_auto_out_pwdata));
                    __Vdlyvset__lgpio__DOT__mgpio__DOT__segs__v0 = 1U;
                    __Vdlyvval__lgpio__DOT__mgpio__DOT__segs__v1 
                        = (0x40U | (0xfU & (vlSelf->__PVT___axi42apb_auto_out_pwdata 
                                            >> 4U)));
                    __Vdlyvval__lgpio__DOT__mgpio__DOT__segs__v2 
                        = (0x20U | (0xfU & (vlSelf->__PVT___axi42apb_auto_out_pwdata 
                                            >> 8U)));
                    __Vdlyvval__lgpio__DOT__mgpio__DOT__segs__v3 
                        = (0xfU & (vlSelf->__PVT___axi42apb_auto_out_pwdata 
                                   >> 0xcU));
                    __Vdlyvval__lgpio__DOT__mgpio__DOT__segs__v4 
                        = (0x90U | (0xfU & (vlSelf->__PVT___axi42apb_auto_out_pwdata 
                                            >> 0x10U)));
                    __Vdlyvval__lgpio__DOT__mgpio__DOT__segs__v5 
                        = (0x90U | (0xfU & (vlSelf->__PVT___axi42apb_auto_out_pwdata 
                                            >> 0x14U)));
                    __Vdlyvval__lgpio__DOT__mgpio__DOT__segs__v6 
                        = (0x40U | (0xfU & (vlSelf->__PVT___axi42apb_auto_out_pwdata 
                                            >> 0x18U)));
                    __Vdlyvval__lgpio__DOT__mgpio__DOT__segs__v7 
                        = (0x20U | (vlSelf->__PVT___axi42apb_auto_out_pwdata 
                                    >> 0x1cU));
                }
            }
        }
    }
    vlSelf->__PVT__axi4frag__DOT__wbeats_latched = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ ((IData)(vlSelf->__PVT___axi4yank_auto_in_awready) 
                                                & (IData)(vlSelf->__PVT__axi4frag__DOT__nodeOut_awvalid))) 
                                            & (((IData)(vlSelf->__PVT__axi4frag__DOT__wbeats_valid) 
                                                & (0U 
                                                   == (IData)(vlSelf->__PVT__axi4frag__DOT__w_counter))) 
                                               | (IData)(vlSelf->__PVT__axi4frag__DOT__wbeats_latched))));
    if (((~ (IData)(vlSymsp->TOP.reset)) & ((IData)(vlSelf->__PVT___apbxbar_auto_anon_out_5_psel) 
                                            & ((~ (IData)(vlSelf->__PVT___apbxbar_auto_anon_out_5_penable)) 
                                               & (IData)(vlSelf->__PVT__axi42apb__DOT__is_write))))) {
        vlSelf->lvga__DOT__mvga__DOT____Vlvbound_h22ea3b43__0 
            = (0xffffffU & vlSelf->__PVT___axi42apb_auto_out_pwdata);
        if ((0x4afffU >= (0x7ffffU & (vlSelf->__PVT___axi42apb_auto_out_paddr 
                                      >> 2U)))) {
            __Vdlyvval__lvga__DOT__mvga__DOT__vga_mem__v0 
                = vlSelf->lvga__DOT__mvga__DOT____Vlvbound_h22ea3b43__0;
            __Vdlyvset__lvga__DOT__mvga__DOT__vga_mem__v0 = 1U;
            __Vdlyvdim0__lvga__DOT__mvga__DOT__vga_mem__v0 
                = (0x7ffffU & (vlSelf->__PVT___axi42apb_auto_out_paddr 
                               >> 2U));
        }
    }
    vlSelf->__PVT__axi4xbar__DOT__latched = ((~ (IData)(vlSymsp->TOP.reset)) 
                                             & ((~ 
                                                 ((IData)(vlSelf->__PVT__axi4xbar__DOT__in_0_awready) 
                                                  & (IData)(vlSelf->__PVT__axi4xbar__DOT__in_0_awvalid))) 
                                                & (((~ (IData)(vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__full)) 
                                                    & (IData)(vlSelf->__PVT__axi4xbar__DOT__awIn_0_io_enq_valid)) 
                                                   | (IData)(vlSelf->__PVT__axi4xbar__DOT__latched))));
    if (vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq) {
        __Vdlyvval__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = (((QData)((IData)(vlSelf->__PVT___axi4frag_auto_out_wdata)) 
                << 4U) | (QData)((IData)(vlSelf->__PVT___axi4frag_auto_out_wstrb)));
        __Vdlyvset__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap;
    }
    vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_15_count 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 (((IData)(vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_15_count) 
                   + ((IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_awid)) 
                         >> 0xfU))) - ((IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xfU)))));
    vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_14_count 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 (((IData)(vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_14_count) 
                   + (3U & ((((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_awid)) 
                             >> 0xeU) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                  - (3U & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                            >> 0xeU) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4))))));
    vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_5_count 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 (((IData)(vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_5_count) 
                   + (0x7ffU & ((((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_awid)) 
                                 >> 5U) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                  - (0x7ffU & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                                >> 5U) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4))))));
    vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_4_count 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 (((IData)(vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_4_count) 
                   + (0xfffU & ((((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_awid)) 
                                 >> 4U) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                  - (0xfffU & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                                >> 4U) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4))))));
    vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_3_count 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 (((IData)(vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_3_count) 
                   + (0x1fffU & ((((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_awid)) 
                                  >> 3U) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                  - (0x1fffU & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                                 >> 3U) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4))))));
    vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_2_count 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 (((IData)(vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_2_count) 
                   + (0x3fffU & ((((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_awid)) 
                                  >> 2U) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                  - (0x3fffU & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                                 >> 2U) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4))))));
    vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_1_count 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 (((IData)(vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_1_count) 
                   + (0x7fffU & ((((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_awid)) 
                                  >> 1U) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                  - (0x7fffU & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                                 >> 1U) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4))))));
    vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_0_count 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 (((IData)(vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_0_count) 
                   + (((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_awid)) 
                      & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1))) 
                  - (((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                     & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4)))));
    vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_6_count 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 (((IData)(vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_6_count) 
                   + (0x3ffU & ((((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_awid)) 
                                 >> 6U) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                  - (0x3ffU & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                                >> 6U) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4))))));
    vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_7_count 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 (((IData)(vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_7_count) 
                   + (0x1ffU & ((((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_awid)) 
                                 >> 7U) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                  - (0x1ffU & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                                >> 7U) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4))))));
    vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_8_count 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 (((IData)(vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_8_count) 
                   + (0xffU & ((((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_awid)) 
                                >> 8U) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                  - (0xffU & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                               >> 8U) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4))))));
    vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_9_count 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 (((IData)(vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_9_count) 
                   + (0x7fU & ((((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_awid)) 
                                >> 9U) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                  - (0x7fU & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                               >> 9U) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4))))));
    vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_10_count 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 (((IData)(vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_10_count) 
                   + (0x3fU & ((((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_awid)) 
                                >> 0xaU) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                  - (0x3fU & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                               >> 0xaU) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4))))));
    vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_11_count 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 (((IData)(vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_11_count) 
                   + (0x1fU & ((((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_awid)) 
                                >> 0xbU) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                  - (0x1fU & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                               >> 0xbU) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4))))));
    vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_12_count 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 (((IData)(vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_12_count) 
                   + (0xfU & ((((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_awid)) 
                               >> 0xcU) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                  - (0xfU & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                              >> 0xcU) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4))))));
    vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_13_count 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 (((IData)(vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_13_count) 
                   + (7U & ((((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_awid)) 
                             >> 0xdU) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                  - (7U & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                            >> 0xdU) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4))))));
    if (vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq) {
        __Vdlyvval__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = (((QData)((IData)(vlSelf->__PVT___axi4frag_auto_out_awid)) 
                << 0x2bU) | (((QData)((IData)(vlSelf->__PVT___axi4frag_auto_out_awaddr)) 
                              << 0xbU) | (QData)((IData)(vlSelf->__PVT__axi4frag__DOT___deq_q_1_io_deq_bits_size))));
        __Vdlyvset__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap;
    }
    if (vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq) {
        __Vdlyvval__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 
            = (((QData)((IData)(vlSelf->__PVT___axi4frag_auto_out_arid)) 
                << 0x2bU) | (((QData)((IData)(vlSelf->__PVT___axi4frag_auto_out_araddr)) 
                              << 0xbU) | (QData)((IData)(vlSelf->__PVT__axi4frag__DOT___deq_q_io_deq_bits_size))));
        __Vdlyvset__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap;
    }
    if (vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) {
        __Vdlyvval__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 
            = (0xffU & ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                        >> 3U));
        __Vdlyvset__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 1U;
        __Vdlyvdim0__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 
            = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
    }
    vlSelf->__PVT__axi4ram__DOT__r_full = ((~ (IData)(vlSymsp->TOP.reset)) 
                                           & ((IData)(vlSelf->__PVT__axi4ram__DOT__ren) 
                                              | ((~ 
                                                  ((IData)(vlSelf->__PVT___axi4xbar_1_auto_anon_out_2_rready) 
                                                   & (IData)(vlSelf->__PVT__axi4ram__DOT__r_full))) 
                                                 & (IData)(vlSelf->__PVT__axi4ram__DOT__r_full))));
    if (vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__tf_push) {
        __Vdlyvval__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 
            = vlSelf->luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i;
        __Vdlyvset__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 1U;
        __Vdlyvdim0__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 
            = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top;
    }
    vlSelf->__PVT__lmrom__DOT__state = (1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                                              & ((IData)(vlSelf->__PVT__lmrom__DOT__state)
                                                  ? 
                                                 (~ 
                                                  (((IData)(vlSelf->__PVT___axi4frag_auto_out_rready) 
                                                    & ((IData)(vlSelf->__PVT__axi4xbar_1__DOT__idle_3)
                                                        ? 
                                                       ((IData)(vlSelf->__PVT__axi4xbar_1__DOT__readys_readys) 
                                                        >> 1U)
                                                        : (IData)(vlSelf->__PVT__axi4xbar_1__DOT__state_3_1))) 
                                                   & (IData)(vlSelf->__PVT__lmrom__DOT__state)))
                                                  : (IData)(vlSelf->__PVT__lmrom__DOT___nodeIn_rid_T))));
    if (vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq) {
        __Vdlyvval__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = (((QData)((IData)(vlSelf->__PVT__axi42apb__DOT__rid_reg)) 
                << 0x23U) | (((QData)((IData)(((1U 
                                                == (IData)(vlSelf->__PVT__axi42apb__DOT__state))
                                                ? vlSelf->__PVT___apbdelay_delayer_in_prdata
                                                : vlSelf->__PVT__axi42apb__DOT__nodeIn_rdata_r))) 
                              << 3U) | (QData)((IData)(
                                                       (1U 
                                                        | ((IData)(vlSelf->__PVT__axi42apb__DOT__resp_hold) 
                                                           << 1U))))));
        __Vdlyvset__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap;
    }
    if (vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq) {
        __Vdlyvval__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = (((IData)(vlSelf->__PVT__axi42apb__DOT__bid_reg) 
                << 2U) | (IData)(vlSelf->__PVT__axi42apb__DOT__resp_hold));
        __Vdlyvset__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap;
    }
    __Vdly__axi4ram__DOT__w_full = ((~ (IData)(vlSymsp->TOP.reset)) 
                                    & ((IData)(vlSelf->__PVT__axi4ram__DOT___GEN) 
                                       | ((~ ((IData)(vlSelf->__PVT___axi4xbar_1_auto_anon_out_2_bready) 
                                              & (IData)(vlSelf->__PVT__axi4ram__DOT__w_full))) 
                                          & (IData)(vlSelf->__PVT__axi4ram__DOT__w_full))));
    vlSelf->__PVT__luart__DOT__muart__DOT__reg_dat8_w_reg 
        = vlSelf->__PVT__luart__DOT__muart__DOT__reg_dat8_w;
    vlSelf->__PVT__axi4ram__DOT__mem_ext__DOT___R0_en_d0 
        = vlSelf->__PVT__axi4ram__DOT__ren;
    if (vlSelf->__PVT__lmrom__DOT___nodeIn_rid_T) {
        vlSelf->__PVT__lmrom__DOT__nodeIn_rdata_r = vlSelf->__PVT__lmrom__DOT___mrom_rdata;
        vlSelf->__PVT__lmrom__DOT__nodeIn_rid_r = vlSelf->__PVT___axi4frag_auto_out_arid;
    }
    if (vlSelf->__PVT__axi4ram__DOT__ren) {
        vlSelf->__PVT__axi4ram__DOT__r_sel1 = (0x7800U 
                                               == (0x7fffU 
                                                   & (vlSelf->__PVT___axi4frag_auto_out_araddr 
                                                      >> 0xdU)));
        vlSelf->__PVT__axi4ram__DOT__r_id = vlSelf->__PVT___axi4frag_auto_out_arid;
    }
    vlSelf->__PVT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0 
        = (0x7ffU & (vlSelf->__PVT___axi4frag_auto_out_araddr 
                     >> 2U));
    if (vlSelf->__PVT__axi4ram__DOT__rdata_REG) {
        vlSelf->__PVT__axi4ram__DOT__rdata_r0 = (0xffU 
                                                 & vlSelf->__PVT__axi4ram__DOT___mem_ext_R0_data);
        vlSelf->__PVT__axi4ram__DOT__rdata_r1 = (0xffU 
                                                 & (vlSelf->__PVT__axi4ram__DOT___mem_ext_R0_data 
                                                    >> 8U));
        vlSelf->__PVT__axi4ram__DOT__rdata_r2 = (0xffU 
                                                 & (vlSelf->__PVT__axi4ram__DOT___mem_ext_R0_data 
                                                    >> 0x10U));
        vlSelf->__PVT__axi4ram__DOT__rdata_r3 = (vlSelf->__PVT__axi4ram__DOT___mem_ext_R0_data 
                                                 >> 0x18U);
    }
    if (vlSelf->__PVT__axi4ram__DOT___GEN) {
        vlSelf->__PVT__axi4ram__DOT__w_sel1 = (0x7800U 
                                               == (0x7fffU 
                                                   & (vlSelf->__PVT___axi4frag_auto_out_awaddr 
                                                      >> 0xdU)));
        vlSelf->__PVT__axi4ram__DOT__w_id = vlSelf->__PVT___axi4frag_auto_out_awid;
    }
    vlSelf->__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_0 
        = vlSelf->__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_1;
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)) 
            & (IData)(vlSelf->__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_arid)) 
              >> 0xfU));
    if (vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__axi4frag__DOT__len)))));
    }
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq 
        = (3U & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)) 
                 & ((IData)(vlSelf->__PVT__axi4yank__DOT___GEN_2) 
                    & (((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_arid)) 
                       >> 0xeU))));
    if (vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__axi4frag__DOT__len)))));
    }
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq 
        = (7U & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)) 
                 & ((IData)(vlSelf->__PVT__axi4yank__DOT___GEN_2) 
                    & (((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_arid)) 
                       >> 0xdU))));
    if (vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__axi4frag__DOT__len)))));
    }
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq 
        = (0xfU & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)) 
                   & ((IData)(vlSelf->__PVT__axi4yank__DOT___GEN_2) 
                      & (((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_arid)) 
                         >> 0xcU))));
    if (vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__axi4frag__DOT__len)))));
    }
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq 
        = (0x1fU & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)) 
                    & ((IData)(vlSelf->__PVT__axi4yank__DOT___GEN_2) 
                       & (((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_arid)) 
                          >> 0xbU))));
    if (vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__axi4frag__DOT__len)))));
    }
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq 
        = (0x3fU & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)) 
                    & ((IData)(vlSelf->__PVT__axi4yank__DOT___GEN_2) 
                       & (((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_arid)) 
                          >> 0xaU))));
    if (vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__axi4frag__DOT__len)))));
    }
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq 
        = (0x7fU & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)) 
                    & ((IData)(vlSelf->__PVT__axi4yank__DOT___GEN_2) 
                       & (((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_arid)) 
                          >> 9U))));
    if (vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__axi4frag__DOT__len)))));
    }
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq 
        = (0xffU & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)) 
                    & ((IData)(vlSelf->__PVT__axi4yank__DOT___GEN_2) 
                       & (((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_arid)) 
                          >> 8U))));
    if (vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__axi4frag__DOT__len)))));
    }
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq 
        = (0x1ffU & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)) 
                     & ((IData)(vlSelf->__PVT__axi4yank__DOT___GEN_2) 
                        & (((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_arid)) 
                           >> 7U))));
    if (vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__axi4frag__DOT__len)))));
    }
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq 
        = (0x3ffU & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)) 
                     & ((IData)(vlSelf->__PVT__axi4yank__DOT___GEN_2) 
                        & (((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_arid)) 
                           >> 6U))));
    if (vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__axi4frag__DOT__len)))));
    }
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq 
        = (0x7ffU & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)) 
                     & ((IData)(vlSelf->__PVT__axi4yank__DOT___GEN_2) 
                        & (((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_arid)) 
                           >> 5U))));
    if (vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__axi4frag__DOT__len)))));
    }
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq 
        = (0xfffU & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)) 
                     & ((IData)(vlSelf->__PVT__axi4yank__DOT___GEN_2) 
                        & (((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_arid)) 
                           >> 4U))));
    if (vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__axi4frag__DOT__len)))));
    }
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq 
        = (0x1fffU & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)) 
                      & ((IData)(vlSelf->__PVT__axi4yank__DOT___GEN_2) 
                         & (((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_arid)) 
                            >> 3U))));
    if (vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__axi4frag__DOT__len)))));
    }
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq 
        = (0x3fffU & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)) 
                      & ((IData)(vlSelf->__PVT__axi4yank__DOT___GEN_2) 
                         & (((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_arid)) 
                            >> 2U))));
    if (vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__axi4frag__DOT__len)))));
    }
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq 
        = (0x7fffU & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)) 
                      & ((IData)(vlSelf->__PVT__axi4yank__DOT___GEN_2) 
                         & (((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_arid)) 
                            >> 1U))));
    if (vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__axi4frag__DOT__len)))));
    }
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__full)) 
           & ((IData)(vlSelf->__PVT__axi4yank__DOT___GEN_2) 
              & ((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_arid))));
    if (vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__axi4frag__DOT__len)))));
    }
    __PVT__axi4frag__DOT__unnamedblk1__DOT___GEN_0 
        = ((IData)(vlSelf->__PVT___axi4yank_auto_in_arready) 
           & (IData)(vlSelf->__PVT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    if (__PVT__axi4frag__DOT__unnamedblk1__DOT___GEN_0) {
        vlSelf->__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___inc_addr_T_1 
            = (vlSelf->__PVT__axi4frag__DOT__addr + 
               (0xffffU & ((IData)(1U) << (IData)(vlSelf->__PVT__axi4frag__DOT___deq_q_io_deq_bits_size))));
        vlSelf->__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___wrapMask_T_1 
            = (0x7fffffU & ((0xffU | ((IData)(vlSelf->__PVT__axi4frag__DOT___deq_q_io_deq_bits_len) 
                                      << 8U)) << (IData)(vlSelf->__PVT__axi4frag__DOT___deq_q_io_deq_bits_size)));
        vlSelf->__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___mux_addr_T_1 
            = (~ vlSelf->__PVT__axi4frag__DOT___deq_q_io_deq_bits_addr);
        vlSelf->__PVT__axi4frag__DOT__r_len = (0xffU 
                                               & ((IData)(vlSelf->__PVT__axi4frag__DOT__len) 
                                                  - (IData)(1U)));
        vlSelf->__PVT__axi4frag__DOT__r_addr = ((0U 
                                                 == (IData)(vlSelf->__PVT__axi4frag__DOT___deq_q_io_deq_bits_burst))
                                                 ? vlSelf->__PVT__axi4frag__DOT___deq_q_io_deq_bits_addr
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->__PVT__axi4frag__DOT___deq_q_io_deq_bits_burst))
                                                  ? 
                                                 ((0x7fffU 
                                                   & (vlSelf->__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___inc_addr_T_1 
                                                      & (vlSelf->__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___wrapMask_T_1 
                                                         >> 8U))) 
                                                  | (~ 
                                                     ((0xffff8000U 
                                                       & vlSelf->__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___mux_addr_T_1) 
                                                      | (0x7fffU 
                                                         & (vlSelf->__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___mux_addr_T_1 
                                                            | (vlSelf->__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___wrapMask_T_1 
                                                               >> 8U))))))
                                                  : vlSelf->__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___inc_addr_T_1));
    }
    if (vlSelf->__PVT__axi4frag__DOT__deq_q__DOT__do_enq) {
        vlSelf->__PVT__axi4frag__DOT__deq_q__DOT__ram 
            = (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_arid)) 
                << 0x2dU) | (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_araddr)) 
                              << 0xdU) | (QData)((IData)(
                                                         (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_arlen) 
                                                           << 5U) 
                                                          | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_arsize) 
                                                              << 2U) 
                                                             | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_arburst)))))));
    }
    if (vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_15_T_2) {
        vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_15_last 
            = vlSelf->__PVT__axi4xbar__DOT__requestARIO_0_1;
    }
    if (vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_14_T_2) {
        vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_14_last 
            = vlSelf->__PVT__axi4xbar__DOT__requestARIO_0_1;
    }
    if (vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_13_T_2) {
        vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_13_last 
            = vlSelf->__PVT__axi4xbar__DOT__requestARIO_0_1;
    }
    if (vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_11_T_2) {
        vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_11_last 
            = vlSelf->__PVT__axi4xbar__DOT__requestARIO_0_1;
    }
    if (vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_10_T_2) {
        vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_10_last 
            = vlSelf->__PVT__axi4xbar__DOT__requestARIO_0_1;
    }
    if (vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_8_T_2) {
        vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_8_last 
            = vlSelf->__PVT__axi4xbar__DOT__requestARIO_0_1;
    }
    if (vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_7_T_2) {
        vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_7_last 
            = vlSelf->__PVT__axi4xbar__DOT__requestARIO_0_1;
    }
    if (vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_0_T_2) {
        vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_0_last 
            = vlSelf->__PVT__axi4xbar__DOT__requestARIO_0_1;
    }
    if (vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_9_T_2) {
        vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_9_last 
            = vlSelf->__PVT__axi4xbar__DOT__requestARIO_0_1;
    }
    if (vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_6_T_2) {
        vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_6_last 
            = vlSelf->__PVT__axi4xbar__DOT__requestARIO_0_1;
    }
    if (vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_3_T_2) {
        vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_3_last 
            = vlSelf->__PVT__axi4xbar__DOT__requestARIO_0_1;
    }
    if (vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_2_T_2) {
        vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_2_last 
            = vlSelf->__PVT__axi4xbar__DOT__requestARIO_0_1;
    }
    if (vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_12_T_2) {
        vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_12_last 
            = vlSelf->__PVT__axi4xbar__DOT__requestARIO_0_1;
    }
    if (vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_1_T_2) {
        vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_1_last 
            = vlSelf->__PVT__axi4xbar__DOT__requestARIO_0_1;
    }
    if (vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_4_T_2) {
        vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_4_last 
            = vlSelf->__PVT__axi4xbar__DOT__requestARIO_0_1;
    }
    if (vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_5_T_2) {
        vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_5_last 
            = vlSelf->__PVT__axi4xbar__DOT__requestARIO_0_1;
    }
    if (vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_14_T_2) {
        vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_14_last 
            = vlSelf->__PVT__axi4xbar__DOT__requestAWIO_0_1;
    }
    if (vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_12_T_2) {
        vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_12_last 
            = vlSelf->__PVT__axi4xbar__DOT__requestAWIO_0_1;
    }
    if (vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_11_T_2) {
        vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_11_last 
            = vlSelf->__PVT__axi4xbar__DOT__requestAWIO_0_1;
    }
    if (vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_9_T_2) {
        vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_9_last 
            = vlSelf->__PVT__axi4xbar__DOT__requestAWIO_0_1;
    }
    if (vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_8_T_2) {
        vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_8_last 
            = vlSelf->__PVT__axi4xbar__DOT__requestAWIO_0_1;
    }
    if (vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_6_T_2) {
        vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_6_last 
            = vlSelf->__PVT__axi4xbar__DOT__requestAWIO_0_1;
    }
    if (vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_5_T_2) {
        vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_5_last 
            = vlSelf->__PVT__axi4xbar__DOT__requestAWIO_0_1;
    }
    if (vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_7_T_2) {
        vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_7_last 
            = vlSelf->__PVT__axi4xbar__DOT__requestAWIO_0_1;
    }
    if (vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_4_T_2) {
        vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_4_last 
            = vlSelf->__PVT__axi4xbar__DOT__requestAWIO_0_1;
    }
    if (vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_0_T_2) {
        vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_0_last 
            = vlSelf->__PVT__axi4xbar__DOT__requestAWIO_0_1;
    }
    if (vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_15_T_2) {
        vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_15_last 
            = vlSelf->__PVT__axi4xbar__DOT__requestAWIO_0_1;
    }
    if (vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_1_T_2) {
        vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_1_last 
            = vlSelf->__PVT__axi4xbar__DOT__requestAWIO_0_1;
    }
    if (vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_10_T_2) {
        vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_10_last 
            = vlSelf->__PVT__axi4xbar__DOT__requestAWIO_0_1;
    }
    if (vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_13_T_2) {
        vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_13_last 
            = vlSelf->__PVT__axi4xbar__DOT__requestAWIO_0_1;
    }
    if (vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_2_T_2) {
        vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_2_last 
            = vlSelf->__PVT__axi4xbar__DOT__requestAWIO_0_1;
    }
    if (vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_3_T_2) {
        vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_3_last 
            = vlSelf->__PVT__axi4xbar__DOT__requestAWIO_0_1;
    }
    __PVT__axi4frag__DOT__unnamedblk1__DOT___GEN_1 
        = ((IData)(vlSelf->__PVT__axi4frag__DOT__in_awready) 
           & (IData)(vlSelf->__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    if (__PVT__axi4frag__DOT__unnamedblk1__DOT___GEN_1) {
        vlSelf->__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___inc_addr_T_3 
            = (vlSelf->__PVT__axi4frag__DOT__addr_1 
               + (0xffffU & ((IData)(1U) << (IData)(vlSelf->__PVT__axi4frag__DOT___deq_q_1_io_deq_bits_size))));
        vlSelf->__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___wrapMask_T_3 
            = (0x7fffffU & ((0xffU | ((IData)(vlSelf->__PVT__axi4frag__DOT___deq_q_1_io_deq_bits_len) 
                                      << 8U)) << (IData)(vlSelf->__PVT__axi4frag__DOT___deq_q_1_io_deq_bits_size)));
        vlSelf->__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___mux_addr_T_6 
            = (~ vlSelf->__PVT__axi4frag__DOT___deq_q_1_io_deq_bits_addr);
        vlSelf->__PVT__axi4frag__DOT__r_len_1 = (0xffU 
                                                 & ((IData)(vlSelf->__PVT__axi4frag__DOT__len_1) 
                                                    - (IData)(1U)));
        vlSelf->__PVT__axi4frag__DOT__r_addr_1 = ((0U 
                                                   == (IData)(vlSelf->__PVT__axi4frag__DOT___deq_q_1_io_deq_bits_burst))
                                                   ? vlSelf->__PVT__axi4frag__DOT___deq_q_1_io_deq_bits_addr
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->__PVT__axi4frag__DOT___deq_q_1_io_deq_bits_burst))
                                                    ? 
                                                   ((0x7fffU 
                                                     & (vlSelf->__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___inc_addr_T_3 
                                                        & (vlSelf->__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___wrapMask_T_3 
                                                           >> 8U))) 
                                                    | (~ 
                                                       ((0xffff8000U 
                                                         & vlSelf->__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___mux_addr_T_6) 
                                                        | (0x7fffU 
                                                           & (vlSelf->__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___mux_addr_T_6 
                                                              | (vlSelf->__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___wrapMask_T_3 
                                                                 >> 8U))))))
                                                    : vlSelf->__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___inc_addr_T_3));
    }
    if (vlSelf->__PVT__axi4frag__DOT__deq_q_1__DOT__do_enq) {
        vlSelf->__PVT__axi4frag__DOT__deq_q_1__DOT__ram 
            = (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awid)) 
                << 0x2dU) | (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awaddr)) 
                              << 0xdU) | (QData)((IData)(
                                                         (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awlen) 
                                                           << 5U) 
                                                          | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awsize) 
                                                              << 2U) 
                                                             | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awburst)))))));
    }
    if (vlSelf->__PVT__axi42apb__DOT__accept_read) {
        vlSelf->__PVT__axi42apb__DOT__araddr_reg_r 
            = (IData)((vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                       >> 0xbU));
        vlSelf->__PVT__axi42apb__DOT__rid_reg = (0xfU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                                            >> 0x2bU)));
    }
    if ((0U == (IData)(vlSelf->__PVT__axi42apb__DOT__state))) {
        vlSelf->__PVT__axi42apb__DOT__is_write_r = vlSelf->__PVT__axi42apb__DOT__accept_write;
    }
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)) 
            & (IData)(vlSelf->__PVT__axi4yank__DOT___GEN_8)) 
           & (((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_awid)) 
              >> 0xfU));
    if (vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__axi4frag__DOT__len_1)))));
    }
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq 
        = (3U & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)) 
                 & ((IData)(vlSelf->__PVT__axi4yank__DOT___GEN_8) 
                    & (((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_awid)) 
                       >> 0xeU))));
    if (vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__axi4frag__DOT__len_1)))));
    }
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq 
        = (7U & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)) 
                 & ((IData)(vlSelf->__PVT__axi4yank__DOT___GEN_8) 
                    & (((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_awid)) 
                       >> 0xdU))));
    if (vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__axi4frag__DOT__len_1)))));
    }
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq 
        = (0xfU & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)) 
                   & ((IData)(vlSelf->__PVT__axi4yank__DOT___GEN_8) 
                      & (((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_awid)) 
                         >> 0xcU))));
    if (vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__axi4frag__DOT__len_1)))));
    }
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq 
        = (0x1fU & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)) 
                    & ((IData)(vlSelf->__PVT__axi4yank__DOT___GEN_8) 
                       & (((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_awid)) 
                          >> 0xbU))));
    if (vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__axi4frag__DOT__len_1)))));
    }
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq 
        = (0x3fU & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)) 
                    & ((IData)(vlSelf->__PVT__axi4yank__DOT___GEN_8) 
                       & (((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_awid)) 
                          >> 0xaU))));
    if (vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__axi4frag__DOT__len_1)))));
    }
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq 
        = (0x7fU & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)) 
                    & ((IData)(vlSelf->__PVT__axi4yank__DOT___GEN_8) 
                       & (((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_awid)) 
                          >> 9U))));
    if (vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__axi4frag__DOT__len_1)))));
    }
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq 
        = (0xffU & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)) 
                    & ((IData)(vlSelf->__PVT__axi4yank__DOT___GEN_8) 
                       & (((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_awid)) 
                          >> 8U))));
    if (vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__axi4frag__DOT__len_1)))));
    }
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq 
        = (0x1ffU & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)) 
                     & ((IData)(vlSelf->__PVT__axi4yank__DOT___GEN_8) 
                        & (((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_awid)) 
                           >> 7U))));
    if (vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__axi4frag__DOT__len_1)))));
    }
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq 
        = (0x3ffU & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)) 
                     & ((IData)(vlSelf->__PVT__axi4yank__DOT___GEN_8) 
                        & (((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_awid)) 
                           >> 6U))));
    if (vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__axi4frag__DOT__len_1)))));
    }
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq 
        = (0x7ffU & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)) 
                     & ((IData)(vlSelf->__PVT__axi4yank__DOT___GEN_8) 
                        & (((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_awid)) 
                           >> 5U))));
    if (vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__axi4frag__DOT__len_1)))));
    }
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq 
        = (0xfffU & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)) 
                     & ((IData)(vlSelf->__PVT__axi4yank__DOT___GEN_8) 
                        & (((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_awid)) 
                           >> 4U))));
    if (vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__axi4frag__DOT__len_1)))));
    }
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq 
        = (0x1fffU & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)) 
                      & ((IData)(vlSelf->__PVT__axi4yank__DOT___GEN_8) 
                         & (((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_awid)) 
                            >> 3U))));
    if (vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__axi4frag__DOT__len_1)))));
    }
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq 
        = (0x3fffU & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)) 
                      & ((IData)(vlSelf->__PVT__axi4yank__DOT___GEN_8) 
                         & (((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_awid)) 
                            >> 2U))));
    if (vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__axi4frag__DOT__len_1)))));
    }
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq 
        = (0x7fffU & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)) 
                      & ((IData)(vlSelf->__PVT__axi4yank__DOT___GEN_8) 
                         & (((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_awid)) 
                            >> 1U))));
    if (vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__axi4frag__DOT__len_1)))));
    }
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)) 
           & ((IData)(vlSelf->__PVT__axi4yank__DOT___GEN_8) 
              & ((IData)(1U) << (IData)(vlSelf->__PVT___axi4frag_auto_out_awid))));
    if (vlSymsp->TOP.reset) {
        __Vdly__lvga__DOT__mvga__DOT__x_cnt = 1U;
        __Vdly__lvga__DOT__mvga__DOT__y_cnt = 1U;
        __Vdly__lkeyboard__DOT__mps2__DOT__count = 0U;
        __Vdly__lkeyboard__DOT__mps2__DOT__w_ptr = 0U;
        __Vdly__lkeyboard__DOT__mps2__DOT__r_ptr = 0U;
        __Vdly__lkeyboard__DOT__mps2__DOT__overflow = 0U;
        __Vdly__lkeyboard__DOT__mps2__DOT__ready = 0U;
        __Vdly__axi4frag__DOT__in_wdeq_q__DOT__full = 0U;
        __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap = 0U;
        __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap_1 = 0U;
        __Vdly__axi4frag__DOT__deq_q__DOT__full = 0U;
        vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_13_count = 0U;
        vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_12_count = 0U;
        vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_11_count = 0U;
        vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_10_count = 0U;
        vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_9_count = 0U;
        vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_8_count = 0U;
        vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_7_count = 0U;
        vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_6_count = 0U;
        vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_4_count = 0U;
        vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_1_count = 0U;
        vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_2_count = 0U;
        vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_3_count = 0U;
        vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_0_count = 0U;
        vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_5_count = 0U;
        vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_14_count = 0U;
        vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_15_count = 0U;
        vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_13_count = 0U;
        vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_12_count = 0U;
        vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_11_count = 0U;
        vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_10_count = 0U;
        vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_9_count = 0U;
        vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_8_count = 0U;
        vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_7_count = 0U;
        vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_6_count = 0U;
        vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_0_count = 0U;
        vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_1_count = 0U;
        vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_3_count = 0U;
        vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_4_count = 0U;
        vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_5_count = 0U;
        vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_2_count = 0U;
        vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_14_count = 0U;
        vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_15_count = 0U;
        __Vdly__axi4xbar__DOT__awIn_0__DOT__wrap = 0U;
        __Vdly__axi4xbar__DOT__awIn_0__DOT__wrap_1 = 0U;
        __Vdly__axi4frag__DOT__deq_q_1__DOT__full = 0U;
        __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap = 0U;
        __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap = 0U;
        __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap = 0U;
        __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap = 0U;
        __Vdly__axi4frag__DOT__error_0 = 0U;
        __Vdly__axi4frag__DOT__error_1 = 0U;
        __Vdly__axi4frag__DOT__error_2 = 0U;
        __Vdly__axi4frag__DOT__error_3 = 0U;
        __Vdly__axi4frag__DOT__error_4 = 0U;
        __Vdly__axi4frag__DOT__error_5 = 0U;
        __Vdly__axi4frag__DOT__error_6 = 0U;
        __Vdly__axi4frag__DOT__error_7 = 0U;
        __Vdly__axi4frag__DOT__error_8 = 0U;
        __Vdly__axi4frag__DOT__error_9 = 0U;
        __Vdly__axi4frag__DOT__error_10 = 0U;
        __Vdly__axi4frag__DOT__error_11 = 0U;
        __Vdly__axi4frag__DOT__error_12 = 0U;
        __Vdly__axi4frag__DOT__error_13 = 0U;
        __Vdly__axi4frag__DOT__error_14 = 0U;
        __Vdly__axi4frag__DOT__error_15 = 0U;
        __Vdly__axi42apb__DOT__state = 0U;
        __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap = 0U;
        vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_15__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_14__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_13__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_12__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_11__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_10__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_9__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_8__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_7__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_6__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_5__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_4__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_3__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_2__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_1__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap__DOT__full = 0U;
        vlSelf->__PVT__axi4frag__DOT__busy = 0U;
        vlSelf->__PVT__lgpio__DOT__mgpio__DOT__led = 0U;
        vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__maybe_full = 0U;
        vlSelf->__PVT__axi4frag__DOT__busy_1 = 0U;
        __Vdly__axi4xbar__DOT__idle_2 = 1U;
        vlSelf->__PVT__axi4xbar__DOT__readys_mask = 3U;
        vlSelf->__PVT__axi4xbar__DOT__state_2_0 = 0U;
        vlSelf->__PVT__axi4xbar__DOT__state_2_1 = 0U;
        __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1 = 0U;
        vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_31__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_30__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_29__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_28__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_27__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_26__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_25__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_24__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_23__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_22__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_21__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_20__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_19__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_18__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_17__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_16__DOT__full = 0U;
        __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1 = 0U;
        vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full = 0U;
        __Vdly__axi4xbar__DOT__idle_3 = 1U;
        vlSelf->__PVT__axi4xbar__DOT__readys_mask_1 = 3U;
        vlSelf->__PVT__axi4xbar__DOT__state_3_0 = 0U;
        vlSelf->__PVT__axi4xbar__DOT__state_3_1 = 0U;
        __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1 = 0U;
        vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full = 0U;
        __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1 = 0U;
        vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full = 0U;
        __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1 = 0U;
        vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full = 0U;
        vlSelf->__PVT__axi4frag__DOT__w_counter = 0U;
        __Vdly__axi4xbar_1__DOT__idle_3 = 1U;
        vlSelf->__PVT__axi4xbar_1__DOT__readys_mask = 7U;
        vlSelf->__PVT__axi4xbar_1__DOT__state_3_0 = 0U;
        vlSelf->__PVT__axi4xbar_1__DOT__state_3_1 = 0U;
        vlSelf->__PVT__axi4xbar_1__DOT__state_3_2 = 0U;
        __Vdly__axi4xbar_1__DOT__idle_4 = 1U;
        vlSelf->__PVT__axi4xbar_1__DOT__readys_mask_1 = 7U;
        vlSelf->__PVT__axi4xbar_1__DOT__state_4_0 = 0U;
        vlSelf->__PVT__axi4xbar_1__DOT__state_4_2 = 0U;
    } else {
        __Vdly__lvga__DOT__mvga__DOT__x_cnt = ((0x320U 
                                                == (IData)(vlSelf->__PVT__lvga__DOT__mvga__DOT__x_cnt))
                                                ? 1U
                                                : (0x3ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__lvga__DOT__mvga__DOT__x_cnt))));
        if (((0x20dU == (IData)(vlSelf->__PVT__lvga__DOT__mvga__DOT__y_cnt)) 
             & (0x320U == (IData)(vlSelf->__PVT__lvga__DOT__mvga__DOT__x_cnt)))) {
            __Vdly__lvga__DOT__mvga__DOT__y_cnt = 1U;
        } else if ((0x320U == (IData)(vlSelf->__PVT__lvga__DOT__mvga__DOT__x_cnt))) {
            __Vdly__lvga__DOT__mvga__DOT__y_cnt = (0x3ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__lvga__DOT__mvga__DOT__y_cnt)));
        }
        if (vlSelf->__PVT__lkeyboard__DOT__mps2__DOT__ready) {
            if (vlSelf->__PVT___lkeyboard_auto_in_pready) {
                if (((IData)(vlSelf->__PVT__lkeyboard__DOT__mps2__DOT__w_ptr) 
                     == (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__lkeyboard__DOT__mps2__DOT__r_ptr))))) {
                    __Vdly__lkeyboard__DOT__mps2__DOT__ready = 0U;
                }
                __Vdly__lkeyboard__DOT__mps2__DOT__r_ptr 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__lkeyboard__DOT__mps2__DOT__r_ptr)));
            }
        }
        if ((IData)((4U == (6U & (IData)(vlSelf->__PVT__lkeyboard__DOT__mps2__DOT__ps2_clk_sync))))) {
            if ((0xaU == (IData)(vlSelf->__PVT__lkeyboard__DOT__mps2__DOT__count))) {
                if ((((~ (IData)(vlSelf->__PVT__lkeyboard__DOT__mps2__DOT__buffer)) 
                      & (IData)(vlSymsp->TOP.externalPins_ps2_data)) 
                     & VL_REDXOR_32((0x1ffU & ((IData)(vlSelf->__PVT__lkeyboard__DOT__mps2__DOT__buffer) 
                                               >> 1U))))) {
                    __Vdlyvval__lkeyboard__DOT__mps2__DOT__fifo__v0 
                        = (0xffU & ((IData)(vlSelf->__PVT__lkeyboard__DOT__mps2__DOT__buffer) 
                                    >> 1U));
                    __Vdlyvset__lkeyboard__DOT__mps2__DOT__fifo__v0 = 1U;
                    __Vdlyvdim0__lkeyboard__DOT__mps2__DOT__fifo__v0 
                        = vlSelf->__PVT__lkeyboard__DOT__mps2__DOT__w_ptr;
                    __Vdly__lkeyboard__DOT__mps2__DOT__ready = 1U;
                    __Vdly__lkeyboard__DOT__mps2__DOT__w_ptr 
                        = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__lkeyboard__DOT__mps2__DOT__w_ptr)));
                    __Vdly__lkeyboard__DOT__mps2__DOT__overflow 
                        = ((IData)(vlSelf->__PVT__lkeyboard__DOT__mps2__DOT__overflow) 
                           | ((7U & ((IData)(1U) + (IData)(vlSelf->__PVT__lkeyboard__DOT__mps2__DOT__w_ptr))) 
                              == (IData)(vlSelf->__PVT__lkeyboard__DOT__mps2__DOT__r_ptr)));
                }
                __Vdly__lkeyboard__DOT__mps2__DOT__count = 0U;
            } else {
                vlSelf->lkeyboard__DOT__mps2__DOT____Vlvbound_h1a91ade8__0 
                    = vlSymsp->TOP.externalPins_ps2_data;
                if ((9U >= (IData)(vlSelf->__PVT__lkeyboard__DOT__mps2__DOT__count))) {
                    vlSelf->__PVT__lkeyboard__DOT__mps2__DOT__buffer 
                        = (((~ ((IData)(1U) << (IData)(vlSelf->__PVT__lkeyboard__DOT__mps2__DOT__count))) 
                            & (IData)(vlSelf->__PVT__lkeyboard__DOT__mps2__DOT__buffer)) 
                           | (0x3ffU & ((IData)(vlSelf->lkeyboard__DOT__mps2__DOT____Vlvbound_h1a91ade8__0) 
                                        << (IData)(vlSelf->__PVT__lkeyboard__DOT__mps2__DOT__count))));
                }
                __Vdly__lkeyboard__DOT__mps2__DOT__count 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__lkeyboard__DOT__mps2__DOT__count)));
            }
        }
        if (((IData)(vlSelf->__PVT__axi4frag__DOT__in_wdeq_q__DOT__do_enq) 
             != (((IData)(vlSelf->__PVT__axi4frag__DOT__in_wdeq_q__DOT__full) 
                  & (IData)(vlSelf->axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready)) 
                 & (IData)(vlSelf->__PVT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0)))) {
            __Vdly__axi4frag__DOT__in_wdeq_q__DOT__full 
                = vlSelf->__PVT__axi4frag__DOT__in_wdeq_q__DOT__do_enq;
        }
        if (vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__do_enq) {
            __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap 
                = (1U & ((IData)(vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap) 
                         - (IData)(1U)));
        }
        if (vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__do_deq) {
            __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap_1 
                = (1U & ((IData)(vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelf->__PVT__axi4frag__DOT__deq_q__DOT__do_enq) 
             != (((IData)(vlSelf->__PVT__axi4frag__DOT__deq_q__DOT__full) 
                  & (IData)(vlSelf->axi4frag__DOT____Vcellinp__deq_q__io_deq_ready)) 
                 & (IData)(vlSelf->__PVT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0)))) {
            __Vdly__axi4frag__DOT__deq_q__DOT__full 
                = vlSelf->__PVT__axi4frag__DOT__deq_q__DOT__do_enq;
        }
        vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_13_count 
            = (7U & (((IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_13_count) 
                      + (IData)(vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_13_T_2)) 
                     - (7U & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_rT_12)) 
                               >> 0xdU) & (IData)(vlSelf->axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))));
        vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_12_count 
            = (7U & (((IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_12_count) 
                      + (IData)(vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_12_T_2)) 
                     - (0xfU & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_rT_12)) 
                                 >> 0xcU) & (IData)(vlSelf->axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))));
        vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_11_count 
            = (7U & (((IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_11_count) 
                      + (IData)(vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_11_T_2)) 
                     - (0x1fU & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_rT_12)) 
                                  >> 0xbU) & (IData)(vlSelf->axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))));
        vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_10_count 
            = (7U & (((IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_10_count) 
                      + (IData)(vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_10_T_2)) 
                     - (0x3fU & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_rT_12)) 
                                  >> 0xaU) & (IData)(vlSelf->axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))));
        vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_9_count 
            = (7U & (((IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_9_count) 
                      + (IData)(vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_9_T_2)) 
                     - (0x7fU & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_rT_12)) 
                                  >> 9U) & (IData)(vlSelf->axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))));
        vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_8_count 
            = (7U & (((IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_8_count) 
                      + (IData)(vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_8_T_2)) 
                     - (0xffU & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_rT_12)) 
                                  >> 8U) & (IData)(vlSelf->axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))));
        vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_7_count 
            = (7U & (((IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_7_count) 
                      + (IData)(vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_7_T_2)) 
                     - (0x1ffU & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_rT_12)) 
                                   >> 7U) & (IData)(vlSelf->axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))));
        vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_6_count 
            = (7U & (((IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_6_count) 
                      + (IData)(vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_6_T_2)) 
                     - (0x3ffU & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_rT_12)) 
                                   >> 6U) & (IData)(vlSelf->axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))));
        vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_4_count 
            = (7U & (((IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_4_count) 
                      + (IData)(vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_4_T_2)) 
                     - (0xfffU & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_rT_12)) 
                                   >> 4U) & (IData)(vlSelf->axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))));
        vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_1_count 
            = (7U & (((IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_1_count) 
                      + (IData)(vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_1_T_2)) 
                     - (0x7fffU & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_rT_12)) 
                                    >> 1U) & (IData)(vlSelf->axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))));
        vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_2_count 
            = (7U & (((IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_2_count) 
                      + (IData)(vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_2_T_2)) 
                     - (0x3fffU & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_rT_12)) 
                                    >> 2U) & (IData)(vlSelf->axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))));
        vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_3_count 
            = (7U & (((IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_3_count) 
                      + (IData)(vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_3_T_2)) 
                     - (0x1fffU & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_rT_12)) 
                                    >> 3U) & (IData)(vlSelf->axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))));
        vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_0_count 
            = (7U & (((IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_0_count) 
                      + (IData)(vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_0_T_2)) 
                     - (((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_rT_12)) 
                        & (IData)(vlSelf->axi4xbar__DOT____VdfgTmp_h52ee47fe__0))));
        vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_5_count 
            = (7U & (((IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_5_count) 
                      + (IData)(vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_5_T_2)) 
                     - (0x7ffU & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_rT_12)) 
                                   >> 5U) & (IData)(vlSelf->axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))));
        vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_14_count 
            = (7U & (((IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_14_count) 
                      + (IData)(vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_14_T_2)) 
                     - (3U & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_rT_12)) 
                               >> 0xeU) & (IData)(vlSelf->axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))));
        vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_15_count 
            = (7U & (((IData)(vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_15_count) 
                      + (IData)(vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_15_T_2)) 
                     - (1U & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_rT_12)) 
                               >> 0xfU) & (IData)(vlSelf->axi4xbar__DOT____VdfgTmp_h52ee47fe__0)))));
        vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_13_count 
            = (7U & (((IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_13_count) 
                      + (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_13_T_2)) 
                     - (7U & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_bT_5)) 
                               >> 0xdU) & (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_12_count 
            = (7U & (((IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_12_count) 
                      + (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_12_T_2)) 
                     - (0xfU & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_bT_5)) 
                                 >> 0xcU) & (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_11_count 
            = (7U & (((IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_11_count) 
                      + (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_11_T_2)) 
                     - (0x1fU & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_bT_5)) 
                                  >> 0xbU) & (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_10_count 
            = (7U & (((IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_10_count) 
                      + (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_10_T_2)) 
                     - (0x3fU & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_bT_5)) 
                                  >> 0xaU) & (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_9_count 
            = (7U & (((IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_9_count) 
                      + (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_9_T_2)) 
                     - (0x7fU & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_bT_5)) 
                                  >> 9U) & (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_8_count 
            = (7U & (((IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_8_count) 
                      + (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_8_T_2)) 
                     - (0xffU & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_bT_5)) 
                                  >> 8U) & (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_7_count 
            = (7U & (((IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_7_count) 
                      + (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_7_T_2)) 
                     - (0x1ffU & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_bT_5)) 
                                   >> 7U) & (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_6_count 
            = (7U & (((IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_6_count) 
                      + (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_6_T_2)) 
                     - (0x3ffU & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_bT_5)) 
                                   >> 6U) & (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_0_count 
            = (7U & (((IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_0_count) 
                      + (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_0_T_2)) 
                     - (((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_bT_5)) 
                        & (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_15_T_4))));
        vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_1_count 
            = (7U & (((IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_1_count) 
                      + (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_1_T_2)) 
                     - (0x7fffU & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_bT_5)) 
                                    >> 1U) & (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_3_count 
            = (7U & (((IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_3_count) 
                      + (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_3_T_2)) 
                     - (0x1fffU & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_bT_5)) 
                                    >> 3U) & (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_4_count 
            = (7U & (((IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_4_count) 
                      + (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_4_T_2)) 
                     - (0xfffU & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_bT_5)) 
                                   >> 4U) & (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_5_count 
            = (7U & (((IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_5_count) 
                      + (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_5_T_2)) 
                     - (0x7ffU & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_bT_5)) 
                                   >> 5U) & (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_2_count 
            = (7U & (((IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_2_count) 
                      + (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_2_T_2)) 
                     - (0x3fffU & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_bT_5)) 
                                    >> 2U) & (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_14_count 
            = (7U & (((IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_14_count) 
                      + (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_14_T_2)) 
                     - (3U & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_bT_5)) 
                               >> 0xeU) & (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_15_count 
            = (7U & (((IData)(vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_15_count) 
                      + (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_15_T_2)) 
                     - (1U & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar__DOT___in_0_bT_5)) 
                               >> 0xfU) & (IData)(vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        if (vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__do_enq) {
            __Vdly__axi4xbar__DOT__awIn_0__DOT__wrap 
                = (1U & ((IData)(vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__wrap) 
                         - (IData)(1U)));
        }
        if (vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__do_deq) {
            __Vdly__axi4xbar__DOT__awIn_0__DOT__wrap_1 
                = (1U & ((IData)(vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelf->__PVT__axi4frag__DOT__deq_q_1__DOT__do_enq) 
             != (((IData)(vlSelf->__PVT__axi4frag__DOT__deq_q_1__DOT__full) 
                  & (IData)(vlSelf->axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready)) 
                 & (IData)(vlSelf->__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0)))) {
            __Vdly__axi4frag__DOT__deq_q_1__DOT__full 
                = vlSelf->__PVT__axi4frag__DOT__deq_q_1__DOT__do_enq;
        }
        if (vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq) {
            __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap 
                = (1U & ((IData)(vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        if (vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq) {
            __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap 
                = (1U & ((IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        if (vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq) {
            __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap 
                = (1U & ((IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        if (vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq) {
            __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap 
                = (1U & ((IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        vlSelf->__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2 
            = (0xffffU & ((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_bT_9)));
        vlSelf->__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3 
            = ((IData)(vlSelf->__PVT__axi4frag__DOT__nodeOut_bready) 
               & (IData)(vlSelf->__PVT__axi4xbar_1__DOT__in_0_bvalid));
        if (((IData)(vlSelf->__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
             & (IData)(vlSelf->__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_0 = ((IData)(vlSelf->__PVT___axi4yank_auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelf->__PVT__axi4frag__DOT__error_0) 
                                                  | (IData)(vlSelf->__PVT___axi4yank_auto_in_bresp)));
        }
        if ((((IData)(vlSelf->__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 1U) & (IData)(vlSelf->__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_1 = ((IData)(vlSelf->__PVT___axi4yank_auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelf->__PVT__axi4frag__DOT__error_1) 
                                                  | (IData)(vlSelf->__PVT___axi4yank_auto_in_bresp)));
        }
        if ((((IData)(vlSelf->__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 2U) & (IData)(vlSelf->__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_2 = ((IData)(vlSelf->__PVT___axi4yank_auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelf->__PVT__axi4frag__DOT__error_2) 
                                                  | (IData)(vlSelf->__PVT___axi4yank_auto_in_bresp)));
        }
        if ((((IData)(vlSelf->__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 3U) & (IData)(vlSelf->__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_3 = ((IData)(vlSelf->__PVT___axi4yank_auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelf->__PVT__axi4frag__DOT__error_3) 
                                                  | (IData)(vlSelf->__PVT___axi4yank_auto_in_bresp)));
        }
        if ((((IData)(vlSelf->__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 4U) & (IData)(vlSelf->__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_4 = ((IData)(vlSelf->__PVT___axi4yank_auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelf->__PVT__axi4frag__DOT__error_4) 
                                                  | (IData)(vlSelf->__PVT___axi4yank_auto_in_bresp)));
        }
        if ((((IData)(vlSelf->__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 5U) & (IData)(vlSelf->__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_5 = ((IData)(vlSelf->__PVT___axi4yank_auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelf->__PVT__axi4frag__DOT__error_5) 
                                                  | (IData)(vlSelf->__PVT___axi4yank_auto_in_bresp)));
        }
        if ((((IData)(vlSelf->__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 6U) & (IData)(vlSelf->__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_6 = ((IData)(vlSelf->__PVT___axi4yank_auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelf->__PVT__axi4frag__DOT__error_6) 
                                                  | (IData)(vlSelf->__PVT___axi4yank_auto_in_bresp)));
        }
        if ((((IData)(vlSelf->__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 7U) & (IData)(vlSelf->__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_7 = ((IData)(vlSelf->__PVT___axi4yank_auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelf->__PVT__axi4frag__DOT__error_7) 
                                                  | (IData)(vlSelf->__PVT___axi4yank_auto_in_bresp)));
        }
        if ((((IData)(vlSelf->__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 8U) & (IData)(vlSelf->__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_8 = ((IData)(vlSelf->__PVT___axi4yank_auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelf->__PVT__axi4frag__DOT__error_8) 
                                                  | (IData)(vlSelf->__PVT___axi4yank_auto_in_bresp)));
        }
        if ((((IData)(vlSelf->__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 9U) & (IData)(vlSelf->__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_9 = ((IData)(vlSelf->__PVT___axi4yank_auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelf->__PVT__axi4frag__DOT__error_9) 
                                                  | (IData)(vlSelf->__PVT___axi4yank_auto_in_bresp)));
        }
        if ((((IData)(vlSelf->__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 0xaU) & (IData)(vlSelf->__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_10 = ((IData)(vlSelf->__PVT___axi4yank_auto_in_becho_real_last)
                                                ? 0U
                                                : ((IData)(vlSelf->__PVT__axi4frag__DOT__error_10) 
                                                   | (IData)(vlSelf->__PVT___axi4yank_auto_in_bresp)));
        }
        if ((((IData)(vlSelf->__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 0xbU) & (IData)(vlSelf->__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_11 = ((IData)(vlSelf->__PVT___axi4yank_auto_in_becho_real_last)
                                                ? 0U
                                                : ((IData)(vlSelf->__PVT__axi4frag__DOT__error_11) 
                                                   | (IData)(vlSelf->__PVT___axi4yank_auto_in_bresp)));
        }
        if ((((IData)(vlSelf->__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 0xcU) & (IData)(vlSelf->__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_12 = ((IData)(vlSelf->__PVT___axi4yank_auto_in_becho_real_last)
                                                ? 0U
                                                : ((IData)(vlSelf->__PVT__axi4frag__DOT__error_12) 
                                                   | (IData)(vlSelf->__PVT___axi4yank_auto_in_bresp)));
        }
        if ((((IData)(vlSelf->__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 0xdU) & (IData)(vlSelf->__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_13 = ((IData)(vlSelf->__PVT___axi4yank_auto_in_becho_real_last)
                                                ? 0U
                                                : ((IData)(vlSelf->__PVT__axi4frag__DOT__error_13) 
                                                   | (IData)(vlSelf->__PVT___axi4yank_auto_in_bresp)));
        }
        if ((((IData)(vlSelf->__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 0xeU) & (IData)(vlSelf->__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_14 = ((IData)(vlSelf->__PVT___axi4yank_auto_in_becho_real_last)
                                                ? 0U
                                                : ((IData)(vlSelf->__PVT__axi4frag__DOT__error_14) 
                                                   | (IData)(vlSelf->__PVT___axi4yank_auto_in_bresp)));
        }
        if ((((IData)(vlSelf->__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 0xfU) & (IData)(vlSelf->__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_15 = ((IData)(vlSelf->__PVT___axi4yank_auto_in_becho_real_last)
                                                ? 0U
                                                : ((IData)(vlSelf->__PVT__axi4frag__DOT__error_15) 
                                                   | (IData)(vlSelf->__PVT___axi4yank_auto_in_bresp)));
        }
        vlSelf->__PVT__axi42apb__DOT__unnamedblk1__DOT___GEN 
            = (((IData)(vlSelf->__PVT__axi42apb__DOT__state) 
                << 6U) | ((0x20U & ((~ (((~ (IData)(vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)) 
                                         & (IData)(vlSelf->__PVT__axi42apb__DOT__nodeIn_rvalid)) 
                                        | ((~ (IData)(vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)) 
                                           & (IData)(vlSelf->__PVT__axi42apb__DOT__nodeIn_bvalid)))) 
                                    << 5U)) | ((((IData)(vlSelf->__PVT___apbdelay_delayer_in_pready)
                                                  ? 
                                                 (2U 
                                                  & ((~ 
                                                      (((~ (IData)(vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)) 
                                                        & (IData)(vlSelf->__PVT__axi42apb__DOT__nodeIn_rvalid)) 
                                                       | ((~ (IData)(vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)) 
                                                          & (IData)(vlSelf->__PVT__axi42apb__DOT__nodeIn_bvalid)))) 
                                                     << 1U))
                                                  : 1U) 
                                                << 2U) 
                                               | (1U 
                                                  & ((~ (IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)) 
                                                     | ((~ (IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)) 
                                                        & (~ (IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty))))))));
        __Vdly__axi42apb__DOT__state = (3U & ((IData)(vlSelf->__PVT__axi42apb__DOT__unnamedblk1__DOT___GEN) 
                                              >> (7U 
                                                  & ((IData)(vlSelf->__PVT__axi42apb__DOT__state) 
                                                     << 1U))));
        if (vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq) {
            __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap 
                = (1U & ((IData)(vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__do_enq) 
             != (IData)(vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__do_deq))) {
            vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full 
                = vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelf->__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_5)) 
                  & (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                    >> 0xfU)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_15__DOT__full 
                = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq) 
             != (3U & (((IData)(vlSelf->__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                        & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                            >> 0xeU) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_5))) 
                       & (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full))))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_14__DOT__full 
                = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq) 
             != (7U & (((IData)(vlSelf->__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                        & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                            >> 0xdU) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_5))) 
                       & (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full))))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_13__DOT__full 
                = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq) 
             != (0xfU & (((IData)(vlSelf->__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                          & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                              >> 0xcU) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_5))) 
                         & (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full))))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_12__DOT__full 
                = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq) 
             != (0x1fU & (((IData)(vlSelf->__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                           & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                               >> 0xbU) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_5))) 
                          & (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full))))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_11__DOT__full 
                = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq) 
             != (0x3fU & (((IData)(vlSelf->__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                           & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                               >> 0xaU) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_5))) 
                          & (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full))))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_10__DOT__full 
                = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq) 
             != (0x7fU & (((IData)(vlSelf->__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                           & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                               >> 9U) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_5))) 
                          & (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full))))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_9__DOT__full 
                = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq) 
             != (0xffU & (((IData)(vlSelf->__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                           & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                               >> 8U) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_5))) 
                          & (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full))))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_8__DOT__full 
                = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq) 
             != (0x1ffU & (((IData)(vlSelf->__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                            & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                                >> 7U) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_5))) 
                           & (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full))))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_7__DOT__full 
                = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq) 
             != (0x3ffU & (((IData)(vlSelf->__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                            & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                                >> 6U) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_5))) 
                           & (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full))))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_6__DOT__full 
                = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq) 
             != (0x7ffU & (((IData)(vlSelf->__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                            & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                                >> 5U) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_5))) 
                           & (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full))))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_5__DOT__full 
                = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq) 
             != (0xfffU & (((IData)(vlSelf->__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                            & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                                >> 4U) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_5))) 
                           & (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full))))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_4__DOT__full 
                = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq) 
             != (0x1fffU & (((IData)(vlSelf->__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 >> 3U) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_5))) 
                            & (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full))))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_3__DOT__full 
                = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq) 
             != (0x3fffU & (((IData)(vlSelf->__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 >> 2U) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_5))) 
                            & (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full))))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_2__DOT__full 
                = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq) 
             != (0x7fffU & (((IData)(vlSelf->__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 >> 1U) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_5))) 
                            & (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full))))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_1__DOT__full 
                = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelf->__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                  & (((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_20)) 
                     & (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_5))) 
                 & (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap__DOT__full 
                = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq;
        }
        if (__PVT__axi4frag__DOT__unnamedblk1__DOT___GEN_0) {
            vlSelf->__PVT__axi4frag__DOT__busy = (0U 
                                                  != (IData)(vlSelf->__PVT__axi4frag__DOT__len));
        }
        if (vlSelf->__PVT__lgpio__DOT__mgpio__DOT__is_write) {
            if ((0x10002000U == (0x1fffffffU & vlSelf->__PVT___axi42apb_auto_out_paddr))) {
                vlSelf->__PVT__lgpio__DOT__mgpio__DOT__led 
                    = (0xffffU & vlSelf->__PVT___axi42apb_auto_out_pwdata);
            }
        }
        if (((IData)(vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__do_enq) 
             != (IData)(vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__do_deq))) {
            vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__maybe_full 
                = vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__do_enq;
        }
        if (__PVT__axi4frag__DOT__unnamedblk1__DOT___GEN_1) {
            vlSelf->__PVT__axi4frag__DOT__busy_1 = 
                (0U != (IData)(vlSelf->__PVT__axi4frag__DOT__len_1));
        }
        __Vdly__axi4xbar__DOT__idle_2 = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_rready) 
                                          & (IData)(vlSelf->__PVT__axi4xbar__DOT__in_0_rvalid)) 
                                         | ((~ (IData)(vlSelf->__PVT__axi4xbar__DOT__anyValid)) 
                                            & (IData)(vlSelf->__PVT__axi4xbar__DOT__idle_2)));
        if (((IData)(vlSelf->__PVT__axi4xbar__DOT__idle_2) 
             & (0U != (IData)(vlSelf->__PVT__axi4xbar__DOT__readys_valid)))) {
            vlSelf->__PVT__axi4xbar__DOT__unnamedblk1__DOT___readys_mask_T 
                = ((IData)(vlSelf->__PVT__axi4xbar__DOT__readys_readys) 
                   & (IData)(vlSelf->__PVT__axi4xbar__DOT__readys_valid));
            vlSelf->__PVT__axi4xbar__DOT__readys_mask 
                = ((IData)(vlSelf->__PVT__axi4xbar__DOT__unnamedblk1__DOT___readys_mask_T) 
                   | (2U & ((IData)(vlSelf->__PVT__axi4xbar__DOT__unnamedblk1__DOT___readys_mask_T) 
                            << 1U)));
        }
        if (vlSelf->__PVT__axi4xbar__DOT__idle_2) {
            vlSelf->__PVT__axi4xbar__DOT__state_2_0 
                = vlSelf->__PVT__axi4xbar__DOT__prefixOR_1;
            vlSelf->__PVT__axi4xbar__DOT__state_2_1 
                = vlSelf->__PVT__axi4xbar__DOT__winner_2_1;
        }
        vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq 
            = ((IData)(vlSelf->__PVT__axi42apb__DOT__accept_write) 
               & (~ (IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)));
        if (vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq) {
            __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq) 
             != (IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq))) {
            vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full 
                = vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                  & (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                    >> 0xfU)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_31__DOT__full 
                = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq) 
             != (3U & (((IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                        & (((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                           >> 0xeU)) & (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full))))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_30__DOT__full 
                = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq) 
             != (7U & (((IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                        & (((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                           >> 0xdU)) & (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full))))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_29__DOT__full 
                = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq) 
             != (0xfU & (((IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                          & (((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                             >> 0xcU)) & (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full))))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_28__DOT__full 
                = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq) 
             != (0x1fU & (((IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                           & (((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                              >> 0xbU)) & (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full))))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_27__DOT__full 
                = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq) 
             != (0x3fU & (((IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                           & (((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                              >> 0xaU)) & (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full))))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_26__DOT__full 
                = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq) 
             != (0x7fU & (((IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                           & (((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                              >> 9U)) & (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full))))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_25__DOT__full 
                = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq) 
             != (0xffU & (((IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                           & (((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                              >> 8U)) & (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full))))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_24__DOT__full 
                = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq) 
             != (0x1ffU & (((IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                            & (((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                               >> 7U)) & (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full))))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_23__DOT__full 
                = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq) 
             != (0x3ffU & (((IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                            & (((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                               >> 6U)) & (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full))))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_22__DOT__full 
                = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq) 
             != (0x7ffU & (((IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                            & (((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                               >> 5U)) & (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full))))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_21__DOT__full 
                = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq) 
             != (0xfffU & (((IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                            & (((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                               >> 4U)) & (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full))))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_20__DOT__full 
                = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq) 
             != (0x1fffU & (((IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                                >> 3U)) & (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full))))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_19__DOT__full 
                = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq) 
             != (0x3fffU & (((IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                                >> 2U)) & (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full))))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_18__DOT__full 
                = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq) 
             != (0x7fffU & (((IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_bT_9)) 
                                >> 1U)) & (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full))))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_17__DOT__full 
                = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                  & ((IData)(1U) << (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_bT_9))) 
                 & (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_16__DOT__full 
                = vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq;
        }
        vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq 
            = ((IData)(vlSelf->__PVT__axi42apb__DOT__accept_write) 
               & (~ (IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)));
        if (vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq) {
            __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq) 
             != (IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq))) {
            vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full 
                = vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq;
        }
        __Vdly__axi4xbar__DOT__idle_3 = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_bready) 
                                          & (IData)(vlSelf->__PVT__axi4xbar__DOT__in_0_bvalid)) 
                                         | ((~ (IData)(vlSelf->__PVT__axi4xbar__DOT__anyValid_1)) 
                                            & (IData)(vlSelf->__PVT__axi4xbar__DOT__idle_3)));
        if (((IData)(vlSelf->__PVT__axi4xbar__DOT__idle_3) 
             & (0U != (IData)(vlSelf->__PVT__axi4xbar__DOT__readys_valid_1)))) {
            vlSelf->__PVT__axi4xbar__DOT__unnamedblk2__DOT___readys_mask_T_5 
                = ((IData)(vlSelf->__PVT__axi4xbar__DOT__readys_readys_1) 
                   & (IData)(vlSelf->__PVT__axi4xbar__DOT__readys_valid_1));
            vlSelf->__PVT__axi4xbar__DOT__readys_mask_1 
                = ((IData)(vlSelf->__PVT__axi4xbar__DOT__unnamedblk2__DOT___readys_mask_T_5) 
                   | (2U & ((IData)(vlSelf->__PVT__axi4xbar__DOT__unnamedblk2__DOT___readys_mask_T_5) 
                            << 1U)));
        }
        if (vlSelf->__PVT__axi4xbar__DOT__idle_3) {
            vlSelf->__PVT__axi4xbar__DOT__state_3_0 
                = vlSelf->__PVT__axi4xbar__DOT__winner_3_0;
            vlSelf->__PVT__axi4xbar__DOT__state_3_1 
                = vlSelf->__PVT__axi4xbar__DOT__winner_3_1;
        }
        vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq 
            = (((IData)(vlSelf->__PVT___axi4frag_auto_out_rready) 
                & ((IData)(vlSelf->__PVT__axi4xbar_1__DOT__idle_3)
                    ? (IData)(vlSelf->__PVT__axi4xbar_1__DOT__readys_readys)
                    : (IData)(vlSelf->__PVT__axi4xbar_1__DOT__state_3_0))) 
               & (~ (IData)(vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)));
        if (vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq) {
            __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq) 
             != (IData)(vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq))) {
            vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full 
                = vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq;
        }
        vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq 
            = ((IData)(vlSelf->__PVT__axi42apb__DOT__accept_read) 
               & (~ (IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)));
        if (vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq) {
            __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq) 
             != (IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq))) {
            vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full 
                = vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq;
        }
        vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq 
            = (((IData)(vlSelf->__PVT__axi4frag__DOT__nodeOut_bready) 
                & ((IData)(vlSelf->__PVT__axi4xbar_1__DOT__idle_4)
                    ? (IData)(vlSelf->__PVT__axi4xbar_1__DOT__readys_readys_1)
                    : (IData)(vlSelf->__PVT__axi4xbar_1__DOT__state_4_0))) 
               & (~ (IData)(vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)));
        if (vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq) {
            __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq) 
             != (IData)(vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq))) {
            vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full 
                = vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq;
        }
        vlSelf->__PVT__axi4frag__DOT__w_counter = (0x1ffU 
                                                   & ((IData)(vlSelf->__PVT__axi4frag__DOT__w_todo) 
                                                      - 
                                                      ((IData)(vlSelf->__PVT___axi4yank_auto_in_wready) 
                                                       & (IData)(vlSelf->__PVT__axi4frag__DOT__nodeOut_wvalid))));
        __Vdly__axi4xbar_1__DOT__idle_3 = (((IData)(vlSelf->__PVT___axi4frag_auto_out_rready) 
                                            & (IData)(vlSelf->__PVT__axi4xbar_1__DOT__in_0_rvalid)) 
                                           | ((~ (IData)(vlSelf->__PVT__axi4xbar_1__DOT__anyValid)) 
                                              & (IData)(vlSelf->__PVT__axi4xbar_1__DOT__idle_3)));
        if (((IData)(vlSelf->__PVT__axi4xbar_1__DOT__idle_3) 
             & (0U != (IData)(vlSelf->__PVT__axi4xbar_1__DOT__readys_valid)))) {
            vlSelf->__PVT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T 
                = ((IData)(vlSelf->__PVT__axi4xbar_1__DOT__readys_readys) 
                   & (IData)(vlSelf->__PVT__axi4xbar_1__DOT__readys_valid));
            vlSelf->__PVT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T_3 
                = ((IData)(vlSelf->__PVT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T) 
                   | (6U & ((IData)(vlSelf->__PVT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T) 
                            << 1U)));
            vlSelf->__PVT__axi4xbar_1__DOT__readys_mask 
                = ((IData)(vlSelf->__PVT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T_3) 
                   | (4U & ((IData)(vlSelf->__PVT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T_3) 
                            << 2U)));
        }
        if (vlSelf->__PVT__axi4xbar_1__DOT__idle_3) {
            vlSelf->__PVT__axi4xbar_1__DOT__state_3_0 
                = vlSelf->__PVT__axi4xbar_1__DOT__prefixOR_1;
            vlSelf->__PVT__axi4xbar_1__DOT__state_3_1 
                = vlSelf->__PVT__axi4xbar_1__DOT__winner_3_1;
            vlSelf->__PVT__axi4xbar_1__DOT__state_3_2 
                = vlSelf->__PVT__axi4xbar_1__DOT__winner_3_2;
        }
        __Vdly__axi4xbar_1__DOT__idle_4 = (((IData)(vlSelf->__PVT__axi4frag__DOT__nodeOut_bready) 
                                            & (IData)(vlSelf->__PVT__axi4xbar_1__DOT__in_0_bvalid)) 
                                           | ((~ (IData)(vlSelf->__PVT__axi4xbar_1__DOT__anyValid_1)) 
                                              & (IData)(vlSelf->__PVT__axi4xbar_1__DOT__idle_4)));
        if (((IData)(vlSelf->__PVT__axi4xbar_1__DOT__idle_4) 
             & ((IData)(vlSelf->__PVT__axi4ram__DOT__w_full) 
                | (~ (IData)(vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty))))) {
            vlSelf->__PVT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_8 
                = ((IData)(vlSelf->__PVT__axi4xbar_1__DOT__readys_readys_1) 
                   & (IData)(vlSelf->__PVT__axi4xbar_1__DOT__readys_valid_1));
            vlSelf->__PVT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_11 
                = ((IData)(vlSelf->__PVT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_8) 
                   | (6U & ((IData)(vlSelf->__PVT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_8) 
                            << 1U)));
            vlSelf->__PVT__axi4xbar_1__DOT__readys_mask_1 
                = ((IData)(vlSelf->__PVT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_11) 
                   | (4U & ((IData)(vlSelf->__PVT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_11) 
                            << 2U)));
        }
        if (vlSelf->__PVT__axi4xbar_1__DOT__idle_4) {
            vlSelf->__PVT__axi4xbar_1__DOT__state_4_0 
                = vlSelf->__PVT__axi4xbar_1__DOT__winner_4_0;
            vlSelf->__PVT__axi4xbar_1__DOT__state_4_2 
                = vlSelf->__PVT__axi4xbar_1__DOT__winner_4_2;
        }
    }
    if (vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__axi4frag__DOT__len_1)))));
    }
    vlSelf->__PVT__lvga__DOT__mvga__DOT__y_cnt = __Vdly__lvga__DOT__mvga__DOT__y_cnt;
    vlSelf->__PVT__lvga__DOT__mvga__DOT__x_cnt = __Vdly__lvga__DOT__mvga__DOT__x_cnt;
    if (__Vdlyvset__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0) {
        vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[__Vdlyvdim0__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0] 
            = __Vdlyvval__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelf->__PVT__lkeyboard__DOT__mps2__DOT__count 
        = __Vdly__lkeyboard__DOT__mps2__DOT__count;
    vlSelf->__PVT__lkeyboard__DOT__mps2__DOT__w_ptr 
        = __Vdly__lkeyboard__DOT__mps2__DOT__w_ptr;
    vlSelf->__PVT__lkeyboard__DOT__mps2__DOT__overflow 
        = __Vdly__lkeyboard__DOT__mps2__DOT__overflow;
    vlSelf->__PVT__lkeyboard__DOT__mps2__DOT__ps2_clk_sync 
        = __Vdly__lkeyboard__DOT__mps2__DOT__ps2_clk_sync;
    vlSelf->__PVT__lkeyboard__DOT__mps2__DOT__r_ptr 
        = __Vdly__lkeyboard__DOT__mps2__DOT__r_ptr;
    vlSelf->__PVT__lkeyboard__DOT__mps2__DOT__ready 
        = __Vdly__lkeyboard__DOT__mps2__DOT__ready;
    if (__Vdlyvset__lkeyboard__DOT__mps2__DOT__fifo__v0) {
        vlSelf->__PVT__lkeyboard__DOT__mps2__DOT__fifo[__Vdlyvdim0__lkeyboard__DOT__mps2__DOT__fifo__v0] 
            = __Vdlyvval__lkeyboard__DOT__mps2__DOT__fifo__v0;
    }
    if (vlSelf->__PVT__axi4frag__DOT__in_wdeq_q__DOT__do_enq) {
        vlSelf->__PVT__axi4frag__DOT__in_wdeq_q__DOT__ram 
            = (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_wdata)) 
                << 5U) | (QData)((IData)((((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_wstrb) 
                                           << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_wlast)))));
    }
    vlSelf->__PVT__axi4frag__DOT__in_wdeq_q__DOT__full 
        = __Vdly__axi4frag__DOT__in_wdeq_q__DOT__full;
    vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap 
        = __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap;
    if (__Vdlyvset__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0) {
        vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[__Vdlyvdim0__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0] 
            = __Vdlyvval__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0;
    }
    if (__Vdlyvset__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v1) {
        vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[__Vdlyvdim0__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v1] 
            = __Vdlyvval__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v1;
    }
    vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1 
        = __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap_1;
    if (__Vdlyvset__axi4ram__DOT__mem_ext__DOT__Memory__v0) {
        vlSelf->__PVT__axi4ram__DOT__mem_ext__DOT__Memory[__Vdlyvdim0__axi4ram__DOT__mem_ext__DOT__Memory__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__axi4ram__DOT__mem_ext__DOT__Memory__v0))) 
                & vlSelf->__PVT__axi4ram__DOT__mem_ext__DOT__Memory
                [__Vdlyvdim0__axi4ram__DOT__mem_ext__DOT__Memory__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__axi4ram__DOT__mem_ext__DOT__Memory__v0) 
                                   << (IData)(__Vdlyvlsb__axi4ram__DOT__mem_ext__DOT__Memory__v0))));
    }
    if (__Vdlyvset__axi4ram__DOT__mem_ext__DOT__Memory__v1) {
        vlSelf->__PVT__axi4ram__DOT__mem_ext__DOT__Memory[__Vdlyvdim0__axi4ram__DOT__mem_ext__DOT__Memory__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__axi4ram__DOT__mem_ext__DOT__Memory__v1))) 
                & vlSelf->__PVT__axi4ram__DOT__mem_ext__DOT__Memory
                [__Vdlyvdim0__axi4ram__DOT__mem_ext__DOT__Memory__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__axi4ram__DOT__mem_ext__DOT__Memory__v1) 
                                   << (IData)(__Vdlyvlsb__axi4ram__DOT__mem_ext__DOT__Memory__v1))));
    }
    if (__Vdlyvset__axi4ram__DOT__mem_ext__DOT__Memory__v2) {
        vlSelf->__PVT__axi4ram__DOT__mem_ext__DOT__Memory[__Vdlyvdim0__axi4ram__DOT__mem_ext__DOT__Memory__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__axi4ram__DOT__mem_ext__DOT__Memory__v2))) 
                & vlSelf->__PVT__axi4ram__DOT__mem_ext__DOT__Memory
                [__Vdlyvdim0__axi4ram__DOT__mem_ext__DOT__Memory__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__axi4ram__DOT__mem_ext__DOT__Memory__v2) 
                                   << (IData)(__Vdlyvlsb__axi4ram__DOT__mem_ext__DOT__Memory__v2))));
    }
    if (__Vdlyvset__axi4ram__DOT__mem_ext__DOT__Memory__v3) {
        vlSelf->__PVT__axi4ram__DOT__mem_ext__DOT__Memory[__Vdlyvdim0__axi4ram__DOT__mem_ext__DOT__Memory__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__axi4ram__DOT__mem_ext__DOT__Memory__v3))) 
                & vlSelf->__PVT__axi4ram__DOT__mem_ext__DOT__Memory
                [__Vdlyvdim0__axi4ram__DOT__mem_ext__DOT__Memory__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__axi4ram__DOT__mem_ext__DOT__Memory__v3) 
                                   << (IData)(__Vdlyvlsb__axi4ram__DOT__mem_ext__DOT__Memory__v3))));
    }
    vlSelf->__PVT__axi4frag__DOT__deq_q__DOT__full 
        = __Vdly__axi4frag__DOT__deq_q__DOT__full;
    if (__Vdlyvset__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0) {
        vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[__Vdlyvdim0__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0] 
            = __Vdlyvval__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    }
    if (__Vdlyvset__lgpio__DOT__mgpio__DOT__segs__v0) {
        vlSelf->__PVT__lgpio__DOT__mgpio__DOT__segs[0U] 
            = __Vdlyvval__lgpio__DOT__mgpio__DOT__segs__v0;
        vlSelf->__PVT__lgpio__DOT__mgpio__DOT__segs[1U] 
            = __Vdlyvval__lgpio__DOT__mgpio__DOT__segs__v1;
        vlSelf->__PVT__lgpio__DOT__mgpio__DOT__segs[2U] 
            = __Vdlyvval__lgpio__DOT__mgpio__DOT__segs__v2;
        vlSelf->__PVT__lgpio__DOT__mgpio__DOT__segs[3U] 
            = __Vdlyvval__lgpio__DOT__mgpio__DOT__segs__v3;
        vlSelf->__PVT__lgpio__DOT__mgpio__DOT__segs[4U] 
            = __Vdlyvval__lgpio__DOT__mgpio__DOT__segs__v4;
        vlSelf->__PVT__lgpio__DOT__mgpio__DOT__segs[5U] 
            = __Vdlyvval__lgpio__DOT__mgpio__DOT__segs__v5;
        vlSelf->__PVT__lgpio__DOT__mgpio__DOT__segs[6U] 
            = __Vdlyvval__lgpio__DOT__mgpio__DOT__segs__v6;
        vlSelf->__PVT__lgpio__DOT__mgpio__DOT__segs[7U] 
            = __Vdlyvval__lgpio__DOT__mgpio__DOT__segs__v7;
    }
    vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__wrap 
        = __Vdly__axi4xbar__DOT__awIn_0__DOT__wrap;
    if (__Vdlyvset__lvga__DOT__mvga__DOT__vga_mem__v0) {
        vlSelf->__PVT__lvga__DOT__mvga__DOT__vga_mem[__Vdlyvdim0__lvga__DOT__mvga__DOT__vga_mem__v0] 
            = __Vdlyvval__lvga__DOT__mvga__DOT__vga_mem__v0;
    }
    vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__wrap_1 
        = __Vdly__axi4xbar__DOT__awIn_0__DOT__wrap_1;
    vlSelf->__PVT__axi4frag__DOT__deq_q_1__DOT__full 
        = __Vdly__axi4frag__DOT__deq_q_1__DOT__full;
    if (__Vdlyvset__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0) {
        vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[__Vdlyvdim0__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0] 
            = __Vdlyvval__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0;
    }
    if (__Vdlyvset__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0) {
        vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[__Vdlyvdim0__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0] 
            = __Vdlyvval__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0;
    }
    if (__Vdlyvset__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0) {
        vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[__Vdlyvdim0__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0] 
            = __Vdlyvval__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0;
    }
    if (__Vdlyvset__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0) {
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[__Vdlyvdim0__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0] 
            = __Vdlyvval__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    }
    vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap 
        = __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap;
    vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap 
        = __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap;
    vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap 
        = __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap;
    if (__Vdlyvset__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0) {
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[__Vdlyvdim0__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0] 
            = __Vdlyvval__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    }
    vlSelf->__PVT__axi4frag__DOT__error_0 = __Vdly__axi4frag__DOT__error_0;
    vlSelf->__PVT__axi4frag__DOT__error_1 = __Vdly__axi4frag__DOT__error_1;
    vlSelf->__PVT__axi4frag__DOT__error_2 = __Vdly__axi4frag__DOT__error_2;
    vlSelf->__PVT__axi4frag__DOT__error_3 = __Vdly__axi4frag__DOT__error_3;
    vlSelf->__PVT__axi4frag__DOT__error_4 = __Vdly__axi4frag__DOT__error_4;
    vlSelf->__PVT__axi4frag__DOT__error_5 = __Vdly__axi4frag__DOT__error_5;
    vlSelf->__PVT__axi4frag__DOT__error_6 = __Vdly__axi4frag__DOT__error_6;
    vlSelf->__PVT__axi4frag__DOT__error_7 = __Vdly__axi4frag__DOT__error_7;
    vlSelf->__PVT__axi4frag__DOT__error_8 = __Vdly__axi4frag__DOT__error_8;
    vlSelf->__PVT__axi4frag__DOT__error_9 = __Vdly__axi4frag__DOT__error_9;
    vlSelf->__PVT__axi4frag__DOT__error_10 = __Vdly__axi4frag__DOT__error_10;
    vlSelf->__PVT__axi4frag__DOT__error_11 = __Vdly__axi4frag__DOT__error_11;
    vlSelf->__PVT__axi4frag__DOT__error_12 = __Vdly__axi4frag__DOT__error_12;
    vlSelf->__PVT__axi4frag__DOT__error_13 = __Vdly__axi4frag__DOT__error_13;
    vlSelf->__PVT__axi4frag__DOT__error_14 = __Vdly__axi4frag__DOT__error_14;
    vlSelf->__PVT__axi4frag__DOT__error_15 = __Vdly__axi4frag__DOT__error_15;
    if (__Vdlyvset__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0) {
        vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[__Vdlyvdim0__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0] 
            = __Vdlyvval__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap 
        = __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap;
    if (__Vdlyvset__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0) {
        vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[__Vdlyvdim0__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0] 
            = __Vdlyvval__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap 
        = __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap;
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_15__DOT__full;
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_14__DOT__full;
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_13__DOT__full;
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_12__DOT__full;
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_11__DOT__full;
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_10__DOT__full;
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_9__DOT__full;
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_8__DOT__full;
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_7__DOT__full;
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_6__DOT__full;
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_5__DOT__full;
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_4__DOT__full;
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_3__DOT__full;
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_2__DOT__full;
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_1__DOT__full;
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap__DOT__full;
    vlSelf->__PVT__axi4xbar__DOT__idle_2 = __Vdly__axi4xbar__DOT__idle_2;
    vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1 
        = __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1;
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_31__DOT__full;
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_30__DOT__full;
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_29__DOT__full;
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_28__DOT__full;
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_27__DOT__full;
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_26__DOT__full;
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_25__DOT__full;
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_24__DOT__full;
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_23__DOT__full;
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_22__DOT__full;
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_21__DOT__full;
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_20__DOT__full;
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_19__DOT__full;
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_18__DOT__full;
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_17__DOT__full;
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_16__DOT__full;
    vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1 
        = __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1;
    vlSelf->__PVT__axi4xbar__DOT__idle_3 = __Vdly__axi4xbar__DOT__idle_3;
    vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1 
        = __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1;
    vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1 
        = __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1;
    vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1 
        = __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1;
    vlSelf->__PVT__lvga__DOT__mvga__DOT__v_valid = 
        ((0x23U < (IData)(vlSelf->__PVT__lvga__DOT__mvga__DOT__y_cnt)) 
         & (0x203U >= (IData)(vlSelf->__PVT__lvga__DOT__mvga__DOT__y_cnt)));
    vlSelf->__PVT__lvga__DOT__mvga__DOT__h_valid = 
        ((0x90U < (IData)(vlSelf->__PVT__lvga__DOT__mvga__DOT__x_cnt)) 
         & (0x310U >= (IData)(vlSelf->__PVT__lvga__DOT__mvga__DOT__x_cnt)));
    vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match 
        = ((IData)(vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap) 
           == (IData)(vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__ptr_match 
        = ((IData)(vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__wrap) 
           == (IData)(vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__wrap_1));
    vlSelf->__VdfgTmp_hed8e2367__0 = vlSelf->__PVT__axi4ram__DOT__mem_ext__DOT__Memory
        [vlSelf->__PVT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0];
    vlSelf->__PVT__axi4ram__DOT__rdata_REG = vlSelf->__PVT__axi4ram__DOT__ren;
    vlSelf->__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_1 
        = vlSelf->__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_2;
    vlSelf->__PVT___axi4frag_auto_out_arid = (0xfU 
                                              & ((IData)(vlSelf->__PVT__axi4frag__DOT__deq_q__DOT__full)
                                                  ? (IData)(
                                                            (vlSelf->__PVT__axi4frag__DOT__deq_q__DOT__ram 
                                                             >> 0x2dU))
                                                  : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_arid)));
    if (vlSelf->__PVT__axi4frag__DOT__deq_q_1__DOT__full) {
        vlSelf->__PVT__axi4frag__DOT___deq_q_1_io_deq_bits_burst 
            = (3U & (IData)(vlSelf->__PVT__axi4frag__DOT__deq_q_1__DOT__ram));
        vlSelf->__PVT___axi4frag_auto_out_awid = (0xfU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__axi4frag__DOT__deq_q_1__DOT__ram 
                                                             >> 0x2dU)));
    } else {
        vlSelf->__PVT__axi4frag__DOT___deq_q_1_io_deq_bits_burst 
            = (3U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awburst));
        vlSelf->__PVT___axi4frag_auto_out_awid = (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awid));
    }
    if (vlSelf->__PVT__axi42apb__DOT__accept_write) {
        vlSelf->__PVT__axi42apb__DOT__wdata_reg_r = (IData)(
                                                            (vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
                                                             >> 4U));
        vlSelf->__PVT__axi42apb__DOT__wstrb_reg_r = 
            (0xfU & (IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data));
    }
    vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
        = vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1];
    vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match 
        = ((IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap) 
           == (IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match 
        = ((IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap) 
           == (IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
        = vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1];
    vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match 
        = ((IData)(vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap) 
           == (IData)(vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match 
        = ((IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap) 
           == (IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data 
        = vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1];
    vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match 
        = ((IData)(vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap) 
           == (IData)(vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    lvga__DOT__mvga__DOT____VdfgTmp_he6b15335__0 = 
        (0x7ffffU & (((IData)(vlSelf->__PVT__lvga__DOT__mvga__DOT__h_valid)
                       ? (0x3ffU & ((IData)(vlSelf->__PVT__lvga__DOT__mvga__DOT__x_cnt) 
                                    - (IData)(0x91U)))
                       : 0U) + ((IData)(0x280U) * ((IData)(vlSelf->__PVT__lvga__DOT__mvga__DOT__v_valid)
                                                    ? 
                                                   (0x3ffU 
                                                    & ((IData)(vlSelf->__PVT__lvga__DOT__mvga__DOT__y_cnt) 
                                                       - (IData)(0x24U)))
                                                    : 0U))));
    vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__full 
        = ((IData)(vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match) 
           & (IData)(vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__empty 
        = ((~ (IData)(vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full)) 
           & (IData)(vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__empty 
        = ((~ (IData)(vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__maybe_full)) 
           & (IData)(vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__ptr_match));
    vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__full 
        = ((IData)(vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__ptr_match) 
           & (IData)(vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__maybe_full));
    vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
        = vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory
        [vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1];
    if ((1U == (IData)(vlSelf->__PVT__axi42apb__DOT__state))) {
        vlSelf->__PVT__axi42apb__DOT__resp_hold_r = 0U;
        vlSelf->__PVT__axi42apb__DOT__nodeIn_rdata_r 
            = vlSelf->__PVT___apbdelay_delayer_in_prdata;
    }
    vlSelf->__PVT__axi42apb__DOT__state = __Vdly__axi42apb__DOT__state;
    vlSelf->__PVT__axi42apb__DOT__resp_hold = ((1U 
                                                == (IData)(vlSelf->__PVT__axi42apb__DOT__state))
                                                ? 0U
                                                : (IData)(vlSelf->__PVT__axi42apb__DOT__resp_hold_r));
    if (vlSelf->__PVT__axi42apb__DOT__accept_write) {
        vlSelf->__PVT__axi42apb__DOT__awaddr_reg_r 
            = (IData)((vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                       >> 0xbU));
        vlSelf->__PVT__axi42apb__DOT__bid_reg = (0xfU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                                            >> 0x2bU)));
    }
    vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
        = vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1];
    vlSelf->__PVT__axi4ram__DOT___mem_ext_R0_data = 
        ((IData)(vlSelf->__PVT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
          ? vlSelf->__VdfgTmp_hed8e2367__0 : 0U);
    vlSelf->axi4yank__DOT____VdfgTmp_h73aa1639__0 = 
        (1U & (((0x8000U & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)) 
                            << 0xfU)) | ((0x4000U & 
                                          ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)) 
                                           << 0xeU)) 
                                         | ((0x2000U 
                                             & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)) 
                                                << 0xdU)) 
                                            | ((0x1000U 
                                                & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)) 
                                                   << 0xcU)) 
                                               | ((0x800U 
                                                   & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)) 
                                                      << 0xbU)) 
                                                  | ((0x400U 
                                                      & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)) 
                                                         << 0xaU)) 
                                                     | ((0x200U 
                                                         & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)) 
                                                            << 9U)) 
                                                        | ((0x100U 
                                                            & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)) 
                                                               << 8U)) 
                                                           | ((0x80U 
                                                               & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)) 
                                                                  << 7U)) 
                                                              | ((0x40U 
                                                                  & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)) 
                                                                     << 6U)) 
                                                                 | ((0x20U 
                                                                     & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)) 
                                                                        << 5U)) 
                                                                    | ((0x10U 
                                                                        & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)) 
                                                                           << 4U)) 
                                                                       | ((8U 
                                                                           & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)) 
                                                                              << 3U)) 
                                                                          | ((4U 
                                                                              & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)) 
                                                                                << 2U)) 
                                                                             | ((2U 
                                                                                & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))))))))))))))))) 
               >> (IData)(vlSelf->__PVT___axi4frag_auto_out_arid)));
    vlSelf->axi4yank__DOT____VdfgTmp_he7a0eac8__0 = 
        (1U & (((0x8000U & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)) 
                            << 0xfU)) | ((0x4000U & 
                                          ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)) 
                                           << 0xeU)) 
                                         | ((0x2000U 
                                             & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)) 
                                                << 0xdU)) 
                                            | ((0x1000U 
                                                & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)) 
                                                   << 0xcU)) 
                                               | ((0x800U 
                                                   & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)) 
                                                      << 0xbU)) 
                                                  | ((0x400U 
                                                      & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)) 
                                                         << 0xaU)) 
                                                     | ((0x200U 
                                                         & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)) 
                                                            << 9U)) 
                                                        | ((0x100U 
                                                            & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)) 
                                                               << 8U)) 
                                                           | ((0x80U 
                                                               & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)) 
                                                                  << 7U)) 
                                                              | ((0x40U 
                                                                  & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)) 
                                                                     << 6U)) 
                                                                 | ((0x20U 
                                                                     & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)) 
                                                                        << 5U)) 
                                                                    | ((0x10U 
                                                                        & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)) 
                                                                           << 4U)) 
                                                                       | ((8U 
                                                                           & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)) 
                                                                              << 3U)) 
                                                                          | ((4U 
                                                                              & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)) 
                                                                                << 2U)) 
                                                                             | ((2U 
                                                                                & ((~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))))))))))))))))) 
               >> (IData)(vlSelf->__PVT___axi4frag_auto_out_awid)));
    vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full 
        = ((IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match) 
           & (IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
    vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty 
        = ((~ (IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
    vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full 
        = ((IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match) 
           & (IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
    vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty 
        = ((~ (IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
    vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full 
        = ((IData)(vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match) 
           & (IData)(vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
    vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty 
        = ((~ (IData)(vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    vlSelf->__PVT__axi4xbar_1__DOT__idle_3 = __Vdly__axi4xbar_1__DOT__idle_3;
    vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full 
        = ((IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match) 
           & (IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
    vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty 
        = ((~ (IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full)) 
           & (IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
    vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full 
        = ((IData)(vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match) 
           & (IData)(vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
    vlSelf->__PVT__axi4xbar_1__DOT__idle_4 = __Vdly__axi4xbar_1__DOT__idle_4;
    vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty 
        = ((~ (IData)(vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    vlSelf->__PVT__axi4ram__DOT__w_full = __Vdly__axi4ram__DOT__w_full;
    vlSelf->__PVT__lvga__DOT__mvga__DOT__vga_data = 
        ((0x4afffU >= lvga__DOT__mvga__DOT____VdfgTmp_he6b15335__0)
          ? vlSelf->__PVT__lvga__DOT__mvga__DOT__vga_mem
         [lvga__DOT__mvga__DOT____VdfgTmp_he6b15335__0]
          : 0U);
    vlSelf->__PVT__axi4xbar_1__DOT___anonIn_awready_T 
        = (1U & ((~ (IData)(vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__full)) 
                 | (IData)(vlSelf->__PVT__axi4xbar_1__DOT__latched)));
    vlSelf->__PVT__axi4frag__DOT___in_awready_T = (
                                                   (0U 
                                                    == (IData)(vlSelf->__PVT__axi4frag__DOT__w_counter)) 
                                                   | (IData)(vlSelf->__PVT__axi4frag__DOT__wbeats_latched));
    vlSelf->__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_2 
        = vlSelf->__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_3;
    vlSelf->__PVT__axi4xbar_1__DOT__anyValid = (1U 
                                                & ((~ (IData)(vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)) 
                                                   | ((IData)(vlSelf->__PVT__axi4ram__DOT__r_full) 
                                                      | (IData)(vlSelf->__PVT__lmrom__DOT__state))));
    vlSelf->__PVT__axi4xbar_1__DOT__readys_valid = 
        (((IData)(vlSelf->__PVT__axi4ram__DOT__r_full) 
          << 2U) | (((IData)(vlSelf->__PVT__lmrom__DOT__state) 
                     << 1U) | (1U & (~ (IData)(vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
    vlSelf->__PVT__axi42apb__DOT__accept_read = ((~ (IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)) 
                                                 & (0U 
                                                    == (IData)(vlSelf->__PVT__axi42apb__DOT__state)));
    vlSelf->__PVT__axi4xbar_1__DOT__anyValid_1 = (1U 
                                                  & ((~ (IData)(vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)) 
                                                     | (IData)(vlSelf->__PVT__axi4ram__DOT__w_full)));
    vlSelf->__PVT__axi4xbar_1__DOT__readys_valid_1 
        = (((IData)(vlSelf->__PVT__axi4ram__DOT__w_full) 
            << 2U) | (1U & (~ (IData)(vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty))));
    __PVT__axi4xbar_1__DOT___readys_filter_T_1 = ((~ (IData)(vlSelf->__PVT__axi4xbar_1__DOT__readys_mask)) 
                                                  & (IData)(vlSelf->__PVT__axi4xbar_1__DOT__readys_valid));
    vlSelf->__PVT__axi42apb__DOT__accept_write = ((~ (IData)(vlSelf->__PVT__axi42apb__DOT__accept_read)) 
                                                  & ((0U 
                                                      == (IData)(vlSelf->__PVT__axi42apb__DOT__state)) 
                                                     & ((~ (IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)) 
                                                        & (~ (IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
    if (vlSelf->__PVT__axi42apb__DOT__accept_write) {
        vlSelf->__PVT___axi42apb_auto_out_pwdata = (IData)(
                                                           (vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
                                                            >> 4U));
        vlSelf->__VdfgTmp_he478e0a8__0 = (0xfU & (IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data));
    } else {
        vlSelf->__PVT___axi42apb_auto_out_pwdata = vlSelf->__PVT__axi42apb__DOT__wdata_reg_r;
        vlSelf->__VdfgTmp_he478e0a8__0 = (0xfU & (IData)(vlSelf->__PVT__axi42apb__DOT__wstrb_reg_r));
    }
    __PVT__axi4xbar_1__DOT___readys_filter_T_3 = ((~ (IData)(vlSelf->__PVT__axi4xbar_1__DOT__readys_mask_1)) 
                                                  & (IData)(vlSelf->__PVT__axi4xbar_1__DOT__readys_valid_1));
    vlSelf->__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_3 
        = vlSelf->__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_4;
    __PVT__axi4xbar_1__DOT___GEN_1 = (((0xcU & ((IData)(__PVT__axi4xbar_1__DOT___readys_filter_T_1) 
                                                << 2U)) 
                                       | (((IData)(vlSelf->__PVT__axi4ram__DOT__r_full) 
                                           << 1U) | (IData)(vlSelf->__PVT__lmrom__DOT__state))) 
                                      | (((IData)(__PVT__axi4xbar_1__DOT___readys_filter_T_1) 
                                          << 1U) | (IData)(vlSelf->__PVT__axi4ram__DOT__r_full)));
    vlSelf->__PVT___axi42apb_auto_out_psel = ((IData)(vlSelf->__PVT__axi42apb__DOT__accept_read) 
                                              | ((IData)(vlSelf->__PVT__axi42apb__DOT__accept_write) 
                                                 | (1U 
                                                    == (IData)(vlSelf->__PVT__axi42apb__DOT__state))));
    __PVT__axi4xbar_1__DOT___GEN_2 = (((0xcU & ((IData)(__PVT__axi4xbar_1__DOT___readys_filter_T_3) 
                                                << 2U)) 
                                       | ((IData)(vlSelf->__PVT__axi4ram__DOT__w_full) 
                                          << 1U)) | 
                                      (((IData)(__PVT__axi4xbar_1__DOT___readys_filter_T_3) 
                                        << 1U) | (IData)(vlSelf->__PVT__axi4ram__DOT__w_full)));
    vlSelf->__PVT__axi4xbar_1__DOT__readys_unready 
        = (((0x10U & ((IData)(__PVT__axi4xbar_1__DOT___readys_filter_T_1) 
                      << 2U)) | ((8U & (IData)(__PVT__axi4xbar_1__DOT___GEN_1)) 
                                 | (7U & ((IData)(__PVT__axi4xbar_1__DOT___GEN_1) 
                                          | ((4U & (IData)(__PVT__axi4xbar_1__DOT___readys_filter_T_1)) 
                                             | (3U 
                                                & ((IData)(__PVT__axi4xbar_1__DOT___GEN_1) 
                                                   >> 2U))))))) 
           | ((IData)(vlSelf->__PVT__axi4xbar_1__DOT__readys_mask) 
              << 3U));
    vlSelf->__PVT__axi4xbar_1__DOT__readys_unready_1 
        = (((0x10U & ((IData)(__PVT__axi4xbar_1__DOT___readys_filter_T_3) 
                      << 2U)) | ((8U & (IData)(__PVT__axi4xbar_1__DOT___GEN_2)) 
                                 | (7U & ((IData)(__PVT__axi4xbar_1__DOT___GEN_2) 
                                          | ((4U & (IData)(__PVT__axi4xbar_1__DOT___readys_filter_T_3)) 
                                             | (3U 
                                                & ((IData)(__PVT__axi4xbar_1__DOT___GEN_2) 
                                                   >> 2U))))))) 
           | ((IData)(vlSelf->__PVT__axi4xbar_1__DOT__readys_mask_1) 
              << 3U));
    vlSelf->__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_4 
        = vlSelf->__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_5;
    vlSelf->__PVT__axi4xbar_1__DOT__readys_readys = 
        (7U & (~ (((IData)(vlSelf->__PVT__axi4xbar_1__DOT__readys_unready) 
                   >> 3U) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT__readys_unready))));
    vlSelf->__PVT__axi4xbar_1__DOT__readys_readys_1 
        = (7U & (~ (((IData)(vlSelf->__PVT__axi4xbar_1__DOT__readys_unready_1) 
                     >> 3U) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT__readys_unready_1))));
    vlSelf->__PVT__axi4xbar_1__DOT__winner_3_1 = (((IData)(vlSelf->__PVT__axi4xbar_1__DOT__readys_readys) 
                                                   >> 1U) 
                                                  & (IData)(vlSelf->__PVT__lmrom__DOT__state));
    vlSelf->__PVT__axi4xbar_1__DOT__prefixOR_1 = (1U 
                                                  & ((~ (IData)(vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)) 
                                                     & (IData)(vlSelf->__PVT__axi4xbar_1__DOT__readys_readys)));
    vlSelf->__PVT__axi4xbar_1__DOT__winner_3_2 = (((IData)(vlSelf->__PVT__axi4xbar_1__DOT__readys_readys) 
                                                   >> 2U) 
                                                  & (IData)(vlSelf->__PVT__axi4ram__DOT__r_full));
    if (vlSelf->__PVT__axi4xbar_1__DOT__idle_3) {
        vlSelf->__PVT__axi4xbar_1__DOT__in_0_rvalid 
            = vlSelf->__PVT__axi4xbar_1__DOT__anyValid;
        vlSelf->__PVT__axi4xbar_1__DOT__muxState_3_1 
            = vlSelf->__PVT__axi4xbar_1__DOT__winner_3_1;
        vlSelf->__PVT__axi4xbar_1__DOT__muxState_3_0 
            = vlSelf->__PVT__axi4xbar_1__DOT__prefixOR_1;
        vlSelf->__PVT__axi4xbar_1__DOT__muxState_3_2 
            = vlSelf->__PVT__axi4xbar_1__DOT__winner_3_2;
    } else {
        vlSelf->__PVT__axi4xbar_1__DOT__in_0_rvalid 
            = (((~ (IData)(vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)) 
                & (IData)(vlSelf->__PVT__axi4xbar_1__DOT__state_3_0)) 
               | (((IData)(vlSelf->__PVT__axi4xbar_1__DOT__state_3_1) 
                   & (IData)(vlSelf->__PVT__lmrom__DOT__state)) 
                  | ((IData)(vlSelf->__PVT__axi4ram__DOT__r_full) 
                     & (IData)(vlSelf->__PVT__axi4xbar_1__DOT__state_3_2))));
        vlSelf->__PVT__axi4xbar_1__DOT__muxState_3_1 
            = vlSelf->__PVT__axi4xbar_1__DOT__state_3_1;
        vlSelf->__PVT__axi4xbar_1__DOT__muxState_3_0 
            = vlSelf->__PVT__axi4xbar_1__DOT__state_3_0;
        vlSelf->__PVT__axi4xbar_1__DOT__muxState_3_2 
            = vlSelf->__PVT__axi4xbar_1__DOT__state_3_2;
    }
    vlSelf->__PVT__axi4xbar_1__DOT__winner_4_0 = (1U 
                                                  & ((~ (IData)(vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)) 
                                                     & (IData)(vlSelf->__PVT__axi4xbar_1__DOT__readys_readys_1)));
    vlSelf->__PVT__axi4xbar_1__DOT__winner_4_2 = (((IData)(vlSelf->__PVT__axi4xbar_1__DOT__readys_readys_1) 
                                                   >> 2U) 
                                                  & (IData)(vlSelf->__PVT__axi4ram__DOT__w_full));
    if (vlSelf->__PVT__axi4xbar_1__DOT__idle_4) {
        vlSelf->__PVT__axi4xbar_1__DOT__in_0_bvalid 
            = vlSelf->__PVT__axi4xbar_1__DOT__anyValid_1;
        vlSelf->__PVT__axi4xbar_1__DOT__muxState_4_0 
            = vlSelf->__PVT__axi4xbar_1__DOT__winner_4_0;
        vlSelf->__PVT__axi4xbar_1__DOT__muxState_4_2 
            = vlSelf->__PVT__axi4xbar_1__DOT__winner_4_2;
    } else {
        vlSelf->__PVT__axi4xbar_1__DOT__in_0_bvalid 
            = (((~ (IData)(vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)) 
                & (IData)(vlSelf->__PVT__axi4xbar_1__DOT__state_4_0)) 
               | ((IData)(vlSelf->__PVT__axi4ram__DOT__w_full) 
                  & (IData)(vlSelf->__PVT__axi4xbar_1__DOT__state_4_2)));
        vlSelf->__PVT__axi4xbar_1__DOT__muxState_4_0 
            = vlSelf->__PVT__axi4xbar_1__DOT__state_4_0;
        vlSelf->__PVT__axi4xbar_1__DOT__muxState_4_2 
            = vlSelf->__PVT__axi4xbar_1__DOT__state_4_2;
    }
    vlSelf->__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_5 
        = vlSelf->__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_6;
    vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_5 = (((IData)(vlSelf->__PVT__axi4xbar_1__DOT__muxState_3_0) 
                                                   & (IData)(vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data)) 
                                                  | ((IData)(vlSelf->__PVT__axi4xbar_1__DOT__muxState_3_1) 
                                                     | (IData)(vlSelf->__PVT__axi4xbar_1__DOT__muxState_3_2)));
    vlSelf->__PVT__axi4xbar_1__DOT___in_0_rT_20 = (0xfU 
                                                   & (((IData)(vlSelf->__PVT__axi4xbar_1__DOT__muxState_3_0)
                                                        ? (IData)(
                                                                  (vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                                                   >> 0x23U))
                                                        : 0U) 
                                                      | (((IData)(vlSelf->__PVT__axi4xbar_1__DOT__muxState_3_1)
                                                           ? (IData)(vlSelf->__PVT__lmrom__DOT__nodeIn_rid_r)
                                                           : 0U) 
                                                         | ((IData)(vlSelf->__PVT__axi4xbar_1__DOT__muxState_3_2)
                                                             ? (IData)(vlSelf->__PVT__axi4ram__DOT__r_id)
                                                             : 0U))));
    vlSelf->__PVT___axi4yank_auto_in_bresp = (3U & 
                                              (((IData)(vlSelf->__PVT__axi4xbar_1__DOT__muxState_4_0)
                                                 ? (IData)(vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data)
                                                 : 0U) 
                                               | ((IData)(vlSelf->__PVT__axi4xbar_1__DOT__muxState_4_2)
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__axi4ram__DOT__w_sel1)
                                                    ? 0U
                                                    : 3U)
                                                   : 0U)));
    vlSelf->__PVT__axi4xbar_1__DOT___in_0_bT_9 = (0xfU 
                                                  & (((IData)(vlSelf->__PVT__axi4xbar_1__DOT__muxState_4_0)
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data) 
                                                       >> 2U)
                                                       : 0U) 
                                                     | ((IData)(vlSelf->__PVT__axi4xbar_1__DOT__muxState_4_2)
                                                         ? (IData)(vlSelf->__PVT__axi4ram__DOT__w_id)
                                                         : 0U)));
    vlSelf->__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_6 
        = vlSelf->__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_7;
    vlSelf->__PVT___axi4yank_auto_in_becho_real_last 
        = (1U & ((((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last) 
                   << 0xfU) | (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last) 
                                << 0xeU) | (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last) 
                                             << 0xdU) 
                                            | (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last) 
                                                << 0xcU) 
                                               | (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last) 
                                                   << 0xbU) 
                                                  | (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last) 
                                                      << 0xaU) 
                                                     | (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last) 
                                                         << 9U) 
                                                        | (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last) 
                                                            << 8U) 
                                                           | (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last) 
                                                               << 7U) 
                                                              | (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last) 
                                                                  << 6U) 
                                                                 | (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last) 
                                                                     << 5U) 
                                                                    | (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last) 
                                                                        << 4U) 
                                                                       | (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last) 
                                                                           << 3U) 
                                                                          | (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last) 
                                                                              << 2U) 
                                                                             | (((IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last)))))))))))))))) 
                 >> (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_bT_9)));
    vlSelf->__PVT___axi4frag_auto_in_bvalid = ((IData)(vlSelf->__PVT___axi4yank_auto_in_becho_real_last) 
                                               & (IData)(vlSelf->__PVT__axi4xbar_1__DOT__in_0_bvalid));
    vlSelf->__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_7 
        = vlSelf->__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_8;
    vlSelf->__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_8 
        = vlSelf->__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_9;
    vlSelf->__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_9 
        = vlSymsp->TOP.reset;
}

extern const VlUnpacked<CData/*0:0*/, 2048> VysyxSoCFull__ConstPool__TABLE_h10c88e1c_0;
extern const VlUnpacked<CData/*1:0*/, 128> VysyxSoCFull__ConstPool__TABLE_h69a2ee77_0;
extern const VlUnpacked<CData/*0:0*/, 128> VysyxSoCFull__ConstPool__TABLE_h4032e768_0;
extern const VlUnpacked<CData/*0:0*/, 128> VysyxSoCFull__ConstPool__TABLE_hc6114f20_0;
extern const VlUnpacked<CData/*3:0*/, 64> VysyxSoCFull__ConstPool__TABLE_h4abec798_0;
extern const VlUnpacked<CData/*3:0*/, 4> VysyxSoCFull__ConstPool__TABLE_h05f4911a_0;
extern const VlUnpacked<VlWide<3>/*79:0*/, 16> VysyxSoCFull__ConstPool__TABLE_h142cc7a0_0;
extern const VlUnpacked<CData/*7:0*/, 256> VysyxSoCFull__ConstPool__TABLE_hccb3c341_0;
extern const VlUnpacked<SData/*9:0*/, 256> VysyxSoCFull__ConstPool__TABLE_he38796ec_0;

VL_INLINE_OPT void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__1(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__1\n"); );
    // Init
    IData/*31:0*/ __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__1__Vfuncout;
    __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__1__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__1__addr;
    __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__1__addr = 0;
    CData/*1:0*/ __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__1__axtype;
    __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__1__axtype = 0;
    CData/*7:0*/ __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__1__axlen;
    __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__1__axlen = 0;
    IData/*31:0*/ __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__Vfuncout;
    __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__addr;
    __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__addr = 0;
    CData/*1:0*/ __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__axtype;
    __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__axtype = 0;
    CData/*7:0*/ __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__axlen;
    __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__axlen = 0;
    IData/*31:0*/ __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__Vfuncout;
    __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__addr;
    __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__addr = 0;
    CData/*1:0*/ __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__axtype;
    __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__axtype = 0;
    CData/*7:0*/ __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__axlen;
    __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__axlen = 0;
    CData/*1:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    SData/*10:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*5:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*7:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*6:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    CData/*3:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    CData/*0:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rf_pop;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = 0;
    CData/*0:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__msi_reset;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = 0;
    CData/*7:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__msr;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__msr = 0;
    CData/*0:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__lsr5r;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__lsr5r = 0;
    SData/*15:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__dlc;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__dlc = 0;
    CData/*7:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__block_cnt;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__block_cnt = 0;
    CData/*0:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd = 0;
    CData/*0:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd = 0;
    CData/*0:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd = 0;
    CData/*0:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd = 0;
    CData/*0:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd = 0;
    CData/*2:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tstate;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tstate = 0;
    CData/*4:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0;
    CData/*6:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out = 0;
    CData/*0:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out = 0;
    CData/*0:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor = 0;
    CData/*2:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 0;
    CData/*3:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0;
    CData/*4:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tf_count;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tf_count = 0;
    CData/*3:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0;
    CData/*2:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter = 0;
    CData/*0:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor = 0;
    CData/*0:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error = 0;
    CData/*0:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error = 0;
    CData/*0:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity = 0;
    CData/*7:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift = 0;
    CData/*7:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b = 0;
    SData/*9:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__counter_t;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__counter_t = 0;
    CData/*3:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0;
    CData/*3:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0;
    CData/*4:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rf_count;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rf_count = 0;
    CData/*0:0*/ __Vdlyvset__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0;
    __Vdlyvset__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 0;
    CData/*0:0*/ __Vdlyvset__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16;
    __Vdlyvset__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0;
    CData/*3:0*/ __Vdlyvdim0__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    __Vdlyvdim0__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0;
    CData/*2:0*/ __Vdlyvval__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    __Vdlyvval__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0;
    CData/*0:0*/ __Vdlyvset__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    __Vdlyvset__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0;
    CData/*3:0*/ __Vdlyvdim0__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33;
    __Vdlyvdim0__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 = 0;
    CData/*0:0*/ __Vdlyvset__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33;
    __Vdlyvset__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 = 0;
    CData/*3:0*/ __Vdlyvdim0__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    __Vdlyvdim0__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0;
    CData/*2:0*/ __Vdlyvval__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    __Vdlyvval__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0;
    CData/*0:0*/ __Vdlyvset__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    __Vdlyvset__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0;
    SData/*15:0*/ __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt;
    __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt = 0;
    CData/*0:0*/ __Vdly__spi_sck;
    __Vdly__spi_sck = 0;
    VlWide<4>/*127:0*/ __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data;
    VL_ZERO_W(128, __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data);
    CData/*1:0*/ __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__state;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__state = 0;
    CData/*7:0*/ __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q = 0;
    IData/*31:0*/ __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q = 0;
    CData/*0:0*/ __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q = 0;
    CData/*2:0*/ __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count = 0;
    CData/*1:0*/ __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr = 0;
    CData/*1:0*/ __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr = 0;
    CData/*1:0*/ __Vdlyvdim0__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0;
    __Vdlyvdim0__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 = 0;
    CData/*5:0*/ __Vdlyvval__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0;
    __Vdlyvval__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0;
    __Vdlyvset__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 = 0;
    CData/*2:0*/ __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count = 0;
    CData/*1:0*/ __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr = 0;
    CData/*1:0*/ __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr = 0;
    CData/*1:0*/ __Vdlyvdim0__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0;
    __Vdlyvdim0__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 = 0;
    IData/*31:0*/ __Vdlyvval__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0;
    __Vdlyvval__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0;
    __Vdlyvset__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 = 0;
    IData/*16:0*/ __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q = 0;
    CData/*0:0*/ __Vdlyvset__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v0;
    __Vdlyvset__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4;
    __Vdlyvdim0__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4 = 0;
    SData/*12:0*/ __Vdlyvval__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4;
    __Vdlyvval__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4 = 0;
    CData/*0:0*/ __Vdlyvset__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4;
    __Vdlyvset__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4 = 0;
    CData/*3:0*/ __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q = 0;
    CData/*0:0*/ __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck = 0;
    CData/*7:0*/ __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter = 0;
    CData/*0:0*/ __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck = 0;
    CData/*7:0*/ __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter = 0;
    CData/*0:0*/ __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck = 0;
    CData/*7:0*/ __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__qpi__DOT__counter;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__qpi__DOT__counter = 0;
    // Body
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q 
        = vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__msi_reset 
        = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset;
    __Vdly__spi_sck = vlSelf->__PVT__spi_sck;
    vlSelf->__Vdly__lspi__DOT__mspi__DOT__spi_wb_ack_o 
        = vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_ack_o;
    vlSelf->__Vdly__spi_mosi = vlSelf->__PVT__spi_mosi;
    vlSelf->__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip 
        = vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip;
    vlSelf->__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt 
        = vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__lsr5r 
        = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__qpi__DOT__counter 
        = vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi__DOT__counter;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter 
        = vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q 
        = vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter 
        = vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__state 
        = vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck 
        = vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
    __Vdlyvset__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v0 = 0U;
    __Vdlyvset__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4 = 0U;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck 
        = vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck 
        = vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q 
        = vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__msr 
        = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__msr;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rf_pop 
        = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd 
        = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd 
        = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd 
        = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd 
        = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd 
        = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd;
    __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
        = vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U];
    __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
        = vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U];
    __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
        = vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U];
    __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
        = vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U];
    vlSelf->__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
        = vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl;
    __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt 
        = vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt;
    vlSelf->__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge 
        = vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
        = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__counter_t 
        = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__counter_t;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
        = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr 
        = vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q 
        = vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q 
        = vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter 
        = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
        = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
        = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
        = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
        = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tstate 
        = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__tstate;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
        = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity 
        = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error 
        = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error 
        = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
        = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
        = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate 
        = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rstate;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__dlc 
        = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__dlc;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr 
        = vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr;
    __Vdlyvset__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 = 0U;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
        = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rf_count 
        = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_count;
    __Vdlyvset__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 0U;
    __Vdlyvset__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0U;
    __Vdlyvset__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0U;
    __Vdlyvset__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 = 0U;
    __Vdlyvset__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0U;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
        = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
        = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tf_count 
        = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__tf_count;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count 
        = vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count 
        = vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr 
        = vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr 
        = vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr;
    __Vdlyvset__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 = 0U;
    __Vdly__spi_sck = (1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                             & ((((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                  & (0U == (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))) 
                                 & ((0U != (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
                                    | (IData)(vlSelf->__PVT__spi_sck)))
                                 ? (~ (IData)(vlSelf->__PVT__spi_sck))
                                 : (IData)(vlSelf->__PVT__spi_sck))));
    vlSelf->__Vdly__lspi__DOT__mspi__DOT__spi_wb_ack_o 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_cyc_i) 
                                               & (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_stb_i)) 
                                              & (~ (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_ack_o))));
    vlSelf->__Vdly__spi_mosi = (1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                                      & ((1U & ((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk) 
                                                | (~ (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))
                                          ? (vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[
                                             (3U & 
                                              (((0x800U 
                                                 & (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                                 ? 
                                                ((IData)(vlSelf->lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                                 - (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                                 : 
                                                ((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                                 - (IData)(1U))) 
                                               >> 5U))] 
                                             >> (0x1fU 
                                                 & ((0x800U 
                                                     & (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                                     ? 
                                                    ((IData)(vlSelf->lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                                     - (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                                     : 
                                                    ((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                                     - (IData)(1U)))))
                                          : (IData)(vlSelf->__PVT__spi_mosi))));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r 
        = (1U & ((IData)(vlSymsp->TOP.reset) | ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write)
                                                 ? 0U
                                                 : 
                                                ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                                 | ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr6) 
                                                    & (~ (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d)))))));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                   ? 0U : ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                           | ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr7) 
                              & (~ (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d)))))));
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__lsr5r 
        = (1U & ((IData)(vlSymsp->TOP.reset) | ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write)
                                                 ? 0U
                                                 : 
                                                ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                                 | ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr5) 
                                                    & (~ (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d)))))));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                   ? 0U : (1U & ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                 | (((IData)(vlSelf->__VdfgTmp_hc8b8208b__0) 
                                     >> 2U) & (~ (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d))))))));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                   ? 0U : (1U & ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                 | ((IData)(vlSelf->__VdfgTmp_hc8b8208b__0) 
                                    & (~ (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d))))))));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                   ? 0U : (1U & ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                 | (((IData)(vlSelf->__VdfgTmp_hc8b8208b__0) 
                                     >> 1U) & (~ (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d))))))));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 (((((1U == (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)) 
                     & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)) 
                    & (~ (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse))) 
                   | (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset))
                   ? 0U : ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r) 
                           | ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr0) 
                              & (~ (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d)))))));
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__msr_read)
                   ? 0U : (((~ (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                            & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))
                            ? 1U : ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd) 
                                    & ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
                                       >> 3U))))));
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read)
                   ? 0U : (((~ (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                            & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))
                            ? 1U : ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd) 
                                    & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__ier))))));
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                   ? 0U : (((~ (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                            & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))
                            ? 1U : ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd) 
                                    & ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
                                       >> 2U))))));
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 ((((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_count) 
                    == (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level)) 
                   & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read))
                   ? 0U : (((~ (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                            & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))
                            ? 1U : ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd) 
                                    & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__ier))))));
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write) 
                   | ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__iir_read) 
                      & (2U == (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__iir))))
                   ? 0U : (((~ (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                            & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))
                            ? 1U : ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd) 
                                    & ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
                                       >> 1U))))));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                   ? 0U : ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                           | ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun) 
                              & (~ (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d)))))));
    vlSelf->__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 (((((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                     & (~ (IData)(vlSelf->__PVT__spi_sck))) 
                    & (1U == (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))) 
                   | ((~ (IData)((0U != (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)))) 
                      & (IData)(vlSelf->__PVT__spi_sck))) 
                  | (((~ (IData)((0U != (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)))) 
                      & ((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                         >> 8U)) & (~ (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    __Vtableidx3 = (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__msr_read) 
                     << 0xaU) | (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd) 
                                  << 9U) | (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__iir_read) 
                                             << 8U) 
                                            | (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write) 
                                                << 7U) 
                                               | (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd) 
                                                   << 6U) 
                                                  | (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read) 
                                                      << 5U) 
                                                     | (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd) 
                                                         << 4U) 
                                                        | (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd) 
                                                            << 3U) 
                                                           | (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask) 
                                                               << 2U) 
                                                              | (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd) 
                                                                  << 1U) 
                                                                 | (IData)(vlSymsp->TOP.reset)))))))))));
    vlSelf->__PVT__luart__DOT__muart__DOT__interrupt 
        = VysyxSoCFull__ConstPool__TABLE_h10c88e1c_0
        [__Vtableidx3];
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad 
        = ((IData)(vlSymsp->TOP.reset) | (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    __Vtableidx8 = (((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w) 
                     << 3U) | (((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_accept_w) 
                                << 2U) | (((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w) 
                                           << 1U) | (IData)(vlSymsp->TOP.reset))));
    if ((1U & VysyxSoCFull__ConstPool__TABLE_h69a2ee77_0
         [__Vtableidx8])) {
        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q 
            = VysyxSoCFull__ConstPool__TABLE_h4032e768_0
            [__Vtableidx8];
    }
    if ((2U & VysyxSoCFull__ConstPool__TABLE_h69a2ee77_0
         [__Vtableidx8])) {
        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q 
            = VysyxSoCFull__ConstPool__TABLE_hc6114f20_0
            [__Vtableidx8];
    }
    vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge 
        = ((~ (IData)(vlSymsp->TOP.reset)) & ((((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                                & (IData)(vlSelf->__PVT__spi_sck)) 
                                               & (1U 
                                                  == (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))) 
                                              | (((~ (IData)(
                                                             (0U 
                                                              != (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)))) 
                                                  & (~ (IData)(vlSelf->__PVT__spi_sck))) 
                                                 & (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx = 4U;
        __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q = 0x2774U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = 1U;
        vlSelf->__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = 0U;
        vlSelf->__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt = 0U;
        __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__qpi__DOT__counter = 0U;
        __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter = 0U;
        __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q = 0U;
        __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter = 0U;
        __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck = 0U;
        __Vdlyvset__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v0 = 1U;
        __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck = 0U;
        __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck = 0U;
        __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__msr = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = 0U;
        __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] = 0U;
        __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] = 0U;
        __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] = 0U;
        __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] = 0U;
        vlSelf->__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl = 0U;
        __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt = 0xffffU;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b = 0x9fU;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__counter_t = 0x27fU;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__block_cnt = 0U;
        __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__dlc = 0U;
        __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rf_count = 0U;
        __Vdlyvset__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 1U;
        __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count = 0U;
        __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count = 0U;
        __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr = 0U;
        __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr = 0U;
        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_buffer_q = 0U;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in = 0U;
        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q = 0U;
        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q = 2U;
        __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__state = 0U;
        vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode = 0U;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__fcr = 3U;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__scratch = 0U;
        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q = 0U;
        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q = 1U;
        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q = 2U;
        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q = 0U;
        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q = 0U;
        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = 0U;
        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q = 0U;
        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cs = 0U;
        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 7U;
        vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr = 0U;
        vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr = 0U;
        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q = 0U;
        vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss = 0U;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun = 0U;
        __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q = 0U;
        __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q = 0U;
        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q = 0U;
        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q = 0U;
    } else {
        if ((0U == vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
            __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q = 0x30cU;
            vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q = 1U;
        } else {
            __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q 
                = (0x1ffffU & (vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q 
                               - (IData)(1U)));
            if ((9U == (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q = 0U;
            }
        }
        if (vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset) {
            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = 0U;
        } else if (vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__msr_read) {
            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = 1U;
        }
        if ((1U & (((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                    >> 8U) & (~ (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            vlSelf->__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = 1U;
        } else if ((((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                     & (~ (IData)((0U != (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))))) 
                    & (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge))) {
            vlSelf->__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = 0U;
        }
        vlSelf->__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt 
            = (0xffU & ((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)
                         ? ((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)
                             ? ((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                - (IData)(1U)) : (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                         : ((0U != (0x7fU & (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)))
                             ? (0x7fU & (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                             : 0x80U)));
        if (((IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck) 
             & (~ (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mode_done)))) {
            __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__qpi__DOT__counter 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi__DOT__counter)));
        } else if ((1U & (~ (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi__DOT__state)))) {
            __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__qpi__DOT__counter = 0U;
        }
        if (((IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck) 
             & (~ (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)))) {
            __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter)));
        } else if ((0U == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state))) {
            __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter = 0U;
        }
        __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q 
            = ((0xeU & ((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q) 
                        << 1U)) | (4U == (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)));
        if (((IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck) 
             & (~ (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done)))) {
            __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)));
        } else if ((0U == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state))) {
            __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter = 0U;
        }
        if (vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n) {
            if ((0U == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state))) {
                __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck = 0U;
            }
        } else {
            __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck 
                = (1U & (~ (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck)));
        }
        if ((1U & (~ ((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    if ((1U & (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                        __Vdlyvval__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4 
                            = (0x1fffU & (vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                          >> 0xcU));
                        __Vdlyvset__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4 = 1U;
                        __Vdlyvdim0__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4 
                            = (3U & (vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                     >> 0xaU));
                    }
                }
                if ((1U & (~ ((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)))) {
                        if ((0x32U == vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
                            vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q = 1U;
                        }
                    }
                }
            }
            if ((4U & (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                if ((2U & (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)))) {
                        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q 
                            = (0xfU & (~ (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w)));
                    }
                    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q 
                        = ((1U & (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                            ? vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q
                            : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_wdata);
                } else if ((1U & (~ (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)))) {
                    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q = 0U;
                }
            }
        }
        if (vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n) {
            if ((0U == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state))) {
                __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck = 0U;
            }
        } else {
            __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck 
                = (1U & (~ (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck)));
        }
        if (vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n) {
            if ((1U & (~ (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi__DOT__state)))) {
                __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck = 0U;
            }
        } else {
            __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck 
                = (1U & (~ (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck)));
        }
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__msr 
            = ((0xf0U & (IData)(__Vdly__luart__DOT__muart__DOT__Uregs__DOT__msr)) 
               | ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset)
                   ? 0U : (0xfU & ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__msr) 
                                   | (0xeU ^ (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals))))));
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__msr 
            = ((0xfU & (IData)(__Vdly__luart__DOT__muart__DOT__Uregs__DOT__msr)) 
               | (((IData)((0x18U == (0x18U & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__mcr)))) 
                   << 7U) | (((IData)((0x14U == (0x14U 
                                                 & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__mcr)))) 
                              << 6U) | (((IData)((0x11U 
                                                  == 
                                                  (0x11U 
                                                   & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__mcr)))) 
                                         << 5U) | ((IData)(
                                                           (0x10U 
                                                            != 
                                                            (0x12U 
                                                             & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__mcr)))) 
                                                   << 4U)))));
        if (vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop) {
            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = 0U;
        } else if ((((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__reg_re) 
                     & (0U == (7U & vlSelf->__PVT___axi42apb_auto_out_paddr))) 
                    & (~ ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                          >> 7U)))) {
            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = 1U;
        }
        if ((1U & ((IData)(vlSelf->lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch) 
                   & (~ (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            if (((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__xip_active)
                  ? 8U : 0U)) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xffffffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0xff000000U & vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_dat_i));
            }
            if (((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__xip_active)
                  ? 4U : 0U)) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xff00ffffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0xff0000U & vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_dat_i));
            }
            if (((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__xip_active)
                  ? 2U : 0U)) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xffff00ffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0xff00U & vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_dat_i));
            }
            if (((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__xip_active)
                  ? 1U : 0U)) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xffffff00U & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0xffU & vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_dat_i));
            }
        } else if ((1U & (((IData)(vlSelf->lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch) 
                           >> 1U) & (~ (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            if (((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__xip_active)
                  ? 8U : 0U)) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xffffffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0xff000000U & vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_dat_i));
            }
            if (((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__xip_active)
                  ? 4U : 0U)) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xff00ffffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0xff0000U & vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_dat_i));
            }
            if (((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__xip_active)
                  ? 2U : 0U)) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xffff00ffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0xff00U & vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_dat_i));
            }
            if (((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__xip_active)
                  ? 1U : 0U)) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xffffff00U & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0xffU & vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_dat_i));
            }
        } else if ((1U & (((IData)(vlSelf->lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch) 
                           >> 2U) & (~ (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            if (((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__xip_active)
                  ? 8U : 0U)) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xffffffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0xff000000U & vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_dat_i));
            }
            if (((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__xip_active)
                  ? 4U : 0U)) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xff00ffffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0xff0000U & vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_dat_i));
            }
            if (((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__xip_active)
                  ? 2U : 0U)) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xffff00ffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0xff00U & vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_dat_i));
            }
            if (((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__xip_active)
                  ? 1U : 0U)) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xffffff00U & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0xffU & vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_dat_i));
            }
        } else if ((IData)((((IData)(vlSelf->lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch) 
                             >> 3U) & (~ (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            if (((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__xip_active)
                  ? 8U : 0U)) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xffffffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0xff000000U & vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_dat_i));
            }
            if (((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__xip_active)
                  ? 4U : 0U)) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xff00ffffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0xff0000U & vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_dat_i));
            }
            if (((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__xip_active)
                  ? 2U : 0U)) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xffff00ffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0xff00U & vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_dat_i));
            }
            if (((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__xip_active)
                  ? 1U : 0U)) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xffffff00U & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0xffU & vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_dat_i));
            }
        } else {
            __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[(3U 
                                                                             & ((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos) 
                                                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x1fU & (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos)))) 
                    & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[
                    (3U & ((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos) 
                           >> 5U))]) | ((1U & ((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk)
                                                ? (
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull.__Vcellinp__bitrev__ss) 
                                                    | (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__bitrev__DOT__tx_shift_reg)) 
                                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull.__Vcellinp__flash__ss) 
                                                      | ((((2U 
                                                            == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__state)) 
                                                           & (0U 
                                                              == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__counter)))
                                                           ? vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__data_bswap
                                                           : vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__data) 
                                                         >> 0x1fU)))
                                                : (
                                                   vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[
                                                   (3U 
                                                    & ((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos))))) 
                                        << (0x1fU & (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos))));
        }
        if (((((IData)(vlSelf->lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
               & (0x10U == (0x1cU & (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_adr_i)))) 
              & (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_we_i)) 
             & (~ (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)))) {
            if (((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__xip_active)
                  ? 1U : 0U)) {
                vlSelf->__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
                    = ((0x3f00U & (IData)(vlSelf->__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)) 
                       | (0xffU & (vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_dat_i 
                                   | (1U & (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)))));
            }
            if (((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__xip_active)
                  ? 2U : 0U)) {
                vlSelf->__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
                    = ((0xffU & (IData)(vlSelf->__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)) 
                       | (0x3f00U & vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_dat_i));
            }
        } else if ((((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                     & (~ (IData)((0U != (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))))) 
                    & (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge))) {
            vlSelf->__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
                = (0x3effU & (IData)(vlSelf->__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl));
        }
        __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt 
            = (0xffffU & ((1U & ((~ (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)) 
                                 | (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_zero)))
                           ? (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)
                           : ((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt) 
                              - (IData)(1U))));
        if (vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) {
            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
                = (0xffU & ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                            >> 2U));
        } else if (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__enable) 
                    & (0U != (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b)))) {
            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
                = (0xffU & ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b) 
                            - (IData)(1U)));
        }
        if ((((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
              | (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)) 
             | (0U == (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)))) {
            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__counter_t 
                = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value;
        } else if (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__enable) 
                    & (0U != (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__counter_t)))) {
            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__counter_t 
                = (0x3ffU & ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__counter_t) 
                             - (IData)(1U)));
        }
        if (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
             & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write))) {
            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
                = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__block_value;
        } else if (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__enable) 
                    & (0U != (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))) {
            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
                = (0xffU & ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt) 
                            - (IData)(1U)));
        }
        if (((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w) 
             & (0U != (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count)))) {
            __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr)));
        }
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__dlc 
            = (0xffffU & ((1U & ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc) 
                                 | (~ (IData)((0U != (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__dlc))))))
                           ? ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                              - (IData)(1U)) : ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__dlc) 
                                                - (IData)(1U))));
        if (((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q) 
             & (4U != (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count)))) {
            __Vdlyvval__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 
                = vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q;
            __Vdlyvset__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 = 1U;
            __Vdlyvdim0__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 
                = vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr;
            __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr)));
        }
        if (vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset) {
            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rf_count = 0U;
            __Vdlyvset__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 1U;
        } else if ((2U == (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)))) {
            if ((0x10U > (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_count))) {
                __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rf_count 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)));
                __Vdlyvval__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 
                    = (7U & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in));
                __Vdlyvset__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 1U;
                __Vdlyvdim0__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 
                    = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
                __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
                    = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1;
            }
        } else if ((1U == (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)))) {
            if ((0U < (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_count))) {
                __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rf_count 
                    = (0x1fU & ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_count) 
                                - (IData)(1U)));
                __Vdlyvset__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 = 1U;
                __Vdlyvdim0__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 
                    = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
                __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom)));
            }
        } else if ((3U == (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)))) {
            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom)));
            __Vdlyvval__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 
                = (7U & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in));
            __Vdlyvset__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 1U;
            __Vdlyvdim0__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 
                = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
                = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1;
        }
        if ((((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w) 
              & (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_fifo_accept_w)) 
             & (~ ((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w) 
                   & (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_valid_w))))) {
            __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count 
                = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)));
        } else if (((~ ((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w) 
                        & (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_fifo_accept_w))) 
                    & ((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w) 
                       & (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_valid_w)))) {
            __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count 
                = (7U & ((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count) 
                         - (IData)(1U)));
        }
        if ((((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q) 
              & (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__accept_o)) 
             & (~ ((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w) 
                   & (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_valid_w))))) {
            __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count 
                = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count)));
        } else if (((~ ((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q) 
                        & (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__accept_o))) 
                    & ((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w) 
                       & (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_valid_w)))) {
            __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count 
                = (7U & ((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w) 
             & (0U != (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))) {
            __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr)));
        }
        if (((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w) 
             & (4U != (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))) {
            __Vdlyvval__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 
                = (((IData)(vlSelf->__PVT___axi4delay_delayer_out_arvalid) 
                    & (IData)(vlSelf->__PVT___axi4delay_delayer_in_arready))
                    ? (0x20U | (((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_arlen)) 
                                 << 4U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_arid)))
                    : (((IData)(vlSelf->__PVT___axi4delay_delayer_out_awvalid) 
                        & (IData)(vlSelf->__PVT___axi4delay_delayer_in_awready))
                        ? (((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awlen)) 
                            << 4U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awid))
                        : (((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w) 
                            << 5U) | (((0U == (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q)) 
                                       << 4U) | (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q)))));
            __Vdlyvset__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 = 1U;
            __Vdlyvdim0__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 
                = vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr;
            __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr)));
        }
        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q 
            = vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r;
        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q 
            = vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r;
        if ((0U == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state))) {
            if (vlSelf->__PVT___apbxbar_auto_anon_out_2_psel) {
                vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode = 1U;
            }
            __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__state 
                = ((8U == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi__DOT__counter))
                    ? 2U : 0U);
        } else if ((1U == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state))) {
            __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__state 
                = ((((IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done) 
                     & (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)) 
                    | ((IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done) 
                       & (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re)))
                    ? 0U : 1U);
        } else if ((2U == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state))) {
            __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__state 
                = ((((IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done) 
                     & (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)) 
                    | ((IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done) 
                       & (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re)))
                    ? 0U : 2U);
        }
        if (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__reg_we) 
             & (2U == (7U & vlSelf->__PVT___axi42apb_auto_out_paddr)))) {
            vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__fcr 
                = (3U & ((IData)(vlSelf->luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i) 
                         >> 6U));
        }
        if (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__reg_we) 
             & (7U == (7U & vlSelf->__PVT___axi42apb_auto_out_paddr)))) {
            vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__scratch 
                = vlSelf->luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i;
        }
        if ((8U & (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            if ((4U & (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q = 1U;
                vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
                vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = 0U;
                vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 7U;
            } else if ((2U & (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q = 1U;
                vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
                vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = 0U;
                vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 7U;
            } else if ((1U & (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
                vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = 0U;
                vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 1U;
            } else {
                if ((9U != (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r))) {
                    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q 
                        = (3U & (vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                 >> 0xaU));
                }
                vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                    = ((0x1bffU & (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)) 
                       | ((9U == (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r)) 
                          << 0xaU));
                vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 2U;
            }
            if ((1U & (~ ((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)))) {
                        if ((9U == (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r))) {
                            vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q = 0U;
                        } else {
                            vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q 
                                = ((~ ((IData)(1U) 
                                       << (3U & (vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                                 >> 0xaU)))) 
                                   & (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q));
                        }
                    }
                    if ((1U & (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cs = 0U;
                    }
                }
            }
        } else {
            if ((4U & (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                if ((2U & (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)))) {
                        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q = 0U;
                        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q 
                            = (3U & (vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                     >> 0xaU));
                    }
                    if ((1U & (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                            = (0x1bffU & (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 7U;
                    } else {
                        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                            = (0x1feU & (vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                         >> 1U));
                        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                            = (0x1bffU & (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 4U;
                    }
                } else if ((1U & (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q = 1U;
                    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
                    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = 0U;
                    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 7U;
                } else {
                    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q 
                        = (3U & (vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                 >> 0xaU));
                    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                        = (0x1feU & (vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                     >> 1U));
                    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                        = (0x1bffU & (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 5U;
                }
            } else if ((2U & (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)))) {
                    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q = 1U;
                }
                if ((1U & (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q 
                        = (3U & (vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                 >> 0xaU));
                    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                        = (0x1fffU & (vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                      >> 0xcU));
                    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 3U;
                } else {
                    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
                    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = 0U;
                    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 7U;
                }
            } else if ((1U & (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q = 1U;
                vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
                vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = 0U;
                vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 7U;
            } else if ((0x32U != vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
                if ((0x28U != vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
                    if ((1U & (~ ((0x14U == vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q) 
                                  | (0x1eU == vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q))))) {
                        if ((0xaU != vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
                            vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
                        }
                    }
                }
                if ((0x28U == vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
                    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                        = (0x400U | (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 2U;
                } else {
                    if ((1U & (~ ((0x14U == vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q) 
                                  | (0x1eU == vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q))))) {
                        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                            = ((0xaU == vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)
                                ? 0x21U : 0U);
                    }
                    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q 
                        = (((0x14U == vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q) 
                            | (0x1eU == vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q))
                            ? 1U : ((0xaU == vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)
                                     ? 0U : 7U));
                }
            }
            if ((1U & (~ ((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    if ((1U & (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q 
                            = ((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q) 
                               | (0xfU & ((IData)(1U) 
                                          << (3U & 
                                              (vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                               >> 0xaU)))));
                        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cs 
                            = (1U & (vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                     >> 0x19U));
                    }
                }
            }
        }
        if (((1U != (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)) 
             & (0U != (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r)))) {
            vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q 
                = vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r;
        }
        if (((0U == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)) 
             & ((IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr) 
                | (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr_qpi)))) {
            vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                = (0xffffffU & vlSelf->__PVT___axi42apb_auto_out_paddr);
        }
        if (((0U == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)) 
             & ((IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd) 
                | (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd_qpi)))) {
            vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                = (0xfffffcU & vlSelf->__PVT___axi42apb_auto_out_paddr);
        }
        if (((((IData)(vlSelf->lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
               & (0x18U == (0x1cU & (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_adr_i)))) 
              & (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_we_i)) 
             & (~ (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)))) {
            if (((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__xip_active)
                  ? 1U : 0U)) {
                vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss 
                    = (0xffU & vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_dat_i);
            }
        }
        if (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset) 
             | (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask))) {
            vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun = 0U;
        } else if (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__tf_push) 
                    & (0x10U == (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__tf_count)))) {
            vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun = 1U;
        }
        if ((((0U != (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w)) 
              | (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w)) 
             & (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_accept_w))) {
            if ((0U == (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q))) {
                vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q = 0U;
                vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q = 0U;
            } else {
                __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__1__axlen 
                    = vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q;
                __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q 
                    = (0xffU & ((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q) 
                                - (IData)(1U)));
                __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__1__axtype 
                    = vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q;
                __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__1__addr 
                    = vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q;
                vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask = 0U;
                if ((0U == (IData)(__Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__1__axtype))) {
                    __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__1__Vfuncout 
                        = __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__1__addr;
                } else if ((2U == (IData)(__Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__1__axtype))) {
                    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask 
                        = ((0U == (IData)(__Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__1__axlen))
                            ? 3U : ((1U == (IData)(__Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__1__axlen))
                                     ? 7U : ((3U == (IData)(__Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__1__axlen))
                                              ? 0xfU
                                              : ((7U 
                                                  == (IData)(__Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__1__axlen))
                                                  ? 0x1fU
                                                  : 0x3fU))));
                    __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__1__Vfuncout 
                        = ((__Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__1__addr 
                            & (~ vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask)) 
                           | (((IData)(4U) + __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__1__addr) 
                              & vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask));
                } else {
                    __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__1__Vfuncout 
                        = ((IData)(4U) + __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__1__addr);
                }
                __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q 
                    = __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__1__Vfuncout;
            }
        }
        if (((IData)(vlSelf->__PVT___axi4delay_delayer_out_awvalid) 
             & (IData)(vlSelf->__PVT___axi4delay_delayer_in_awready))) {
            __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q 
                = (1U & (~ (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)));
            if (((IData)(vlSelf->__PVT___axi4delay_delayer_out_wvalid) 
                 & (IData)(vlSelf->__PVT___axi4delay_delayer_in_wready))) {
                __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__axlen 
                    = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awlen;
                __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__axtype 
                    = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awburst;
                vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q 
                    = (1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_wlast)));
                __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q 
                    = (0xffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awlen) 
                                - (IData)(1U)));
                __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__addr 
                    = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awaddr;
                vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask = 0U;
                if ((0U == (IData)(__Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__axtype))) {
                    __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__Vfuncout 
                        = __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__addr;
                } else if ((2U == (IData)(__Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__axtype))) {
                    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask 
                        = ((0U == (IData)(__Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__axlen))
                            ? 3U : ((1U == (IData)(__Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__axlen))
                                     ? 7U : ((3U == (IData)(__Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__axlen))
                                              ? 0xfU
                                              : ((7U 
                                                  == (IData)(__Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__axlen))
                                                  ? 0x1fU
                                                  : 0x3fU))));
                    __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__Vfuncout 
                        = ((__Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__addr 
                            & (~ vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask)) 
                           | (((IData)(4U) + __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__addr) 
                              & vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask));
                } else {
                    __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__Vfuncout 
                        = ((IData)(4U) + __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__addr);
                }
                __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q 
                    = __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__Vfuncout;
            } else {
                vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q = 1U;
                __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q 
                    = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awlen;
                __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q 
                    = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awaddr;
            }
        } else if (((IData)(vlSelf->__PVT___axi4delay_delayer_out_arvalid) 
                    & (IData)(vlSelf->__PVT___axi4delay_delayer_in_arready))) {
            __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q 
                = (1U & (~ (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)));
            __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__axlen 
                = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_arlen;
            __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__axtype 
                = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_arburst;
            vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q 
                = (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_arlen));
            __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q 
                = (0xffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_arlen) 
                            - (IData)(1U)));
            __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__addr 
                = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_araddr;
            vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask = 0U;
            if ((0U == (IData)(__Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__axtype))) {
                __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__Vfuncout 
                    = __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__addr;
            } else if ((2U == (IData)(__Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__axtype))) {
                vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask 
                    = ((0U == (IData)(__Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__axlen))
                        ? 3U : ((1U == (IData)(__Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__axlen))
                                 ? 7U : ((3U == (IData)(__Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__axlen))
                                          ? 0xfU : 
                                         ((7U == (IData)(__Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__axlen))
                                           ? 0x1fU : 0x3fU))));
                __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__Vfuncout 
                    = ((__Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__addr 
                        & (~ vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask)) 
                       | (((IData)(4U) + __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__addr) 
                          & vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask));
            } else {
                __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__Vfuncout 
                    = ((IData)(4U) + __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__addr);
            }
            __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q 
                = __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__Vfuncout;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tf_count = 0U;
    } else if (vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset) {
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tf_count = 0U;
    } else if ((2U == (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__tf_push) 
                        << 1U) | (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop)))) {
        if (VL_UNLIKELY((0x10U > (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__tf_count)))) {
            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tf_count 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__tf_count)));
            VL_WRITEF("%c",8,vlSelf->luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i);
            Verilated::runFlushCallbacks();
            vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top 
                = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1;
        }
    } else if ((1U == (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__tf_push) 
                        << 1U) | (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop)))) {
        if ((0U < (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__tf_count))) {
            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom)));
            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tf_count 
                = (0x1fU & ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__tf_count) 
                            - (IData)(1U)));
        }
    } else if (VL_UNLIKELY((3U == (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__tf_push) 
                                    << 1U) | (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop))))) {
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom)));
        VL_WRITEF("%c",8,vlSelf->luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i);
        Verilated::runFlushCallbacks();
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top 
            = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1;
    }
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter 
        = __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter;
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter 
        = __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter;
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck 
        = __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
    if (__Vdlyvset__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v0) {
        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0U] = 0U;
        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1U] = 0U;
        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2U] = 0U;
        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3U] = 0U;
    }
    if (__Vdlyvset__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4) {
        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[__Vdlyvdim0__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4] 
            = __Vdlyvval__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4;
    }
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck 
        = __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck 
        = __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck;
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q 
        = __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q;
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__msi_reset;
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__msr 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__msr;
    vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
        = __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U];
    vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
        = __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U];
    vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
        = __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U];
    vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
        = __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U];
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__counter_t 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__counter_t;
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__block_cnt;
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__lsr5r;
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr 
        = __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr;
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr 
        = __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr;
    if (__Vdlyvset__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0) {
        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[__Vdlyvdim0__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0] 
            = __Vdlyvval__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0;
    }
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
    if (__Vdlyvset__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0) {
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0U] = 0U;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1U] = 0U;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2U] = 0U;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3U] = 0U;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4U] = 0U;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5U] = 0U;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6U] = 0U;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7U] = 0U;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8U] = 0U;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9U] = 0U;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xaU] = 0U;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xbU] = 0U;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xcU] = 0U;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xdU] = 0U;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xeU] = 0U;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xfU] = 0U;
    }
    if (__Vdlyvset__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16) {
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0U] = 0U;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1U] = 0U;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2U] = 0U;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3U] = 0U;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4U] = 0U;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5U] = 0U;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6U] = 0U;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7U] = 0U;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8U] = 0U;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9U] = 0U;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xaU] = 0U;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xbU] = 0U;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xcU] = 0U;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xdU] = 0U;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xeU] = 0U;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xfU] = 0U;
    }
    if (__Vdlyvset__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32) {
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vdlyvdim0__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32] 
            = __Vdlyvval__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    }
    if (__Vdlyvset__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33) {
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vdlyvdim0__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33] = 0U;
    }
    if (__Vdlyvset__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34) {
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vdlyvdim0__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34] 
            = __Vdlyvval__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    }
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count 
        = __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count;
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr 
        = __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr;
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr 
        = __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr;
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count 
        = __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count;
    if (__Vdlyvset__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0) {
        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[__Vdlyvdim0__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0] 
            = __Vdlyvval__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0;
    }
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd;
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi__DOT__counter 
        = __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__qpi__DOT__counter;
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state 
        = __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__state;
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q 
        = __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q;
    vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt 
        = __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt;
    vlSelf->__PVT__spi_sck = __Vdly__spi_sck;
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q 
        = __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q;
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q 
        = __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q;
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d 
        = ((IData)(vlSymsp->TOP.reset) | (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d 
        = ((IData)(vlSymsp->TOP.reset) | (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d 
        = ((~ (IData)(vlSymsp->TOP.reset)) & ((IData)(vlSelf->__VdfgTmp_hc8b8208b__0) 
                                              >> 2U));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__VdfgTmp_hc8b8208b__0)));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 ((IData)(vlSelf->__VdfgTmp_hc8b8208b__0) 
                  >> 1U)));
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n 
        = (1U & ((IData)(vlSymsp->TOP.reset) | (~ (
                                                   (1U 
                                                    == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate)) 
                                                   | (2U 
                                                      == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate))))));
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n 
        = (1U & ((IData)(vlSymsp->TOP.reset) | (~ (
                                                   (1U 
                                                    == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate)) 
                                                   | (2U 
                                                      == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate))))));
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n 
        = (1U & ((IData)(vlSymsp->TOP.reset) | (~ (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi__DOT__state))));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    __Vtableidx4 = (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd) 
                     << 5U) | (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd) 
                                << 4U) | (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd) 
                                           << 3U) | 
                                          (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rda_int) 
                                            << 2U) 
                                           | (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP.reset))))));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__iir 
        = VysyxSoCFull__ConstPool__TABLE_h4abec798_0
        [__Vtableidx4];
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__reg_we) 
                                               & (0U 
                                                  == 
                                                  (7U 
                                                   & vlSelf->__PVT___axi42apb_auto_out_paddr))) 
                                              & ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                                 >> 7U)));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)));
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 ((7U == (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)) 
                  | ((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q) 
                     >> 3U))));
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_valid_w 
        = (0U != (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count));
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__accept_o 
        = (4U != (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count));
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_fifo_accept_w 
        = (4U != (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count));
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_valid_w 
        = (0U != (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count));
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w 
        = vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram
        [vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr];
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0 
        = ((IData)(vlSymsp->TOP.reset) | (IData)(vlSymsp->TOP.externalPins_uart_rx));
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mode_done 
        = (8U == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi__DOT__counter));
    vlSelf->lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h33334145__0 
        = ((0U == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
           | (8U == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi__DOT__counter)));
    __Vtableidx1 = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__fcr;
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level 
        = VysyxSoCFull__ConstPool__TABLE_h05f4911a_0
        [__Vtableidx1];
    vlSelf->__PVT__sdram_cs = ((2U & (((~ (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cs)) 
                                       << 1U) | (0x3ffffffeU 
                                                 & (((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                     >> 2U) 
                                                    & ((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cs) 
                                                       << 1U))))) 
                               | (IData)((((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                           >> 3U) | (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cs))));
    vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_zero 
        = (0U == (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__reg_we) 
                                               & (2U 
                                                  == 
                                                  (7U 
                                                   & vlSelf->__PVT___axi42apb_auto_out_paddr))) 
                                              & ((IData)(vlSelf->luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i) 
                                                 >> 2U)));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__tf_push 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__reg_we) 
                                               & (0U 
                                                  == 
                                                  (7U 
                                                   & vlSelf->__PVT___axi42apb_auto_out_paddr))) 
                                              & (~ 
                                                 ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                                  >> 7U))));
    vlSelf->__VdfgTmp_hc8b8208b__0 = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom];
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd;
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd;
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd;
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd;
    vlSelf->__PVT___axi4delay_delayer_in_rvalid = (
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count)) 
                                                   & ((0U 
                                                       != (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                                                      & ((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                                         >> 5U)));
    vlSelf->lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgTmp_h95df1406__0 
        = ((0U != (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count)) 
           & ((~ ((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                  >> 5U)) & (0U != (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals = 0U;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__mcr = 0U;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__ier = 0U;
        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q = 0U;
        vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state = 0U;
        vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state = 0U;
        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q = 0U;
        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q 
            = __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q;
        vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider = 0U;
        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q = 0U;
        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0U;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift = 0U;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 0U;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in = 0U;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rstate 
            = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
            = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
            = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error 
            = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error 
            = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity 
            = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
            = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
            = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tstate = 0U;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor = 0U;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 0U;
    } else {
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals = 0xeU;
        if (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__reg_we) 
             & (4U == (7U & vlSelf->__PVT___axi42apb_auto_out_paddr)))) {
            vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__mcr 
                = (0x1fU & (IData)(vlSelf->luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i));
        }
        if (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__reg_we) 
             & (1U == (7U & vlSelf->__PVT___axi42apb_auto_out_paddr)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                          >> 7U)))) {
                vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__ier 
                    = (0xfU & (IData)(vlSelf->luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i));
            }
        }
        if (((IData)(vlSelf->__PVT___axi4delay_delayer_out_awvalid) 
             & (IData)(vlSelf->__PVT___axi4delay_delayer_in_awready))) {
            vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q 
                = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awid;
            vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q 
                = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awburst;
            vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q 
                = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awlen;
        } else if (((IData)(vlSelf->__PVT___axi4delay_delayer_out_arvalid) 
                    & (IData)(vlSelf->__PVT___axi4delay_delayer_in_arready))) {
            vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q 
                = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_arid;
            vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q 
                = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_arburst;
            vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q 
                = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_arlen;
        }
        vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state 
            = vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate;
        vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state 
            = vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate;
        if ((6U == (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q 
                = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_wdata;
        } else if ((8U & (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q))) {
            vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q 
                = vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q;
        }
        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q 
            = __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q;
        if (((((IData)(vlSelf->lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
               & (0x14U == (0x1cU & (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_adr_i)))) 
              & (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_we_i)) 
             & (~ (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)))) {
            if (((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__xip_active)
                  ? 1U : 0U)) {
                vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider 
                    = ((0xff00U & (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)) 
                       | (0xffU & vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_dat_i));
            }
            if (((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__xip_active)
                  ? 2U : 0U)) {
                vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider 
                    = ((0xffU & (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)) 
                       | (0xff00U & vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_dat_i));
            }
        }
        if (vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__enable) {
            if ((8U & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                if ((4U & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0U;
                } else if ((2U & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    if ((1U & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0U;
                    } else if (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                | (0U == (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b)))) {
                        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in 
                            = ((0U == (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))
                                ? 4U : (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                         << 3U) | (
                                                   ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error))));
                        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 1U;
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0U;
                    } else if ((1U & (~ (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error)))) {
                        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in 
                            = (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                << 3U) | (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error) 
                                           << 1U) | (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error)));
                        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 1U;
                        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate = 1U;
                    }
                } else if ((1U & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    if (vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0) {
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate = 4U;
                        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                    } else {
                        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                            = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                    }
                } else {
                    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
                        = (1U & (VL_REDXOR_8(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                 ^ (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity)));
                    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate = 5U;
                }
            } else if ((4U & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                if ((2U & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    if ((1U & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                        if ((0U == (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter))) {
                            if ((8U & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                                __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate = 3U;
                            } else {
                                __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate = 4U;
                                __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error = 0U;
                            }
                        } else {
                            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
                                = (7U & ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter) 
                                         - (IData)(1U)));
                            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate = 2U;
                        }
                        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                    } else {
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
                            = ((2U & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                ? ((1U & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                    ? 7U : 6U) : ((1U 
                                                   & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                   ? 5U
                                                   : 4U));
                        if (vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0) {
                            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate = 2U;
                            vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift = 0U;
                        } else {
                            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate = 6U;
                        }
                        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                            = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                    }
                } else if ((1U & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error 
                        = (1U & ((0x10U & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                  ? ((0x20U & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                      ? (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity)
                                      : (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor))
                                  : ((0x20U & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                      ? (~ (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity))
                                      : (~ (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor)))));
                    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate = 9U;
                } else {
                    if (vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error 
                            = (1U & (~ (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__serial_in)));
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0xaU;
                    }
                    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                }
            } else if ((2U & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                if ((1U & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    if (vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity 
                            = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__serial_in;
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate = 8U;
                    }
                    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                } else {
                    if (vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                        if ((2U & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                            if ((1U & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                                __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
                                    = (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                        << 7U) | (0x7fU 
                                                  & ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                                     >> 1U)));
                            } else {
                                __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
                                    = ((0x80U & (IData)(__Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                           << 6U) | 
                                          (0x3fU & 
                                           ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                            >> 1U))));
                            }
                        } else {
                            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
                                = ((1U & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                    ? ((0xc0U & (IData)(__Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                           << 5U) | 
                                          (0x1fU & 
                                           ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                            >> 1U))))
                                    : ((0xe0U & (IData)(__Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                           << 4U) | 
                                          (0xfU & ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                                   >> 1U)))));
                        }
                    }
                    if (vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0) {
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate = 7U;
                    }
                    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                }
            } else if ((1U & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 0U;
                if (vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate 
                        = ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__serial_in)
                            ? 0U : 6U);
                }
                vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                    = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
            } else {
                vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 0U;
                vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in = 0U;
                vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                if (((~ (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__serial_in)) 
                     & (0U != (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b)))) {
                    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate = 1U;
                }
            }
            if ((4U & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                if ((2U & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tstate = 0U;
                } else if ((1U & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 1U;
                    if ((2U & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                        if ((1U & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 7U;
                            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                                = (1U & VL_REDXOR_8(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out));
                        } else {
                            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 6U;
                            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                                = (1U & VL_REDXOR_32(
                                                     (0x7fU 
                                                      & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out))));
                        }
                    } else if ((1U & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 5U;
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                            = (1U & VL_REDXOR_32((0x3fU 
                                                  & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out))));
                    } else {
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 4U;
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                            = (1U & VL_REDXOR_32((0x1fU 
                                                  & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out))));
                    }
                    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
                        = (0x7fU & ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out) 
                                    >> 1U));
                    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
                        = (1U & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out));
                    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tstate = 1U;
                } else {
                    if ((0U != (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        if ((1U == (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tstate = 0U;
                        } else {
                            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                                = (0x1fU & ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                            - (IData)(1U)));
                        }
                    } else {
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                            = ((0U == (4U & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr)))
                                ? 0xdU : ((4U == (7U 
                                                  & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr)))
                                           ? 0x15U : 0x1dU));
                    }
                    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
                }
            } else if ((2U & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                if ((1U & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                    if ((0U != (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        if ((1U == (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tstate = 4U;
                        } else {
                            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                                = (0x1fU & ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                            - (IData)(1U)));
                        }
                    } else {
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0xfU;
                    }
                    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp 
                        = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
                } else {
                    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp 
                        = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
                    if ((0U != (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        if ((1U == (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                            if ((0U < (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter))) {
                                __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter 
                                    = (7U & ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter) 
                                             - (IData)(1U)));
                                __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
                                    = ((0x40U & (IData)(__Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out)) 
                                       | (0x3fU & ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out) 
                                                   >> 1U)));
                                __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
                                    = (1U & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out));
                                __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tstate = 2U;
                            } else if ((8U & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                                __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
                                    = (1U & ((0x10U 
                                              & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                              ? ((~ 
                                                  ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                                   >> 5U)) 
                                                 & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor))
                                              : (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                                  >> 5U) 
                                                 | (~ (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor)))));
                                __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tstate = 3U;
                            } else {
                                __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tstate = 4U;
                            }
                            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                        } else {
                            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                                = (0x1fU & ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                            - (IData)(1U)));
                        }
                    } else {
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0xfU;
                    }
                }
            } else if ((1U & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
                if ((0U != (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                    if ((1U == (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tstate = 2U;
                    } else {
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                            = (0x1fU & ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                        - (IData)(1U)));
                    }
                } else {
                    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0xfU;
                }
                vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 0U;
            } else if ((0U != (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__tf_count))) {
                vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
                vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
                __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tstate = 5U;
            } else {
                __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tstate = 0U;
                vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
            }
        } else {
            vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
        }
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rstate 
            = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
            = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
            = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error 
            = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error 
            = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity 
            = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
            = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
            = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b;
    }
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter;
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out;
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor;
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter;
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__tstate 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tstate;
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__tf_count 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tf_count;
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi__DOT__state 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi__DOT__nstate));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__thre_int 
        = (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 1U) & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__ms_int 
        = (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 3U) & (0U != (0xfU & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__msr))));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rls_int 
        = (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 2U) & ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                      | ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                         | ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                            | (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r)))));
    vlSelf->__PVT___axi4delay_delayer_in_bvalid = ((IData)(vlSelf->lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgTmp_h95df1406__0) 
                                                   & ((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                                      >> 4U));
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__byte_index 
        = (3U & ((2U == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state))
                  ? (((IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                      >> 1U) - (IData)(3U)) : (((IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                                >> 1U) 
                                               - (IData)(2U))));
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_dout 
        = (0xfU & ((1U == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state))
                    ? ((8U > (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                        ? (1U & (0xebU >> (7U & ((IData)(7U) 
                                                 - (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))))
                        : ((8U == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                            ? (vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                               >> 0x14U) : ((9U == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                             ? (vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                >> 0x10U)
                                             : ((0xaU 
                                                 == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                 ? 
                                                (vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                 >> 0xcU)
                                                 : 
                                                ((0xbU 
                                                  == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                  ? 
                                                 (vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                  >> 8U)
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                   ? 
                                                  (vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 4U)
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                    ? vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                    : 0U)))))))
                    : ((0U == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                        ? 0xeU : ((1U == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                   ? 0xbU : ((2U == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                              ? (vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                 >> 0x14U)
                                              : ((3U 
                                                  == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                  ? 
                                                 (vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                  >> 0x10U)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                   ? 
                                                  (vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 0xcU)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                    ? 
                                                   (vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                    >> 8U)
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                     ? 
                                                    (vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                     >> 4U)
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                      ? vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                      : 0U))))))))));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7 
        = (7U == (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1 
        = (0xfU & ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                   - (IData)(1U)));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0 
        = (0U == (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr5 
        = ((~ (IData)((0U != (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))) 
           & (0U == (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__tf_count)));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__enable 
        = ((~ (IData)(vlSymsp->TOP.reset)) & ((0U != (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__dl)) 
                                              & (~ (IData)(
                                                           (0U 
                                                            != (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__dlc))))));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun = 0U;
        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q = 0U;
        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q = 0U;
        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q = 0U;
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__dl 
            = (0xffU & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__dl));
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__dl 
            = (0xff00U & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__dl));
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr = 3U;
    } else {
        if (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset) 
             | (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask))) {
            vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun = 0U;
        } else if ((((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
                     & (~ (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop))) 
                    & (0x10U == (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)))) {
            vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun = 1U;
        }
        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q 
            = vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q;
        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q 
            = ((0U != (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r))
                ? 1U : (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r));
        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q 
            = vlSymsp->TOP__ysyxSoCFull.__PVT___dq_wire;
        if (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__reg_we) 
             & (1U == (7U & vlSelf->__PVT___axi42apb_auto_out_paddr)))) {
            if ((0x80U & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__dl 
                    = ((0xffU & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__dl)) 
                       | ((IData)(vlSelf->luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i) 
                          << 8U));
            }
        }
        if (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__reg_we) 
             & (0U == (7U & vlSelf->__PVT___axi42apb_auto_out_paddr)))) {
            if ((0x80U & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__dl 
                    = ((0xff00U & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__dl)) 
                       | (IData)(vlSelf->luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i));
            }
        }
        if (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__reg_we) 
             & (3U == (7U & vlSelf->__PVT___axi42apb_auto_out_paddr)))) {
            vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr 
                = vlSelf->luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i;
        }
    }
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rf_pop;
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse 
        = ((~ (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q)) 
           & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_count 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rf_count;
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr6 
        = ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr5) 
           & (0U == (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__tstate)));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__dlc 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__dlc;
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr7 
        = ((0U != (vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                   [0U] | (vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                           [1U] | (vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                   [2U] | (vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                           [3U] | (
                                                   vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                   [4U] 
                                                   | (vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                      [5U] 
                                                      | (vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                         [6U] 
                                                         | (vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                            [7U] 
                                                            | (vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                               [8U] 
                                                               | (vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                  [9U] 
                                                                  | (vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                     [0xaU] 
                                                                     | (vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                        [0xbU] 
                                                                        | (vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                           [0xcU] 
                                                                           | (vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                              [0xdU] 
                                                                              | (vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xeU] 
                                                                                | vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xfU])))))))))))))))) 
           | (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr0 
        = ((0U == (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)) 
           & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rda_int 
        = ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
           & ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_count) 
              >= (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level)));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__ti_int 
        = ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
           & ((0U == (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__counter_t)) 
              & (0U != (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_count))));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__reg_we) 
                                               & (2U 
                                                  == 
                                                  (7U 
                                                   & vlSelf->__PVT___axi42apb_auto_out_paddr))) 
                                              & ((IData)(vlSelf->luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i) 
                                                 >> 1U)));
    __Vtableidx9 = vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q;
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state[0U] 
        = VysyxSoCFull__ConstPool__TABLE_h142cc7a0_0
        [__Vtableidx9][0U];
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state[1U] 
        = VysyxSoCFull__ConstPool__TABLE_h142cc7a0_0
        [__Vtableidx9][1U];
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state[2U] 
        = VysyxSoCFull__ConstPool__TABLE_h142cc7a0_0
        [__Vtableidx9][2U];
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_accept_w 
        = ((4U == (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)) 
           | (6U == (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)));
    vlSelf->lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgTmp_h0622eded__0 
        = ((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_accept_w) 
           & (4U != (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)));
    __Vtableidx2 = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr;
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__block_value 
        = VysyxSoCFull__ConstPool__TABLE_hccb3c341_0
        [__Vtableidx2];
    __Vtableidx5 = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr;
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value 
        = VysyxSoCFull__ConstPool__TABLE_he38796ec_0
        [__Vtableidx5];
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__serial_out 
        = ((~ ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
               >> 6U)) & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__serial_in 
        = ((0x10U & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__mcr))
            ? (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__serial_out)
            : (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
}
