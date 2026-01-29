// 负责根据控制信号控制ALU, 对数据进行计算
module EXU(
    input               clk,
    input               reset,
    input               done,
    //ds->es
    input               ds_to_es_valid,
    input               ds_state,
    input  [270 : 0]    ds_to_es_bus,
    //ws->es
    input               ms_allowin,
    //es->ds
    output              es_allowin,
    //es->ms
    output              es_to_ms_valid,
    output reg          es_state,
    output [221 : 0]    es_to_ms_bus
);
    reg  [270 : 0]      ds_to_es_bus_r;
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
    wire                csr_wen;
    wire [11 : 0]       csr_wr_addr;
    wire [31 : 0]       csr_data;
    wire [31 : 0]       csr_result;
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
                next_state = ds_to_es_valid ? es_wait_ready : es_idle;
            end
            es_wait_ready: begin
                next_state = ms_allowin ? es_idle : es_wait_ready;
            end
            default:    next_state = es_idle;
        endcase
    end

    assign es_to_ms_bus = {
        es_pc,      //221 : 190
        alu_result, //189 : 158
        mem_addr,   //157 : 126
        st_data,    //125 : 94
        csr_result, //93  : 62
        csr_data,   //61  : 30
        csr_wr_addr, //29  : 18
        dest,       //17  : 13
        load,       //12 : 9
        store,      //8 : 5
        csr_wen,    //4
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
        csr_result,
        csr_data,
        csr_wr_addr,
        alu_op,
        shamt,
        dest,
        load,
        store,
        csr_wen,
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
    assign es_to_ms_valid = (es_state == es_wait_ready) ? 1'b1 : 1'b0;
    always @(posedge clk) begin
        if(ds_to_es_valid && es_allowin) begin
            ds_to_es_bus_r <= ds_to_es_bus;
        end
    end
endmodule