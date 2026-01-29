module pmem(
    input               clk,
    input               reset,
    
    input               arvalid,
    input  [31 :0]      araddr,
    output reg          arready,

    output reg          rvalid,
    output reg [31 :0]  rdata,
    output reg [1  :0]  rresp,
    input               rready,

    input               awvalid,
    input  [31 :0]      awaddr,
    output reg          awready,

    input               wvalid,
    input  [31 :0]      wdata,
    input  [3  :0]      wstrb,
    output reg          wready,

    output reg          bvalid,
    output reg [1  :0]  bresp,
    input               bready
);
    //reg [7 : 0] mem [0 : 4095];   //1KB
    wire [7 : 0] wmask = {4'b0, wstrb};

    reg [31 : 0] wr_addr;
    reg          wr_addr_valid;

    reg [31 : 0] rd_addr;
    // wire [31 : 0] raddr = rd_addr & ~32'h3;
    // wire [31 : 0] waddr = wr_addr & ~32'h3;
    //读地址
    always @(posedge clk)begin
        if(reset) begin
            arready <= 0;
            rd_addr <= 32'b0;
        end else begin
            if(arvalid & !rvalid)begin
                arready <= 1;
                rd_addr <= araddr;
            end else begin
                arready <= 0;
            end
        end
    end
    //读数据
    always @(posedge clk) begin
        if(reset) begin
            rdata <= 32'b0;
            rvalid <= 0;
            rresp <= 2'b0;
        end else begin
            if(arvalid & arready) begin
                if(rd_addr >= 32'ha0000048 & rd_addr < 32'ha0000068) begin
                    skip_ref();
                end
                rdata <= pmem_read(rd_addr);

                // rdata[7 : 0] <= mem[raddr];
                // rdata[15: 8] <= mem[raddr + 1];
                // rdata[23:16] <= mem[raddr + 2];
                // rdata[31:24] <= mem[raddr + 4];
                rresp <= 2'b0;
                rvalid <= 1;
            end else if(rready) begin
                rvalid <= 0;
            end
        end
    end
    //写地址
    always @(posedge clk ) begin
        if (reset) begin
            awready   <= 0;
            wr_addr       <= 0;
            wr_addr_valid <= 0;
        end else begin
            if (awvalid && !wr_addr_valid) begin
                awready   <= 1;
                wr_addr       <= awaddr;
                wr_addr_valid <= 1;
            end else begin
                awready <= 0;
                if (wvalid && wready)
                    wr_addr_valid <= 0;
            end
        end
    end
    //写数据
    always @(posedge clk) begin
        if (reset) begin
            wready   <= 0;
        end else begin
            if(wvalid & wr_addr_valid) begin
                wready <= 1;
                if(wr_addr >= 32'h10000000 && wr_addr < 32'h80000000) begin
                    skip_ref();
                end 
                pmem_write(wr_addr, wdata, wmask);
                // if(wstrb[0]) mem[waddr]   <= wdata[7 : 0];
                // if(wstrb[1]) mem[waddr + 1]   <= wdata[15: 8];
                // if(wstrb[2]) mem[waddr + 2]   <= wdata[23:16];
                // if(wstrb[3]) mem[waddr + 3]   <= wdata[31:24];
            end else begin
                wready <= 0;
            end
        end
    end
    //写响应
    always @(posedge clk) begin
        if (reset) begin
            bvalid <= 0;
            bresp  <= 2'b0;
        end else begin
            if (wvalid && wready & !bvalid) begin
                bresp <= 2'b0;
                bvalid <= 1;
            end else if(bready) begin
                bvalid <= 0;
            end
        end
    end
endmodule
