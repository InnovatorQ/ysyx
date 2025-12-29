// 将数据写入寄存器, 并更新PC
module WBU(
    input           clk,
    input           reset,
    input  [3 : 0]  load,
    input  [31 : 0] load_data,
    input  [31 : 0] seq_pc,
    input           br_taken,
    input  [31 : 0] alu_result,
    input           res_from_csr,
    input  [1 : 0]  csr_op,
    input  [31: 0]  csr_data,
    input  [31 : 0] rs1_data,
    input  [31 : 0] rs2_data,
    output [31 : 0] wr_csr_data,
    output [31 : 0] wb_data
);
    assign wb_data = (load != 4'h0) ? load_data : 
                      br_taken ? seq_pc : 
                      res_from_csr ? csr_data : alu_result;
    assign wr_csr_data ={32{csr_op[0]}} & (rs1_data | csr_data) |
                        {32{csr_op[1]}} & rs1_data;
endmodule