module alu(
    input  [11 : 0]       alu_op,
    input  [31 : 0]       alu_src1,
    input  [31 : 0]       alu_src2,
    input  [4 : 0 ]       shamt,
    output [31 : 0]       alu_result
);
    wire op_add;
    wire op_sltu;
    wire op_sub;
    wire op_xor;
    wire op_srai;
    wire op_and;
    wire op_sll;
    wire op_or;
    wire op_srli;
    wire op_slt;
    wire op_sra;
    wire op_srl;

    assign op_add = alu_op[0];
    assign op_sltu= alu_op[1];
    assign op_sub = alu_op[2];
    assign op_xor = alu_op[3];
    assign op_srai= alu_op[4];
    assign op_and = alu_op[5];
    assign op_sll = alu_op[6];
    assign op_or  = alu_op[7];
    assign op_srli= alu_op[8];
    assign op_slt = alu_op[9];
    assign op_sra = alu_op[10];
    assign op_srl = alu_op[11];

    wire [31 : 0] add_result;
    wire [31 : 0] sltu_result;
    wire [31 : 0] xor_result;
    wire [31 : 0] srai_result;
    wire [31 : 0] and_result;
    wire [31 : 0] sll_result;
    wire [31 : 0] or_result;
    wire [31 : 0] srli_result;
    wire [31 : 0] slt_result;
    wire [31 : 0] sra_result;
    wire [31 : 0] srl_result;

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
    assign srai_result = ({32{alu_src1[31]}} << (32 - shamt)) | (alu_src1 >> shamt);
    assign and_result = alu_src1 & alu_src2;
    assign sll_result = alu_src1 << alu_src2[4:0];
    assign or_result  = alu_src1 | alu_src2;
    assign srli_result = alu_src1 >> shamt;
    assign sra_result = ({32{alu_src1[31]}} << (32 - alu_src2[4:0])) | (alu_src1 >> alu_src2[4:0]);
    assign srl_result = alu_src1 >> alu_src2[4:0];
    assign slt_result[31:1] = 31'b0;
    assign slt_result[0] = (alu_src1[31] ^ alu_src2[31]) ? alu_src1[31] : 
                        (alu_src1 < alu_src2);

    assign alu_result = ({32{op_add | op_sub}} & add_result)
                      | ({32{op_sltu        }} & sltu_result)
                      | ({32{op_xor         }} & xor_result)
                      | ({32{op_srai        }} & srai_result)
                      | ({32{op_sra         }} & sra_result)
                      | ({32{op_and         }} & and_result)
                      | ({32{op_sll         }} & sll_result)
                      | ({32{op_or          }} & or_result)
                      | ({32{op_srli        }} & srli_result)
                      | ({32{op_slt         }} & slt_result)
                      | ({32{op_srl         }} & srl_result);

endmodule