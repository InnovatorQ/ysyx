module pmem(
    input               clk,
    input               reset,
    
    input               arvalid,
    input  [31 :0]      araddr,
    output              arready,

    output reg          rvalid,
    output reg [31 :0]  rdata,
    output     [1  :0]  rresp,
    input               rready,

    input               awvalid,
    input  [31 :0]      awaddr,
    output              awready,

    input               wvalid,
    input  [31 :0]      wdata,
    input  [3  :0]      wstrb,
    output              wready,

    output reg          bvalid,
    output reg [1  :0]  bresp,
    input               bready
);
    //reg [7 : 0] mem [0 : 4095];   //1KB
    wire [7 : 0] wmask = {4'b0, wstrb};

    reg [31 : 0] wr_addr;
    wire          wr_addr_valid;

    reg [31 : 0] rd_addr;
    // wire [31 : 0] raddr = rd_addr & ~32'h3;
    // wire [31 : 0] waddr = wr_addr & ~32'h3;

    // LFSR生成随机延迟访问
    reg [7 : 0] lfsr;
    reg [4 : 0] random_delay;
    always @(posedge clk) begin
        if(reset) begin
            lfsr <= 8'b10110101;
            random_delay <= lfsr[4:0];
        end else begin
            lfsr <= {lfsr[6:0], lfsr[7] ^ lfsr[5] ^ lfsr[4] ^ lfsr[3]};
            random_delay <= lfsr[4:0];
            if(random_delay > 5'b0) begin
                random_delay <= random_delay - 5'b1;
            end
        end
    end
    //读地址
    assign rd_addr = (arready & arvalid) ? araddr : 32'b0;
    assign arready = (random_delay == 5'b0) ? 1'b1 : 1'b0; //随机延迟
    //读数据
    always @(posedge clk) begin
        if(reset) begin
            rdata <= 32'b0;
            rvalid <= 0;
        end else begin
            if(arvalid & arready) begin
                rdata <= pmem_read(rd_addr);
                //$display("PMEM READ ADDR: %h DATA: %h", rd_addr, pmem_read(rd_addr));
                // rdata[7 : 0] <= mem[raddr];
                // rdata[15: 8] <= mem[raddr + 1];
                // rdata[23:16] <= mem[raddr + 2];
                // rdata[31:24] <= mem[raddr + 4];
                rvalid <= 1;
            end else if(rready) begin
                rvalid <= 0;
            end
        end
    end
    //写地址
    
    always @(posedge clk) begin
        if (reset) begin
            wr_addr   <= 32'b0;
        end else begin
            if(awvalid & awready) begin
                wr_addr <= awaddr;
            end 
        end
    end
    //assign wr_addr_valid = (awready & awvalid);
    assign awready = (random_delay == 5'b0) ? 1'b1 : 1'b0; //随机延迟
    //写数据
    assign wready = 1'b1;
    always @(posedge clk) begin
        if (reset) begin
            
        end else begin
            if(wvalid & wready) begin
                //$display("PMEM WRITE ADDR: %h DATA: %h WSTRB: %b", wr_addr, wdata, wstrb); 
                pmem_write(wr_addr, wdata, wmask);
                // if(wstrb[0]) mem[waddr]   <= wdata[7 : 0];
                // if(wstrb[1]) mem[waddr + 1]   <= wdata[15: 8];
                // if(wstrb[2]) mem[waddr + 2]   <= wdata[23:16];
                // if(wstrb[3]) mem[waddr + 3]   <= wdata[31:24];
            end else begin
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
