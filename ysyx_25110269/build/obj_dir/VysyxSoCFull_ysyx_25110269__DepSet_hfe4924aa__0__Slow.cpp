// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull_ysyx_25110269.h"

VL_ATTR_COLD void VysyxSoCFull_ysyx_25110269___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__0(VysyxSoCFull_ysyx_25110269* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_25110269___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__0\n"); );
    // Body
    vlSelf->ws_allowin = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.ws_allowin;
    vlSelf->icache_arburst = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.i_arburst;
    vlSelf->csr_mepc = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__csr.csr_mepc;
    vlSelf->csr_mtvec = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__csr.csr_mtvec;
    vlSelf->lsu_wlast = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.wlast;
    vlSelf->lsu_awlen = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.awlen;
    vlSelf->lsu_arlen = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.arlen;
    vlSelf->icache_arsize = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.i_arsize;
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
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.csr_mepc 
        = vlSelf->csr_mepc;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.csr_mtvec 
        = vlSelf->csr_mtvec;
    vlSelf->io_master_wlast = vlSelf->lsu_wlast;
    vlSelf->io_master_awlen = vlSelf->lsu_awlen;
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
}

VL_ATTR_COLD void VysyxSoCFull_ysyx_25110269___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__1(VysyxSoCFull_ysyx_25110269* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_25110269___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__1\n"); );
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
    if ((1U == (IData)(vlSelf->__PVT__axi_xbar__DOT__state))) {
        vlSelf->icache_rlast = vlSelf->io_master_rlast;
        vlSelf->lsu_bvalid = vlSelf->io_master_bvalid;
        vlSelf->lsu_bresp = vlSelf->io_master_bresp;
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
        vlSelf->__PVT__axi_xbar__DOT__arsize = vlSelf->icache_arsize;
        vlSelf->icache_rresp = vlSelf->__PVT__axi_xbar__DOT__rresp;
        vlSelf->icache_rdata = vlSelf->__PVT__axi_xbar__DOT__rdata;
    } else {
        vlSelf->icache_rlast = 0U;
        vlSelf->lsu_bvalid = vlSelf->io_master_bvalid;
        vlSelf->lsu_bresp = vlSelf->io_master_bresp;
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
        vlSelf->__PVT__axi_xbar__DOT__arsize = ((2U 
                                                 == (IData)(vlSelf->__PVT__axi_xbar__DOT__state))
                                                 ? (IData)(vlSelf->lsu_arsize)
                                                 : 0U);
        vlSelf->icache_rresp = 0U;
        vlSelf->icache_rdata = 0U;
    }
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
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.i_rlast 
        = vlSelf->icache_rlast;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.bvalid 
        = vlSelf->lsu_bvalid;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.bresp 
        = vlSelf->lsu_bresp;
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

extern const VlUnpacked<CData/*1:0*/, 256> VysyxSoCFull__ConstPool__TABLE_h6e62605c_0;

VL_ATTR_COLD void VysyxSoCFull_ysyx_25110269___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__2(VysyxSoCFull_ysyx_25110269* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_25110269___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__2\n"); );
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
    vlSelf->ms_to_ws_valid = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.ms_to_ws_valid;
    vlSelf->ms_to_ds_forward_bus = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.ms_to_ds_forward_bus;
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
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.ms_to_ws_valid 
        = vlSelf->ms_to_ws_valid;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.ms_to_ds_forward_bus 
        = vlSelf->ms_to_ds_forward_bus;
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
