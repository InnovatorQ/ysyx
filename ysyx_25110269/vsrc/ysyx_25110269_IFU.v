// 负责根据当前PC从存储器中取出一条指令
/*verilator public_on*/
module ysyx_25110269_IFU(
    input                               clock           ,  
    input                               reset           ,
    input                               inst_finish     ,
    //ds->fs                        
    input                               ds_allowin      ,
    input [`BR_BUS - 1 : 0]             br_bus          ,
    input                               fence           ,
    input                               ecall           ,
    input                               mret            ,
    //csr->fs                       
    input   [31:0]                      csr_mtvec       ,
    input   [31:0]                      csr_mepc        ,
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

    //性能计数器，综合优化
    reg [31 : 0]    pref_cnt;
    reg [63 : 0]    delay_cnt;
    reg             access_start;

    reg [1  : 0]    fs_state;
    reg [31 : 0]    ifu_rdata;
    reg [31 : 0]    pc;

    wire            fs_valid;   //发送阶段有效信号
    wire [31 : 0]   next_pc;
    wire [31 : 0]   seq_pc;
    wire            to_fs_valid;
    wire            fs_allowin;
    wire            fs_ready_go;
    wire            btb_pre_error_flush;
    wire [31 : 0]   btb_pre_error_flushtarget;
    wire            flush_sign;  
    
    always @(posedge clock) begin
        if(reset) begin
            fs_state <= fs_idle;
        end else begin
            case(fs_state)
                fs_idle: 
                    fs_state <= fs_wait_ready ;
                fs_wait_ready: 
                    fs_state <= (rvalid && !btb_pre_error_flush && !flush_sign) ? fs_data_ready : fs_wait_ready;
                fs_data_ready: 
                    fs_state <= ds_allowin ? fs_wait_ready : fs_data_ready;
                default: fs_state <= fs_idle;
            endcase
        end
    end
    
    
    assign arvalid = (fs_state == fs_wait_ready);
    assign araddr = pc;
    assign flush_sign = fence;
    assign fs_valid = !(reset || btb_pre_error_flush || flush_sign);
    assign fs_to_ds_valid = (fs_state == fs_data_ready) && fs_valid;
    assign fs_ready_go =  fs_valid && ((fs_state == fs_data_ready) && ds_allowin) || ecall || mret;
    assign fs_to_ds_bus = {
        pc,
        ifu_rdata
    };

    assign {
        btb_pre_error_flush,
        btb_pre_error_flushtarget
    } = br_bus;
    // 预计算所有可能的PC值，减少关键路径
    reg [31:0] next_pc_reg;
    always @(*) begin
        if(ecall)
            next_pc_reg = csr_mtvec;
        else if(mret)
            next_pc_reg = csr_mepc;
        else if(btb_pre_error_flush)
            next_pc_reg = btb_pre_error_flushtarget;
        else
            next_pc_reg = pc + 4;
    end
    assign next_pc = next_pc_reg;
    // IFU向下一阶段传递数据并更新PC
    always @(posedge clock) begin
        if(reset) begin
            pc <= 32'h30000000;
            //性能计数器
            pref_cnt <= 32'b0;
            delay_cnt <= 64'b0;
        end else if(fs_ready_go || btb_pre_error_flush) begin
            pc <= next_pc;
            //$display("IFU FETCH ADDR: %h", pc);
        end
        //从发出请求开始计算取指令的访存延迟
        if(arvalid) access_start <= 1'b1;
        if(access_start || arvalid) delay_cnt <= delay_cnt + 1;
        // 在AXI读握手成功时缓存数据
        if(rvalid) begin
            ifu_rdata <= rdata;
            //每取一条指令计数器加1
            pref_cnt <= pref_cnt + 1'b1;
            //停止计算取指令的访存延迟
            access_start <= 1'b0;
        end
    end
    
endmodule
/*verilator public_off*/