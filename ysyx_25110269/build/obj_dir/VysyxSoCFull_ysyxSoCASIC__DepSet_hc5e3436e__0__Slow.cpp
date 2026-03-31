// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull_ysyxSoCASIC.h"

extern const VlUnpacked<CData/*7:0*/, 256> VysyxSoCFull__ConstPool__TABLE_hccb3c341_0;
extern const VlUnpacked<SData/*9:0*/, 256> VysyxSoCFull__ConstPool__TABLE_he38796ec_0;
extern const VlUnpacked<VlWide<3>/*79:0*/, 16> VysyxSoCFull__ConstPool__TABLE_h142cc7a0_0;
extern const VlUnpacked<CData/*3:0*/, 4> VysyxSoCFull__ConstPool__TABLE_h05f4911a_0;
extern const VlUnpacked<CData/*0:0*/, 256> VysyxSoCFull__ConstPool__TABLE_hb7a25adb_0;
extern const VlUnpacked<CData/*1:0*/, 256> VysyxSoCFull__ConstPool__TABLE_hbbada217_0;

VL_ATTR_COLD void VysyxSoCFull_ysyxSoCASIC___stl_sequent__TOP__ysyxSoCFull__asic__0(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___stl_sequent__TOP__ysyxSoCFull__asic__0\n"); );
    // Init
    CData/*1:0*/ __PVT__axi4xbar__DOT___readys_filter_T_1;
    __PVT__axi4xbar__DOT___readys_filter_T_1 = 0;
    CData/*1:0*/ __PVT__axi4xbar__DOT___readys_filter_T_3;
    __PVT__axi4xbar__DOT___readys_filter_T_3 = 0;
    CData/*2:0*/ __PVT__axi4xbar_1__DOT___readys_filter_T_1;
    __PVT__axi4xbar_1__DOT___readys_filter_T_1 = 0;
    CData/*3:0*/ __PVT__axi4xbar_1__DOT___GEN_1;
    __PVT__axi4xbar_1__DOT___GEN_1 = 0;
    CData/*2:0*/ __PVT__axi4xbar_1__DOT___readys_filter_T_3;
    __PVT__axi4xbar_1__DOT___readys_filter_T_3 = 0;
    CData/*3:0*/ __PVT__axi4xbar_1__DOT___GEN_2;
    __PVT__axi4xbar_1__DOT___GEN_2 = 0;
    CData/*0:0*/ luart__DOT__muart__DOT____VdfgTmp_hc1925006__0;
    luart__DOT__muart__DOT____VdfgTmp_hc1925006__0 = 0;
    IData/*18:0*/ lvga__DOT__mvga__DOT____VdfgTmp_he6b15335__0;
    lvga__DOT__mvga__DOT____VdfgTmp_he6b15335__0 = 0;
    CData/*0:0*/ lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1164a660__0;
    lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1164a660__0 = 0;
    CData/*0:0*/ lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1138d757__0;
    lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1138d757__0 = 0;
    CData/*1:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*7:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*7:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*3:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    // Body
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mode_done 
        = (8U == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi__DOT__counter));
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_fifo_accept_w 
        = (4U != (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count));
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_valid_w 
        = (0U != (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count));
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_valid_w 
        = (0U != (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count));
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__accept_o 
        = (4U != (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7 
        = (7U == (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1 
        = (0xfU & ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                   - (IData)(1U)));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0 
        = (0U == (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)));
    vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_zero 
        = (0U == (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt));
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__byte_index 
        = (3U & ((2U == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state))
                  ? (((IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                      >> 1U) - (IData)(3U)) : (((IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                                >> 1U) 
                                               - (IData)(2U))));
    vlSelf->__PVT__axi42apb__DOT__resp_hold = ((1U 
                                                == (IData)(vlSelf->__PVT__axi42apb__DOT__state))
                                                ? 0U
                                                : (IData)(vlSelf->__PVT__axi42apb__DOT__resp_hold_r));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__thre_int 
        = (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 1U) & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__ms_int 
        = (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 3U) & (0U != (0xfU & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__msr))));
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
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out 
        = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram
        [vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom];
    vlSelf->__VdfgTmp_hc8b8208b__0 = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom];
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
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__ti_int 
        = ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
           & ((0U == (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__counter_t)) 
              & (0U != (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_count))));
    __Vtableidx2 = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr;
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__block_value 
        = VysyxSoCFull__ConstPool__TABLE_hccb3c341_0
        [__Vtableidx2];
    __Vtableidx5 = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr;
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value 
        = VysyxSoCFull__ConstPool__TABLE_he38796ec_0
        [__Vtableidx5];
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
    vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk 
        = ((0U != (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
           & ((0x400U & (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
               ? (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge)
               : (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)));
    vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk 
        = (((0x200U & (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
             ? (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge)
             : (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)) 
           & ((0U != (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
              | (IData)(vlSelf->__PVT__spi_sck)));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rls_int 
        = (((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 2U) & ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                      | ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                         | ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                            | (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r)))));
    vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_we_i 
        = ((~ ((5U == (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__xip_state)) 
               | ((6U == (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__xip_state)) 
                  | (0U == (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__xip_state))))) 
           & (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__xip_active));
    vlSelf->lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0 
        = ((0x80U & ((~ (IData)((0U != (0x7fU & (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))))) 
                     << 7U)) | (0x7fU & (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse 
        = ((~ (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q)) 
           & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr5 
        = ((~ (IData)((0U != (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))) 
           & (0U == (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__tf_count)));
    __Vtableidx1 = vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__fcr;
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level 
        = VysyxSoCFull__ConstPool__TABLE_h05f4911a_0
        [__Vtableidx1];
    vlSelf->__PVT__spi_ss = (0xffU & (~ ((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss) 
                                         & ((- (IData)(
                                                       ((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                                        & ((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                                           >> 0xdU)))) 
                                            | (- (IData)(
                                                         (1U 
                                                          & (~ 
                                                             ((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                                              >> 0xdU)))))))));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__serial_out 
        = ((~ ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
               >> 6U)) & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    vlSelf->lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h33334145__0 
        = ((0U == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
           | (8U == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi__DOT__counter)));
    vlSelf->__PVT__lvga__DOT__mvga__DOT__h_valid = 
        ((0x90U < (IData)(vlSelf->__PVT__lvga__DOT__mvga__DOT__x_cnt)) 
         & (0x310U >= (IData)(vlSelf->__PVT__lvga__DOT__mvga__DOT__x_cnt)));
    vlSelf->__PVT__lvga__DOT__mvga__DOT__v_valid = 
        ((0x23U < (IData)(vlSelf->__PVT__lvga__DOT__mvga__DOT__y_cnt)) 
         & (0x203U >= (IData)(vlSelf->__PVT__lvga__DOT__mvga__DOT__y_cnt)));
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
    vlSelf->__PVT__sdram_cs = ((2U & (((~ (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cs)) 
                                       << 1U) | (0x3ffffffeU 
                                                 & (((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                     >> 2U) 
                                                    & ((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cs) 
                                                       << 1U))))) 
                               | (IData)((((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                           >> 3U) | (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cs))));
    vlSelf->__VdfgTmp_hed8e2367__0 = vlSelf->__PVT__axi4ram__DOT__mem_ext__DOT__Memory
        [vlSelf->__PVT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0];
    vlSelf->__PVT___axi4frag_auto_out_arid = (0xfU 
                                              & ((IData)(vlSelf->__PVT__axi4frag__DOT__deq_q__DOT__full)
                                                  ? (IData)(
                                                            (vlSelf->__PVT__axi4frag__DOT__deq_q__DOT__ram 
                                                             >> 0x2dU))
                                                  : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_arid)));
    vlSelf->__PVT__axi4frag__DOT___in_awready_T = (
                                                   (0U 
                                                    == (IData)(vlSelf->__PVT__axi4frag__DOT__w_counter)) 
                                                   | (IData)(vlSelf->__PVT__axi4frag__DOT__wbeats_latched));
    vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
        = vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1];
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_accept_w 
        = ((4U == (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)) 
           | (6U == (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)));
    vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match 
        = ((IData)(vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap) 
           == (IData)(vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
        = vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1];
    vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__ptr_match 
        = ((IData)(vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__wrap) 
           == (IData)(vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__wrap_1));
    vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
        = vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1];
    vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
        = vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory
        [vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1];
    vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match 
        = ((IData)(vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap) 
           == (IData)(vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match 
        = ((IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap) 
           == (IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match 
        = ((IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap) 
           == (IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match 
        = ((IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap) 
           == (IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data 
        = vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1];
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w 
        = vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram
        [vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr];
    vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match 
        = ((IData)(vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap) 
           == (IData)(vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos 
        = (0xffU & ((0x800U & (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                     ? ((IData)(vlSelf->lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                        - ((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                           + (1U & ((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 9U)))) : ((0x200U 
                                                  & (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                                  ? (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)
                                                  : 
                                                 ((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                                  - (IData)(1U)))));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr0 
        = ((0U == (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)) 
           & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr6 
        = ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr5) 
           & (0U == (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__tstate)));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rda_int 
        = ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
           & ((IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_count) 
              >= (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level)));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__serial_in 
        = ((0x10U & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__mcr))
            ? (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__serial_out)
            : (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
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
    vlSelf->lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgTmp_h0622eded__0 
        = ((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_accept_w) 
           & (4U != (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)));
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
    vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full 
        = ((IData)(vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match) 
           & (IData)(vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
    vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty 
        = ((~ (IData)(vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full 
        = ((IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match) 
           & (IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
    vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty 
        = ((~ (IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
    vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full 
        = ((IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match) 
           & (IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
    vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty 
        = ((~ (IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
    vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full 
        = ((IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match) 
           & (IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
    vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty 
        = ((~ (IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full)) 
           & (IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
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
    vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full 
        = ((IData)(vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match) 
           & (IData)(vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
    vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty 
        = ((~ (IData)(vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    vlSelf->__PVT__lvga__DOT__mvga__DOT__vga_data = 
        ((0x4afffU >= lvga__DOT__mvga__DOT____VdfgTmp_he6b15335__0)
          ? vlSelf->__PVT__lvga__DOT__mvga__DOT__vga_mem
         [lvga__DOT__mvga__DOT____VdfgTmp_he6b15335__0]
          : 0U);
    vlSelf->__PVT__axi4xbar_1__DOT___anonIn_awready_T 
        = (1U & ((~ (IData)(vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__full)) 
                 | (IData)(vlSelf->__PVT__axi4xbar_1__DOT__latched)));
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
    vlSelf->__PVT___axi4delay_delayer_in_bvalid = ((IData)(vlSelf->lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgTmp_h95df1406__0) 
                                                   & ((IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                                      >> 4U));
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
    __PVT__axi4xbar_1__DOT___readys_filter_T_3 = ((~ (IData)(vlSelf->__PVT__axi4xbar_1__DOT__readys_mask_1)) 
                                                  & (IData)(vlSelf->__PVT__axi4xbar_1__DOT__readys_valid_1));
    vlSelf->__PVT__axi4xbar_1__DOT__in_0_rvalid = ((IData)(vlSelf->__PVT__axi4xbar_1__DOT__idle_3)
                                                    ? (IData)(vlSelf->__PVT__axi4xbar_1__DOT__anyValid)
                                                    : 
                                                   (((~ (IData)(vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)) 
                                                     & (IData)(vlSelf->__PVT__axi4xbar_1__DOT__state_3_0)) 
                                                    | (((IData)(vlSelf->__PVT__axi4xbar_1__DOT__state_3_1) 
                                                        & (IData)(vlSelf->__PVT__lmrom__DOT__state)) 
                                                       | ((IData)(vlSelf->__PVT__axi4ram__DOT__r_full) 
                                                          & (IData)(vlSelf->__PVT__axi4xbar_1__DOT__state_3_2)))));
    vlSelf->__PVT__axi4xbar__DOT__anyValid = ((IData)(vlSelf->__PVT__axi4xbar_1__DOT__in_0_rvalid) 
                                              | (IData)(vlSelf->__PVT___axi4delay_delayer_in_rvalid));
    vlSelf->__PVT__axi4xbar__DOT__readys_valid = (((IData)(vlSelf->__PVT___axi4delay_delayer_in_rvalid) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__axi4xbar_1__DOT__in_0_rvalid));
    __PVT__axi4xbar_1__DOT___GEN_1 = (((0xcU & ((IData)(__PVT__axi4xbar_1__DOT___readys_filter_T_1) 
                                                << 2U)) 
                                       | (((IData)(vlSelf->__PVT__axi4ram__DOT__r_full) 
                                           << 1U) | (IData)(vlSelf->__PVT__lmrom__DOT__state))) 
                                      | (((IData)(__PVT__axi4xbar_1__DOT___readys_filter_T_1) 
                                          << 1U) | (IData)(vlSelf->__PVT__axi4ram__DOT__r_full)));
    if (vlSelf->__PVT__axi42apb__DOT__accept_write) {
        vlSelf->__PVT___axi42apb_auto_out_pwdata = (IData)(
                                                           (vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
                                                            >> 4U));
        vlSelf->__VdfgTmp_he478e0a8__0 = (0xfU & (IData)(vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data));
    } else {
        vlSelf->__PVT___axi42apb_auto_out_pwdata = vlSelf->__PVT__axi42apb__DOT__wdata_reg_r;
        vlSelf->__VdfgTmp_he478e0a8__0 = (0xfU & (IData)(vlSelf->__PVT__axi42apb__DOT__wstrb_reg_r));
    }
    vlSelf->__PVT___axi42apb_auto_out_psel = ((IData)(vlSelf->__PVT__axi42apb__DOT__accept_read) 
                                              | ((IData)(vlSelf->__PVT__axi42apb__DOT__accept_write) 
                                                 | (1U 
                                                    == (IData)(vlSelf->__PVT__axi42apb__DOT__state))));
    vlSelf->__PVT__axi42apb__DOT__is_write = ((0U == (IData)(vlSelf->__PVT__axi42apb__DOT__state))
                                               ? (IData)(vlSelf->__PVT__axi42apb__DOT__accept_write)
                                               : (IData)(vlSelf->__PVT__axi42apb__DOT__is_write_r));
    __PVT__axi4xbar_1__DOT___GEN_2 = (((0xcU & ((IData)(__PVT__axi4xbar_1__DOT___readys_filter_T_3) 
                                                << 2U)) 
                                       | ((IData)(vlSelf->__PVT__axi4ram__DOT__w_full) 
                                          << 1U)) | 
                                      (((IData)(__PVT__axi4xbar_1__DOT___readys_filter_T_3) 
                                        << 1U) | (IData)(vlSelf->__PVT__axi4ram__DOT__w_full)));
    __PVT__axi4xbar__DOT___readys_filter_T_1 = ((~ (IData)(vlSelf->__PVT__axi4xbar__DOT__readys_mask)) 
                                                & (IData)(vlSelf->__PVT__axi4xbar__DOT__readys_valid));
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
    lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1138d757__0 
        = ((IData)(vlSelf->__PVT__axi42apb__DOT__is_write) 
           & ((IData)(vlSelf->__VdfgTmp_he478e0a8__0) 
              >> 2U));
    lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1164a660__0 
        = ((IData)(vlSelf->__PVT__axi42apb__DOT__is_write) 
           & ((IData)(vlSelf->__VdfgTmp_he478e0a8__0) 
              >> 1U));
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
    vlSelf->__PVT__axi4xbar__DOT__readys_unready = 
        (((4U & ((IData)(__PVT__axi4xbar__DOT___readys_filter_T_1) 
                 << 1U)) | (((2U & ((IData)(__PVT__axi4xbar__DOT___readys_filter_T_1) 
                                    << 1U)) | (IData)(vlSelf->__PVT___axi4delay_delayer_in_rvalid)) 
                            | (IData)(__PVT__axi4xbar__DOT___readys_filter_T_1))) 
         | ((IData)(vlSelf->__PVT__axi4xbar__DOT__readys_mask) 
            << 2U));
    vlSelf->__PVT__axi4xbar_1__DOT__readys_readys = 
        (7U & (~ (((IData)(vlSelf->__PVT__axi4xbar_1__DOT__readys_unready) 
                   >> 3U) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT__readys_unready))));
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1 
        = (0xffU & ((IData)(lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1164a660__0)
                     ? (vlSelf->__PVT___axi42apb_auto_out_pwdata 
                        >> 8U) : (vlSelf->__PVT___axi42apb_auto_out_pwdata 
                                  >> 0x18U)));
    vlSelf->__PVT___axi42apb_auto_out_pstrb = ((IData)(vlSelf->__PVT__axi42apb__DOT__is_write)
                                                ? (IData)(vlSelf->__VdfgTmp_he478e0a8__0)
                                                : 0U);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__size 
        = ((1U == (IData)(vlSelf->__PVT___axi42apb_auto_out_pstrb))
            ? 1U : ((2U == (IData)(vlSelf->__PVT___axi42apb_auto_out_pstrb))
                     ? 1U : ((4U == (IData)(vlSelf->__PVT___axi42apb_auto_out_pstrb))
                              ? 1U : ((8U == (IData)(vlSelf->__PVT___axi42apb_auto_out_pstrb))
                                       ? 1U : ((3U 
                                                == (IData)(vlSelf->__PVT___axi42apb_auto_out_pstrb))
                                                ? 2U
                                                : (
                                                   (0xcU 
                                                    == (IData)(vlSelf->__PVT___axi42apb_auto_out_pstrb))
                                                    ? 2U
                                                    : 4U))))));
    vlSelf->__PVT___axi42apb_auto_out_paddr = ((IData)(vlSelf->__PVT__axi42apb__DOT__is_write)
                                                ? ((IData)(vlSelf->__PVT__axi42apb__DOT__accept_write)
                                                    ? (IData)(
                                                              (vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                                               >> 0xbU))
                                                    : vlSelf->__PVT__axi42apb__DOT__awaddr_reg_r)
                                                : ((IData)(vlSelf->__PVT__axi42apb__DOT__accept_read)
                                                    ? (IData)(
                                                              (vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                                               >> 0xbU))
                                                    : vlSelf->__PVT__axi42apb__DOT__araddr_reg_r));
    vlSelf->__PVT__luart__DOT__muart__DOT__reg_dat8_w 
        = (0xffU & ((2U & vlSelf->__PVT___axi42apb_auto_out_paddr)
                     ? ((1U & vlSelf->__PVT___axi42apb_auto_out_paddr)
                         ? (vlSelf->__PVT___axi42apb_auto_out_pwdata 
                            >> 0x18U) : (vlSelf->__PVT___axi42apb_auto_out_pwdata 
                                         >> 0x10U))
                     : ((1U & vlSelf->__PVT___axi42apb_auto_out_paddr)
                         ? (vlSelf->__PVT___axi42apb_auto_out_pwdata 
                            >> 8U) : vlSelf->__PVT___axi42apb_auto_out_pwdata)));
    vlSelf->luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i 
        = ((IData)(vlSelf->__PVT__axi42apb__DOT__is_write)
            ? (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__reg_dat8_w)
            : (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__reg_dat8_w_reg));
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
    vlSelf->__PVT___apbxbar_auto_anon_out_5_psel = (IData)(
                                                           ((0x20000000U 
                                                             == 
                                                             (0x30000000U 
                                                              & vlSelf->__PVT___axi42apb_auto_out_paddr)) 
                                                            & (IData)(vlSelf->__PVT___axi42apb_auto_out_psel)));
    vlSelf->__PVT___apbxbar_auto_anon_out_5_penable 
        = (IData)(((0x20000000U == (0x30000000U & vlSelf->__PVT___axi42apb_auto_out_paddr)) 
                   & (1U == (IData)(vlSelf->__PVT__axi42apb__DOT__state))));
    vlSelf->__PVT__apbxbar__DOT__sel_0 = ((0U == ((0x10U 
                                                   & (vlSelf->__PVT___axi42apb_auto_out_paddr 
                                                      >> 0x19U)) 
                                                  | ((8U 
                                                      & (8U 
                                                         ^ 
                                                         (0x78U 
                                                          & (vlSelf->__PVT___axi42apb_auto_out_paddr 
                                                             >> 0x19U)))) 
                                                     | ((4U 
                                                         & (vlSelf->__PVT___axi42apb_auto_out_paddr 
                                                            >> 0xeU)) 
                                                        | (3U 
                                                           & (1U 
                                                              ^ 
                                                              (vlSelf->__PVT___axi42apb_auto_out_paddr 
                                                               >> 0xcU))))))) 
                                          | (3U == 
                                             (3U & 
                                              (vlSelf->__PVT___axi42apb_auto_out_paddr 
                                               >> 0x1cU))));
    vlSelf->__PVT__apbxbar__DOT__sel_4 = (0U == ((0x10U 
                                                  & (vlSelf->__PVT___axi42apb_auto_out_paddr 
                                                     >> 0x19U)) 
                                                 | ((8U 
                                                     & (8U 
                                                        ^ 
                                                        (0x78U 
                                                         & (vlSelf->__PVT___axi42apb_auto_out_paddr 
                                                            >> 0x19U)))) 
                                                    | ((4U 
                                                        & (0x4004U 
                                                           ^ 
                                                           (0x3fffcU 
                                                            & (vlSelf->__PVT___axi42apb_auto_out_paddr 
                                                               >> 0xeU)))) 
                                                       | (3U 
                                                          & (1U 
                                                             ^ 
                                                             (vlSelf->__PVT___axi42apb_auto_out_paddr 
                                                              >> 0xcU)))))));
    vlSelf->__PVT__apbxbar__DOT__sel_3 = (0U == ((0x10U 
                                                  & (vlSelf->__PVT___axi42apb_auto_out_paddr 
                                                     >> 0x19U)) 
                                                 | ((8U 
                                                     & (8U 
                                                        ^ 
                                                        (0x78U 
                                                         & (vlSelf->__PVT___axi42apb_auto_out_paddr 
                                                            >> 0x19U)))) 
                                                    | ((4U 
                                                        & (vlSelf->__PVT___axi42apb_auto_out_paddr 
                                                           >> 0xeU)) 
                                                       | (3U 
                                                          & (2U 
                                                             ^ 
                                                             (vlSelf->__PVT___axi42apb_auto_out_paddr 
                                                              >> 0xcU)))))));
    vlSelf->__PVT__apbxbar__DOT__sel_1 = (0U == ((0x10U 
                                                  & (vlSelf->__PVT___axi42apb_auto_out_paddr 
                                                     >> 0x19U)) 
                                                 | ((8U 
                                                     & ((~ 
                                                         (vlSelf->__PVT___axi42apb_auto_out_paddr 
                                                          >> 0x1cU)) 
                                                        << 3U)) 
                                                    | ((4U 
                                                        & (vlSelf->__PVT___axi42apb_auto_out_paddr 
                                                           >> 0xeU)) 
                                                       | (3U 
                                                          & (vlSelf->__PVT___axi42apb_auto_out_paddr 
                                                             >> 0xcU))))));
    vlSelf->__PVT___apbxbar_auto_anon_out_2_psel = (IData)(
                                                           ((0U 
                                                             == 
                                                             (0x30000000U 
                                                              & vlSelf->__PVT___axi42apb_auto_out_paddr)) 
                                                            & (IData)(vlSelf->__PVT___axi42apb_auto_out_psel)));
    vlSelf->__PVT__axi4xbar_1__DOT__readys_readys_1 
        = (7U & (~ (((IData)(vlSelf->__PVT__axi4xbar_1__DOT__readys_unready_1) 
                     >> 3U) & (IData)(vlSelf->__PVT__axi4xbar_1__DOT__readys_unready_1))));
    vlSelf->__PVT__axi4xbar__DOT__readys_readys = (3U 
                                                   & (~ 
                                                      (((IData)(vlSelf->__PVT__axi4xbar__DOT__readys_unready) 
                                                        >> 2U) 
                                                       & (IData)(vlSelf->__PVT__axi4xbar__DOT__readys_unready))));
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
        vlSelf->__PVT__axi4xbar_1__DOT__muxState_3_1 
            = vlSelf->__PVT__axi4xbar_1__DOT__winner_3_1;
        vlSelf->__PVT__axi4xbar_1__DOT__muxState_3_0 
            = vlSelf->__PVT__axi4xbar_1__DOT__prefixOR_1;
        vlSelf->__PVT__axi4xbar_1__DOT__muxState_3_2 
            = vlSelf->__PVT__axi4xbar_1__DOT__winner_3_2;
    } else {
        vlSelf->__PVT__axi4xbar_1__DOT__muxState_3_1 
            = vlSelf->__PVT__axi4xbar_1__DOT__state_3_1;
        vlSelf->__PVT__axi4xbar_1__DOT__muxState_3_0 
            = vlSelf->__PVT__axi4xbar_1__DOT__state_3_0;
        vlSelf->__PVT__axi4xbar_1__DOT__muxState_3_2 
            = vlSelf->__PVT__axi4xbar_1__DOT__state_3_2;
    }
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0 
        = (0xffU & (((IData)(vlSelf->__PVT__axi42apb__DOT__is_write) 
                     & (IData)(vlSelf->__VdfgTmp_he478e0a8__0))
                     ? vlSelf->__PVT___axi42apb_auto_out_pwdata
                     : (((IData)(lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1164a660__0) 
                         & (1U == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                         ? (vlSelf->__PVT___axi42apb_auto_out_pwdata 
                            >> 8U) : (((IData)(lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1138d757__0) 
                                       & (1U == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                       ? (vlSelf->__PVT___axi42apb_auto_out_pwdata 
                                          >> 0x10U)
                                       : (((IData)(vlSelf->__PVT__axi42apb__DOT__is_write) 
                                           & (((IData)(vlSelf->__VdfgTmp_he478e0a8__0) 
                                               >> 3U) 
                                              & (1U 
                                                 == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__size))))
                                           ? (vlSelf->__PVT___axi42apb_auto_out_pwdata 
                                              >> 0x18U)
                                           : (((IData)(lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1138d757__0) 
                                               & (2U 
                                                  == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                               ? (vlSelf->__PVT___axi42apb_auto_out_pwdata 
                                                  >> 0x10U)
                                               : vlSelf->__PVT___axi42apb_auto_out_pwdata))))));
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done 
        = ((IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter) 
           == ((IData)(1U) + (0xffU & ((2U == (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state))
                                        ? ((IData)(7U) 
                                           + ((IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                              << 1U))
                                        : ((IData)(0xdU) 
                                           + ((IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                              << 1U))))));
    if (vlSelf->__PVT__lspi__DOT__mspi__DOT__xip_active) {
        if ((1U == (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__xip_state))) {
            vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_dat_i 
                = (0x3000000U | (0xffffffU & vlSelf->__PVT___axi42apb_auto_out_paddr));
            vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_adr_i 
                = (0x1fU & 4U);
        } else if ((2U == (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__xip_state))) {
            vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_dat_i = 0x10U;
            vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_adr_i 
                = (0x1fU & 0x14U);
        } else if ((3U == (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__xip_state))) {
            vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_dat_i = 1U;
            vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_adr_i 
                = (0x1fU & 0x18U);
        } else if ((4U == (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__xip_state))) {
            vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_dat_i = 0x1540U;
            vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_adr_i 
                = (0x1fU & 0x10U);
        } else {
            vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_dat_i = 0U;
            vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_adr_i 
                = (0x1fU & ((5U == (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__xip_state))
                             ? 0x10U : ((6U == (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__xip_state))
                                         ? 0U : ((7U 
                                                  == (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__xip_state))
                                                  ? 0x18U
                                                  : 0U))));
        }
    } else {
        vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_dat_i 
            = vlSelf->__PVT___axi42apb_auto_out_pwdata;
        vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_adr_i 
            = (0x1fU & vlSelf->__PVT___axi42apb_auto_out_paddr);
    }
    vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat 
        = ((0U == (7U & ((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_adr_i) 
                         >> 2U))) ? vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]
            : ((1U == (7U & ((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_adr_i) 
                             >> 2U))) ? vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]
                : ((2U == (7U & ((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_adr_i) 
                                 >> 2U))) ? vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]
                    : ((3U == (7U & ((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_adr_i) 
                                     >> 2U))) ? vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]
                        : ((4U == (7U & ((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_adr_i) 
                                         >> 2U))) ? (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)
                            : ((5U == (7U & ((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_adr_i) 
                                             >> 2U)))
                                ? (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)
                                : ((6U == (7U & ((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_adr_i) 
                                                 >> 2U)))
                                    ? (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss)
                                    : 0U)))))));
    vlSelf->__PVT___apbxbar_auto_anon_out_0_psel = 
        ((IData)(vlSelf->__PVT__apbxbar__DOT__sel_0) 
         & (IData)(vlSelf->__PVT___axi42apb_auto_out_psel));
    vlSelf->__PVT___apbxbar_auto_anon_out_0_penable 
        = ((IData)(vlSelf->__PVT__apbxbar__DOT__sel_0) 
           & (1U == (IData)(vlSelf->__PVT__axi42apb__DOT__state)));
    if (vlSelf->__PVT__lspi__DOT__mspi__DOT__xip_active) {
        vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_stb_i 
            = (0U != (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__xip_state));
        vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_cyc_i 
            = (0U != (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__xip_state));
    } else {
        vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_stb_i 
            = ((IData)(vlSelf->__PVT___apbxbar_auto_anon_out_0_psel) 
               & (0x10001000U == (0x3ffff000U & vlSelf->__PVT___axi42apb_auto_out_paddr)));
        vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_cyc_i 
            = ((IData)(vlSelf->__PVT___apbxbar_auto_anon_out_0_penable) 
               & (0x10001000U == (0x3ffff000U & vlSelf->__PVT___axi42apb_auto_out_paddr)));
    }
    vlSelf->__PVT___lkeyboard_auto_in_pready = (((IData)(vlSelf->__PVT__apbxbar__DOT__sel_4) 
                                                 & (1U 
                                                    == (IData)(vlSelf->__PVT__axi42apb__DOT__state))) 
                                                & (IData)(vlSelf->__PVT___axi42apb_auto_out_psel));
    vlSelf->__PVT___apbxbar_auto_anon_out_3_psel = 
        ((IData)(vlSelf->__PVT__apbxbar__DOT__sel_3) 
         & (IData)(vlSelf->__PVT___axi42apb_auto_out_psel));
    vlSelf->__PVT___apbxbar_auto_anon_out_3_penable 
        = ((IData)(vlSelf->__PVT__apbxbar__DOT__sel_3) 
           & (1U == (IData)(vlSelf->__PVT__axi42apb__DOT__state)));
    vlSelf->__PVT___apbxbar_auto_anon_out_1_penable 
        = ((IData)(vlSelf->__PVT__apbxbar__DOT__sel_1) 
           & (1U == (IData)(vlSelf->__PVT__axi42apb__DOT__state)));
    vlSelf->__PVT___apbxbar_auto_anon_out_1_psel = 
        ((IData)(vlSelf->__PVT__apbxbar__DOT__sel_1) 
         & (IData)(vlSelf->__PVT___axi42apb_auto_out_psel));
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
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re 
        = ((~ (IData)(vlSelf->__PVT__axi42apb__DOT__is_write)) 
           & (IData)(vlSelf->__PVT___apbxbar_auto_anon_out_2_psel));
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we 
        = ((IData)(vlSelf->__PVT__axi42apb__DOT__is_write) 
           & (IData)(vlSelf->__PVT___apbxbar_auto_anon_out_2_psel));
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
    vlSelf->__PVT__lgpio__DOT__mgpio__DOT__is_write 
        = ((~ (IData)(vlSymsp->TOP.reset)) & ((IData)(vlSelf->__PVT___apbxbar_auto_anon_out_3_psel) 
                                              & ((~ (IData)(vlSelf->__PVT___apbxbar_auto_anon_out_3_penable)) 
                                                 & (IData)(vlSelf->__PVT__axi42apb__DOT__is_write))));
    vlSelf->__PVT___lgpio_auto_in_pready = ((IData)(vlSelf->__PVT___apbxbar_auto_anon_out_3_penable) 
                                            & (IData)(vlSelf->__PVT___apbxbar_auto_anon_out_3_psel));
    luart__DOT__muart__DOT____VdfgTmp_hc1925006__0 
        = ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelf->__PVT___apbxbar_auto_anon_out_1_penable)) 
                                              & (IData)(vlSelf->__PVT___apbxbar_auto_anon_out_1_psel)));
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
    vlSelf->lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0 
        = ((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_cyc_i) 
           & (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_stb_i));
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
    vlSelf->__PVT__luart__DOT__muart__DOT__reg_we = 
        ((IData)(luart__DOT__muart__DOT____VdfgTmp_hc1925006__0) 
         & (IData)(vlSelf->__PVT__axi42apb__DOT__is_write));
    vlSelf->__PVT__luart__DOT__muart__DOT__reg_re = 
        ((~ (IData)(vlSelf->__PVT__axi42apb__DOT__is_write)) 
         & (IData)(luart__DOT__muart__DOT____VdfgTmp_hc1925006__0));
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
    vlSelf->lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0 
        = ((0xcU & (IData)(vlSelf->lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0)) 
           | (3U & ((IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__douten) 
                    & (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__dout))));
    vlSelf->lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1 
        = ((3U & (IData)(vlSelf->lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1)) 
           | (0xcU & ((IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__douten) 
                      & (IData)(vlSelf->__PVT__lpsram__DOT__mpsram__DOT__dout))));
    vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel 
        = ((((IData)(vlSelf->lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
             & (0xcU == (0x1cU & (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_adr_i)))) 
            << 3U) | ((((IData)(vlSelf->lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                        & (8U == (0x1cU & (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_adr_i)))) 
                       << 2U) | ((((IData)(vlSelf->lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                   & (4U == (0x1cU 
                                             & (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_adr_i)))) 
                                  << 1U) | ((IData)(vlSelf->lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                            & (0U == 
                                               (0x1cU 
                                                & (IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_adr_i)))))));
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
    vlSelf->lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch 
        = ((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel) 
           & (- (IData)((IData)(vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_wb_we_i))));
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask 
        = ((~ (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d)) 
           & (IData)(vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    vlSelf->__PVT___axi4frag_auto_in_bvalid = ((IData)(vlSelf->__PVT___axi4yank_auto_in_becho_real_last) 
                                               & (IData)(vlSelf->__PVT__axi4xbar_1__DOT__in_0_bvalid));
    vlSelf->__PVT__axi4xbar__DOT__readys_valid_1 = 
        (((IData)(vlSelf->__PVT___axi4delay_delayer_in_bvalid) 
          << 1U) | (IData)(vlSelf->__PVT___axi4frag_auto_in_bvalid));
    vlSelf->__PVT__axi4xbar__DOT__anyValid_1 = ((IData)(vlSelf->__PVT___axi4frag_auto_in_bvalid) 
                                                | (IData)(vlSelf->__PVT___axi4delay_delayer_in_bvalid));
    __PVT__axi4xbar__DOT___readys_filter_T_3 = ((~ (IData)(vlSelf->__PVT__axi4xbar__DOT__readys_mask_1)) 
                                                & (IData)(vlSelf->__PVT__axi4xbar__DOT__readys_valid_1));
    vlSelf->__PVT__axi4xbar__DOT__readys_unready_1 
        = (((4U & ((IData)(__PVT__axi4xbar__DOT___readys_filter_T_3) 
                   << 1U)) | (((2U & ((IData)(__PVT__axi4xbar__DOT___readys_filter_T_3) 
                                      << 1U)) | (IData)(vlSelf->__PVT___axi4delay_delayer_in_bvalid)) 
                              | (IData)(__PVT__axi4xbar__DOT___readys_filter_T_3))) 
           | ((IData)(vlSelf->__PVT__axi4xbar__DOT__readys_mask_1) 
              << 2U));
    vlSelf->__PVT__axi4xbar__DOT__readys_readys_1 = 
        (3U & (~ (((IData)(vlSelf->__PVT__axi4xbar__DOT__readys_unready_1) 
                   >> 2U) & (IData)(vlSelf->__PVT__axi4xbar__DOT__readys_unready_1))));
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
    vlSelf->__PVT__axi4xbar__DOT___in_0_bT_5 = (0xfU 
                                                & (((IData)(vlSelf->__PVT__axi4xbar__DOT__muxState_3_0)
                                                     ? (IData)(vlSelf->__PVT__axi4xbar_1__DOT___in_0_bT_9)
                                                     : 0U) 
                                                   | ((IData)(vlSelf->__PVT__axi4xbar__DOT__muxState_3_1)
                                                       ? (IData)(vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w)
                                                       : 0U)));
}

void VysyxSoCFull_ysyxSoCASIC____Vdpiimwrap_lmrom__DOT__mrom__DOT__mrom_read_TOP__ysyxSoCFull__asic(IData/*31:0*/ raddr, IData/*31:0*/ &rdata);

VL_ATTR_COLD void VysyxSoCFull_ysyxSoCASIC___stl_sequent__TOP__ysyxSoCFull__asic__3(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___stl_sequent__TOP__ysyxSoCFull__asic__3\n"); );
    // Body
    vlSelf->__PVT___axi4frag_auto_out_rready = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_rready) 
                                                & ((IData)(vlSelf->__PVT__axi4xbar__DOT__idle_2)
                                                    ? (IData)(vlSelf->__PVT__axi4xbar__DOT__readys_readys)
                                                    : (IData)(vlSelf->__PVT__axi4xbar__DOT__state_2_0)));
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
