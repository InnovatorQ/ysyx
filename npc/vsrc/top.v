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
    output reg  [31 : 0]    ws_pc,
    output reg  [31 : 0]    ds_pc,
    output reg  [31 : 0]    pc,
    output reg  [31 : 0]    regs [31 : 0],
    output      [31 : 0]    csr_mcause
);
    reg           fs_to_ds_valid;
    wire          ds_allowin;
    reg           ds_to_es_valid;
    wire          es_allowin;
    reg           es_to_ws_valid;
    wire          ws_allowin;

    reg          fs_state;
    reg          ds_state;
    reg          es_state;
    reg          ws_state;

    wire [31  : 0]     fs_to_ds_bus;
    wire [124 : 0]     ds_to_es_bus;
    wire [107 : 0]     es_to_ws_bus;

    wire [31 : 0] seq_pc;
    wire          br_taken;
    wire [31 : 0] br_target;
    wire          mret;
    wire          inst_ecall;
    
    wire            rf_wen;
    wire            csr_wr_en;
    wire            mem_wen;
    wire            mem_ren;
    wire [3 : 0]    mem_op;
    wire [31: 0]    mem_addr;
    wire [3 : 0]    load;
    wire            load_sign;
    wire [3 : 0]    store;
    wire            res_from_csr;
    wire [4 : 0]    rd;
    wire [4 : 0]    rs1;
    wire [4 : 0]    rs2;
    wire [11 : 0]   csr_addr;
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
    wire [31 : 0]   wb_data;    //写入寄存器的值

    reg [31 : 0] csr_mepc;
    reg [31 : 0] csr_mtvec;
    reg [31 : 0] ifu_rdata;

    always @(posedge clk) begin
        if(inst_ecall | mret | csr_op[0] | csr_op[1] | reset) begin
            skip_ref();  // 跳过REF执行，因为外设行为不同
        end
    end
    
    assign pc = fs_to_ds_bus;
    assign ds_pc = ds_to_es_bus[124:93];
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

        .ifu_rdata      (ifu_rdata      )
    );

    IDU IDU(
        .clk            (clk            ),
        .reset          (reset          ),
        .inst           (ifu_rdata      ),
        .done           (done           ),

        .fs_to_ds_valid (fs_to_ds_valid ),
        .fs_state       (fs_state       ),
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

        .csr_wen        (csr_wr_en      ),
        .csr_addr       (csr_addr       ),
        .csr_op         (csr_op         ),

        .mem_ren        (mem_ren        ),
        .mem_addr       (mem_addr       ),
        .load           (load           ),
        .load_sign      (load_sign      ),
        .store          (store          ),
        .st_data        (st_data        ),

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

        .load_data      (load_data      ),

        .ws_allowin     (ws_allowin     ),
        .es_allowin     (es_allowin     ),

        .es_to_ws_valid (es_to_ws_valid ),
        .es_state       (es_state       ),
        .es_to_ws_bus   (es_to_ws_bus   )
    );

    LSU LSU(
        .clk        (clk        ),
        .reset      (reset      ),
        .load       (load       ),
        .load_sign  (load_sign  ),
        .store      (store      ),
        .st_data    (st_data    ),
        .mem_addr   (mem_addr   ),
        .load_data  (load_data  )
    );

    WBU WBU(
        .clk            (clk            ),
        .reset          (reset          ),
        .ws_pc          (ws_pc          ), 

        .es_to_ws_valid (es_to_ws_valid ),
        .es_state       (es_state       ),
        .es_to_ws_bus   (es_to_ws_bus   ),

        .ws_allowin     (ws_allowin     ),
        .ws_state       (ws_state       ),

        .rs1            (rs1            ),
        .rs2            (rs2            ),
        .rf1_data       (rs1_data       ),
        .rf2_data       (rs2_data       ),

        .csr_op         (csr_op         ),
        .csr_data       (csr_data       ),
       
        //.load_data      (load_data      ),

        .regs           (regs           ),
        .wr_csr_data    (wr_csr_data    ),
        .done           (done           )
    );
    
    csr csr(
        .pc         (pc         ),
        .clk        (clk        ),
        .reset      (reset      ),
        .ecall      (inst_ecall ),
        .rd_addr    (csr_addr   ),
        .rd_data    (csr_data   ),
        .csr_wr_en  (csr_wr_en  ),
        .wr_addr    (csr_addr   ),
        .wr_data    (wr_csr_data),
        .csr_mepc   (csr_mepc   ),
        .csr_mcause (csr_mcause ),
        .csr_mtvec  (csr_mtvec  )
    );
    // always @(mem_addr) begin
    //     $display("mem_addr : %08x", mem_addr);
    // end

endmodule
