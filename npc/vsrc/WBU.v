// 将数据写入寄存器, 并更新PC
module WBU(
    input           clk,
    input           reset,
    input           rf_wen,
    input  [4 : 0]  rd,
    input  [4 : 0]  rs1,
    input  [4 : 0]  rs2,
    input  [31 : 0] wb_data,
    output [31 : 0] rf1_data,
    output [31 : 0] rf2_data,
    output [31 : 0] regs [31 : 0]
);
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
endmodule