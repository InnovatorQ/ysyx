/*verilator public_on*/
import "DPI-C" function void ebreak();
import "DPI-C" function void skip_ref();
`include "mycpu.vh"
module ysyx_25110269(
    input           clock,
    input           reset,
    input           io_interrupt,

    input           io_master_awready,
    output          io_master_awvalid,
    output [31:0]   io_master_awaddr,
    output [3:0]    io_master_awid,
    output [7:0]    io_master_awlen,
    output [2:0]    io_master_awsize,
    output [1:0]    io_master_awburst,

    input           io_master_wready,
    output          io_master_wvalid,
    output [31:0]   io_master_wdata,
    output [3:0]    io_master_wstrb,
    output          io_master_wlast,

    output          io_master_bready,
    input           io_master_bvalid,
    input [1:0]     io_master_bresp,
    input [3:0]     io_master_bid,

    input           io_master_arready,
    output          io_master_arvalid,
    output [31:0]   io_master_araddr,
    output [3:0]    io_master_arid,
    output [7:0]    io_master_arlen,
    output [2:0]    io_master_arsize,
    output [1:0]    io_master_arburst,

    output          io_master_rready,
    input           io_master_rvalid,
    input [1:0]     io_master_rresp,
    input [31:0]    io_master_rdata,
    input           io_master_rlast,
    input [3:0]     io_master_rid,

    output          io_slave_awready,
    input           io_slave_awvalid,
    input [31:0]    io_slave_awaddr,
    input [3:0]     io_slave_awid,
    input [7:0]     io_slave_awlen,
    input [2:0]     io_slave_awsize,
    input [1:0]     io_slave_awburst,

    output          io_slave_wready,
    input           io_slave_wvalid,
    input [31:0]    io_slave_wdata,
    input [3:0]     io_slave_wstrb,
    input           io_slave_wlast,

    input           io_slave_bready,
    output          io_slave_bvalid,
    output [1:0]    io_slave_bresp,
    output [3:0]    io_slave_bid,

    output          io_slave_arready,
    input           io_slave_arvalid,
    input [31:0]    io_slave_araddr,
    input [3:0]     io_slave_arid,
    input [7:0]     io_slave_arlen,
    input [2:0]     io_slave_arsize,
    input [1:0]     io_slave_arburst,

    input           io_slave_rready,
    output          io_slave_rvalid,
    output [1:0]    io_slave_rresp,
    output [31:0]   io_slave_rdata,
    output          io_slave_rlast,
    output [3:0]    io_slave_rid           

);
    assign  io_slave_awready = 1'b0;
    assign  io_slave_wready =1'b0;
    assign  io_slave_bvalid = 1'b0;
    assign  io_slave_bresp = 2'b0;
    assign  io_slave_bid = 4'b0;
    assign  io_slave_arready = 1'b0;
    assign  io_slave_rvalid = 1'b0;
    assign  io_slave_rresp = 2'b0;
    assign  io_slave_rdata = 32'b0;
    assign  io_slave_rlast = 1'b0;
    assign  io_slave_rid = 4'b0;
    assign  io_master_awid = 4'b0;
    assign  io_master_awburst = 2'b0;
    assign  io_master_arid = 4'b0;

    reg             inst_finish ;
    wire            fs_to_ds_valid;
    wire            ds_allowin;
    wire            ds_to_es_valid;
    wire            es_allowin;
    wire            es_to_ms_valid;
    wire            ms_allowin;
    wire            ms_to_ws_valid;
    wire            ws_allowin;

    wire [`FS_TO_DS_BUS_WD - 1 : 0]     fs_to_ds_bus;
    wire [`DS_TO_ES_BUS_WD - 1 : 0]     ds_to_es_bus;
    wire [`ES_TO_MS_BUS_WD - 1 : 0]     es_to_ms_bus;
    wire [`MS_TO_WS_BUS_WD - 1 : 0]     ms_to_ws_bus;

    wire [31 : 0] seq_pc;
    wire          br_taken;
    wire [31 : 0] br_target;
    wire          mret;
    wire          inst_ecall;
    
    wire            rf_wen;
    wire            csr_wen;
    wire            mem_wen;
    wire            mem_ren;
    wire [3 : 0]    mem_op;
    //wire [31: 0]    mem_addr;
    wire [3 : 0]    load;
    wire            load_sign;
    wire [3 : 0]    store;
    wire            res_from_csr;
    wire [4 : 0]    rd;
    wire [4 : 0]    rs1;
    wire [4 : 0]    rs2;
    wire [11 : 0]   csr_addr;
    wire [11 : 0]   wr_csr_addr;
    wire [31 : 0]   csr_data;
    wire [31 : 0]   wr_csr_data;
    wire [31 : 0]   src1;
    wire [31 : 0]   src2;
    wire [11 : 0]   alu_op;
    wire [1 : 0]    csr_op;

    wire [31 : 0]   rs1_data;
    wire [31 : 0]   rs2_data;
    
    wire [31 : 0]   alu_result;
    wire [31 : 0]   load_data;
    wire [31 : 0]   st_data;
    wire [31 : 0]   csr_result;
    wire [31 : 0]   wb_data;    //写入寄存器的值

    // AXI4-Lite signals for IFU
    wire        ifu_arvalid;
    wire [31:0] ifu_araddr;
    wire [31:0] ifu_rdata;
    wire        ifu_rvalid;
    wire        icache_arvalid;
    wire [31:0] icache_araddr;
    wire [7:0]  icache_arlen;
    wire [2:0]  icache_arsize;
    wire        icache_arready;
    wire [1:0]  icache_arburst;
    wire [31:0] icache_rdata;
    wire        icache_rvalid;
    wire [1:0]  icache_rresp;
    wire        icache_rready;
    wire        icache_rlast;
    ysyx_25110269_IFU IFU(
        .clock          (clock          ),
        .reset          (reset          ),
        .inst_finish    (inst_finish    ),

        .ds_allowin     (ds_allowin     ),
        .fs_to_ds_valid (fs_to_ds_valid ),
        .fs_to_ds_bus   (fs_to_ds_bus   ),

        .br_taken       (br_taken       ),
        .br_target      (br_target      ),
        .inst_ecall     (inst_ecall     ),
        .mret           (mret           ),
        .csr_mtvec      (csr_mtvec      ),
        .csr_mepc       (csr_mepc       ),
        
        // AXI4-Lite interface
        .arvalid        (ifu_arvalid    ),
        .araddr         (ifu_araddr     ),
        .rvalid         (ifu_rvalid     ),
        .rdata          (ifu_rdata      )
        
    );

    ysyx_25110269_IDU IDU(
        .clock          (clock          ),
        .reset          (reset          ),

        .fs_to_ds_valid (fs_to_ds_valid ),
        .fs_to_ds_bus   (fs_to_ds_bus   ),

        .ds_allowin     (ds_allowin     ),
        .es_allowin     (es_allowin     ),

        .ds_to_es_valid (ds_to_es_valid ),
        .ds_to_es_bus   (ds_to_es_bus   ),
        
        .rs1            (rs1            ),
        .rs1_data       (rs1_data       ),
        .rs2            (rs2            ),
        .rs2_data       (rs2_data       ),

        .csr_data       (csr_data       ),
        .csr_result     (csr_result     ),
        .csr_addr       (csr_addr       ),
        .csr_op         (csr_op         ),

        .br_taken       (br_taken       ),
        .br_target      (br_target      ),
        .inst_ecall     (inst_ecall     ),
        .inst_mret      (mret           ) 
    );

    ysyx_25110269_EXU EXU(
        .clock          (clock          ),
        .reset          (reset          ),

        .ds_to_es_valid (ds_to_es_valid ),

        .ds_to_es_bus   (ds_to_es_bus   ),

        .ms_allowin     (ms_allowin     ),
        .es_allowin     (es_allowin     ),

        .es_to_ms_valid (es_to_ms_valid ),
        .es_to_ms_bus   (es_to_ms_bus   )
    );
    // AXI4-Lite signals for LSU
    wire        lsu_arvalid, lsu_arready, lsu_rvalid, lsu_rready;
    wire        lsu_awvalid, lsu_awready, lsu_wvalid, lsu_wready, lsu_wlast;
    wire        lsu_bvalid, lsu_bready;
    wire [31:0] lsu_awaddr, lsu_wdata;
    wire [31:0] lsu_araddr, lsu_rdata;
    wire [7:0]  lsu_awlen, lsu_arlen;
    wire [3:0]  lsu_wstrb;
    wire [2:0]  lsu_awsize, lsu_arsize;
    wire [1:0]  lsu_rresp, lsu_bresp;
    ysyx_25110269_LSU LSU(
        .clock              (clock          ),
        .reset              (reset          ),

        .es_to_ms_valid     (es_to_ms_valid ),
        .es_to_ms_bus       (es_to_ms_bus   ),

        .ms_allowin         (ms_allowin     ),
        .ws_allowin         (ws_allowin     ),

        .ms_to_ws_valid     (ms_to_ws_valid ),
        .ms_to_ws_bus       (ms_to_ws_bus   ),
        
        // AXI4-Lite interface (connect to pmem)
        .arvalid            (lsu_arvalid    ),
        .araddr             (lsu_araddr     ),
        .arsize             (lsu_arsize     ),
        .arlen              (lsu_arlen      ),
        .arready            (lsu_arready    ),
        .rvalid             (lsu_rvalid     ),
        .rdata              (lsu_rdata      ),
        .rresp              (lsu_rresp      ),
        .rready             (lsu_rready     ),
        .awvalid            (lsu_awvalid    ),
        .awaddr             (lsu_awaddr     ),
        .awlen              (lsu_awlen      ),
        .awsize             (lsu_awsize     ),
        .awready            (lsu_awready    ),
        .wvalid             (lsu_wvalid     ),
        .wdata              (lsu_wdata      ),
        .wstrb              (lsu_wstrb      ),
        .wlast              (lsu_wlast      ),
        .wready             (lsu_wready     ),
        .bvalid             (lsu_bvalid     ),
        .bresp              (lsu_bresp      ),
        .bready             (lsu_bready     )
    );

    wire            clint_arvalid, clint_arready, clint_rvalid, clint_rready;
    wire [31 : 0]   clint_araddr, clint_rdata;
    wire [7  : 0]   clint_arlen;
    wire [2  : 0]   clint_arsize;
    wire [1  : 0]   clint_rresp;
    ysyx_25110269_CLINT clint(
        .clock              (clock          ),
        .reset              (reset          ),

        .clint_arvalid      (clint_arvalid  ),
        .clint_araddr       (clint_araddr   ),
        .clint_arlen        (clint_arlen    ),
        .clint_arsize       (clint_arsize   ),
        .clint_arready      (clint_arready  ),

        .clint_rvalid       (clint_rvalid   ),
        .clint_rdata        (clint_rdata    ),
        .clint_rresp        (clint_rresp    ),
        .clint_rready       (clint_rready   )
    );

    ysyx_25110269_axi_xbar axi_xbar(
        .clock              (clock              ),
        .reset              (reset              ),
        // IFU interface
        .ifu_arvalid        (icache_arvalid     ),
        .ifu_araddr         (icache_araddr      ),
        .ifu_arlen          (icache_arlen       ),
        .ifu_arsize         (icache_arsize      ),
        .ifu_arready        (icache_arready     ),
        .ifu_arburst        (icache_arburst     ),
        .ifu_rvalid         (icache_rvalid      ),
        .ifu_rdata          (icache_rdata       ),
        .ifu_rresp          (icache_rresp       ),
        .ifu_rready         (icache_rready      ),
        .ifu_rlast          (icache_rlast       ),

        // LSU interface
        .lsu_arvalid        (lsu_arvalid        ),
        .lsu_araddr         (lsu_araddr         ),
        .lsu_arlen          (lsu_arlen          ),
        .lsu_arsize         (lsu_arsize         ),
        .lsu_arready        (lsu_arready        ),
        .lsu_rvalid         (lsu_rvalid         ),
        .lsu_rdata          (lsu_rdata          ),
        .lsu_rresp          (lsu_rresp          ),
        .lsu_rready         (lsu_rready         ),
        .lsu_awvalid        (lsu_awvalid        ),
        .lsu_awaddr         (lsu_awaddr         ),
        .lsu_awsize         (lsu_awsize         ),
        .lsu_awlen          (lsu_awlen          ),
        .lsu_awready        (lsu_awready        ),
        .lsu_wvalid         (lsu_wvalid         ),
        .lsu_wdata          (lsu_wdata          ),
        .lsu_wstrb          (lsu_wstrb          ),
        .lsu_wlast          (lsu_wlast          ),
        .lsu_wready         (lsu_wready         ),
        .lsu_bvalid         (lsu_bvalid         ),
        .lsu_bresp          (lsu_bresp          ),
        .lsu_bready         (lsu_bready         ),

        //CLINT
        .clint_arvalid      (clint_arvalid      ),
        .clint_araddr       (clint_araddr       ),
        .clint_arlen        (clint_arlen        ),
        .clint_arsize       (clint_arsize       ),
        .clint_arready      (clint_arready      ),
        .clint_rvalid       (clint_rvalid       ),
        .clint_rdata        (clint_rdata        ),
        .clint_rresp        (clint_rresp        ),
        .clint_rready       (clint_rready       ),
        
        .io_master_awready  (io_master_awready  ),
        .io_master_awvalid  (io_master_awvalid  ),
        .io_master_awaddr   (io_master_awaddr   ),
        .io_master_awlen    (io_master_awlen    ),
        .io_master_awsize   (io_master_awsize   ),

        .io_master_wready   (io_master_wready   ),
        .io_master_wvalid   (io_master_wvalid   ),
        .io_master_wdata    (io_master_wdata    ),
        .io_master_wstrb    (io_master_wstrb    ),
        .io_master_wlast    (io_master_wlast    ),

        .io_master_arready  (io_master_arready  ),
        .io_master_arvalid  (io_master_arvalid  ),
        .io_master_araddr   (io_master_araddr   ),
        .io_master_arlen    (io_master_arlen    ),
        .io_master_arsize   (io_master_arsize   ),
        .io_master_arburst  (io_master_arburst  ),
        
        .io_master_rready   (io_master_rready   ),
        .io_master_rvalid   (io_master_rvalid   ),
        .io_master_rresp    (io_master_rresp    ),
        .io_master_rdata    (io_master_rdata    ),
        .io_master_rlast    (io_master_rlast    ),

        .io_master_bready   (io_master_bready   ),
        .io_master_bvalid   (io_master_bvalid   ),
        .io_master_bresp    (io_master_bresp    )
    );

    ysyx_25110269_WBU WBU(
        .clock          (clock          ),
        .reset          (reset          ),

        .ms_to_ws_valid (ms_to_ws_valid ),
        .ms_to_ws_bus   (ms_to_ws_bus   ),

        .ws_allowin     (ws_allowin     ),

        .rs1            (rs1            ),
        .rs2            (rs2            ),
        .rf1_data       (rs1_data       ),
        .rf2_data       (rs2_data       ),

        .inst_finish    (inst_finish    )
    );
    wire [31 : 0] ds_pc = ds_to_es_bus[`DS_TO_ES_BUS_WD - 1 : `DS_TO_ES_BUS_WD - 32];
    reg [31 : 0] csr_mtvec;
    reg [31 : 0] csr_mepc;
    ysyx_25110269_csr csr(
        .ds_pc      (ds_pc      ),
        .clock      (clock      ),
        .reset      (reset      ),
        .ecall      (inst_ecall ),
        .mret       (mret       ),
        .rd_addr    (csr_addr   ),
        .rd_data    (csr_data   ),
        .csr_wen    (|csr_op    ),
        .wr_addr    (csr_addr   ),
        .wr_data    (csr_result ),
        .csr_mtvec  (csr_mtvec  ),
        .csr_mepc   (csr_mepc   )
    );

    ysyx_25110269_icache #(.NUM_SETS(16), .WAYS(1), .BLOCK_SIZE (4))icache
    (
        .clock          (clock          ),
        .reset          (reset          ),

        .rvalid         (ifu_arvalid    ),
        .raddr          (ifu_araddr     ),
        .rdata          (ifu_rdata      ),
        .valid          (ifu_rvalid     ),

        .i_araddr       (icache_araddr   ),
        .i_arvalid      (icache_arvalid  ),
        .i_arlen        (icache_arlen    ),
        .i_arsize       (icache_arsize   ),
        .i_arready      (icache_arready  ),
        .i_arburst      (icache_arburst  ),

        .i_rresp        (icache_rresp    ),
        .i_rdata        (icache_rdata    ),
        .i_rvalid       (icache_rvalid   ),
        .i_rready       (icache_rready   ),
        .i_rlast        (icache_rlast    )
        
    );

endmodule
/*verilator public_off*/