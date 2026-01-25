// 负责根据控制信号控制ALU, 对数据进行计算
module EXU(
    input               clk,
    input               reset,
    input               done,
    //ds->es
    input               ds_to_es_valid,
    input               ds_state,
    input  [193 : 0]    ds_to_es_bus,
    //ws->es
    input               ms_allowin,
    //es->ds
    output              es_allowin,
    //es->ms
    output reg          es_to_ms_valid,
    output reg          es_state,
    output [144 : 0]    es_to_ms_bus
);
    reg  [193 : 0]      ds_to_es_bus_r;
    reg                 es_valid;
    wire                es_ready_go;

    wire                res_from_csr;
    wire                rf_wen;
    wire                load_sign;
    wire [3 : 0]        load;
    wire [3 : 0]        store;
    wire                br_taken;
    wire [11 : 0]       alu_op;
    wire [31 : 0]       alu_src1;
    wire [31 : 0]       alu_src2;
    wire [31 : 0]       mem_addr;
    wire [31 : 0]       st_data;
    wire [4 : 0]        shamt;
    wire [4 : 0]        dest;
    wire                load_sign;
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
                es_to_ms_valid = 1'b0;
                next_state = ds_to_es_valid ? es_wait_ready : es_idle;
            end
            es_wait_ready: begin
                es_to_ms_valid = 1'b1;
                next_state = ms_allowin ? es_idle : es_wait_ready;
            end
            default:    next_state = es_idle;
        endcase
    end

    assign es_to_ms_bus = {
        es_pc,      //144 : 113
        alu_result, //112 : 81
        mem_addr,   //80 : 49
        st_data,    //48 : 17
        dest,       //16 : 12
        load,       //11 : 8
        store,      //7 : 4
        load_sign,  //3
        res_from_csr,//2
        rf_wen,     //1
        br_taken    //0
    };

    assign {
        es_pc,
        alu_src1,
        alu_src2,
        mem_addr,
        st_data,
        alu_op,
        shamt,
        dest,
        load,
        store,
        load_sign,
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