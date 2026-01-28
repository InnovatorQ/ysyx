// 将数据写入寄存器, 并更新PC
module WBU(
    input           clk,
    input           reset,
    //es->ws
    input           ms_to_ws_valid,
    input  [184 :0] ms_to_ws_bus,
    //ws->es
    output          ws_allowin,
    output reg      ws_state,
    
    input  [4 : 0]  rs1,
    input  [4 : 0]  rs2,
    output [31 : 0] rf1_data,
    output [31 : 0] rf2_data,
    //diff
    output          done,
    output [31 : 0] ws_pc,
    output          csr_wen,
    output [11 : 0] wr_csr_addr,
    output [31 : 0] csr_result,
    output reg [31 : 0] regs [31 : 0]
);
    reg  [184 :0] ms_to_ws_bus_r;

    wire [31 : 0] alu_result;
    wire [3  : 0] load;
    wire [31 : 0] load_data;
    wire [4  : 0] dest;
    wire          res_from_csr;
    wire          rf_wen;
    wire          br_taken;
    wire [31 : 0] csr_data;
    wire [31 : 0] wb_data;

    wire          ws_ready_go;
    reg           ws_valid;

    localparam  ws_idle = 1'b0;
    localparam  ws_wait_ready = 1'b1;
    reg         next_state;

    assign ws_allowin = 1'b1;
    assign done = (ws_state == ws_wait_ready);
    always @(posedge clk)begin
        if(reset)begin
            ws_valid <= 1'b0;
            ws_state <= ws_idle;
        end else begin
            ws_state <= next_state;
            ws_valid <= ms_to_ws_valid;
        end
    end
    always @(*)begin
       case(ws_state)
            ws_idle:begin
                next_state = ms_to_ws_valid ? ws_wait_ready : ws_idle;
            end
            ws_wait_ready:begin
                next_state = ws_idle;
            end
            default: next_state = ws_idle;

       endcase 
    end

    assign {
        ws_pc,
        load_data,
        alu_result,
        csr_result,
        csr_data,
        wr_csr_addr,
        dest,
        load,
        csr_wen,
        res_from_csr,
        rf_wen,
        br_taken
    } = ms_to_ws_bus_r;

    regfile rf(
        .clk        (clk        ),
        .reset      (reset      ),
        .raddr1     (rs1        ),
        .raddr2     (rs2        ),
        .rdata1     (rf1_data   ),
        .rdata2     (rf2_data   ),
        .wen        (rf_wen     ),
        .waddr      (dest       ),
        .wdata      (wb_data    ),
        .regs       (regs       )
    );
    assign wb_data = (load != 4'h0) ? load_data : 
                      br_taken ? ws_pc + 32'h4 : 
                      res_from_csr ? csr_data : alu_result;

    // assign ws_ready_go = 1'b1;
    // assign ws_allowin  = ~ws_valid || done;
    // assign done = ws_valid && ws_ready_go;

    // always @(posedge clk) begin
    //     if(reset) begin
    //         ws_valid <= 1'b0;
    //     end else if(ws_allowin) begin
    //         ws_valid <= es_to_ws_valid;
    //     end
    // end

    always @(posedge clk) begin
        if(ms_to_ws_valid && ws_allowin)
            ms_to_ws_bus_r <= ms_to_ws_bus;
    end
endmodule