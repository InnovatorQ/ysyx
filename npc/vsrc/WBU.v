// 将数据写入寄存器, 并更新PC
module WBU(
    input           clk,
    input           reset,
    input           rf_wen,
    input           csr_wen,
    input  [11 : 0] csr_addr,
    input  [4 : 0]  rd,
    input  [4 : 0]  rs1,
    input  [4 : 0]  rs2,
    input  [31 : 0] wb_data,
    output [31 : 0] rf1_data,
    output [31 : 0] rf2_data,
    output [31 : 0] regs [31 : 0],
    output [31 : 0] mcycle,
    output [31 : 0] mcycle_h
);
    reg [31 : 0] mcycle_r;
    reg [31 : 0] mcycle_h_r;

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

    always @(posedge clk)begin
        if(mcycle < 32'hffff)begin
            mcycle_r = mcycle_r + 32'b1;
        end else begin
            mcycle_h_r = mcycle_h_r + 32'b1;
            mcycle_r = 32'b0;
        end
    end

    assign mcycle = (csr_wen && (csr_addr == 12'hB00)) ? mcycle_r : 32'b0;
    assign mcycle_h = (csr_wen && (csr_addr == 12'hB80)) ? mcycle_h_r : 32'b0; 
endmodule