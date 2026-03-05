// 负责根据当前PC从存储器中取出一条指令
/*verilator public_on*/
module ysyx_25110269_IFU(
    input                               clock            ,  
    input                               reset            ,
    input                               inst_finish        ,
    //ds->fs                        
    input                               ds_allowin       ,
    input                               br_stall        ,
    input                               br_taken         ,
    input   [31:0]                      br_target        ,
    input                               inst_ecall       ,
    input                               mret             ,
    //csr->fs                       
    input   [31:0]                      csr_mtvec        ,
    input   [31:0]                      csr_mepc         ,
    //fs->ds                    
    output                              fs_to_ds_valid  ,
    output [`FS_TO_DS_BUS_WD - 1 : 0]   fs_to_ds_bus    ,

    // AXI4-Lite Read Address Channel
    output                              arvalid          ,
    output [31:0]                       araddr           ,
    
    // AXI4-Lite Read Data Channel
    input                               rvalid          ,
    input  [31:0]                       rdata            
    
);
    localparam fs_idle = 2'b00;
    localparam fs_wait_ready = 2'b01;
    localparam fs_addr_ready = 2'b10;
    localparam fs_data_ready = 2'b11;
    reg [1:0]  fs_state;
    reg [31:0] ifu_rdata;
    reg [31:0] pref_cnt;
    reg [63:0] delay_cnt;
    reg        access_start;
    // 添加fs_valid逻辑
    always @(posedge clock) begin
        if(reset) begin
            fs_valid <= 1'b0;
            pref_cnt <= 32'b0;
            delay_cnt <= 64'b0;
        end else begin
            if(rvalid)
                fs_valid <= 1'b1;
        end
    end
    
    always @(posedge clock) begin
        if(reset) begin
            fs_state <= fs_idle;
        end else begin
            case(fs_state)
                fs_idle: 
                    fs_state <= fs_wait_ready ;
                fs_wait_ready: 
                    fs_state <= (rvalid || br_stall)? fs_data_ready : fs_wait_ready;
                fs_data_ready: 
                    fs_state <= ds_allowin ? fs_wait_ready : fs_data_ready;
                default: fs_state <= fs_idle;
            endcase
        end
    end
    
    
    assign arvalid = (fs_state == fs_wait_ready) && !br_stall;
    assign araddr = pc;
    
    assign fs_to_ds_valid = (fs_state == fs_data_ready) && !br_taken;

    reg  [31 : 0]   pc;
    wire [31 : 0]   next_pc;
    wire [31 : 0]   seq_pc;

    wire            to_fs_valid;
    wire            fs_allowin;
    //wire            fs_ready_go;
    reg             fs_valid;   //发送阶段有效信号

    assign fs_to_ds_bus = {
        pc,
        ifu_rdata
    };
    // 预计算所有可能的PC值，减少关键路径
    reg [31:0] seq_pc_reg;
    reg [31:0] next_pc_reg;
    
    always @(posedge clock) begin
        if(reset) begin
            seq_pc_reg <= 32'h30000000;
        end else begin
            seq_pc_reg <= pc + 32'h4;  // 提前计算顺序PC
        end
    end
    
    // 简化next_pc逻辑
    always @(*) begin
        if(inst_ecall)
            next_pc_reg = csr_mtvec;
        else if(mret)
            next_pc_reg = csr_mepc;
        else if(br_taken)
            next_pc_reg = br_target;
        else
            next_pc_reg = seq_pc_reg;
    end
    
    assign next_pc = next_pc_reg;

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

    always @(posedge clock) begin
        if(reset) begin
            //pc <= 32'h7ffffffc;
            //pc <= 32'h1ffffffc;
            pc <= 32'h30000000;
            //pc <= 32'hfffffffc;
        end else if(fs_state == fs_data_ready) begin
            pc <= next_pc;
            //$display("IFU FETCH ADDR: %h", pc);
        end
        if(arvalid) access_start <= 1'b1;
        if(access_start || arvalid) delay_cnt <= delay_cnt + 1;
        // 在AXI读握手成功时缓存数据
        if(rvalid) begin
            ifu_rdata <= rdata;
            pref_cnt <= pref_cnt + 1'b1;
            access_start <= 1'b0;
        end
    end
    
endmodule
/*verilator public_off*/