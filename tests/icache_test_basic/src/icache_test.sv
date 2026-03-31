
module ysyx_25110269_icache #(
    parameter NUM_SETS = 4,     // 组数
    parameter WAYS = 1,         // 每组路数  
    parameter BLOCK_SIZE = 4,   // 块大小(字节)
    parameter SET_BITS = $clog2(NUM_SETS),
    parameter OFFSET_BITS = $clog2(BLOCK_SIZE),
    parameter TAG_BITS = 32 - SET_BITS - OFFSET_BITS,
    parameter WAY_BITS = $clog2(WAYS),
    parameter BLOCK_WORD = BLOCK_SIZE / 4
)(
    input           clock,
    input           reset,
    //ar ifu
    input           rvalid,
    input   [31:0]  raddr,
    output  [31:0]  rdata,
    output          valid, 
    //axi xbar->icache
    output          i_arvalid,
    output  [31:0]  i_araddr,
    output  [7:0]   i_arlen,
    output  [2:0]   i_arsize,
    input           i_arready,
    output  [1:0]   i_arburst,

    input           i_rvalid,
    input   [31:0]  i_rdata,
    input   [1:0]   i_rresp,
    output          i_rready,
    input           i_rlast
    
);

localparam  NUM_BLOCKS = NUM_SETS * WAYS; // 总块数
            
reg [BLOCK_SIZE*8 - 1   : 0]    icache      [0:NUM_BLOCKS - 1]; 
reg                             valid_array [0:NUM_BLOCKS - 1]; 
reg [TAG_BITS - 1       : 0]    tag_array   [0:NUM_BLOCKS - 1]; 
reg [7       : 0]               w_ptr;
generate
if (WAYS > 1) begin : gen_assoc
    reg [WAY_BITS - 1 : 0] FIFO [0:NUM_SETS - 1];
    reg [WAY_BITS - 1 : 0] hit_way;
    reg [WAY_BITS - 1 : 0] replace_way;
end
endgenerate

