// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull_ysyx_25110269.h"

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__0(VysyxSoCFull_ysyx_25110269* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_25110269___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__0\n"); );
    // Body
    vlSelf->ws_allowin = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.ws_allowin;
    vlSelf->lsu_bresp = vlSelf->io_master_bresp;
    vlSelf->icache_arburst = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.i_arburst;
    vlSelf->csr_mepc = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__csr.csr_mepc;
    vlSelf->csr_mtvec = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__csr.csr_mtvec;
    if ((0x200U == (vlSelf->__PVT__axi_xbar__DOT__raddr 
                    >> 0x10U))) {
        vlSelf->__PVT__axi_xbar__DOT__rresp = vlSelf->clint_rresp;
        vlSelf->__PVT__axi_xbar__DOT__rdata = vlSelf->clint_rdata;
        vlSelf->__PVT__axi_xbar__DOT__rvalid = vlSelf->clint_rvalid;
    } else {
        vlSelf->__PVT__axi_xbar__DOT__rresp = vlSelf->io_master_rresp;
        vlSelf->__PVT__axi_xbar__DOT__rdata = vlSelf->io_master_rdata;
        vlSelf->__PVT__axi_xbar__DOT__rvalid = vlSelf->io_master_rvalid;
    }
    vlSelf->icache_rlast = ((1U == (IData)(vlSelf->__PVT__axi_xbar__DOT__state)) 
                            & (IData)(vlSelf->io_master_rlast));
    vlSelf->lsu_wlast = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.wlast;
    vlSelf->lsu_awlen = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.awlen;
    vlSelf->lsu_arlen = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.arlen;
    vlSelf->icache_arsize = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.i_arsize;
    vlSelf->lsu_bvalid = vlSelf->io_master_bvalid;
    vlSelf->es_to_ms_valid = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.es_to_ms_valid;
    vlSelf->es_to_ms_bus[0U] = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.es_to_ms_bus[0U];
    vlSelf->es_to_ms_bus[1U] = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.es_to_ms_bus[1U];
    vlSelf->es_to_ms_bus[2U] = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.es_to_ms_bus[2U];
    vlSelf->es_to_ms_bus[3U] = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.es_to_ms_bus[3U];
    vlSelf->es_to_ms_bus[4U] = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.es_to_ms_bus[4U];
    vlSelf->es_to_ms_bus[5U] = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.es_to_ms_bus[5U];
    vlSelf->es_to_ds_forward_bus = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.forward_bus;
    vlSelf->inst_finish = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.inst_finish;
    vlSelf->ws_to_ds_forward_bus = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.ws_to_ds_forward_bus;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.ws_allowin 
        = vlSelf->ws_allowin;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.bresp 
        = vlSelf->lsu_bresp;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.csr_mepc 
        = vlSelf->csr_mepc;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.csr_mtvec 
        = vlSelf->csr_mtvec;
    if ((2U == (IData)(vlSelf->__PVT__axi_xbar__DOT__state))) {
        vlSelf->lsu_rresp = vlSelf->__PVT__axi_xbar__DOT__rresp;
        vlSelf->lsu_rdata = vlSelf->__PVT__axi_xbar__DOT__rdata;
    } else {
        vlSelf->lsu_rresp = 0U;
        vlSelf->lsu_rdata = 0U;
    }
    if ((1U == (IData)(vlSelf->__PVT__axi_xbar__DOT__state))) {
        vlSelf->icache_rresp = vlSelf->__PVT__axi_xbar__DOT__rresp;
        vlSelf->icache_rdata = vlSelf->__PVT__axi_xbar__DOT__rdata;
    } else {
        vlSelf->icache_rresp = 0U;
        vlSelf->icache_rdata = 0U;
    }
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.i_rlast 
        = vlSelf->icache_rlast;
    vlSelf->io_master_wlast = vlSelf->lsu_wlast;
    vlSelf->io_master_awlen = vlSelf->lsu_awlen;
    vlSelf->lsu_rvalid = ((2U == (IData)(vlSelf->__PVT__axi_xbar__DOT__state)) 
                          & (IData)(vlSelf->__PVT__axi_xbar__DOT__rvalid));
    vlSelf->icache_rvalid = ((1U == (IData)(vlSelf->__PVT__axi_xbar__DOT__state)) 
                             & (IData)(vlSelf->__PVT__axi_xbar__DOT__rvalid));
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.bvalid 
        = vlSelf->lsu_bvalid;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.es_to_ms_valid 
        = vlSelf->es_to_ms_valid;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.es_to_ms_bus[0U] 
        = vlSelf->es_to_ms_bus[0U];
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.es_to_ms_bus[1U] 
        = vlSelf->es_to_ms_bus[1U];
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.es_to_ms_bus[2U] 
        = vlSelf->es_to_ms_bus[2U];
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.es_to_ms_bus[3U] 
        = vlSelf->es_to_ms_bus[3U];
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.es_to_ms_bus[4U] 
        = vlSelf->es_to_ms_bus[4U];
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.es_to_ms_bus[5U] 
        = vlSelf->es_to_ms_bus[5U];
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.es_to_ds_forward_bus 
        = vlSelf->es_to_ds_forward_bus;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.inst_finish 
        = vlSelf->inst_finish;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.ws_to_ds_forward_bus 
        = vlSelf->ws_to_ds_forward_bus;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.rresp 
        = vlSelf->lsu_rresp;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.i_rresp 
        = vlSelf->icache_rresp;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.rdata 
        = vlSelf->lsu_rdata;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.i_rdata 
        = vlSelf->icache_rdata;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.rvalid 
        = vlSelf->lsu_rvalid;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.i_rvalid 
        = vlSelf->icache_rvalid;
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__1(VysyxSoCFull_ysyx_25110269* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_25110269___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__1\n"); );
    // Body
    vlSelf->fs_to_ds_bus = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.fs_to_ds_bus;
    vlSelf->ifu_arvalid = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.arvalid;
    vlSelf->ifu_araddr = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.araddr;
    vlSelf->lsu_bready = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.bready;
    vlSelf->lsu_araddr = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.araddr;
    vlSelf->lsu_wstrb = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.wstrb;
    vlSelf->lsu_awsize = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.awsize;
    vlSelf->lsu_awaddr = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.awaddr;
    vlSelf->lsu_rready = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.rready;
    vlSelf->lsu_arsize = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.arsize;
    vlSelf->lsu_arvalid = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.arvalid;
    vlSelf->lsu_wdata = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.wdata;
    vlSelf->lsu_awvalid = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.awvalid;
    vlSelf->ms_to_ws_bus[0U] = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.ms_to_ws_bus[0U];
    vlSelf->ms_to_ws_bus[1U] = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.ms_to_ws_bus[1U];
    vlSelf->ms_to_ws_bus[2U] = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.ms_to_ws_bus[2U];
    vlSelf->ms_to_ws_bus[3U] = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.ms_to_ws_bus[3U];
    vlSelf->ms_to_ws_bus[4U] = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.ms_to_ws_bus[4U];
    vlSelf->ms_to_ws_bus[5U] = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.ms_to_ws_bus[5U];
    vlSelf->ms_to_ws_bus[6U] = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.ms_to_ws_bus[6U];
    vlSelf->ms_to_ws_bus[7U] = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.ms_to_ws_bus[7U];
    vlSelf->lsu_wvalid = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.wvalid;
    vlSelf->ms_allowin = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.ms_allowin;
    vlSelf->ms_to_ws_valid = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.ms_to_ws_valid;
    vlSelf->ms_to_ds_forward_bus = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.ms_to_ds_forward_bus;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.clock 
        = vlSelf->clock;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.clock 
        = vlSelf->clock;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.clock 
        = vlSelf->clock;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.clock 
        = vlSelf->clock;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__csr.clock 
        = vlSelf->clock;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.clock 
        = vlSelf->clock;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.clock 
        = vlSelf->clock;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.reset 
        = vlSelf->reset;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.reset 
        = vlSelf->reset;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.reset 
        = vlSelf->reset;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.reset 
        = vlSelf->reset;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__csr.reset 
        = vlSelf->reset;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.reset 
        = vlSelf->reset;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.reset 
        = vlSelf->reset;
    vlSelf->csr_addr = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.csr_addr;
    vlSelf->rs2 = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.rs2;
    vlSelf->rs1 = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.rs1;
    vlSelf->cache_flush = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.cache_flush;
    vlSelf->csr_op = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.csr_op;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.fs_to_ds_bus 
        = vlSelf->fs_to_ds_bus;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.rvalid 
        = vlSelf->ifu_arvalid;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.raddr 
        = vlSelf->ifu_araddr;
    vlSelf->io_master_bready = vlSelf->lsu_bready;
    vlSelf->io_master_wstrb = vlSelf->lsu_wstrb;
    vlSelf->io_master_awsize = vlSelf->lsu_awsize;
    vlSelf->io_master_awaddr = vlSelf->lsu_awaddr;
    vlSelf->__PVT__axi_xbar__DOT__arsize = ((1U == (IData)(vlSelf->__PVT__axi_xbar__DOT__state))
                                             ? (IData)(vlSelf->icache_arsize)
                                             : ((2U 
                                                 == (IData)(vlSelf->__PVT__axi_xbar__DOT__state))
                                                 ? (IData)(vlSelf->lsu_arsize)
                                                 : 0U));
    vlSelf->io_master_wdata = vlSelf->lsu_wdata;
    vlSelf->io_master_awvalid = vlSelf->lsu_awvalid;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.ms_to_ws_bus[0U] 
        = vlSelf->ms_to_ws_bus[0U];
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.ms_to_ws_bus[1U] 
        = vlSelf->ms_to_ws_bus[1U];
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.ms_to_ws_bus[2U] 
        = vlSelf->ms_to_ws_bus[2U];
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.ms_to_ws_bus[3U] 
        = vlSelf->ms_to_ws_bus[3U];
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.ms_to_ws_bus[4U] 
        = vlSelf->ms_to_ws_bus[4U];
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.ms_to_ws_bus[5U] 
        = vlSelf->ms_to_ws_bus[5U];
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.ms_to_ws_bus[6U] 
        = vlSelf->ms_to_ws_bus[6U];
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.ms_to_ws_bus[7U] 
        = vlSelf->ms_to_ws_bus[7U];
    vlSelf->io_master_wvalid = vlSelf->lsu_wvalid;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.ms_allowin 
        = vlSelf->ms_allowin;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.ms_to_ws_valid 
        = vlSelf->ms_to_ws_valid;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.ms_to_ds_forward_bus 
        = vlSelf->ms_to_ds_forward_bus;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__csr.wr_addr 
        = vlSelf->csr_addr;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__csr.rd_addr 
        = vlSelf->csr_addr;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.rs2 
        = vlSelf->rs2;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.rs1 
        = vlSelf->rs1;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.cache_flush 
        = vlSelf->cache_flush;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__csr.csr_wen 
        = (0U != (IData)(vlSelf->csr_op));
}

extern const VlUnpacked<CData/*1:0*/, 256> VysyxSoCFull__ConstPool__TABLE_h6e62605c_0;

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__2(VysyxSoCFull_ysyx_25110269* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_25110269___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__2\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->icache_arlen = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.i_arlen;
    vlSelf->icache_araddr = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.i_araddr;
    vlSelf->ifu_rdata = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.rdata;
    vlSelf->icache_rready = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.i_rready;
    vlSelf->icache_arvalid = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.i_arvalid;
    vlSelf->ifu_rvalid = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.valid;
    vlSelf->es_allowin = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.es_allowin;
    vlSelf->csr_data = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__csr.rd_data;
    if ((1U == (IData)(vlSelf->__PVT__axi_xbar__DOT__state))) {
        vlSelf->__PVT__axi_xbar__DOT__arlen = vlSelf->icache_arlen;
        vlSelf->__PVT__axi_xbar__DOT__araddr = vlSelf->icache_araddr;
        vlSelf->__PVT__axi_xbar__DOT__rready = vlSelf->icache_rready;
        vlSelf->__PVT__axi_xbar__DOT__arvalid = vlSelf->icache_arvalid;
    } else if ((2U == (IData)(vlSelf->__PVT__axi_xbar__DOT__state))) {
        vlSelf->__PVT__axi_xbar__DOT__arlen = vlSelf->lsu_arlen;
        vlSelf->__PVT__axi_xbar__DOT__araddr = vlSelf->lsu_araddr;
        vlSelf->__PVT__axi_xbar__DOT__rready = vlSelf->lsu_rready;
        vlSelf->__PVT__axi_xbar__DOT__arvalid = vlSelf->lsu_arvalid;
    } else {
        vlSelf->__PVT__axi_xbar__DOT__arlen = 0U;
        vlSelf->__PVT__axi_xbar__DOT__araddr = 0U;
        vlSelf->__PVT__axi_xbar__DOT__rready = 0U;
        vlSelf->__PVT__axi_xbar__DOT__arvalid = 0U;
    }
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.rdata 
        = vlSelf->ifu_rdata;
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
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.rvalid 
        = vlSelf->ifu_rvalid;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.es_allowin 
        = vlSelf->es_allowin;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.csr_data 
        = vlSelf->csr_data;
    vlSelf->clint_rready = ((IData)(vlSelf->clint_rvalid) 
                            & (IData)(vlSelf->__PVT__axi_xbar__DOT__rready));
    vlSelf->io_master_rready = ((IData)(vlSelf->io_master_rvalid) 
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

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__3(VysyxSoCFull_ysyx_25110269* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_25110269___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__3\n"); );
    // Body
    vlSelf->rs2_data = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.rf2_data;
    vlSelf->rs1_data = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.rf1_data;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.rf2_data 
        = vlSelf->rs2_data;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.rf1_data 
        = vlSelf->rs1_data;
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__4(VysyxSoCFull_ysyx_25110269* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_25110269___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__4\n"); );
    // Body
    vlSelf->__PVT__axi_xbar__DOT__arready = ((IData)(vlSelf->clint_arvalid)
                                              ? (IData)(vlSelf->clint_arready)
                                              : (IData)(vlSelf->io_master_arready));
    vlSelf->lsu_wready = vlSelf->io_master_wready;
    vlSelf->lsu_awready = vlSelf->io_master_awready;
    vlSelf->csr_result = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.csr_result;
    vlSelf->ds_allowin = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.ds_allowin;
    vlSelf->ds_to_es_valid = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.ds_to_es_valid;
    vlSelf->ds_to_es_bus[0U] = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.ds_to_es_bus[0U];
    vlSelf->ds_to_es_bus[1U] = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.ds_to_es_bus[1U];
    vlSelf->ds_to_es_bus[2U] = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.ds_to_es_bus[2U];
    vlSelf->ds_to_es_bus[3U] = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.ds_to_es_bus[3U];
    vlSelf->ds_to_es_bus[4U] = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.ds_to_es_bus[4U];
    vlSelf->ds_to_es_bus[5U] = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.ds_to_es_bus[5U];
    vlSelf->ds_to_es_bus[6U] = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.ds_to_es_bus[6U];
    vlSelf->ds_to_es_bus[7U] = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.ds_to_es_bus[7U];
    vlSelf->ecall = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.ecall;
    vlSelf->mret = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.mret;
    vlSelf->fence = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.fence;
    vlSelf->br_bus = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.br_bus;
    vlSelf->icache_arready = ((1U == (IData)(vlSelf->__PVT__axi_xbar__DOT__state)) 
                              & (IData)(vlSelf->__PVT__axi_xbar__DOT__arready));
    vlSelf->lsu_arready = ((2U == (IData)(vlSelf->__PVT__axi_xbar__DOT__state)) 
                           & (IData)(vlSelf->__PVT__axi_xbar__DOT__arready));
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.wready 
        = vlSelf->lsu_wready;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.awready 
        = vlSelf->lsu_awready;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__csr.wr_data 
        = vlSelf->csr_result;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.ds_allowin 
        = vlSelf->ds_allowin;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.ds_to_es_valid 
        = vlSelf->ds_to_es_valid;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.ds_to_es_bus[0U] 
        = vlSelf->ds_to_es_bus[0U];
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.ds_to_es_bus[1U] 
        = vlSelf->ds_to_es_bus[1U];
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.ds_to_es_bus[2U] 
        = vlSelf->ds_to_es_bus[2U];
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.ds_to_es_bus[3U] 
        = vlSelf->ds_to_es_bus[3U];
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.ds_to_es_bus[4U] 
        = vlSelf->ds_to_es_bus[4U];
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.ds_to_es_bus[5U] 
        = vlSelf->ds_to_es_bus[5U];
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.ds_to_es_bus[6U] 
        = vlSelf->ds_to_es_bus[6U];
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.ds_to_es_bus[7U] 
        = vlSelf->ds_to_es_bus[7U];
    vlSelf->ds_pc = ((vlSelf->ds_to_es_bus[7U] << 0x1fU) 
                     | (vlSelf->ds_to_es_bus[6U] >> 1U));
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__csr.ecall 
        = vlSelf->ecall;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.ecall 
        = vlSelf->ecall;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__csr.mret 
        = vlSelf->mret;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.mret 
        = vlSelf->mret;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.fence 
        = vlSelf->fence;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.br_bus 
        = vlSelf->br_bus;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.i_arready 
        = vlSelf->icache_arready;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.arready 
        = vlSelf->lsu_arready;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__csr.ds_pc 
        = vlSelf->ds_pc;
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__5(VysyxSoCFull_ysyx_25110269* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_25110269___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__5\n"); );
    // Body
    vlSelf->fs_to_ds_valid = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.fs_to_ds_valid;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.fs_to_ds_valid 
        = vlSelf->fs_to_ds_valid;
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__0(VysyxSoCFull_ysyx_25110269* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_25110269___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__0\n"); );
    // Body
    vlSelf->inst_finish = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.inst_finish;
    vlSelf->ws_to_ds_forward_bus = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.ws_to_ds_forward_bus;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.inst_finish 
        = vlSelf->inst_finish;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.ws_to_ds_forward_bus 
        = vlSelf->ws_to_ds_forward_bus;
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__1(VysyxSoCFull_ysyx_25110269* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_25110269___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__1\n"); );
    // Body
    vlSelf->fs_to_ds_bus = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.fs_to_ds_bus;
    vlSelf->ifu_araddr = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.araddr;
    vlSelf->ifu_arvalid = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.arvalid;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.raddr 
        = vlSelf->ifu_araddr;
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__2(VysyxSoCFull_ysyx_25110269* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_25110269___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__2\n"); );
    // Body
    vlSelf->es_to_ms_valid = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.es_to_ms_valid;
    vlSelf->es_to_ms_bus[0U] = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.es_to_ms_bus[0U];
    vlSelf->es_to_ms_bus[1U] = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.es_to_ms_bus[1U];
    vlSelf->es_to_ms_bus[2U] = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.es_to_ms_bus[2U];
    vlSelf->es_to_ms_bus[3U] = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.es_to_ms_bus[3U];
    vlSelf->es_to_ms_bus[4U] = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.es_to_ms_bus[4U];
    vlSelf->es_to_ms_bus[5U] = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.es_to_ms_bus[5U];
    vlSelf->es_to_ds_forward_bus = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.forward_bus;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.es_to_ds_forward_bus 
        = vlSelf->es_to_ds_forward_bus;
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__4(VysyxSoCFull_ysyx_25110269* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_25110269___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__4\n"); );
    // Body
    vlSelf->lsu_bready = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.bready;
    vlSelf->lsu_araddr = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.araddr;
    vlSelf->lsu_wstrb = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.wstrb;
    vlSelf->lsu_awsize = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.awsize;
    vlSelf->lsu_awaddr = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.awaddr;
    vlSelf->lsu_rready = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.rready;
    vlSelf->lsu_arsize = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.arsize;
    vlSelf->lsu_arvalid = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.arvalid;
    vlSelf->lsu_wdata = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.wdata;
    vlSelf->lsu_awvalid = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.awvalid;
    vlSelf->ms_to_ws_bus[0U] = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.ms_to_ws_bus[0U];
    vlSelf->ms_to_ws_bus[1U] = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.ms_to_ws_bus[1U];
    vlSelf->ms_to_ws_bus[2U] = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.ms_to_ws_bus[2U];
    vlSelf->ms_to_ws_bus[3U] = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.ms_to_ws_bus[3U];
    vlSelf->ms_to_ws_bus[4U] = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.ms_to_ws_bus[4U];
    vlSelf->ms_to_ws_bus[5U] = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.ms_to_ws_bus[5U];
    vlSelf->ms_to_ws_bus[6U] = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.ms_to_ws_bus[6U];
    vlSelf->ms_to_ws_bus[7U] = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.ms_to_ws_bus[7U];
    vlSelf->lsu_wvalid = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.wvalid;
    vlSelf->ms_allowin = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.ms_allowin;
    vlSelf->io_master_bready = vlSelf->lsu_bready;
    vlSelf->io_master_wstrb = vlSelf->lsu_wstrb;
    vlSelf->io_master_awsize = vlSelf->lsu_awsize;
    vlSelf->io_master_awvalid = vlSelf->lsu_awvalid;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.ms_to_ws_bus[0U] 
        = vlSelf->ms_to_ws_bus[0U];
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.ms_to_ws_bus[1U] 
        = vlSelf->ms_to_ws_bus[1U];
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.ms_to_ws_bus[2U] 
        = vlSelf->ms_to_ws_bus[2U];
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.ms_to_ws_bus[3U] 
        = vlSelf->ms_to_ws_bus[3U];
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.ms_to_ws_bus[4U] 
        = vlSelf->ms_to_ws_bus[4U];
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.ms_to_ws_bus[5U] 
        = vlSelf->ms_to_ws_bus[5U];
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.ms_to_ws_bus[6U] 
        = vlSelf->ms_to_ws_bus[6U];
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.ms_to_ws_bus[7U] 
        = vlSelf->ms_to_ws_bus[7U];
    vlSelf->io_master_wvalid = vlSelf->lsu_wvalid;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.ms_allowin 
        = vlSelf->ms_allowin;
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__5(VysyxSoCFull_ysyx_25110269* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_25110269___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__5\n"); );
    // Body
    vlSelf->csr_mtvec = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__csr.csr_mtvec;
    vlSelf->csr_mepc = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__csr.csr_mepc;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.csr_mtvec 
        = vlSelf->csr_mtvec;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.csr_mepc 
        = vlSelf->csr_mepc;
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__6(VysyxSoCFull_ysyx_25110269* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_25110269___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__6\n"); );
    // Body
    vlSelf->csr_addr = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.csr_addr;
    vlSelf->rs2 = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.rs2;
    vlSelf->rs1 = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.rs1;
    vlSelf->cache_flush = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.cache_flush;
    vlSelf->csr_op = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.csr_op;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__csr.wr_addr 
        = vlSelf->csr_addr;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__csr.rd_addr 
        = vlSelf->csr_addr;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.rs2 
        = vlSelf->rs2;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.rs1 
        = vlSelf->rs1;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__csr.csr_wen 
        = (0U != (IData)(vlSelf->csr_op));
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__7(VysyxSoCFull_ysyx_25110269* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_25110269___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__7\n"); );
    // Body
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.reset 
        = vlSelf->reset;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.reset 
        = vlSelf->reset;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.reset 
        = vlSelf->reset;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.reset 
        = vlSelf->reset;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__csr.reset 
        = vlSelf->reset;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.reset 
        = vlSelf->reset;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.reset 
        = vlSelf->reset;
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__8(VysyxSoCFull_ysyx_25110269* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_25110269___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__8\n"); );
    // Body
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.es_to_ms_bus[0U] 
        = vlSelf->es_to_ms_bus[0U];
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.es_to_ms_bus[1U] 
        = vlSelf->es_to_ms_bus[1U];
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.es_to_ms_bus[2U] 
        = vlSelf->es_to_ms_bus[2U];
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.es_to_ms_bus[3U] 
        = vlSelf->es_to_ms_bus[3U];
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.es_to_ms_bus[4U] 
        = vlSelf->es_to_ms_bus[4U];
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.es_to_ms_bus[5U] 
        = vlSelf->es_to_ms_bus[5U];
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.es_to_ms_valid 
        = vlSelf->es_to_ms_valid;
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__0(VysyxSoCFull_ysyx_25110269* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__0\n"); );
    // Body
    vlSelf->es_allowin = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.es_allowin;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.es_allowin 
        = vlSelf->es_allowin;
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__1(VysyxSoCFull_ysyx_25110269* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__1\n"); );
    // Body
    vlSelf->lsu_bvalid = vlSelf->io_master_bvalid;
    vlSelf->lsu_bresp = vlSelf->io_master_bresp;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.bvalid 
        = vlSelf->lsu_bvalid;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.bresp 
        = vlSelf->lsu_bresp;
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__10(VysyxSoCFull_ysyx_25110269* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_25110269___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__10\n"); );
    // Body
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.fs_to_ds_bus 
        = vlSelf->fs_to_ds_bus;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.rvalid 
        = vlSelf->ifu_arvalid;
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__11(VysyxSoCFull_ysyx_25110269* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_25110269___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__11\n"); );
    // Body
    vlSelf->icache_arlen = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.i_arlen;
    vlSelf->icache_araddr = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.i_araddr;
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__2(VysyxSoCFull_ysyx_25110269* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__2\n"); );
    // Body
    vlSelf->csr_data = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__csr.rd_data;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.csr_data 
        = vlSelf->csr_data;
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__12(VysyxSoCFull_ysyx_25110269* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_25110269___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__12\n"); );
    // Body
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.cache_flush 
        = vlSelf->cache_flush;
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__5(VysyxSoCFull_ysyx_25110269* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__5\n"); );
    // Body
    vlSelf->ms_to_ws_valid = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.ms_to_ws_valid;
    vlSelf->ms_to_ds_forward_bus = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.ms_to_ds_forward_bus;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.ms_to_ws_valid 
        = vlSelf->ms_to_ws_valid;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.ms_to_ds_forward_bus 
        = vlSelf->ms_to_ds_forward_bus;
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__6(VysyxSoCFull_ysyx_25110269* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__6\n"); );
    // Body
    if ((0x200U == (vlSelf->__PVT__axi_xbar__DOT__raddr 
                    >> 0x10U))) {
        vlSelf->__PVT__axi_xbar__DOT__rvalid = vlSelf->clint_rvalid;
        vlSelf->__PVT__axi_xbar__DOT__rresp = vlSelf->clint_rresp;
        vlSelf->__PVT__axi_xbar__DOT__rdata = vlSelf->clint_rdata;
    } else {
        vlSelf->__PVT__axi_xbar__DOT__rvalid = vlSelf->io_master_rvalid;
        vlSelf->__PVT__axi_xbar__DOT__rresp = vlSelf->io_master_rresp;
        vlSelf->__PVT__axi_xbar__DOT__rdata = vlSelf->io_master_rdata;
    }
    vlSelf->icache_rlast = ((1U == (IData)(vlSelf->__PVT__axi_xbar__DOT__state)) 
                            & (IData)(vlSelf->io_master_rlast));
    vlSelf->lsu_rvalid = ((2U == (IData)(vlSelf->__PVT__axi_xbar__DOT__state)) 
                          & (IData)(vlSelf->__PVT__axi_xbar__DOT__rvalid));
    vlSelf->icache_rvalid = ((1U == (IData)(vlSelf->__PVT__axi_xbar__DOT__state)) 
                             & (IData)(vlSelf->__PVT__axi_xbar__DOT__rvalid));
    if ((2U == (IData)(vlSelf->__PVT__axi_xbar__DOT__state))) {
        vlSelf->lsu_rresp = vlSelf->__PVT__axi_xbar__DOT__rresp;
        vlSelf->lsu_rdata = vlSelf->__PVT__axi_xbar__DOT__rdata;
    } else {
        vlSelf->lsu_rresp = 0U;
        vlSelf->lsu_rdata = 0U;
    }
    if ((1U == (IData)(vlSelf->__PVT__axi_xbar__DOT__state))) {
        vlSelf->icache_rresp = vlSelf->__PVT__axi_xbar__DOT__rresp;
        vlSelf->icache_rdata = vlSelf->__PVT__axi_xbar__DOT__rdata;
    } else {
        vlSelf->icache_rresp = 0U;
        vlSelf->icache_rdata = 0U;
    }
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.i_rlast 
        = vlSelf->icache_rlast;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.rvalid 
        = vlSelf->lsu_rvalid;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.i_rvalid 
        = vlSelf->icache_rvalid;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.rresp 
        = vlSelf->lsu_rresp;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.i_rresp 
        = vlSelf->icache_rresp;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.rdata 
        = vlSelf->lsu_rdata;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.i_rdata 
        = vlSelf->icache_rdata;
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__7(VysyxSoCFull_ysyx_25110269* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__7\n"); );
    // Body
    vlSelf->icache_rready = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.i_rready;
    vlSelf->icache_arvalid = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.i_arvalid;
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__10(VysyxSoCFull_ysyx_25110269* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__10\n"); );
    // Body
    vlSelf->ds_allowin = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.ds_allowin;
    vlSelf->ds_to_es_valid = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.ds_to_es_valid;
    vlSelf->ecall = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.ecall;
    vlSelf->mret = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.mret;
    vlSelf->fence = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.fence;
    vlSelf->br_bus = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.br_bus;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.ds_allowin 
        = vlSelf->ds_allowin;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.ds_to_es_valid 
        = vlSelf->ds_to_es_valid;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__csr.ecall 
        = vlSelf->ecall;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.ecall 
        = vlSelf->ecall;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__csr.mret 
        = vlSelf->mret;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.mret 
        = vlSelf->mret;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.fence 
        = vlSelf->fence;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.br_bus 
        = vlSelf->br_bus;
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__11(VysyxSoCFull_ysyx_25110269* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__11\n"); );
    // Body
    vlSelf->ifu_rdata = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.rdata;
    vlSelf->ifu_rvalid = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.valid;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.rdata 
        = vlSelf->ifu_rdata;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.rvalid 
        = vlSelf->ifu_rvalid;
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__14(VysyxSoCFull_ysyx_25110269* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__14\n"); );
    // Body
    vlSelf->csr_result = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.csr_result;
    vlSelf->ds_to_es_bus[0U] = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.ds_to_es_bus[0U];
    vlSelf->ds_to_es_bus[1U] = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.ds_to_es_bus[1U];
    vlSelf->ds_to_es_bus[2U] = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.ds_to_es_bus[2U];
    vlSelf->ds_to_es_bus[3U] = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.ds_to_es_bus[3U];
    vlSelf->ds_to_es_bus[4U] = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.ds_to_es_bus[4U];
    vlSelf->ds_to_es_bus[5U] = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.ds_to_es_bus[5U];
    vlSelf->ds_to_es_bus[6U] = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.ds_to_es_bus[6U];
    vlSelf->ds_to_es_bus[7U] = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.ds_to_es_bus[7U];
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__csr.wr_data 
        = vlSelf->csr_result;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.ds_to_es_bus[0U] 
        = vlSelf->ds_to_es_bus[0U];
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.ds_to_es_bus[1U] 
        = vlSelf->ds_to_es_bus[1U];
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.ds_to_es_bus[2U] 
        = vlSelf->ds_to_es_bus[2U];
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.ds_to_es_bus[3U] 
        = vlSelf->ds_to_es_bus[3U];
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.ds_to_es_bus[4U] 
        = vlSelf->ds_to_es_bus[4U];
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.ds_to_es_bus[5U] 
        = vlSelf->ds_to_es_bus[5U];
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.ds_to_es_bus[6U] 
        = vlSelf->ds_to_es_bus[6U];
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.ds_to_es_bus[7U] 
        = vlSelf->ds_to_es_bus[7U];
    vlSelf->ds_pc = ((vlSelf->ds_to_es_bus[7U] << 0x1fU) 
                     | (vlSelf->ds_to_es_bus[6U] >> 1U));
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__csr.ds_pc 
        = vlSelf->ds_pc;
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__16(VysyxSoCFull_ysyx_25110269* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__16\n"); );
    // Body
    vlSelf->__PVT__axi_xbar__DOT__arready = ((IData)(vlSelf->clint_arvalid)
                                              ? (IData)(vlSelf->clint_arready)
                                              : (IData)(vlSelf->io_master_arready));
    vlSelf->lsu_wready = vlSelf->io_master_wready;
    vlSelf->lsu_awready = vlSelf->io_master_awready;
    vlSelf->icache_arready = ((1U == (IData)(vlSelf->__PVT__axi_xbar__DOT__state)) 
                              & (IData)(vlSelf->__PVT__axi_xbar__DOT__arready));
    vlSelf->lsu_arready = ((2U == (IData)(vlSelf->__PVT__axi_xbar__DOT__state)) 
                           & (IData)(vlSelf->__PVT__axi_xbar__DOT__arready));
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.wready 
        = vlSelf->lsu_wready;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.awready 
        = vlSelf->lsu_awready;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.i_arready 
        = vlSelf->icache_arready;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.arready 
        = vlSelf->lsu_arready;
}
