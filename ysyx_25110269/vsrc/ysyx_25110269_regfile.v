module ysyx_25110269_regfile(
    input           clock,
    input  [4 : 0]  raddr1,
    output [31 : 0] rdata1,
    input  [4 : 0]  raddr2,
    output [31 : 0] rdata2,
    input           wen,
    input  [4 : 0]  waddr,
    input  [31 : 0] wdata
);
    reg [31 : 0] regs [15 : 0];
    always @(posedge clock) begin
        if(wen) begin
            regs[waddr[3:0]] <= wdata;
        end
    end
    assign rdata1 = (raddr1 == 0) ? 0 : regs[raddr1[3:0]];
    assign rdata2 = (raddr2 == 0) ? 0 : regs[raddr2[3:0]];
endmodule