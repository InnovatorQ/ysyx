// 将数据写入寄存器, 并更新PC
module WBU(
    input           clk,
    input           reset,
    input           es_to_ws_valid,
    output          ws_allowin,
    input           rf_wen,
    input  [1 : 0]  csr_op,
    input  [31: 0]  csr_data,
    input  [4 : 0]  rd,
    input  [4 : 0]  rs1,
    input  [4 : 0]  rs2,
    input  [3 : 0]  load,
    input           br_taken,
    input           res_from_csr,
    input  [31 : 0] seq_pc,
    input  [31 : 0] alu_result,
    input  [31 : 0] load_data,
    output [31 : 0] rf1_data,
    output [31 : 0] rf2_data,
    output [31 : 0] wr_csr_data,
    output [31 : 0] regs [31 : 0]
);
    wire [31 : 0] wb_data;

    wire          ws_ready_go;
    reg           ws_valid;

    regfile rf(
        .clk        (clk        ),
        .reset      (reset      ),
        .raddr1     (rs1        ),
        .raddr2     (rs2        ),
        .rdata1     (rf1_data   ),
        .rdata2     (rf2_data   ),
        .wen        (rf_wen     ),
        .waddr      (rd         ),
        .wdata      (wb_data    ),
        .regs       (regs       )
    );
    assign wb_data = (load != 4'h0) ? load_data : 
                      br_taken ? seq_pc : 
                      res_from_csr ? csr_data : alu_result;
    assign wr_csr_data ={32{csr_op[0]}} & (rf1_data | csr_data) |
                        {32{csr_op[1]}} & rf1_data;

    assign ws_ready_go = 1'b1;
    assign ws_allowin  = !ws_valid || ws_ready_go;

    always @(posedge clk) begin
        if(reset) begin
            ws_valid <= 1'b0;
        end else if(ws_allowin) begin
            ws_valid <= es_to_ws_valid;
        end
    end
endmodule