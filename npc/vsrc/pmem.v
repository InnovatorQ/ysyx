module pmem(
    input           clk,
    input           reset,
    
    // IFU AXI4-Lite interface
    input           ifu_arvalid,
    input [31 : 0]  ifu_araddr,
    output reg      ifu_arready,
    input           ifu_rready,
    output reg      ifu_rvalid,
    output reg [31 : 0] ifu_rdata,
    output [1  : 0] ifu_rresp,

    // LSU AXI4-Lite interface
    input           lsu_arvalid,
    input [31 : 0]  lsu_araddr,
    output reg      lsu_arready,
    input           lsu_rready,
    output reg      lsu_rvalid,
    output reg [31 : 0] lsu_rdata,
    output [1  : 0] lsu_rresp,
    
    input           lsu_awvalid,
    input [31 : 0]  lsu_awaddr,
    output reg      lsu_awready,
    input           lsu_wvalid,
    input [31 : 0]  lsu_wdata,
    input [3  : 0]  lsu_wstrb,
    output reg      lsu_wready,
    output reg      lsu_bvalid,
    output [1  : 0] lsu_bresp,
    input           lsu_bready
);
    wire [7 : 0] wmask = {4'b0, lsu_wstrb};

    reg [31 : 0] wr_addr;
    reg          wr_addr_valid;

    reg [31 : 0] ifu_rd_addr;
    reg [31 : 0] lsu_rd_addr;
    //读地址
    always @(posedge clk)begin
        if(reset) begin
            ifu_arready <= 0;
            ifu_rd_addr <= 32'b0;
        end else begin
            if(ifu_arvalid & !ifu_rvalid)begin
                ifu_arready <= 1;
                ifu_rd_addr <= ifu_araddr;
            end else begin
                ifu_arready <= 0;
            end
        end
    end
    //读数据
    always @(posedge clk) begin
        if(reset) begin
            ifu_rdata <= 32'b0;
            ifu_rvalid <= 0;
            ifu_rresp <= 2'b0;
        end else begin
            if(ifu_arvalid & ifu_arready) begin
                ifu_rdata <= pmem_read(ifu_rd_addr);
                ifu_rresp <= 2'b0;
                ifu_rvalid <= 1;
            end else if(ifu_rready & ifu_rvalid) begin
                ifu_rvalid <= 0;
            end
        end
    end
    //读地址
    always @(posedge clk)begin
        if(reset) begin
            lsu_arready <= 0;
            lsu_rd_addr <= 32'b0;
        end else begin
            if(lsu_arvalid & !lsu_rvalid)begin
                lsu_arready <= 1;
                lsu_rd_addr <= lsu_araddr;
            end else begin
                lsu_arready <= 0;
            end
        end
    end
    //读数据
    always @(posedge clk) begin
        if(reset) begin
            lsu_rdata <= 32'b0;
            lsu_rvalid <= 0;
            lsu_rresp <= 2'b0;
        end else begin
            if(lsu_arvalid & lsu_arready) begin
                lsu_rdata <= pmem_read(lsu_rd_addr);
                lsu_rresp <= 2'b0;
                lsu_rvalid <= 1;
            end else if(lsu_rready) begin
                lsu_rvalid <= 0;
            end
        end
    end
    //写地址
    always @(posedge clk ) begin
        if (reset) begin
            lsu_awready   <= 0;
            wr_addr       <= 0;
            wr_addr_valid <= 0;
        end else begin
            if (lsu_awvalid && !wr_addr_valid) begin
                lsu_awready   <= 1;
                wr_addr       <= lsu_awaddr;
                wr_addr_valid <= 1;
            end else begin
                lsu_awready <= 0;
                if (lsu_wvalid && lsu_wready)
                    wr_addr_valid <= 0;
            end
        end
    end
    //写数据
    always @(posedge clk) begin
        if (reset) begin
            lsu_wready   <= 0;
        end else begin
            if(lsu_wvalid & wr_addr_valid) begin
                lsu_wready <= 1;
                pmem_write(wr_addr, lsu_wdata, wmask);
            end else begin
                lsu_wready <= 0;
            end
        end
    end
    //写响应
    always @(posedge clk) begin
        if (reset) begin
            lsu_bvalid <= 0;
            lsu_bresp  <= 2'b0;
        end else begin
            if (lsu_wvalid && lsu_wready & !lsu_bvalid) begin
                lsu_bresp <= 2'b0;
                lsu_bvalid <= 1;
            end else if(lsu_bready) begin
                lsu_bvalid <= 0;
            end
        end
    end
endmodule
