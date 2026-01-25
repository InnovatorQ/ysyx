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
    output [63 : 0] fs_to_ds_bus
);
    localparam fs_idle = 1'b0;
    localparam fs_wait_ready = 1'b1;
    reg        next_state;

    reg  [31 : 0]   ifu_rdata;
    reg         fs_reqValid;
    reg         fs_reqReady;
    reg         fs_respValid;
    reg         fs_respReady;

    reg [4 : 0] delay_count;
    reg [4 : 0] lsu_req_delay;
    reg [4 : 0] lsu_resp_delay;
    reg [7 : 0] lfsr;
    //LFSR生成随机延迟访问
    always @(posedge clk) begin
        if(reset) begin
            lfsr <= 8'b10110001;
        end else begin
            lfsr <= {lfsr[6:0], lfsr[7] ^ lfsr[5] ^ lfsr[4] ^ lfsr[3]};
        end
    end

    always @(posedge clk) begin
        if(reset) begin
            fs_state <= fs_idle;
            fs_valid <= 1'b0;
            delay_count <= 5'b0;
            lsu_req_delay <= 5'b0;
            lsu_resp_delay <= 5'b0;
        end else begin
            fs_state <= next_state;
            fs_valid <= 1'b1;
            if(fs_state == fs_idle && next_state == fs_wait_ready) begin
                //delay_count <= lfsr[4:0]; // 使用LFSR的低5位作为随机延迟
                delay_count <= 5'b1;
                lsu_req_delay <= 5'd5;
                lsu_resp_delay <= 5'd20;
            end else if(fs_reqReady && delay_count != 5'b0) begin
                delay_count <= delay_count - 5'b1;
            end else if(lsu_req_delay != 5'b0) begin
                lsu_req_delay <= lsu_req_delay - 5'b1;
            end else if(lsu_resp_delay != 5'b0) begin
                lsu_resp_delay <= lsu_resp_delay - 5'b1;
            end
        end
    end
    always @(*) begin
        case(fs_state)
            fs_idle: begin
                fs_to_ds_valid = 1'b0;
                fs_reqValid = 1'b0;
                next_state = (!fs_valid | done ) ? fs_wait_ready : fs_idle;
            end
            fs_wait_ready: begin
                fs_reqReady = (lsu_req_delay == 5'b0) ? 1'b1 : 1'b0;
                fs_respReady = (lsu_resp_delay == 5'b0) ? 1'b1 : 1'b0;
                fs_to_ds_valid = (fs_respValid  & fs_respReady & delay_count == 5'b0) ? 1'b1 : 1'b0;
                fs_reqValid = 1'b1;
                next_state = (ds_allowin & fs_respValid & fs_respReady & delay_count == 5'b0) ? fs_idle : fs_wait_ready;
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

    assign fs_to_ds_bus = {
        pc,
        ifu_rdata
    };
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
        if(delay_count == 5'b0) begin
            ifu_rdata <= (fs_reqValid & fs_reqReady) ? pmem_read(pc) : 32'b0;
            fs_respValid <= fs_reqValid & fs_reqReady;
        end
    end
endmodule