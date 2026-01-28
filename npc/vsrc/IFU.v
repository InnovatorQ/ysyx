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
    output reg [1 : 0]    fs_state  ,   
    output [63 : 0] fs_to_ds_bus    ,
    
    // AXI4-Lite Read Address Channel
    output reg     arvalid          ,
    output [31:0]  araddr           ,
    input          arready          ,
    
    // AXI4-Lite Read Data Channel
    input          rvalid           ,
    input  [31:0]  rdata            ,
    input  [1:0]   rresp            ,
    output reg     rready    
);
    localparam fs_idle = 2'b00;
    localparam fs_wait_ready = 2'b01;
    localparam fs_addr_ready = 2'b10;
    localparam fs_data_ready = 2'b11;
    reg [1:0]  next_state;

    reg  [31 : 0]   ifu_rdata;

    reg [4 : 0] delay_count;
    reg [4 : 0] lsu_req_delay;
    reg [4 : 0] lsu_resp_delay;
    reg [7 : 0] lfsr;
    // LFSR生成随机延迟访问
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
            // lsu_req_delay <= 5'b0;
            // lsu_resp_delay <= 5'b0;
        end else begin
            fs_state <= next_state;
            fs_valid <= 1'b1;
            if(fs_state == fs_wait_ready && next_state == fs_addr_ready) begin
                delay_count <= lfsr[4:0]; // 使用LFSR的低5位作为随机延迟
            //     delay_count <= 5'b1;
            //     lsu_req_delay <= 5'd5;
            //     lsu_resp_delay <= lfsr[4:0];
            end else if(rvalid && delay_count != 5'b0) begin
                delay_count <= delay_count - 5'b1;
            end 
            //else if(lsu_req_delay != 5'b0) begin
            //     lsu_req_delay <= lsu_req_delay - 5'b1;
            // end else if(rvalid & lsu_resp_delay != 5'b0) begin
            //     lsu_resp_delay <= lsu_resp_delay - 5'b1;
            // end
        end
    end
    always @(*) begin
        case(fs_state)
            fs_idle: begin
                next_state = (!fs_valid | done ) ? fs_wait_ready : fs_idle;
            end
            fs_wait_ready: begin
                next_state = (arvalid & arready) ? fs_addr_ready : fs_wait_ready;
            end
            fs_addr_ready: begin
                next_state = (rvalid & rready) ? fs_data_ready : fs_addr_ready;
            end
            fs_data_ready: begin
                next_state = ds_allowin ? fs_idle : fs_data_ready;
            end
        endcase
    end
    
    assign arvalid = (fs_state == fs_wait_ready);
    assign rready  = (fs_state == fs_addr_ready) ;
    assign fs_to_ds_valid = (fs_state == fs_data_ready);

    reg  [31 : 0]   pc;
    wire [31 : 0]   seq_pc;

    wire            to_fs_valid;
    wire            fs_allowin;
    //wire            fs_ready_go;
    reg             fs_valid;   //发送阶段有效信号

    assign fs_to_ds_bus = {
        pc,
        ifu_rdata
    };
    assign araddr = pc;
    assign seq_pc = pc + 32'h4;
    assign next_pc =inst_ecall  ? csr_mtvec :
                    mret        ? csr_mepc + 32'h4 : 
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
        end else if(fs_state == fs_idle && next_state == fs_wait_ready) begin
            pc <= next_pc;
        end
        // 在AXI读握手成功时缓存数据
        if(rvalid & rready) begin
            ifu_rdata <= rdata;
        end
    end
    
endmodule