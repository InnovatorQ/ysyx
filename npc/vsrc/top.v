import "DPI-C" function void ebreak();
import "DPI-C" function int pmem_read(input int raddr);
import "DPI-C" function void pmem_write(
  input int waddr, input int wdata, input byte wmask);
module top(
    input                   clk,
    input                   reset,
    input       [31 : 0]    inst,
    output reg  [31 : 0]    pc,
    output      [31 : 0]    a0_data
);
    wire [31 : 0] seq_pc;
    wire [31 : 0] next_pc;
    wire          br_taken;
    wire [31 : 0] br_target;
    
    wire            rf_wen;
    wire            mem_wen;
    wire            mem_ren;
    wire [3 : 0]    mem_op;
    wire [31: 0]    mem_addr;
    wire [3 : 0]    load;
    wire [3 : 0]    store;
    wire [4 : 0]    rd;
    wire [4 : 0]    rs1;
    wire [4 : 0]    rs2;
    wire [31 : 0]   imm;
    wire [31 : 0]   src1;
    wire [31 : 0]   src2;
    wire            alu_op;
    
    wire [31 : 0]   rs1_data;
    wire [31 : 0]   rs2_data;
    
    wire [31 : 0]   alu_result;
    wire [31 : 0]   load_data;
    wire [31 : 0]   st_data;
    wire [31 : 0]   wb_data;    //写入寄存器的值

    assign wb_data = (load != 4'h0) ? load_data : 
                      br_taken ? seq_pc : alu_result;

    assign seq_pc = pc + 32'h4;
    assign next_pc = br_taken ? br_target : seq_pc;
    
    always @(posedge clk) begin
        if(reset) begin
            pc <= 32'b0;
        end else begin
            pc <= next_pc;
        end
    end
    
    IDU IDU(
        .inst       (inst       ),
        .pc         (pc         ),
        .rf_wen     (rf_wen     ),
        .br_taken   (br_taken   ),
        .rd         (rd         ),
        .rs1        (rs1        ),
        .rs1_data   (rs1_data   ),
        .rs2        (rs2        ),
        .rs2_data   (rs2_data   ),
        .imm        (imm        ),
        .src1       (src1       ),
        .src2       (src2       ),
        .alu_op     (alu_op     ),
        .br_target  (br_target  ),
        .mem_ren    (mem_ren    ),
        .mem_addr   (mem_addr   ),
        .load       (load       ),
        .store      (store      ),
        .st_data    (st_data    )
    );

    EXU EXU(
        .alu_op         (alu_op     ),
        .src1_data      (src1       ),
        .src2_data      (src2       ),
        .alu_result     (alu_result )
    );

    LSU LSU(
        .load       (load       ),
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
        .rd             (rd         ),
        .rf1_data       (rs1_data   ),
        .rf2_data       (rs2_data   ),
        .wb_data        (wb_data    ),
        .rf_wen         (rf_wen     ),
        .a0_data        (a0_data    )
    );
    
    always @(mem_addr) begin
        $display("mem_addr : %08x", mem_addr);
    end

endmodule