wire [SET_BITS - 1      : 0]    set_index = raddr[OFFSET_BITS + SET_BITS - 1 : OFFSET_BITS];
wire [OFFSET_BITS - 1   : 0]    offset    = raddr[OFFSET_BITS - 1 : 0]; 
wire [TAG_BITS - 1      : 0]    tag       = raddr[31 : OFFSET_BITS + SET_BITS];
wire uncache_addr = (raddr[31:24] == 8'h0f);
// 命中检测和路选择
reg                             hit;
reg [31 : 0] o_rdata;
reg [31 : 0] i_rdata_r;

// 组相联命中检测
generate
if (WAYS > 1) begin : gen_hit_logic
    integer way_idx;
    always @(*) begin
        hit = 0;
        gen_assoc.hit_way = 0;
        for (way_idx = 0; way_idx < WAYS; way_idx = way_idx + 1) begin
            if (valid_array[set_index * WAYS + way_idx] && 
                tag_array[set_index * WAYS + way_idx] == tag) begin
                hit = 1;
                gen_assoc.hit_way = way_idx[WAY_BITS - 1 : 0];
            end
        end
    end
end else begin : gen_direct_hit
    always @(*) begin
        hit = (valid_array[set_index] && (tag_array[set_index] == tag)) && (state == IDLE) && !uncache_addr;
    end
end
endgenerate

generate
if (WAYS > 1) begin : gen_replace_logic
    // 组相联替换策略
    integer find_way;
    always @(*) begin
        gen_assoc.replace_way = 0;
        // 优先找无效路
        for (find_way = 0; find_way < WAYS; find_way = find_way + 1) begin
            if (!valid_array[set_index * WAYS + find_way]) begin
                gen_assoc.replace_way = find_way[WAY_BITS - 1 : 0];
            end
        end
        // 如果都有效，选择FIFO路
        if (valid_array[set_index * WAYS + {1'b0, gen_assoc.replace_way}]) begin
            gen_assoc.replace_way = gen_assoc.FIFO[set_index];
        end
    end
end
endgenerate

assign i_arvalid = (state == MISS) || ((state == IDLE) && uncache_addr && rvalid);
assign i_rready = (state == REFILL) || ((state == IDLE) && uncache_addr);
assign i_arburst = 2'b1;
assign i_arlen = uncache_addr ? 0 : BLOCK_WORD - 1; 
assign i_arsize = 3'b010; // 4字节
assign i_araddr = raddr;
assign valid = (i_rvalid && i_rready && i_rlast) || (rvalid && hit);
generate
if (WAYS > 1) begin : gen_rdata_assoc
    assign rdata = (rvalid && hit) ? icache[set_index * WAYS + {1'b0, gen_assoc.hit_way}] : i_rdata_r;
end else begin : gen_rdata_direct
    assign rdata = uncache_addr ? i_rdata : (((i_arlen == 0) && !hit) ? i_rdata : o_rdata);
    // assign rdata = uncache_addr ? i_rdata : ((rvalid && hit) ? o_rdata : i_rdata_r);
    always @(*) begin
        case(offset >> 2)
        'h0 : o_rdata = icache[set_index][31 : 0];
        'h1 : o_rdata = icache[set_index][63 : 32];
        default : ;
        endcase
    end
end
endgenerate

localparam IDLE = 0,
           MISS = 1,
           REFILL = 2,
           BURST_FIN = 3;
reg [1:0] state;
reg [31 : 0] miss_cnt;
reg [31 : 0] hit_cnt;
reg [31 : 0] penalty_cnt;
reg          access_start;
generate
if (WAYS > 1) begin : gen_update_assoc
    always @(posedge clock) begin
        if(reset) begin
            for (i = 0; i < NUM_SETS; i = i + 1) begin
                gen_assoc.FIFO[i] <= 0;
            end
        end
        else if (state == REFILL && i_rvalid && i_rready) begin
            icache[set_index * WAYS + {1'b0, gen_assoc.replace_way}][31:0] <= i_rdata;
            tag_array[set_index * WAYS + {1'b0, gen_assoc.replace_way}] <= tag;
            valid_array[set_index * WAYS + {1'b0, gen_assoc.replace_way}] <= 1;
            gen_assoc.FIFO[set_index] <= ((gen_assoc.FIFO[set_index] + 1) == WAYS) ? 0 : gen_assoc.FIFO[set_index] + 1;
        end
    end
end else begin : gen_update_direct
    always @(posedge clock) begin
        if (state == REFILL && i_rvalid && i_rready) begin
            case(w_ptr)
                'h0 : begin 
                    icache[set_index][31:0]   <= i_rdata;
                    i_rdata_r <= i_rdata;
                    end
                'h1 : icache[set_index][63:32]  <= i_rdata;
            endcase
            if(w_ptr == i_arlen)begin
                tag_array[set_index] <= tag;
                valid_array[set_index] <= 1;
            end
        end
    end
end
endgenerate

integer i;
always @(posedge clock) begin
    if (reset) begin
        state <= IDLE;
        miss_cnt <= 0;
        hit_cnt <= 0;
        penalty_cnt <= 0;
        access_start <= 0;
        w_ptr <= 0;
        // 初始化valid_array和tag_array
        
        for (i = 0; i < NUM_BLOCKS; i = i + 1) begin
            valid_array[i] <= 0;
            tag_array[i] <= 0;
        end
    end else begin
        case (state)
            IDLE: begin
                if (rvalid) begin
                    if (hit) begin
                        state <= IDLE; // 命中，继续保持空闲状态
                        if(!uncache_addr) hit_cnt <= hit_cnt + 1;
                    end else begin
                        state <= MISS; // 未命中，进入MISS状态
                        if(!uncache_addr) miss_cnt <= miss_cnt + 1;
                        access_start <= 1;
                        w_ptr <= 0;
                    end

                end
            end
            MISS: begin
                if (i_arready && i_arvalid) begin
                    state <= REFILL; // 地址发送成功，进入REFILL状态等待数据返回

                end
            end
            REFILL: begin
                if (i_rvalid && i_rready) begin
                    if(i_rresp != 2'b0) begin
                        // $display("Access Fault !!! rrsep : %xh", i_rresp);
                        // $fatal;
                    end 
                    w_ptr <= w_ptr + 1;
                    if(i_rlast)begin
                        access_start <= 0;
                        state <= BURST_FIN;
                    end
                end
            end
            BURST_FIN: begin
                state <= IDLE;
            end
        endcase
        if(access_start) penalty_cnt <= penalty_cnt + 1;
    end
end

endmodule


module icache_test(
    input clock,
    input reset
);
    reg [31:0] mem [0:1023];
    
    // DUT signals
    reg rvalid;
    reg [31:0] raddr;
    wire [31:0] rdata;
    wire valid;
    wire i_arvalid;
    wire [31:0] i_araddr;
    wire [7:0] i_arlen;
    wire [2:0] i_arsize;
    reg i_arready;
    reg i_rvalid;
    reg [31:0] i_rdata;
    reg [1:0] i_rresp;
    wire i_rready;
    reg i_rlast;
    wire [1:0] i_arburst;
    
    // Test control
    reg [7:0] burst_cnt;
    reg [31:0] base_addr;
    
    ysyx_25110269_icache #(.NUM_SETS(4), .WAYS(1), .BLOCK_SIZE(8)) dut(
        .clock(clock),
        .reset(reset),
        .rvalid(rvalid),
        .raddr(raddr),
        .rdata(rdata),
        .valid(valid),
        .i_arvalid(i_arvalid),
        .i_araddr(i_araddr),
        .i_arlen(i_arlen),
        .i_arsize(i_arsize),
        .i_arready(i_arready),
        .i_arburst(i_arburst),
        .i_rvalid(i_rvalid),
        .i_rdata(i_rdata),
        .i_rresp(i_rresp),
        .i_rready(i_rready),
        .i_rlast(i_rlast)
    );

    // Initialize memory
    integer i;
    initial begin
        for (i = 0; i < 1024; i = i + 1) begin
            mem[i] = i * 32'h11111111 + 32'h12345678;
        end
    end

    // Memory simulation with burst support
    always @(posedge clock) begin
        if (reset) begin
            i_rvalid <= 0;
            i_rlast <= 0;
            burst_cnt <= 0;
        end else if (i_arvalid && i_arready) begin
            i_rvalid <= 1;
            base_addr <= i_araddr;
            burst_cnt <= 0;
            i_rdata <= mem[i_araddr[11:2]];
            i_rlast <= (i_arlen == 0);
            i_rresp <= 2'b00;
        end else if (i_rvalid && i_rready) begin
            if (!i_rlast) begin
                burst_cnt <= burst_cnt + 1;
                i_rdata <= mem[(base_addr[11:2]) + burst_cnt + 1];
                i_rlast <= (burst_cnt == i_arlen - 1);
            end else begin
                i_rvalid <= 0;
                i_rlast <= 0;
            end
        end
    end

    // Test scenarios
    reg [3:0] test_phase;
    reg [31:0] test_addr;
    reg [7:0] delay_cnt;
    
    initial begin
        rvalid = 0;
        raddr = 0;
        i_arready = 1;
        test_phase = 0;
        delay_cnt = 0;
    end
    
    always @(posedge clock) begin
        if (reset) begin
            test_phase <= 0;
            rvalid <= 0;
            delay_cnt <= 0;
        end else begin
            case (test_phase)
                0: begin // Test miss and fill
                    rvalid <= 1;
                    raddr <= 32'h1000;
                    if (valid) test_phase <= 1;
                end
                1: begin // Test hit
                    raddr <= 32'h1000;
                    if (valid) test_phase <= 2;
                end
                2: begin // Test different word in same block
                    raddr <= 32'h1004;
                    if (valid) test_phase <= 3;
                end
                3: begin // Test different set
                    raddr <= 32'h1020;
                    if (valid) test_phase <= 4;
                end
                4: begin // Test uncached access
                    raddr <= 32'h0f000000;
                    if (valid) test_phase <= 5;
                end
                5: begin // Test replacement
                    raddr <= 32'h1040;
                    if (valid) test_phase <= 6;
                end
                6: begin
                    rvalid <= 0;
                end
            endcase
        end
    end

    // Formal assertions
    always @(posedge clock) begin
        if (!reset) begin
            // Basic protocol check
            if (i_rvalid && i_rready && i_rlast)
                assert(valid);
            
            // Uncached access should be single transfer
            if (i_arvalid && (raddr[31:24] == 8'h0f))
                assert(i_arlen == 0);
            
            // Cached access should be burst
            if (i_arvalid && (raddr[31:24] != 8'h0f))
                assert(i_arlen == 1); // BLOCK_SIZE=8, so 2 words
        end
    end

endmodule