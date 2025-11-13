module regfile(
    input           clk,
    input           reset,
    input  [4 : 0]  raddr1,
    output [31 : 0] rdata1,
    input  [4 : 0]  raddr2,
    output [31 : 0] rdata2,
    input           wen,
    input  [4 : 0]  waddr,
    input  [31 : 0] wdata,
    output [31 : 0] a0_data
);
    reg [31 : 0] regs [31 : 0];
    always @(posedge clk) begin
        if(wen && waddr != 0) begin
            regs[waddr] <= wdata;
            if(!reset) $display("REG[%d] = 0x%08x", waddr, wdata);
        end
    end
    assign a0_data = regs[10];
    assign rdata1 = (raddr1 == 0) ? 0 : regs[raddr1];
    assign rdata2 = (raddr2 == 0) ? 0 : regs[raddr2];
endmodule