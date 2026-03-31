// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VysyxSoCFull.h for the primary calling header

#ifndef VERILATED_VYSYXSOCFULL_YSYX_25110269_H_
#define VERILATED_VYSYXSOCFULL_YSYX_25110269_H_  // guard

#include "verilated.h"

class VysyxSoCFull__Syms;
class VysyxSoCFull_ysyx_25110269_IFU;
class VysyxSoCFull_ysyx_25110269_IDU;
class VysyxSoCFull_ysyx_25110269_EXU;
class VysyxSoCFull_ysyx_25110269_LSU;
class VysyxSoCFull_ysyx_25110269_WBU;
class VysyxSoCFull_ysyx_25110269_csr;
class VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8;


class VysyxSoCFull_ysyx_25110269 final : public VerilatedModule {
  public:
    // CELLS
    VysyxSoCFull_ysyx_25110269_IFU* IFU;
    VysyxSoCFull_ysyx_25110269_IDU* IDU;
    VysyxSoCFull_ysyx_25110269_EXU* EXU;
    VysyxSoCFull_ysyx_25110269_LSU* LSU;
    VysyxSoCFull_ysyx_25110269_WBU* WBU;
    VysyxSoCFull_ysyx_25110269_csr* csr;
    VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8* icache;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_IN8(io_interrupt,0,0);
        VL_IN8(io_master_awready,0,0);
        VL_OUT8(io_master_awvalid,0,0);
        VL_OUT8(io_master_awid,3,0);
        VL_OUT8(io_master_awlen,7,0);
        VL_OUT8(io_master_awsize,2,0);
        VL_OUT8(io_master_awburst,1,0);
        VL_IN8(io_master_wready,0,0);
        VL_OUT8(io_master_wvalid,0,0);
        VL_OUT8(io_master_wstrb,3,0);
        VL_OUT8(io_master_wlast,0,0);
        VL_OUT8(io_master_bready,0,0);
        VL_IN8(io_master_bvalid,0,0);
        VL_IN8(io_master_bresp,1,0);
        VL_IN8(io_master_bid,3,0);
        VL_IN8(io_master_arready,0,0);
        VL_OUT8(io_master_arvalid,0,0);
        VL_OUT8(io_master_arid,3,0);
        VL_OUT8(io_master_arlen,7,0);
        VL_OUT8(io_master_arsize,2,0);
        VL_OUT8(io_master_arburst,1,0);
        VL_OUT8(io_master_rready,0,0);
        VL_IN8(io_master_rvalid,0,0);
        VL_IN8(io_master_rresp,1,0);
        VL_IN8(io_master_rlast,0,0);
        VL_IN8(io_master_rid,3,0);
        VL_OUT8(io_slave_awready,0,0);
        VL_IN8(io_slave_awvalid,0,0);
        VL_IN8(io_slave_awid,3,0);
        VL_IN8(io_slave_awlen,7,0);
        VL_IN8(io_slave_awsize,2,0);
        VL_IN8(io_slave_awburst,1,0);
        VL_OUT8(io_slave_wready,0,0);
        VL_IN8(io_slave_wvalid,0,0);
        VL_IN8(io_slave_wstrb,3,0);
        VL_IN8(io_slave_wlast,0,0);
        VL_IN8(io_slave_bready,0,0);
        VL_OUT8(io_slave_bvalid,0,0);
        VL_OUT8(io_slave_bresp,1,0);
        VL_OUT8(io_slave_bid,3,0);
        VL_OUT8(io_slave_arready,0,0);
        VL_IN8(io_slave_arvalid,0,0);
        VL_IN8(io_slave_arid,3,0);
        VL_IN8(io_slave_arlen,7,0);
        VL_IN8(io_slave_arsize,2,0);
        VL_IN8(io_slave_arburst,1,0);
        VL_IN8(io_slave_rready,0,0);
        VL_OUT8(io_slave_rvalid,0,0);
        VL_OUT8(io_slave_rresp,1,0);
        VL_OUT8(io_slave_rlast,0,0);
        VL_OUT8(io_slave_rid,3,0);
        CData/*0:0*/ inst_finish;
        CData/*0:0*/ fs_to_ds_valid;
        CData/*0:0*/ ds_allowin;
        CData/*0:0*/ ds_to_es_valid;
        CData/*0:0*/ es_allowin;
        CData/*0:0*/ es_to_ms_valid;
        CData/*0:0*/ ms_allowin;
        CData/*0:0*/ ms_to_ws_valid;
        CData/*0:0*/ ws_allowin;
        CData/*0:0*/ br_stall;
        CData/*0:0*/ br_taken;
    };
    struct {
        CData/*0:0*/ mret;
        CData/*0:0*/ ecall;
        CData/*0:0*/ fence;
        CData/*0:0*/ rf_wen;
        CData/*0:0*/ csr_wen;
        CData/*0:0*/ mem_wen;
        CData/*0:0*/ mem_ren;
        CData/*3:0*/ mem_op;
        CData/*3:0*/ load;
        CData/*0:0*/ load_sign;
        CData/*3:0*/ store;
        CData/*0:0*/ res_from_csr;
        CData/*4:0*/ rd;
        CData/*4:0*/ rs1;
        CData/*4:0*/ rs2;
        CData/*1:0*/ csr_op;
        CData/*0:0*/ cache_flush;
        CData/*0:0*/ ifu_arvalid;
        CData/*0:0*/ ifu_rvalid;
        CData/*0:0*/ icache_arvalid;
        CData/*7:0*/ icache_arlen;
        CData/*2:0*/ icache_arsize;
        CData/*0:0*/ icache_arready;
        CData/*1:0*/ icache_arburst;
        CData/*0:0*/ icache_rvalid;
        CData/*1:0*/ icache_rresp;
        CData/*0:0*/ icache_rready;
        CData/*0:0*/ icache_rlast;
        CData/*0:0*/ lsu_arvalid;
        CData/*0:0*/ lsu_arready;
        CData/*0:0*/ lsu_rvalid;
        CData/*0:0*/ lsu_rready;
        CData/*0:0*/ lsu_awvalid;
        CData/*0:0*/ lsu_awready;
        CData/*0:0*/ lsu_wvalid;
        CData/*0:0*/ lsu_wready;
        CData/*0:0*/ lsu_wlast;
        CData/*0:0*/ lsu_bvalid;
        CData/*0:0*/ lsu_bready;
        CData/*7:0*/ lsu_awlen;
        CData/*7:0*/ lsu_arlen;
        CData/*3:0*/ lsu_wstrb;
        CData/*2:0*/ lsu_awsize;
        CData/*2:0*/ lsu_arsize;
        CData/*1:0*/ lsu_rresp;
        CData/*1:0*/ lsu_bresp;
        CData/*0:0*/ clint_arvalid;
        CData/*0:0*/ clint_arready;
        CData/*0:0*/ clint_rvalid;
        CData/*0:0*/ clint_rready;
        CData/*7:0*/ clint_arlen;
        CData/*2:0*/ clint_arsize;
        CData/*1:0*/ clint_rresp;
        CData/*7:0*/ __PVT__clint__DOT__lfsr;
        CData/*4:0*/ __PVT__clint__DOT__random_delay;
        CData/*1:0*/ __PVT__axi_xbar__DOT__state;
        CData/*1:0*/ __PVT__axi_xbar__DOT__next_state;
        CData/*0:0*/ __PVT__axi_xbar__DOT__arvalid;
        CData/*0:0*/ __PVT__axi_xbar__DOT__arready;
        CData/*0:0*/ __PVT__axi_xbar__DOT__rready;
        CData/*0:0*/ __PVT__axi_xbar__DOT__rvalid;
        CData/*7:0*/ __PVT__axi_xbar__DOT__arlen;
        CData/*2:0*/ __PVT__axi_xbar__DOT__arsize;
        CData/*1:0*/ __PVT__axi_xbar__DOT__rresp;
    };
    struct {
        SData/*11:0*/ csr_addr;
        SData/*11:0*/ wr_csr_addr;
        SData/*11:0*/ alu_op;
        VL_OUT(io_master_awaddr,31,0);
        VL_OUT(io_master_wdata,31,0);
        VL_OUT(io_master_araddr,31,0);
        VL_IN(io_master_rdata,31,0);
        VL_IN(io_slave_awaddr,31,0);
        VL_IN(io_slave_wdata,31,0);
        VL_IN(io_slave_araddr,31,0);
        VL_OUT(io_slave_rdata,31,0);
        VlWide<8>/*224:0*/ ds_to_es_bus;
        VlWide<6>/*175:0*/ es_to_ms_bus;
        VlWide<8>/*234:0*/ ms_to_ws_bus;
        IData/*31:0*/ seq_pc;
        IData/*31:0*/ br_target;
        IData/*31:0*/ csr_data;
        IData/*31:0*/ wr_csr_data;
        IData/*31:0*/ src1;
        IData/*31:0*/ src2;
        IData/*31:0*/ rs1_data;
        IData/*31:0*/ rs2_data;
        IData/*31:0*/ alu_result;
        IData/*31:0*/ load_data;
        IData/*31:0*/ st_data;
        IData/*31:0*/ csr_result;
        IData/*31:0*/ wb_data;
        IData/*31:0*/ ifu_araddr;
        IData/*31:0*/ ifu_rdata;
        IData/*31:0*/ icache_araddr;
        IData/*31:0*/ icache_rdata;
        IData/*31:0*/ lsu_awaddr;
        IData/*31:0*/ lsu_wdata;
        IData/*31:0*/ lsu_araddr;
        IData/*31:0*/ lsu_rdata;
        IData/*31:0*/ clint_araddr;
        IData/*31:0*/ clint_rdata;
        IData/*31:0*/ ds_pc;
        IData/*31:0*/ csr_mtvec;
        IData/*31:0*/ csr_mepc;
        IData/*31:0*/ __PVT__clint__DOT__mtime_l;
        IData/*31:0*/ __PVT__clint__DOT__mtime_h;
        IData/*31:0*/ __PVT__axi_xbar__DOT__raddr;
        IData/*31:0*/ __PVT__axi_xbar__DOT__araddr;
        IData/*31:0*/ __PVT__axi_xbar__DOT__rdata;
        QData/*63:0*/ fs_to_ds_bus;
        QData/*32:0*/ br_bus;
        QData/*38:0*/ es_to_ds_forward_bus;
        QData/*38:0*/ ms_to_ds_forward_bus;
        QData/*37:0*/ ws_to_ds_forward_bus;
    };

    // INTERNAL VARIABLES
    VysyxSoCFull__Syms* const vlSymsp;

    // CONSTRUCTORS
    VysyxSoCFull_ysyx_25110269(VysyxSoCFull__Syms* symsp, const char* v__name);
    ~VysyxSoCFull_ysyx_25110269();
    VL_UNCOPYABLE(VysyxSoCFull_ysyx_25110269);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
