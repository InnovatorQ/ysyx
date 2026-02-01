module axi_xbar(
    input        clk,
    input        reset,
    // IFU interface
    input        ifu_arvalid,
    input [31:0] ifu_araddr,
    output       ifu_arready,
    output       ifu_rvalid,
    output [31:0] ifu_rdata,
    output [1:0]  ifu_rresp,
    input        ifu_rready,

    // LSU interface
    input        lsu_arvalid,
    input [31:0] lsu_araddr,
    output       lsu_arready,
    output       lsu_rvalid,
    output [31:0] lsu_rdata,
    output [1:0]  lsu_rresp,
    input        lsu_rready,

    //CLINT
    output          clint_arvalid,
    output [31:0]   clint_araddr,
    input           clint_arready,
    input           clint_rvalid,
    input [31:0]    clint_rdata,
    input [1:0]     clint_rresp,
    output          clint_rready,

    //uart
    output          uart_awvalid,
    output [31 : 0] uart_awaddr,
    input           uart_awready,
    output          uart_wvalid,
    output [31 : 0] uart_wdata,
    output [3  : 0] uart_wstrb,
    input           uart_wready,

    //pmem
    output          pmem_awvalid,
    output [31 : 0] pmem_awaddr,
    input           pmem_awready,
    output          pmem_wvalid,
    output [31 : 0] pmem_wdata,
    output [3  : 0] pmem_wstrb,
    input           pmem_wready,

    // AXI4-Lite interface to pmem
    output          pmem_arvalid,
    output [31:0]   pmem_araddr,
    input           pmem_arready,
    input           pmem_rvalid,
    input [31:0]    pmem_rdata,
    input [1:0]     pmem_rresp,
    output          pmem_rready,

    input           awvalid,
    input [31 : 0]  awaddr,
    output          awready,

    input           wvalid,
    input  [31 : 0] wdata,
    input  [3  : 0] wstrb,
    output          wready
);

always @(*) begin
    if(awaddr >= 32'h10000000 & awaddr < 32'h10000fff) skip_ref();
    if(araddr >= 32'ha0000048 & araddr <= 32'ha0000068) skip_ref();
end

localparam idle = 0;
localparam master_ifu = 1;
localparam master_lsu = 2;

reg [1 : 0] state;
reg [1 : 0] next_state;

always @(posedge clk) begin
    if (reset) begin
        state <= idle;
    end else begin
        state <= next_state;
    end
end
// 优先级轮询 ： ifu > lsu
always @(*) begin
    case (state)
        idle: begin
            if (ifu_arvalid) begin
                next_state = master_ifu;
            end else if (lsu_arvalid) begin
                next_state = master_lsu;
            end else begin
                next_state = idle;
            end
        end
        master_ifu: begin
            if (rvalid & ifu_rready) begin
                next_state = idle;
            end else begin
                next_state = master_ifu;
            end
        end
        master_lsu: begin
            if (rvalid & lsu_rready) begin
                next_state = idle;
            end else begin
                next_state = master_lsu;
            end
        end
        default: next_state = idle;
    endcase
end
wire            arvalid;
wire [31 : 0]   araddr;
wire            arready;
wire            rvalid;
wire [31 : 0]   rdata;
wire [1 : 0]    rresp;
wire            rready;

reg [31 : 0]    raddr;
always @(posedge clk) begin
    if(arvalid & arready) raddr <= araddr;
end
assign arready = clint_arvalid ? clint_arready : pmem_arready;  // 默认返回的是mem的arready
assign rvalid = (raddr == 32'ha0000048 | raddr == 32'ha000004c) ? clint_rvalid : pmem_rvalid;
assign rdata = (raddr == 32'ha0000048 | raddr == 32'ha000004c) ? clint_rdata : pmem_rdata;
assign rresp = (raddr == 32'ha0000048 | raddr == 32'ha000004c) ? clint_rresp : pmem_rresp;

assign ifu_arready = (state == master_ifu) ? arready : 1'b0;
assign lsu_arready = (state == master_lsu) ? arready : 1'b0;
assign ifu_rvalid = (state == master_ifu) ? rvalid : 1'b0;
assign lsu_rvalid = (state == master_lsu) ? rvalid : 1'b0;
assign ifu_rdata = (state == master_ifu) ? rdata : 32'b0;
assign lsu_rdata = (state == master_lsu) ? rdata : 32'b0;
assign ifu_rresp = (state == master_ifu) ? rresp : 2'b0;
assign lsu_rresp = (state == master_lsu) ? rresp : 2'b0;

assign arvalid = (state == master_ifu) ? ifu_arvalid :
                 (state == master_lsu) ? lsu_arvalid : 1'b0;
assign araddr = (state == master_ifu) ? ifu_araddr :
                (state == master_lsu) ? lsu_araddr : 32'b0;
assign rready = (state == master_ifu) ? ifu_rready :
                (state == master_lsu) ? lsu_rready : 1'b0;

assign clint_arvalid = (araddr == 32'ha0000048 | araddr == 32'ha000004c) ? arvalid : 1'b0;
assign pmem_arvalid = (araddr >= 32'h80000000 & araddr < 32'h87ffffff) ? arvalid : 1'b1;
assign clint_araddr = clint_arvalid ? araddr : 32'h0;
assign pmem_araddr = pmem_arvalid ? araddr : 32'h0;
assign clint_rready = clint_rvalid ? rready : 1'b0;
assign pmem_rready = pmem_rvalid ? rready : 1'b0;

reg [31 : 0] waddr;
always @(posedge clk) begin
    if(awvalid & awready) waddr <= awaddr;
end

assign uart_awvalid = (awaddr >= 32'h10000000 & awaddr < 32'h10000fff) ? awvalid : 1'b0;
assign pmem_awvalid = (awaddr >= 32'h80000000 & awaddr < 32'h87ffffff) ? awvalid : 1'b0;
assign uart_awaddr = uart_awvalid ? awaddr : 32'h0;
assign pmem_awaddr = pmem_awvalid ? awaddr : 32'h0;
assign awready = (uart_awvalid | pmem_awvalid) ? (pmem_awvalid ? pmem_awready : uart_awready) : 1'b0;
assign uart_wvalid = (waddr >= 32'h10000000 & waddr < 32'h10000fff) ? wvalid : 1'b0;
assign pmem_wvalid = (waddr >= 32'h80000000 & waddr < 32'h87ffffff) ? wvalid : 1'b0;
assign uart_wdata = uart_wvalid ? wdata : 32'b0;
assign pmem_wdata = pmem_wvalid ? wdata : 32'b0;
assign uart_wstrb = uart_wvalid ? wstrb : 4'b0;
assign pmem_wstrb = pmem_wvalid ? wstrb : 4'b0;
assign wready = (uart_wvalid | pmem_wvalid) ? (pmem_wvalid ? pmem_wready : uart_wready) : 1'b0;
endmodule