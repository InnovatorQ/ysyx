// 负责根据控制信号控制存储器, 从存储器中读出数据, 或将数据写入存储器
module LSU(
    input           clk,
    input           reset,

    input           es_to_ms_valid,
    input           es_state,
    input [144 : 0] es_to_ms_bus,

    output reg      ms_to_ws_valid,
    output reg      ms_state,
    output [107 :0] ms_to_ws_bus,

    input           ws_allowin,
    output          ms_allowin
);  
    localparam ms_idle = 1'b0;
    localparam ms_wait_ready = 1'b1;
    reg        next_state;

    reg [7 : 0]     lfsr;
    reg [4 : 0]     lsu_req_delay;
    reg [4 : 0]     lsu_resp_delay;
    reg [4 : 0]     delay_count;
    reg             ms_reqReady;
    reg             ms_reqValid;
    reg             ms_respReady;
    reg             ms_respValid;

    reg [144 : 0]   es_to_ms_bus_r;
    wire            ms_ready_go;
    reg             ms_valid;

    wire [31 : 0]   ms_pc;
    wire [31 : 0]   load_data;
    wire [31 : 0]   ms_alu_result;
    wire [31 : 0]   mem_addr;
    wire [31 : 0]   st_data;
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
    
    //LFSR生成随机延迟访问
    always @(posedge clk) begin
        if(reset) begin
            lfsr <= 8'b10110001;
        end else begin
            lfsr <= {lfsr[6:0], lfsr[7] ^ lfsr[5] ^ lfsr[4] ^ lfsr[3]};
        end
    end

    always @(posedge clk) begin
        if(reset)begin
            ms_valid <= 1'b0;
            ms_state <= ms_idle;
            delay_count <= 5'b0;
            lsu_req_delay <= 5'b0;
            lsu_resp_delay <= 5'b0;
        end else begin
            ms_valid <= es_to_ms_valid;
            ms_state <= next_state;
            if(ms_state == ms_idle && next_state == ms_wait_ready) begin
                //delay_count <= lfsr[4:0]; // 使用LFSR的低5位作为随机延迟
                delay_count <= 5'b1;
                lsu_req_delay <= 5'd5;
                lsu_resp_delay <= 5'd20;
            end else if(ms_reqReady & delay_count != 5'b0) begin
                delay_count <= delay_count - 5'b1;
            end else if(lsu_req_delay != 5'b0) begin
                lsu_req_delay <= lsu_req_delay - 5'b1;
            end else if(lsu_resp_delay != 5'b0) begin
                lsu_resp_delay <= lsu_resp_delay - 5'b1;
            end
        end
    end

    assign ms_allowin = 1'b1;
    always @(*)begin
        case(ms_state)
            ms_idle : begin
                ms_to_ws_valid = 1'b0;
                ms_reqValid = 1'b0;
                next_state = es_to_ms_valid  ? ms_wait_ready : ms_idle;
            end
            ms_wait_ready : begin
                ms_reqReady = (lsu_req_delay == 5'b0) ? 1'b1 : 1'b0;
                ms_respReady = (lsu_resp_delay == 5'b0) ? 1'b1 : 1'b0;
                ms_to_ws_valid = (ms_respValid & ms_respReady & delay_count == 5'b0) ? 1'b1 : 1'b0;
                ms_reqValid = 1'b1;
                next_state = (ws_allowin & ms_respValid & ms_respReady & delay_count == 5'b0) ? ms_idle : ms_wait_ready;
            end
            default : next_state = ms_idle;
        endcase
    end

    assign {
        ms_pc,
        ms_alu_result,
        mem_addr,
        st_data,
        dest,
        load,
        store,
        load_sign,
        res_from_csr,
        rf_wen,
        br_taken
    } = es_to_ms_bus_r;

    assign ms_to_ws_bus = {
        ms_pc,          //107 : 76
        load_data,      //75 ： 44
        ms_alu_result,  //43 : 12
        dest,           //11 : 7
        load,           //6 : 3
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
                       (load == 4'h1) ? (load_sign ? {{24{selected_byte[7]}}, selected_byte} : {24'b0, selected_byte}) :
                       32'b0;

    always @(posedge clk)begin
        if(delay_count == 5'b0) begin
            mem_rdata <= (|load & ms_reqValid & ms_reqReady) ? pmem_read(mem_addr) : 32'b0;
            ms_respValid <= ms_reqValid & ms_reqReady;
        
            if(mem_wen) begin
                case (store)
                    4'hf: pmem_write(mem_addr, st_data, 8'b1111);
                    4'h3: pmem_write(mem_addr, st_data << (byte_offset * 8), 3 << byte_offset);
                    4'h1: pmem_write(mem_addr, st_data << (byte_offset * 8), 1 << byte_offset);
                    default: ;
                endcase
            end
        end
    end

    always @(posedge clk)begin
        if(es_state == 1'b1 && ms_allowin)
            es_to_ms_bus_r <= es_to_ms_bus;
    end
endmodule
