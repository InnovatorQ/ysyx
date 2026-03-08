// 将数据写入寄存器, 并更新PC
/*verilator public_on*/
module ysyx_25110269_WBU(
    input           clock,
    input           reset,
    //es->ws
    input           ms_to_ws_valid,
    input  [`MS_TO_WS_BUS_WD - 1 : 0] ms_to_ws_bus,
    //ws->es
    output          ws_allowin,
    
    input  [4 : 0]  rs1,
    input  [4 : 0]  rs2,
    output [31 : 0] rf1_data,
    output [31 : 0] rf2_data,
    
    //diff
    output reg      inst_finish
);
    reg  [`MS_TO_WS_BUS_WD - 1 : 0] ms_to_ws_bus_r;
    wire [31 : 0]   debug_mem_addr;
    wire [31 : 0]   debug_mem_wdata;
    wire [31 : 0]   debug_mem_rdata;
    wire [31 : 0]   ws_pc;
    wire [31 : 0]   alu_result;
    wire [3  : 0]   load;
    wire [31 : 0]   load_data;
    wire [4  : 0]   dest;
    wire            res_from_csr;
    wire            rf_wen;
    wire            br_taken;
    wire [31 : 0]   csr_data;
    wire [31 : 0]   wb_data;
    wire            ws_ready_go;
    reg             ws_valid;

    localparam  ws_idle = 1'b0;
    localparam  ws_wait_ready = 1'b1;
    reg         ws_state;
    reg         next_state;

    assign ws_allowin = 1'b1;
    always @(posedge clock)begin
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
                inst_finish = 1'b0;
                next_state = ms_to_ws_valid ? ws_wait_ready : ws_idle;
            end
            ws_wait_ready:begin
                inst_finish = 1'b1;
                next_state =  ms_to_ws_valid ? ws_wait_ready : ws_idle;
            end
            default: next_state = ws_idle;

       endcase 
    end
    

    assign {
        ws_pc,
        debug_mem_addr,
        debug_mem_rdata,
        debug_mem_wdata,
        load_data,
        alu_result,
        csr_data,
        dest,
        load,
        res_from_csr,
        rf_wen,
        br_taken
    } = ms_to_ws_bus_r;

    ysyx_25110269_regfile rf(
        .clock      (clock      ),
        .raddr1     (rs1        ),
        .raddr2     (rs2        ),
        .rdata1     (rf1_data   ),
        .rdata2     (rf2_data   ),
        .wen        (rf_wen     ),
        .waddr      (dest       ),
        .wdata      (wb_data    )
        
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

    always @(posedge clock) begin
        if(ms_to_ws_valid && ws_allowin)
            ms_to_ws_bus_r <= ms_to_ws_bus;
    end
endmodule
/*verilator public_off*/