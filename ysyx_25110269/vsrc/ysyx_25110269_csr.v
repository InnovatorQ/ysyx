module ysyx_25110269_csr(
    input [31 : 0]  ds_pc,
    input           clk,
    input           reset,

    input           ecall,
    input           mret,
    input [11 : 0]  rd_addr,
    output [31 : 0] rd_data,

    input           csr_wen,
    input [11 : 0]  wr_addr,
    input [31 : 0]  wr_data,

    output reg [31 : 0] csr_mepc,
    output reg [31 : 0] csr_mtvec
);
    reg [31 : 0] csr_mcycle;
    reg [31 : 0] csr_mcycle_h;
    reg [31 : 0] csr_mvendorid;
    reg [31 : 0] csr_marchid;
    // reg [31 : 0] csr_mtvec;
    // reg [31 : 0] csr_mepc;
    reg [31 : 0] csr_mstatus;
    reg [31 : 0] csr_mcause;

    localparam MCYCLE = 12'hb00;
    localparam MCYCLE_H = 12'hb80;
    localparam MVENDORID = 12'hf11;
    localparam MARCHID = 12'hf12;
    localparam MEPC = 12'h341;
    localparam MCAUSE = 12'h342;
    localparam MSTATUS = 12'h300;
    localparam MTVEC = 12'h305;

    always @(posedge clk) begin
        if(reset) begin
            csr_mcycle <= 32'b0;
            csr_mcycle_h <= 32'b0;
            csr_marchid <= 32'h59ff3519;
            csr_mvendorid <= 32'h79737978;
        end else begin
            if(csr_mcycle < 32'hffffffff) csr_mcycle <= csr_mcycle + 32'b1;
            else begin
                csr_mcycle <= 32'b0;
                csr_mcycle_h <= csr_mcycle_h + 32'b1;
            end
        end
    end

    always @(posedge clk)begin
        //$display(" mepc : 0x%08x, mcause : 0x%08x", csr_mepc, csr_mcause);
        if(reset)begin
            csr_mcause <= 32'b0;
            csr_mepc <= 32'b0;
            csr_mtvec <= 32'b0;
            csr_mstatus <= 32'b0;
        end else begin
            if(csr_wen)begin
                case(wr_addr) 
                    MEPC : csr_mepc <= wr_data;
                    MCAUSE : csr_mcause <= wr_data;
                    MTVEC : begin
                            csr_mtvec <= wr_data;
                            //$display("Debug : wr_data : 0x%08x", wr_data);
                        end
                    default;
                endcase
            end
            if(ecall) begin
                csr_mepc <= ds_pc;
                csr_mcause <= 32'hb;
                csr_mstatus <= 32'h1800;
            end
            if(mret) begin
                csr_mstatus <= 32'h80;
            end
        end
    end

    assign rd_data =({32{rd_addr == MCYCLE      }} & csr_mcycle     )   |
                    ({32{rd_addr == MCYCLE_H    }} & csr_mcycle_h   )   |
                    ({32{rd_addr == MVENDORID   }} & csr_mvendorid  )   |
                    ({32{rd_addr == MARCHID     }} & csr_marchid    )   |
                    ({32{rd_addr == MEPC        }} & csr_mepc       )   |
                    ({32{rd_addr == MCAUSE      }} & csr_mcause     )   |
                    ({32{rd_addr == MTVEC       }} & csr_mtvec      )   |
                    ({32{rd_addr == MSTATUS     }} & csr_mstatus    )   ;
endmodule