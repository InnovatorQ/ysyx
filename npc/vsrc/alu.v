module alu(
    input  [4 : 0 ]       alu_op,
    input  [31 : 0]       alu_src1,
    input  [31 : 0]       alu_src2,
    input  [4 : 0 ]       shamt,
    output [31 : 0]       alu_result
);
    wire op_add;
    wire op_sltu;
    wire op_sub;
    wire op_xor;
    wire op_sra;

    assign op_add = alu_op[0];
    assign op_sltu = alu_op[1];
    assign op_sub = alu_op[2];
    assign op_xor = alu_op[3];
    assign op_sra = alu_op[4];

    wire [31 : 0] add_result;
    wire [31 : 0] sub_result;
    wire [31 : 0] sltu_result;
    wire [31 : 0] xor_result;
    wire [31 : 0] sra_result;

    wire [31 : 0] adder_a;
    wire [31 : 0] adder_b;
    wire [31 : 0] adder_result;
    wire          adder_cin;
    wire          adder_cout;

    assign adder_a = alu_src1;
    assign adder_b = (op_sltu | op_sub) ? ~alu_src2 : alu_src2;
    assign adder_cin = (op_sltu | op_sub) ? 1'b1 : 1'b0;
    assign {adder_cout, adder_result} = adder_a + adder_b + {31'b0, adder_cin};

    assign add_result = adder_result;
    assign sltu_result = {31'b0, ~adder_cout};
    assign xor_result = alu_src1 ^ alu_src2;
    assign sra_result = ({32{alu_src1[31]}} << (32 - shamt)) | (alu_src1 >> shamt);

    assign alu_result = ({32{op_add | op_sub}} & add_result)
                      | ({32{op_sltu        }} & sltu_result)
                      | ({32{op_xor         }} & xor_result)
                      | ({32{op_sra         }} & sra_result);

endmodule