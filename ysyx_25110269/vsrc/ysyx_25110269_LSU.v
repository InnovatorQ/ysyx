// 负责根据控制信号控制存储器, 从存储器中读出数据, 或将数据写入存储器
`include "mycpu.vh"
/*verilator public_on*/
module ysyx_25110269_LSU(
    input           clock,
    input           reset,
    //ar
    output          arvalid,
    output [31 :0]  araddr,
    output [7  :0]  arlen,
    output [2  :0]  arsize,
    input           arready,
    //r
    input           rvalid,
    input  [31 :0]  rdata,
    input  [1 : 0]  rresp,
    output          rready,
    //aw
    output          awvalid,
    output [31 :0]  awaddr,
    output [7 : 0]  awlen,
    output [2 : 0]  awsize,
    input           awready,
    //w
    output          wvalid,
    output [31 :0]  wdata,
    output [3  :0]  wstrb,
    output          wlast,
    input           wready,
    //b
    input           bvalid,
    input  [1  :0]  bresp,
    output          bready,
    //es->ms
    input           es_to_ms_valid,
    input [`ES_TO_MS_BUS_WD - 1 : 0] es_to_ms_bus,

    output          ms_to_ws_valid,
    output [`MS_TO_WS_BUS_WD - 1 : 0] ms_to_ws_bus,

    input           ws_allowin,
    output          ms_allowin
);  
    reg [2 : 0]  ms_state;
    reg [2 : 0]  next_state;

    localparam ms_idle = 3'b00;
    localparam ms_wait_ready = 3'b01;
    localparam ms_addr_ready = 3'b10;
    localparam ms_wdata_ready = 3'b11;
    localparam ms_rdata_ready = 3'b100;

    reg [4 : 0]     delay_count;

    reg [`ES_TO_MS_BUS_WD - 1 : 0]   es_to_ms_bus_r;
    wire            ms_ready_go;
    reg             ms_valid;

    reg  [31 : 0]   pref_cnt_l;
    reg  [31 : 0]   pref_cnt_s;
    reg  [31 : 0]   delay_cnt;
    reg             access_start;

    wire [31 : 0]   ms_pc;
    wire [31 : 0]   load_data;
    wire [31 : 0]   ms_alu_result;
    wire [31 : 0]   mem_addr;
    wire [31 : 0]   st_data;
    wire [31 : 0]   csr_data;
    wire [4  : 0]   dest;
    wire [3  : 0]   load;
    wire [3  : 0]   store;
    wire            load_sign;
    wire            res_from_csr;
    wire            rf_wen;
    wire            br_taken;

    reg  [31 : 0]   mem_rdata;
    wire            mem_wen;
    wire [1 : 0]    byte_offset;
    wire [7 : 0]    selected_byte;
    wire [15: 0]    selected_halfword;
    

    always @(posedge clock) begin
        if(reset)begin
            ms_valid <= 1'b0;
            ms_state <= ms_idle;
            pref_cnt_l <= 32'b0;
            pref_cnt_s <= 32'b0;
            delay_cnt <= 32'b0;
            access_start <= 1'b0;
        end else begin
            ms_valid <= es_to_ms_valid;
            ms_state <= next_state; 
            // 开始访问计数
            if((arvalid && arready) || (awvalid && awready)) begin
                access_start <= 1'b1;
            end
            
            // 访问完成，停止计数
            if((rvalid && rready) || (bvalid && bready)) begin
                access_start <= 1'b0;
            end
            
            // LSU延迟计数
            if(access_start || (arvalid && arready) || (awvalid && awready)) begin
                delay_cnt <= delay_cnt + 1'b1;
            end
        end
    end

    always @(*)begin
        case(ms_state)
            ms_idle : begin
                next_state = es_to_ms_valid  ? ms_wait_ready : ms_idle;
            end
            ms_wait_ready : begin
                if(arvalid | awvalid) begin
                    next_state = (awready & awvalid) ? ms_wdata_ready :
                    ((arready & arvalid) ? ms_addr_ready :ms_wait_ready);
                end else begin
                    next_state = ms_idle;
                end
            end
            ms_addr_ready: begin
                next_state = (rvalid & rready) ? ms_rdata_ready : ms_addr_ready;
            end
            ms_wdata_ready : begin
                next_state = ws_allowin && (bready & bvalid) ? ms_idle : ms_wdata_ready;
            end
            ms_rdata_ready : begin
                next_state = ms_idle ;
            end
            default : next_state = ms_idle;
        endcase
    end

    assign arvalid = (|load) & (ms_state == ms_wait_ready);
    assign rready  = (|load) & (ms_state == ms_addr_ready);
    assign araddr = mem_addr;
    assign arsize = (load == 4'hf) ? 3'b010 :
                    (load == 4'h3) ? 3'b001 : 
                    (load == 4'h1) ? 3'b000 : 3'b0;
    assign arlen  = 8'h0;
    assign ms_to_ws_valid = (bready & bvalid) | (ms_state == ms_wait_ready && !arvalid && !awvalid) | (ms_state == ms_rdata_ready);

    assign awvalid = mem_wen & (ms_state == ms_wait_ready);
    assign wvalid  = mem_wen & (ms_state == ms_wait_ready);
    assign awaddr =  mem_addr;
    assign awsize = (store == 4'hf) ? 3'b010 :
                    (store == 4'h3) ? 3'b001 : 
                    (store == 4'h1) ? 3'b000 : 3'b0;
    assign awlen = 8'h0;
    assign wlast = 1'b1;
    assign wdata  = (store == 4'hf) ? st_data :
                    (store == 4'h3) ? (st_data << (byte_offset * 8)) :
                    (store == 4'h1) ? (st_data << (byte_offset * 8)) : 32'b0;
    assign wstrb  = (store == 4'hf) ? 4'b1111 :
                    (store == 4'h3) ? (3 << byte_offset) :
                    (store == 4'h1) ? (1 << byte_offset) : 4'b0;
    assign bready = (ms_state == ms_wdata_ready);
    assign ms_allowin = (rvalid && rready) || (bvalid && bready);
    assign {
        ms_pc,
        ms_alu_result,
        mem_addr,
        st_data,
        csr_data,
        dest,
        load,
        store,
        load_sign,
        res_from_csr,
        rf_wen,
        br_taken
    } = es_to_ms_bus_r;

    assign ms_to_ws_bus = {
        ms_pc,          //184 : 153
        load_data,      //152 : 121
        ms_alu_result,  //120 : 89
        csr_data,       //56 : 25
        dest,           //12 : 8
        load,           //7 : 4
        res_from_csr,   //2
        rf_wen,         //1
        br_taken        //0
    };
    
    assign mem_wen = |store;
    assign byte_offset = mem_addr[1:0];
    
    assign selected_byte = (byte_offset == 2'b00) ? mem_rdata[7:0] :
                          (byte_offset == 2'b01) ? mem_rdata[15:8] :
                          (byte_offset == 2'b10) ? mem_rdata[23:16] :
                                                   mem_rdata[31:24];
    
    assign selected_halfword = (byte_offset[1] == 1'b0) ? mem_rdata[15:0] : mem_rdata[31:16];
                                                       

    assign load_data = (load == 4'hf) ? mem_rdata :
                       (load == 4'h3) ? (load_sign ? {{16{selected_halfword[15]}}, selected_halfword} : {16'b0, selected_halfword}) :
                       (load == 4'h1) ? (load_sign ? {{24{selected_byte[7]}}, selected_byte} : {24'b0,  selected_byte}) :
                       32'b0;

    always @(posedge clock)begin
        if(rvalid & rready) begin
            mem_rdata <= rdata;
            pref_cnt_l <= pref_cnt_l + 1;
        end
        if(bvalid & bready) begin
            if(bresp != 2'b0) begin
                // $display("bresp : %d .Access Fault !!!", bresp);
                // $fatal;
            end
            pref_cnt_s <= pref_cnt_s + 1;    
        end
    end

    always @(posedge clock)begin
        if(es_to_ms_valid && ms_allowin)
            es_to_ms_bus_r <= es_to_ms_bus;
        if(((mem_addr >= 32'h10000000) && (mem_addr <= 32'h10000032)) && ms_to_ws_valid) skip_ref();    
    end
    
    
endmodule
/*verilator public_off*/