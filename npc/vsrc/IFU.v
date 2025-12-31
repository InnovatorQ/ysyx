// 负责根据当前PC从存储器中取出一条指令
module IFU(
    input          clk         ,
    input          reset       ,
    input          br_taken    ,
    input   [31:0] br_target   ,
    input          inst_ecall  ,
    input          mret        ,
    input   [31:0] csr_mtvec   ,
    input   [31:0] csr_mepc    ,
    output  [31:0] seq_pc      ,
    output         fs_valid    ,
    output reg  [31:0] pc
);
    wire [31 : 0]   next_pc;
    wire            fs_valid;   //发送阶段有效信号


    assign fs_valid = 1'b1;
    assign seq_pc = pc + 32'h4;
    assign next_pc =inst_ecall  ? csr_mtvec :
                    mret        ? csr_mepc  : 
                    br_taken    ? br_target : seq_pc;
    
    always @(posedge clk) begin
        if(reset) begin
            pc <= 32'h80000000;
            //pc <= 32'hfffffffc;
        end else begin
            pc <= next_pc;
        end
    end
endmodule