`include "mycpu.vh"
/*verilator public_on*/
module ysyx_25110269_icache(
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

    input           i_rvalid,
    input   [31:0]  i_rdata,
    input   [1:0]   i_rresp,
    output          i_rready
    
);

parameter   NUM_BLOCKS = 16, // cache块数量
            BLOCK_SIZE = 4,  // cache块大小
            INDEX_BITS = 4,  // 块索引位数
            OFFSET_BITS = 2, // 块内偏移位数
            TAG_BITS = 32 - INDEX_BITS - OFFSET_BITS; // 标签位数

reg [BLOCK_SIZE*8 - 1   : 0]    icache      [0:NUM_BLOCKS - 1]; // 16个cache块，每个块4B
reg                             valid_array [0:NUM_BLOCKS - 1]; // 每个块的有效位
reg [TAG_BITS - 1       : 0]    tag_array   [0:NUM_BLOCKS - 1]; // 每个块的标签

wire [INDEX_BITS - 1    : 0]    index   = raddr[OFFSET_BITS + INDEX_BITS - 1 : OFFSET_BITS]; // 块索引
wire [OFFSET_BITS - 1   : 0]    offset  = raddr[OFFSET_BITS - 1 : 0]; // 块内偏移
wire [TAG_BITS - 1      : 0]    tag     = raddr[31 : OFFSET_BITS + INDEX_BITS]; // 标签
wire                            hit     = valid_array[index] && (tag_array[index] == tag); // 是否命中

assign i_arvalid = (state == MISS);
assign i_rready = (state == REFILL);

assign i_arlen = 8'h0; // 只请求一个数据块
assign i_arsize = 3'b010; // 4字节
assign i_araddr = raddr;
assign valid = (i_rvalid && i_rready) || (rvalid && hit);
assign rdata = (rvalid && hit) ? icache[index] : i_rdata;
localparam IDLE = 0,
           MISS = 1,
           REFILL = 2;
reg [1:0] state;
reg [31 : 0] miss_cnt;
reg [31 : 0] hit_cnt;

integer i;
always @(posedge clock) begin
    if (reset) begin
        state <= IDLE;
        miss_cnt <= 0;
        hit_cnt <= 0;
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
                        hit_cnt <= hit_cnt + 1;
                    end else begin
                        state <= MISS; // 未命中，进入MISS状态
                        miss_cnt <= miss_cnt + 1;
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
                    // 数据返回，更新cache块内容、标签和有效位
                    if(i_rresp != 2'b0) begin
                        // $display("Access Fault !!! rrsep : %xh", i_rresp);
                        // $fatal;
                    end
                    icache[index] <= i_rdata;
                    tag_array[index] <= tag;
                    valid_array[index] <= 1;
                    state <= IDLE; // 回到空闲状态等待下一次访问
                end
            end
        endcase
    end
end

endmodule
/*verilator public_off*/