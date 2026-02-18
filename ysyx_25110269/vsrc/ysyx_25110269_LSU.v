// 负责根据控制信号控制存储器, 从存储器中读出数据, 或将数据写入存储器
module ysyx_25110269_LSU(
    input           clk,
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
    input           es_state,
    input [221 : 0] es_to_ms_bus,

    output          ms_to_ws_valid,
    output [184 :0] ms_to_ws_bus,

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

    reg [7 : 0]     lfsr;
    reg [4 : 0]     lsu_req_delay;
    reg [4 : 0]     lsu_resp_delay;
    reg [4 : 0]     delay_count;

    reg [221 : 0]   es_to_ms_bus_r;
    wire            ms_ready_go;
    reg             ms_valid;

    reg  [31 : 0]   mem_addr_r;     //difftest

    wire [31 : 0]   ms_pc;
    wire [31 : 0]   load_data;
    wire [31 : 0]   ms_alu_result;
    wire [31 : 0]   mem_addr;
    wire [31 : 0]   st_data;
    wire [31 : 0]   csr_result;
    wire [31 : 0]   csr_data;
    wire [11 : 0]   csr_wr_addr;
    wire [4  : 0]   dest;
    wire [3  : 0]   load;
    wire [3  : 0]   store;
    wire            csr_wen;
    wire            load_sign;
    wire            res_from_csr;
    wire            rf_wen;
    wire            br_taken;

    reg  [31 : 0]   mem_rdata;
    wire            mem_wen;
    wire [1 : 0]    byte_offset;
    wire [7 : 0]    selected_byte;
    wire [15: 0]    selected_halfword;
    
    //LFSR生成随机延迟访问
    always @(posedge clk) begin
        if(reset) begin
            lfsr <= 8'b10110001;
        end else begin
            lfsr <= {lfsr[6:0], lfsr[7] ^ lfsr[5] ^ lfsr[4] ^ lfsr[3]};
            mem_addr_r <= mem_addr;
        end
    end

    always @(posedge clk) begin
        if(reset)begin
            ms_valid <= 1'b0;
            ms_state <= ms_idle;
            delay_count <= 5'b0;
            // lsu_req_delay <= 5'b0;
            // lsu_resp_delay <= 5'b0;
        end else begin
            ms_valid <= es_to_ms_valid;
            ms_state <= next_state;
            if(ms_state == ms_wait_ready && next_state == ms_addr_ready) begin
                delay_count <= lfsr[4:0]; // 使用LFSR的低5位作为随机延迟
            //     delay_count <= 5'b1;
            //     lsu_req_delay <= 5'd5;
            //     lsu_resp_delay <= 5'd20;
            end else if(rvalid & delay_count != 5'b0) begin
                delay_count <= delay_count - 5'b1;
            end 
            //      else if(lsu_req_delay != 5'b0) begin
            //     lsu_req_delay <= lsu_req_delay - 5'b1;
            // end else if(lsu_resp_delay != 5'b0) begin
            //     lsu_resp_delay <= lsu_resp_delay - 5'b1;
            // end
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
                next_state = ws_allowin ? ms_idle : ms_rdata_ready;
            end
            default : next_state = ms_idle;
        endcase
        if(mem_addr >= 32'h10000000 && mem_addr <= 32'h10000032) skip_ref();
    end
    wire   in_uart = (mem_addr == 32'h10000005);
    assign arvalid = (|load) & (ms_state == ms_wait_ready);
    assign rready  = (|load) & (ms_state == ms_addr_ready);
    assign araddr = arvalid ? (in_uart ? 32'h10000005 : {mem_addr[31:2], 2'b0}) : 32'h0;
    assign arsize = arvalid ? (load == 4'hf) ? 3'b010 :
                            (load == 4'h3) ? 3'b001 : 
                            (load == 4'h1) ? 3'b000 : 3'b0 : 3'b0;
    assign arlen  = 8'h0;
    assign ms_to_ws_valid = (bready & bvalid) | (ms_state == ms_wait_ready && !arvalid && !awvalid) | (ms_state == ms_rdata_ready);

    assign awvalid = mem_wen & (ms_state == ms_wait_ready);
    assign wvalid  = mem_wen & (ms_state == ms_wait_ready);
    assign awaddr = awvalid ? mem_addr : 32'b0;
    assign awsize = awvalid ? (store == 4'hf) ? 3'b010 :
                            (store == 4'h3) ? 3'b001 : 
                            (store == 4'h1) ? 3'b000 : 3'b0 : 3'b0;
    assign awlen = 8'h0;
    assign wlast = wvalid ? 1'b1 : 1'b1;
    assign wdata  = wvalid  ? (store == 4'hf) ? st_data :
                            (store == 4'h3) ? (st_data << (byte_offset * 8)) :
                            (store == 4'h1) ? (st_data << (byte_offset * 8)) : 32'b0 : 32'b0;
    assign wstrb  = wvalid ? (store == 4'hf) ? 4'b1111 :
                            (store == 4'h3) ? (3 << byte_offset) :
                            (store == 4'h1) ? (1 << byte_offset) : 4'b0 : 4'b0;
    assign bready = (ms_state == ms_wdata_ready);
    assign ms_allowin = 1'b1;
    assign {
        ms_pc,
        ms_alu_result,
        mem_addr,
        st_data,
        csr_result,
        csr_data,
        csr_wr_addr,
        dest,
        load,
        store,
        csr_wen,
        load_sign,
        res_from_csr,
        rf_wen,
        br_taken
    } = es_to_ms_bus_r;

    assign ms_to_ws_bus = {
        ms_pc,          //184 : 153
        load_data,      //152 : 121
        ms_alu_result,  //120 : 89
        csr_result,     //88 : 57
        csr_data,       //56 : 25
        csr_wr_addr,    //24 : 13
        dest,           //12 : 8
        load,           //7 : 4
        csr_wen,        //3
        res_from_csr,   //2
        rf_wen,         //1
        br_taken        //0
    };
    // pmem pmem (
    //     .clk        (clk            ),
    //     .reset      (reset          ),
    //     .wmask      (store          ),
    //     .mem_wen    (|store         ),
    //     .paddr      (mem_addr       ),
    //     .pwdata     (st_data        ),
    //     .prdata     (mem_rdata      )
    // );
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

    always @(posedge clk)begin
        if(rvalid & rready) begin
            mem_rdata <= rdata;
        end
        if(bvalid & bready) begin
            if(bresp != 2'b0) begin
                $display("bresp : %d .Access Fault !!!", bresp);
                $fatal;
            end
        end
    end

    always @(posedge clk)begin
        if(es_to_ms_valid && ms_allowin)
            es_to_ms_bus_r <= es_to_ms_bus;
    end
endmodule
