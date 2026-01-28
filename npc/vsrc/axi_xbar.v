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

    // AXI4-Lite interface to pmem
    output       arvalid,
    output [31:0] araddr,
    input        arready,
    input        rvalid,
    input [31:0] rdata,
    input [1:0]  rresp,
    output       rready
);
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
endmodule