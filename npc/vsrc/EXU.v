// 负责根据控制信号控制ALU, 对数据进行计算
module EXU(
    input               clk,
    input               reset,
    input               ds_to_es_valid,
    input               ws_allowin,
    output              es_allowin,
    output              es_to_ws_valid,
    input  [11 : 0]     alu_op,
    input  [31 : 0]     src1_data,
    input  [31 : 0]     src2_data,
    input  [4  : 0]     shamt,
    output [31 : 0]     alu_result
);
    reg               es_valid;
    wire              es_ready_go;

    wire [31 : 0]     alu_src1;
    wire [31 : 0]     alu_src2;
    
    assign alu_src1 = src1_data;
    assign alu_src2 = src2_data;
    alu alu(
        .alu_op     (alu_op     ),
        .alu_src1   (alu_src1   ),
        .alu_src2   (alu_src2   ),
        .shamt      (shamt      ),
        .alu_result (alu_result )
    );

    assign es_ready_go = 1'b1;
    assign es_allowin  = !es_valid || es_ready_go && ws_allowin;
    assign es_to_ws_valid = es_valid && es_ready_go;

    always @(posedge clk) begin
        if(reset) begin
            es_valid <= 1'b0;
        end else if(es_allowin) begin
            es_valid <= ds_to_es_valid;
        end
    end
endmodule