module alu(
    input                           alu_op,
    input  [31 : 0]       alu_src1,
    input  [31 : 0]       alu_src2,
    output [31 : 0]       alu_result
);
    wire op_add;
    assign op_add = alu_op;

    wire [31 : 0] add_result;
    wire                    add_cout;
    assign {add_cout, add_result} = alu_src1 + alu_src2;
    assign alu_result = ({32{op_add}} & add_result);

endmodule