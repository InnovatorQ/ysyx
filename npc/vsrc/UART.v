module UART(
    input       clk,
    input       reset,

    // input           uart_arvalid,
    // input [31:0]    uart_araddr,
    // output          uart_arready,

    // output          uart_rvalid,
    // output [31:0]   uart_rdata,
    // output [1:0]    uart_rresp,
    // input           uart_rready,

    input           uart_awvalid,
    input [31:0]    uart_awaddr,
    output          uart_awready,

    input           uart_wvalid,
    input [31:0]    uart_wdata,
    input [3:0]     uart_wstrb,
    output          uart_wready

    // output          uart_bvalid,
    // output [1:0]    uart_bresp,
    // input           uart_bready
);
    // LFSR生成随机延迟访问
    reg [7 : 0] lfsr;
    reg [4 : 0] random_delay;
    always @(posedge clk) begin
        if(reset) begin
            lfsr <= 8'b10110101;
            random_delay <= 5'h0;
        end else begin
            lfsr <= {lfsr[6:0], lfsr[7] ^ lfsr[5] ^ lfsr[4] ^ lfsr[3]};
            if(random_delay > 5'b0) begin
                random_delay <= random_delay - 5'b1;
            end else begin
                random_delay <= lfsr[4:0];
            end
        end
    end
    // 写请求处理
    assign uart_wready = 1'b1; // 始终准备好接收写数据
    assign uart_awready = (random_delay == 5'b0) ? 1'b1 : 1'b0; //随机延迟
    reg [31 : 0]    wr_addr;
    always @(posedge clk) begin
        if(reset) begin
            wr_addr <= 32'b0;
        end else if(uart_awvalid & uart_awready) begin
            wr_addr <= uart_awaddr;
        end
    end
    // 写数据
    assign uart_wready = 1'b1;
    always @(posedge clk) begin
        if(uart_wready & uart_wvalid) begin
            $write("%c", uart_wdata[7:0]);
            $fflush();
        end
    end
endmodule