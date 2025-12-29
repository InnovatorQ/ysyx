// 负责根据当前PC从存储器中取出一条指令
module IFU(
    input           clk,
    input           reset,
    input           br_taken,
    input   [31:0]  br_target,
    input           ecall,
    input           mret,
    input   [31:0]  csr_mtvec,
    input   [31:0]  csr_mepc,
    output  [31:0]  seq_pc,
    output  reg [31:0]  pc
);
    wire    [31:0]  next_pc;

assign seq_pc = pc + 32'h4;
assign next_pc = ecall   ? csr_mtvec :
                 mret    ? csr_mepc  : 
                 br_taken? br_target : seq_pc;
    
    always @(posedge clk) begin
        if(reset) begin
            pc <= 32'h80000000;
            //pc <= 32'hfffffffc;
        end else begin
            pc <= next_pc;
        end
    end
endmodule