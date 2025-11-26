// 负责根据控制信号控制ALU, 对数据进行计算
module EXU(
    input  [11 : 0]       alu_op,
    input  [31 : 0]       src1_data,
    input  [31 : 0]       src2_data,
    input  [4  : 0]       shamt,
    output [31 : 0]       alu_result
);

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
endmodule