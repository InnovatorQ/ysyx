import "DPI-C" function void ebreak();
import "DPI-C" function void skip_ref();
import "DPI-C" function int pmem_read(input int raddr);
import "DPI-C" function void pmem_write(
  input int waddr, input int wdata, input byte wmask);
  //build/obj_dir/Vtop__Trace__0__Slow.cpp:    
  //bufp->fullIData(oldp+23,(vlSelf->top__DOT__WBU__DOT__rf__DOT__regs[0]),32);
  
module top(
    input                   clk,
    input                   reset,
    output                  done,
    output      [31 : 0]    next_pc,
    output      [31 : 0]    ws_pc,
    output      [31 : 0]    ds_pc,
    output      [31 : 0]    pc,
    output reg  [31 : 0]    regs [31 : 0],
    output      [31 : 0]    inst,
    output      [31 : 0]    mem_addr,
    output reg  [31 : 0]    csr_mtvec,
    output reg  [31 : 0]    csr_mepc,
    output reg  [31 : 0]    csr_mstatus,
    output reg  [31 : 0]    csr_mcause
);
    wire            arvalid;
    wire [31 : 0]   araddr;
    wire            arready;
    wire            rvalid;
    wire [31 : 0]   rdata;
    wire [1  : 0]   rresp;
    wire            rready;
    wire            awvalid;
    wire [31 : 0]   awaddr;
    wire            awready;
    wire            wvalid;
    wire [31 : 0]   wdata;
    wire [3  : 0]   wstrb;
    wire            wready;
    wire            bvalid;
    wire [1  : 0]   bresp;
    wire            bready;
    wire            fs_to_ds_valid;
    wire            ds_allowin;
    wire            ds_to_es_valid;
    wire            es_allowin;
    wire            es_to_ms_valid;
    wire            ms_allowin;
    wire            ms_to_ws_valid;
    wire            ws_allowin;

    reg   [1 : 0]   fs_state;
    reg             ds_state;
    reg             es_state;
    reg   [1 : 0]   ms_state;
    reg             ws_state;

    wire [63  : 0]     fs_to_ds_bus;
    wire [270 : 0]     ds_to_es_bus;
    wire [221 : 0]     es_to_ms_bus;
    wire [184 : 0]     ms_to_ws_bus;

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
    wire        ifu_arready;
    wire        ifu_rvalid;
    wire [31:0] ifu_rdata;
    wire [1:0]  ifu_rresp;
    wire        ifu_rready;

    always @(posedge clk) begin
        if(inst_ecall | mret | reset) begin
            skip_ref();  // 跳过REF执行，因为外设行为不同
        end
    end
    
    assign pc = fs_to_ds_bus[63:32];
    assign ds_pc = ds_to_es_bus[270:239];
    IFU IFU(
        .clk            (clk            ),
        .reset          (reset          ),
        .done           (done           ),
        .next_pc        (next_pc        ),

        .ds_allowin     (ds_allowin     ),
        .fs_to_ds_valid (fs_to_ds_valid ),
        .fs_to_ds_bus   (fs_to_ds_bus   ),
        .fs_state       (fs_state      ),

        .br_taken       (br_taken       ),
        .br_target      (br_target      ),
        .inst_ecall     (inst_ecall     ),
        .mret           (mret           ),
        .csr_mtvec      (csr_mtvec      ),
        .csr_mepc       (csr_mepc       ),
        
        // AXI4-Lite interface
        .arvalid        (ifu_arvalid    ),
        .araddr         (ifu_araddr     ),
        .arready        (ifu_arready    ),
        .rvalid         (ifu_rvalid     ),
        .rdata          (ifu_rdata      ),
        .rresp          (ifu_rresp      ),
        .rready         (ifu_rready     )
    );

    IDU IDU(
        .clk            (clk            ),
        .reset          (reset          ),
        .done           (done           ),
        .inst           (inst           ),
        .mem_addr       (mem_addr       ),

        .fs_to_ds_valid (fs_to_ds_valid ),
        .fs_to_ds_bus   (fs_to_ds_bus   ),

        .ds_allowin     (ds_allowin     ),
        .es_allowin     (es_allowin     ),

        .ds_to_es_valid (ds_to_es_valid ),
        .ds_state       (ds_state       ),
        .ds_to_es_bus   (ds_to_es_bus   ),
        
        .rs1            (rs1            ),
        .rs1_data       (rs1_data       ),
        .rs2            (rs2            ),
        .rs2_data       (rs2_data       ),

        .csr_data       (csr_data       ),
        .csr_addr       (csr_addr       ),
        .csr_op         (csr_op         ),

        .br_taken       (br_taken       ),
        .br_target      (br_target      ),
        .inst_ecall     (inst_ecall     ),
        .inst_mret      (mret           ) 
    );

    EXU EXU(
        .clk            (clk            ),
        .reset          (reset          ),
        .done           (done           ),

        .ds_to_es_valid (ds_to_es_valid ),
        .ds_state       (ds_state       ),
        .ds_to_es_bus   (ds_to_es_bus   ),

        .ms_allowin     (ms_allowin     ),
        .es_allowin     (es_allowin     ),

        .es_to_ms_valid (es_to_ms_valid ),
        .es_state       (es_state       ),
        .es_to_ms_bus   (es_to_ms_bus   )
    );

    LSU LSU(
        .clk                (clk            ),
        .reset              (reset          ),

        .es_to_ms_valid     (es_to_ms_valid ),
        .es_state           (es_state       ),
        .es_to_ms_bus       (es_to_ms_bus   ),

        .ms_allowin         (ms_allowin     ),
        .ws_allowin         (ws_allowin     ),

        .ms_to_ws_valid     (ms_to_ws_valid ),
        .ms_to_ws_bus       (ms_to_ws_bus   ),
        
        // AXI4-Lite interface (connect to pmem)
        .arvalid            (lsu_arvalid    ),
        .araddr             (lsu_araddr     ),
        .arready            (lsu_arready    ),
        .rvalid             (lsu_rvalid     ),
        .rdata              (lsu_rdata      ),
        .rresp              (lsu_rresp      ),
        .rready             (lsu_rready     ),
        .awvalid            (awvalid    ),
        .awaddr             (awaddr     ),
        .awready            (awready    ),
        .wvalid             (wvalid     ),
        .wdata              (wdata      ),
        .wstrb              (wstrb      ),
        .wready             (wready     ),
        .bvalid             (bvalid     ),
        .bresp              (bresp      ),
        .bready             (bready     )
    );

    // AXI4-Lite signals for LSU
    wire        lsu_arvalid, lsu_arready, lsu_rvalid, lsu_rready;
    wire [31:0] lsu_araddr, lsu_rdata;
    wire [1:0]  lsu_rresp;

    axi_xbar axi_xbar(
        .clk            (clk            ),
        .reset          (reset          ),
        // IFU interface
        .ifu_arvalid    (ifu_arvalid    ),
        .ifu_araddr     (ifu_araddr     ),
        .ifu_arready    (ifu_arready    ),
        .ifu_rvalid     (ifu_rvalid     ),
        .ifu_rdata      (ifu_rdata      ),
        .ifu_rresp      (ifu_rresp      ),
        .ifu_rready     (ifu_rready     ),

        // LSU interface
        .lsu_arvalid    (lsu_arvalid    ),
        .lsu_araddr     (lsu_araddr     ),
        .lsu_arready    (lsu_arready    ),
        .lsu_rvalid     (lsu_rvalid     ),
        .lsu_rdata      (lsu_rdata      ),
        .lsu_rresp      (lsu_rresp      ),
        .lsu_rready     (lsu_rready     ),
        
        // UART
        .uart_awvalid   (uart_awvalid   ),
        .uart_awaddr    (uart_awaddr    ),
        .uart_awready   (uart_awready   ),
        .uart_wvalid    (uart_wvalid    ),
        .uart_wdata     (uart_wdata     ),
        .uart_wstrb     (uart_wstrb     ),
        .uart_wready    (uart_wready    ),

        //pmem
        .pmem_awvalid   (pmem_awvalid   ),
        .pmem_awaddr    (pmem_awaddr    ),
        .pmem_awready   (pmem_awready   ),
        .pmem_wvalid    (pmem_wvalid    ),
        .pmem_wdata     (pmem_wdata     ),
        .pmem_wstrb     (pmem_wstrb     ),
        .pmem_wready    (pmem_wready    ),

        // AXI4-Lite interface to pmem
        .arvalid        (arvalid        ),
        .araddr         (araddr         ),
        .arready        (arready        ),
        .rvalid         (rvalid         ),
        .rdata          (rdata          ),
        .rresp          (rresp          ),
        .rready         (rready         ),
        .awvalid        (awvalid        ),
        .awaddr         (awaddr         ),
        .awready        (awready        ),
        .wvalid         (wvalid         ),
        .wdata          (wdata          ),
        .wstrb          (wstrb          ),
        .wready         (wready         )
    );
    wire uart_awvalid, uart_awready, uart_wvalid, uart_wready;
    wire [31 : 0] uart_awaddr, uart_wdata;
    wire [3 : 0] uart_wstrb;
    UART UART(
        .clk                 (clk            ),
        .reset               (reset          ),

        .uart_awvalid        (uart_awvalid        ),
        .uart_awaddr         (uart_awaddr         ),
        .uart_awready        (uart_awready        ),
        .uart_wvalid         (uart_wvalid         ),

        .uart_wdata          (uart_wdata          ),
        .uart_wstrb          (uart_wstrb          ),
        .uart_wready         (uart_wready         )
    );

    pmem pmem(
        .clk            (clk            ),
        .reset          (reset          ),
        
        // AXI4-Lite interface
        .arvalid        (arvalid    ),
        .araddr         (araddr     ),
        .arready        (arready    ),

        .rvalid         (rvalid     ),
        .rdata          (rdata      ),
        .rresp          (rresp      ),
        .rready         (rready     ),

        .pmem_awvalid       (pmem_awvalid    ),
        .pmem_awaddr        (pmem_awaddr     ),
        .pmem_awready       (pmem_awready    ),
        .pmem_wvalid        (pmem_wvalid     ),

        .pmem_wdata         (pmem_wdata      ),
        .pmem_wstrb         (pmem_wstrb      ),
        .pmem_wready        (pmem_wready     ),

        .bvalid        (bvalid     ),
        .bresp         (bresp      ),
        .bready        (bready     )
    );

    WBU WBU(
        .clk            (clk            ),
        .reset          (reset          ),
        .ws_pc          (ws_pc          ), 

        .ms_to_ws_valid (ms_to_ws_valid ),
        .ms_to_ws_bus   (ms_to_ws_bus   ),

        .ws_allowin     (ws_allowin     ),
        .ws_state       (ws_state       ),

        .rs1            (rs1            ),
        .rs2            (rs2            ),
        .rf1_data       (rs1_data       ),
        .rf2_data       (rs2_data       ),

        .regs           (regs           ),
        .csr_wen        (csr_wen        ),
        .wr_csr_addr    (wr_csr_addr    ),
        .csr_result     (csr_result     ),
        .done           (done           )
    );
    
    csr csr(
        .ds_pc      (ds_pc      ),
        .clk        (clk        ),
        .reset      (reset      ),
        .ecall      (inst_ecall ),
        .rd_addr    (csr_addr   ),
        .rd_data    (csr_data   ),
        .csr_wen    (csr_wen    ),
        .wr_addr    (wr_csr_addr),
        .wr_data    (csr_result ),
        .csr_mepc   (csr_mepc   ),
        .csr_mcause (csr_mcause ),
        .csr_mstatus(csr_mstatus),  
        .csr_mtvec  (csr_mtvec  )
    );
    // always @(mem_addr) begin
    //     $display("mem_addr : %08x", mem_addr);
    // end

endmodule
