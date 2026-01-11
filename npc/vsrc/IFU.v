// 负责根据当前PC从存储器中取出一条指令
module IFU(
    input          clk              ,
    input          reset            ,
    input          done             ,
    output  [31:0] next_pc          ,
    //ds->fs
    input          ds_allowin       ,
    input          br_taken         ,
    input   [31:0] br_target        ,
    input          inst_ecall       ,
    input          mret             ,
    //csr->fs
    input   [31:0] csr_mtvec        ,
    input   [31:0] csr_mepc         ,
    //fs->ds
    output reg     fs_to_ds_valid   ,
    output reg     fs_state         ,   
    output reg  [31:0] ifu_rdata    ,
    output [31 : 0] fs_to_ds_bus
);
    localparam fs_idle = 1'b0;
    localparam fs_wait_ready = 1'b1;
    reg        next_state;

    always @(posedge clk) begin
        if(reset) begin
            fs_state <= fs_idle;
            fs_valid <= 1'b0;
        end else begin
            fs_state <= next_state;
            fs_valid <= 1'b1;
        end
    end
    always @(*) begin
        case(fs_state)
            fs_idle: begin
                fs_to_ds_valid = 1'b0;
                next_state = (!fs_valid | done) ? fs_wait_ready : fs_idle;
            end
            fs_wait_ready: begin
                fs_to_ds_valid = 1'b1;
                next_state = ds_allowin ? fs_idle : fs_wait_ready;
            end
            default: next_state = fs_idle;
        endcase
    end
    reg  [31 : 0]   pc;
    wire [31 : 0]   seq_pc;

    wire            to_fs_valid;
    wire            fs_allowin;
    wire            fs_ready_go;
    reg             fs_valid;   //发送阶段有效信号

    assign fs_to_ds_bus = pc;
    assign seq_pc = pc + 32'h4;
    assign next_pc =inst_ecall  ? csr_mtvec :
                    mret        ? csr_mepc  : 
                    br_taken    ? br_target : seq_pc;

    // assign to_fs_valid = ~reset ;
    // assign fs_ready_go = 1'b1;
    // assign fs_allowin = !fs_valid || done;
    // assign fs_to_ds_valid = fs_valid && fs_ready_go;                
    
    // always @(posedge clk) begin
    //     if(reset) begin
    //         fs_valid <= 1'b0;
    //     end else if(fs_allowin) begin
    //         fs_valid <= to_fs_valid;
    //     end
    // end

    always @(posedge clk) begin
        if(reset) begin
            pc <= 32'h7ffffffc;
            //pc <= 32'hfffffffc;
        end else if(!fs_valid || done) begin
            pc <= next_pc;
        end
        ifu_rdata <= pmem_read(pc);
    end
endmodule