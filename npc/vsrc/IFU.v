// 负责根据当前PC从存储器中取出一条指令
module IFU(
    input          clk              ,
    input          reset            ,

    input          ds_allowin       ,

    input          br_taken         ,
    input   [31:0] br_target        ,
    input          inst_ecall       ,
    input          mret             ,
    input   [31:0] csr_mtvec        ,
    input   [31:0] csr_mepc         ,

    output  [31:0] seq_pc           ,
    output         fs_to_ds_valid   ,
    output reg  [31:0] pc
);
    wire [31 : 0]   next_pc;

    wire            fs_allowin;
    wire            fs_ready_go;
    reg             fs_valid;   //发送阶段有效信号

    assign seq_pc = pc + 32'h4;
    assign next_pc =inst_ecall  ? csr_mtvec :
                    mret        ? csr_mepc  : 
                    br_taken    ? br_target : seq_pc;

    assign fs_ready_go = 1'b1;
    assign fs_allowin = !fs_valid || fs_ready_go && ds_allowin;
    assign fs_to_ds_valid = fs_valid && fs_ready_go;                
    
    always @(posedge clk) begin
        if(reset) begin
            fs_valid <= 1'b0;
        end else if(fs_allowin) begin
            fs_valid <= 1'b1;
        end
    end

    always @(posedge clk) begin
        if(reset) begin
            pc <= 32'h80000000;
            //pc <= 32'hfffffffc;
        end else if(fs_allowin) begin
            pc <= next_pc;
        end
    end
endmodule