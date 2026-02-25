module ysyx_25110269_axi_xbar(
    input        clock,
    input        reset,
    // IFU interface
    input        ifu_arvalid,
    input [31:0] ifu_araddr,
    input [7 :0] ifu_arlen,
    input [2 :0] ifu_arsize,
    output       ifu_arready,
    output       ifu_rvalid,
    output [31:0] ifu_rdata,
    output [1:0]  ifu_rresp,
    input        ifu_rready,

    // LSU interface
    input           lsu_arvalid,
    input [31:0]    lsu_araddr,
    input [7 :0]    lsu_arlen,
    input [2 :0]    lsu_arsize,
    output          lsu_arready,
    output          lsu_rvalid,
    output [31:0]   lsu_rdata,
    output [1:0]    lsu_rresp,
    input           lsu_rready,
    input           lsu_awvalid,
    input [31 :0]   lsu_awaddr,
    input [7:0]     lsu_awlen,
    input [2:0]     lsu_awsize,
    output          lsu_awready,
    input           lsu_wvalid,
    input [31 :0]   lsu_wdata,
    input [3  :0]   lsu_wstrb,
    input           lsu_wlast,
    output          lsu_wready,
    output          lsu_bvalid,
    output [1  :0]  lsu_bresp,
    input           lsu_bready,

    //CLINT
    output          clint_arvalid,
    output [31:0]   clint_araddr,
    output [7 :0]   clint_arlen,
    output [2 :0]   clint_arsize,
    input           clint_arready,
    input           clint_rvalid,
    input [31:0]    clint_rdata,
    input [1:0]     clint_rresp,
    output          clint_rready,

    input           io_master_awready,
    output          io_master_awvalid,
    output [31:0]   io_master_awaddr,
    output [7:0]    io_master_awlen,
    output [2:0]    io_master_awsize,

    input           io_master_wready,
    output          io_master_wvalid,
    output [31:0]   io_master_wdata,
    output [3:0]    io_master_wstrb,
    output          io_master_wlast,

    input           io_master_arready,
    output          io_master_arvalid,
    output [31:0]   io_master_araddr,
    output [7:0]    io_master_arlen,
    output [2:0]    io_master_arsize,

    output          io_master_rready,
    input           io_master_rvalid,
    input [1:0]     io_master_rresp,
    input [31:0]    io_master_rdata,

    output          io_master_bready,
    input           io_master_bvalid,
    input [1:0]     io_master_bresp
);

localparam idle = 0;
localparam master_ifu = 1;
localparam master_lsu = 2;

reg [1 : 0] state;
reg [1 : 0] next_state;

always @(posedge clock) begin
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
    if(araddr >= 32'h02000000 && araddr < 32'h02010000) skip_ref();
end

reg [31 : 0]    raddr;
always @(posedge clock) begin
    if(arvalid & arready) raddr <= araddr;
end
assign arready = clint_arvalid ? clint_arready : io_master_arready;  // 默认返回的是mem的arready
assign rvalid = (raddr >= 32'h0200_0000 && raddr < 32'h02010000) ? clint_rvalid : io_master_rvalid;
assign rdata = (raddr >= 32'h0200_0000 && raddr < 32'h02010000) ? clint_rdata : io_master_rdata;
assign rresp = (raddr >= 32'h0200_0000 && raddr < 32'h02010000) ? clint_rresp : io_master_rresp;

assign ifu_arready = (state == master_ifu) ? arready : 1'b0;
assign lsu_arready = (state == master_lsu) ? arready : 1'b0;
assign ifu_rvalid = (state == master_ifu) ? rvalid : 1'b0;
assign lsu_rvalid = (state == master_lsu) ? rvalid : 1'b0;
assign ifu_rdata = (state == master_ifu) ? rdata : 32'b0;
assign lsu_rdata = (state == master_lsu) ? rdata : 32'b0;
assign ifu_rresp = (state == master_ifu) ? rresp : 2'b0;
assign lsu_rresp = (state == master_lsu) ? rresp : 2'b0;

wire            arvalid, arready, rready, rvalid;
wire [31 : 0]   araddr, rdata;
wire [7  : 0]   arlen;
wire [2  : 0]   arsize;
wire [1  : 0]   rresp;

assign arvalid = (state == master_ifu) ? ifu_arvalid :
                 (state == master_lsu) ? lsu_arvalid : 1'b0;
assign araddr = (state == master_ifu) ? ifu_araddr :
                (state == master_lsu) ? lsu_araddr : 32'b0;
assign arsize = (state == master_ifu) ? ifu_arsize :
                (state == master_lsu) ? lsu_arsize : 3'b0;
assign arlen  = (state == master_ifu) ? ifu_arlen  :
                (state == master_lsu) ? lsu_arlen  : 8'b0;
assign rready = (state == master_ifu) ? ifu_rready :
                (state == master_lsu) ? lsu_rready : 1'b0;

assign clint_arvalid = (araddr >= 32'h02000000 && araddr < 32'h02010000) ? arvalid : 1'b0;
assign io_master_arvalid = (araddr < 32'h02000000 | araddr >= 32'h02010000) ? arvalid : 1'b0;
assign clint_araddr = clint_arvalid ? araddr : 32'h0;
assign io_master_araddr = io_master_arvalid ? araddr : 32'h0;
assign clint_arlen = clint_arvalid ? arlen : 8'h0;
assign io_master_arlen = io_master_rvalid ? arlen : 8'h0;
assign clint_arsize = clint_arvalid ? arsize : 3'b0;
assign io_master_arsize = io_master_rvalid ? arsize : 3'b0;
assign clint_rready = clint_rvalid ? rready : 1'b0;
assign io_master_rready = io_master_rvalid ? rready : 1'b0;

assign io_master_awvalid = lsu_awvalid;
assign io_master_awaddr = lsu_awaddr;
assign io_master_awsize = lsu_awsize;
assign io_master_awlen  = lsu_awlen;
assign lsu_awready = io_master_awready;

assign io_master_wvalid = lsu_wvalid;
assign io_master_wdata = lsu_wdata;
assign io_master_wstrb = lsu_wstrb;
assign io_master_wlast = lsu_wlast;
assign lsu_wready = io_master_wready;

assign io_master_bready = lsu_bready;
assign lsu_bvalid = io_master_bvalid;
assign lsu_bresp = io_master_bresp;
endmodule