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
    input       [31 : 0]    inst,
    output reg  [31 : 0]    pc,
    output reg  [31 : 0]    regs [31 : 0],
    output      [31 : 0]    csr_mcause
);
    wire          fs_valid;
    wire          ds_valid;
    wire          ds_ready;
    wire          ws_ready;
    wire          ws_valid;
    wire          ms_ready;
    wire          ms_valid;
    wire          es_ready;
    wire          es_valid;

    wire [31 : 0] seq_pc;
    wire [31 : 0] next_pc;
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
    wire [31 : 0]   imm;
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

    always @(posedge clk) begin
        if(inst_ecall | mret | csr_op[0] | csr_op[1]) begin
            skip_ref();  // 跳过REF执行，因为外设行为不同
        end
    end
    
    IFU IFU(
        .clk        (clk        ),
        .reset      (reset      ),
        .fs_valid   (fs_valid   ),
        .br_taken   (br_taken   ),
        .br_target  (br_target  ),
        .inst_ecall (inst_ecall ),
        .mret       (mret       ),
        .csr_mtvec  (csr_mtvec  ),
        .csr_mepc   (csr_mepc   ),
        .seq_pc     (seq_pc     ),
        .pc         (pc         )
    );

    IDU IDU(
        .inst           (inst           ),
        .pc             (pc             ),
        .fs_valid       (fs_valid       ),
        .ds_ready       (ds_ready       ),
        .ds_valid       (ds_valid       ),
        .rf_wen         (rf_wen         ),
        .csr_wen        (csr_wr_en      ),
        .br_taken       (br_taken       ),
        .rd             (rd             ),
        .rs1            (rs1            ),
        .rs1_data       (rs1_data       ),
        .rs2            (rs2            ),
        .rs2_data       (rs2_data       ),
        .imm            (imm            ),
        .csr_addr       (csr_addr       ),
        .src1           (src1           ),
        .src2           (src2           ),
        .alu_op         (alu_op         ),
        .csr_op         (csr_op         ),
        .br_target      (br_target      ),
        .mem_ren        (mem_ren        ),
        .mem_addr       (mem_addr       ),
        .load           (load           ),
        .load_sign      (load_sign      ),
        .store          (store          ),
        .st_data        (st_data        ),
        .res_from_csr   (res_from_csr   ),
        .inst_ecall     (inst_ecall     ),
        .inst_mret      (mret           ) 
    );

    EXU EXU(
        .alu_op         (alu_op     ),
        .src1_data      (src1       ),
        .src2_data      (src2       ),
        .shamt          (rs2        ),
        .alu_result     (alu_result )
    );

    LSU LSU(
        .load       (load       ),
        .load_sign  (load_sign  ),
        .store      (store      ),
        .st_data    (st_data    ),
        .mem_addr   (mem_addr   ),
        .load_data  (load_data  )
    );

    WBU WBU(
        .clk            (clk        ),
        .reset          (reset      ),
        .rs1            (rs1        ),
        .rs2            (rs2        ),
        .csr_op         (csr_op     ),
        .csr_data       (csr_data   ),
        .rd             (rd         ),
        .rf1_data       (rs1_data   ),
        .rf2_data       (rs2_data   ),
        .load           (load       ),
        .br_taken       (br_taken   ),
        .res_from_csr   (res_from_csr),
        .seq_pc         (seq_pc     ),
        .alu_result     (alu_result ),
        .load_data      (load_data  ),
        .rf_wen         (rf_wen     ),
        .regs           (regs       ),
        .wr_csr_data    (wr_csr_data)
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
