// 负责根据控制信号控制ALU, 对数据进行计算
module EXU(
    input               clk,
    input               reset,
    input               done,
    //ds->es
    input               ds_to_es_valid,
    input               ds_state,
    input  [124 : 0]    ds_to_es_bus,
    //mem->exe
    input  [31  : 0]    load_data,
    //ws->es
    input               ws_allowin,
    //es->ds
    output              es_allowin,
    //es->ws
    output reg          es_to_ws_valid,
    output reg          es_state,
    output [107 : 0]    es_to_ws_bus
);
    reg  [124 : 0]      ds_to_es_bus_r;
    reg                 es_valid;
    wire                es_ready_go;

    wire                res_from_csr;
    wire                rf_wen;
    wire [3 : 0]        load;
    wire                br_taken;
    wire [11 : 0]       alu_op;
    wire [31 : 0]       alu_src1;
    wire [31 : 0]       alu_src2;
    wire [4 : 0]        shamt;
    wire [4 : 0]        dest;
    wire [31 : 0]       es_pc;
    wire [31 : 0]       alu_result;

    localparam      es_idle = 1'b0;
    localparam      es_wait_ready = 1'b1;
    reg             next_state;

    assign es_allowin = 1'b1;
    always @(posedge clk)begin
        if(reset)begin
            es_valid <= 1'b0;
            es_state <= es_idle; 
        end else begin
            es_state <= next_state;
            es_valid <= ds_to_es_valid;
        end
    end

    always @(*)begin
        case(es_state)
            es_idle : begin
                es_to_ws_valid = 1'b0;
                next_state = ds_to_es_valid ? es_wait_ready : es_idle;
            end
            es_wait_ready: begin
                es_to_ws_valid = 1'b1;
                next_state = ws_allowin ? es_idle : es_wait_ready;
            end
            default:    next_state = es_idle;
        endcase
    end

    assign es_to_ws_bus = {
        es_pc,      //107 : 76
        load_data,  //75 : 44
        alu_result, //43 : 12
        dest,       //11 : 7
        load,       //6 : 3
        res_from_csr,//2
        rf_wen,     //1
        br_taken    //0
    };

    assign {
        es_pc,
        alu_src1,
        alu_src2,
        alu_op,
        shamt,
        dest,
        load,
        res_from_csr,
        rf_wen,
        br_taken
    } = ds_to_es_bus_r;

    alu alu(
        .alu_op     (alu_op     ),
        .alu_src1   (alu_src1   ),
        .alu_src2   (alu_src2   ),
        .shamt      (shamt      ),
        .alu_result (alu_result )
    );

    // assign es_ready_go = 1'b1;
    // assign es_allowin  = ~es_valid || done;
    // assign es_to_ws_valid = es_valid && es_ready_go;

    // always @(posedge clk) begin
    //     if(reset) begin
    //         es_valid <= 1'b0;
    //     end else if(es_allowin) begin
    //         es_valid <= ds_to_es_valid;
    //     end
    // end

    always @(posedge clk) begin
        if(ds_state == 1'b1 && es_allowin) begin
            ds_to_es_bus_r <= ds_to_es_bus;
        end
    end
endmodule