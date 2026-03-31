// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull_ysyx_25110269.h"

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__3(VysyxSoCFull_ysyx_25110269* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_25110269___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__3\n"); );
    // Init
    CData/*7:0*/ __Vdly__clint__DOT__lfsr;
    __Vdly__clint__DOT__lfsr = 0;
    CData/*4:0*/ __Vdly__clint__DOT__random_delay;
    __Vdly__clint__DOT__random_delay = 0;
    IData/*31:0*/ __Vdly__clint__DOT__mtime_h;
    __Vdly__clint__DOT__mtime_h = 0;
    IData/*31:0*/ __Vdly__clint__DOT__mtime_l;
    __Vdly__clint__DOT__mtime_l = 0;
    // Body
    __Vdly__clint__DOT__random_delay = vlSelf->__PVT__clint__DOT__random_delay;
    __Vdly__clint__DOT__lfsr = vlSelf->__PVT__clint__DOT__lfsr;
    __Vdly__clint__DOT__mtime_l = vlSelf->__PVT__clint__DOT__mtime_l;
    __Vdly__clint__DOT__mtime_h = vlSelf->__PVT__clint__DOT__mtime_h;
    if (vlSelf->reset) {
        __Vdly__clint__DOT__lfsr = 0xb1U;
        __Vdly__clint__DOT__random_delay = 0U;
        __Vdly__clint__DOT__mtime_h = 0U;
        __Vdly__clint__DOT__mtime_l = 0U;
        vlSelf->clint_rdata = 0U;
        vlSelf->__PVT__axi_xbar__DOT__state = 0U;
    } else {
        __Vdly__clint__DOT__lfsr = ((0xfeU & ((IData)(vlSelf->__PVT__clint__DOT__lfsr) 
                                              << 1U)) 
                                    | (1U & VL_REDXOR_8(
                                                        (0xb8U 
                                                         & (IData)(vlSelf->__PVT__clint__DOT__lfsr)))));
        __Vdly__clint__DOT__random_delay = (0x1fU & 
                                            ((0U == (IData)(vlSelf->__PVT__clint__DOT__random_delay))
                                              ? (IData)(vlSelf->__PVT__clint__DOT__lfsr)
                                              : ((IData)(vlSelf->__PVT__clint__DOT__random_delay) 
                                                 - (IData)(1U))));
        if (((0xffffffffU == vlSelf->__PVT__clint__DOT__mtime_l) 
             & (0xffffffffU == vlSelf->__PVT__clint__DOT__mtime_h))) {
            __Vdly__clint__DOT__mtime_l = 0U;
            __Vdly__clint__DOT__mtime_h = 0U;
        } else if ((0xffffffffU == vlSelf->__PVT__clint__DOT__mtime_l)) {
            __Vdly__clint__DOT__mtime_h = ((IData)(1U) 
                                           + vlSelf->__PVT__clint__DOT__mtime_h);
            __Vdly__clint__DOT__mtime_l = 0U;
        } else {
            __Vdly__clint__DOT__mtime_l = ((IData)(1U) 
                                           + vlSelf->__PVT__clint__DOT__mtime_l);
        }
        if (vlSelf->clint_arvalid) {
            if ((0x2000000U == vlSelf->clint_araddr)) {
                vlSelf->clint_rdata = vlSelf->__PVT__clint__DOT__mtime_l;
            } else if ((0x2000004U == vlSelf->clint_araddr)) {
                vlSelf->clint_rdata = vlSelf->__PVT__clint__DOT__mtime_h;
            }
        }
        vlSelf->__PVT__axi_xbar__DOT__state = vlSelf->__PVT__axi_xbar__DOT__next_state;
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->clint_arvalid) {
            vlSelf->clint_rresp = 0U;
            vlSelf->clint_rvalid = 1U;
        } else if (vlSelf->clint_rready) {
            vlSelf->clint_rvalid = 0U;
        }
    }
    if (((IData)(vlSelf->__PVT__axi_xbar__DOT__arvalid) 
         & (IData)(vlSelf->__PVT__axi_xbar__DOT__arready))) {
        vlSelf->__PVT__axi_xbar__DOT__raddr = vlSelf->__PVT__axi_xbar__DOT__araddr;
    }
    vlSelf->__PVT__clint__DOT__lfsr = __Vdly__clint__DOT__lfsr;
    vlSelf->__PVT__clint__DOT__random_delay = __Vdly__clint__DOT__random_delay;
    vlSelf->__PVT__clint__DOT__mtime_l = __Vdly__clint__DOT__mtime_l;
    vlSelf->__PVT__clint__DOT__mtime_h = __Vdly__clint__DOT__mtime_h;
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__9(VysyxSoCFull_ysyx_25110269* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_25110269___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__9\n"); );
    // Body
    vlSelf->io_master_awaddr = vlSelf->lsu_awaddr;
    vlSelf->io_master_wdata = vlSelf->lsu_wdata;
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__4(VysyxSoCFull_ysyx_25110269* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__4\n"); );
    // Body
    vlSelf->__PVT__axi_xbar__DOT__arsize = ((1U == (IData)(vlSelf->__PVT__axi_xbar__DOT__state))
                                             ? (IData)(vlSelf->icache_arsize)
                                             : ((2U 
                                                 == (IData)(vlSelf->__PVT__axi_xbar__DOT__state))
                                                 ? (IData)(vlSelf->lsu_arsize)
                                                 : 0U));
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__8(VysyxSoCFull_ysyx_25110269* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__8\n"); );
    // Body
    vlSelf->__PVT__axi_xbar__DOT__arlen = ((1U == (IData)(vlSelf->__PVT__axi_xbar__DOT__state))
                                            ? (IData)(vlSelf->icache_arlen)
                                            : ((2U 
                                                == (IData)(vlSelf->__PVT__axi_xbar__DOT__state))
                                                ? (IData)(vlSelf->lsu_arlen)
                                                : 0U));
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__9(VysyxSoCFull_ysyx_25110269* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__9\n"); );
    // Body
    vlSelf->__PVT__axi_xbar__DOT__araddr = ((1U == (IData)(vlSelf->__PVT__axi_xbar__DOT__state))
                                             ? vlSelf->icache_araddr
                                             : ((2U 
                                                 == (IData)(vlSelf->__PVT__axi_xbar__DOT__state))
                                                 ? vlSelf->lsu_araddr
                                                 : 0U));
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__12(VysyxSoCFull_ysyx_25110269* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__12\n"); );
    // Body
    if ((1U == (IData)(vlSelf->__PVT__axi_xbar__DOT__state))) {
        vlSelf->__PVT__axi_xbar__DOT__rready = vlSelf->icache_rready;
        vlSelf->__PVT__axi_xbar__DOT__arvalid = vlSelf->icache_arvalid;
    } else {
        vlSelf->__PVT__axi_xbar__DOT__rready = ((2U 
                                                 == (IData)(vlSelf->__PVT__axi_xbar__DOT__state)) 
                                                & (IData)(vlSelf->lsu_rready));
        vlSelf->__PVT__axi_xbar__DOT__arvalid = ((2U 
                                                  == (IData)(vlSelf->__PVT__axi_xbar__DOT__state)) 
                                                 & (IData)(vlSelf->lsu_arvalid));
    }
    vlSelf->clint_rready = ((IData)(vlSelf->clint_rvalid) 
                            & (IData)(vlSelf->__PVT__axi_xbar__DOT__rready));
    vlSelf->clint_arvalid = ((0x2000000U <= vlSelf->__PVT__axi_xbar__DOT__araddr) 
                             & ((0x2010000U > vlSelf->__PVT__axi_xbar__DOT__araddr) 
                                & (IData)(vlSelf->__PVT__axi_xbar__DOT__arvalid)));
    vlSelf->io_master_arvalid = (((0x2000000U > vlSelf->__PVT__axi_xbar__DOT__araddr) 
                                  | (0x2010000U <= vlSelf->__PVT__axi_xbar__DOT__araddr)) 
                                 & (IData)(vlSelf->__PVT__axi_xbar__DOT__arvalid));
    if (vlSelf->clint_arvalid) {
        vlSelf->clint_araddr = vlSelf->__PVT__axi_xbar__DOT__araddr;
        vlSelf->clint_arlen = vlSelf->__PVT__axi_xbar__DOT__arlen;
        vlSelf->clint_arsize = vlSelf->__PVT__axi_xbar__DOT__arsize;
    } else {
        vlSelf->clint_araddr = 0U;
        vlSelf->clint_arlen = 0U;
        vlSelf->clint_arsize = 0U;
    }
    if (vlSelf->io_master_arvalid) {
        vlSelf->io_master_arburst = ((1U == (IData)(vlSelf->__PVT__axi_xbar__DOT__state))
                                      ? (IData)(vlSelf->icache_arburst)
                                      : 0U);
        vlSelf->io_master_arlen = vlSelf->__PVT__axi_xbar__DOT__arlen;
        vlSelf->io_master_arsize = vlSelf->__PVT__axi_xbar__DOT__arsize;
        vlSelf->io_master_araddr = vlSelf->__PVT__axi_xbar__DOT__araddr;
    } else {
        vlSelf->io_master_arburst = 0U;
        vlSelf->io_master_arlen = 0U;
        vlSelf->io_master_arsize = 0U;
        vlSelf->io_master_araddr = 0U;
    }
}

extern const VlUnpacked<CData/*1:0*/, 256> VysyxSoCFull__ConstPool__TABLE_h6e62605c_0;

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__13(VysyxSoCFull_ysyx_25110269* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__13\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->lsu_rready) << 7U) 
                    | (((IData)(vlSelf->io_master_rlast) 
                        << 6U) | (((IData)(vlSelf->icache_rready) 
                                   << 5U) | (((IData)(vlSelf->__PVT__axi_xbar__DOT__rvalid) 
                                              << 4U) 
                                             | (((IData)(vlSelf->lsu_arvalid) 
                                                 << 3U) 
                                                | (((IData)(vlSelf->icache_arvalid) 
                                                    << 2U) 
                                                   | (IData)(vlSelf->__PVT__axi_xbar__DOT__state)))))));
    vlSelf->__PVT__axi_xbar__DOT__next_state = VysyxSoCFull__ConstPool__TABLE_h6e62605c_0
        [__Vtableidx1];
    vlSelf->io_master_rready = ((IData)(vlSelf->io_master_rvalid) 
                                & (IData)(vlSelf->__PVT__axi_xbar__DOT__rready));
}
