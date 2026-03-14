module ysyx_25110269_CLINT(
    input           clock,
    input           reset,

    input           clint_arvalid,
    input [31 : 0]  clint_araddr,
    input [7  : 0]  clint_arlen,
    input [2  : 0]  clint_arsize,
    output          clint_arready,

    output reg          clint_rvalid,
    output reg [31 : 0] clint_rdata,
    output [1  : 0]     clint_rresp,
    input               clint_rready
);

    reg [31 : 0] mtime_l;
    reg [31 : 0] mtime_h;

    reg [7 : 0] lfsr;
    reg [4 : 0] random_delay;
    // LFSR生成随机延迟访问
    always @(posedge clock) begin
        if(reset) begin
            lfsr <= 8'b10110001;
            random_delay <= 5'h0;
        end else begin
            lfsr <= {lfsr[6:0], lfsr[7] ^ lfsr[5] ^ lfsr[4] ^ lfsr[3]};
            if(random_delay == 5'b0) random_delay <= lfsr[4 : 0];
            else random_delay <= random_delay - 5'b1;
        end
    end

    assign clint_arready = 1'b1;
    always @(posedge clock) begin
        if(reset) clint_rdata <= 32'h0;
        else if(clint_arvalid & clint_arready) begin
            if(clint_araddr == 32'h02000000) clint_rdata <= mtime_l;
            else if(clint_araddr == 32'h02000004) clint_rdata <= mtime_h;
            clint_rvalid <= 1'b1;
            clint_rresp <= 2'b0;
        end else if(clint_rready) clint_rvalid <= 1'b0;
    end

    always @(posedge clock) begin
        if(reset) begin
            mtime_h <= 32'h0;
            mtime_l <= 32'h0;
        end else begin
            if(mtime_l == 32'hffffffff & mtime_h == 32'hffffffff) begin
                mtime_l <= 32'h0;
                mtime_h <= 32'h0;
            end else if(mtime_l == 32'hffffffff)begin
                mtime_l <= 32'h0;
                mtime_h <= mtime_h + 32'h1;
            end else  mtime_l <= mtime_l + 32'h1;
        end
    end
endmodule