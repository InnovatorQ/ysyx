// 负责对当前指令进行译码, 准备执行阶段需要使用的数据和控制信号
module IDU(
    input  [31 : 0] inst,
    input  [31 : 0] pc,
    input  [31 : 0] rs1_data,
    input  [31 : 0] rs2_data,
    output          br_taken,
    output          rf_wen,
    output [4 : 0]  rd,
    output [4 : 0]  rs1,
    output [4 : 0]  rs2,
    output [31 : 0] imm,
    output [31 : 0] src1,
    output [31 : 0] src2,
    output          alu_op,
    output [31 : 0] br_target,
    output          mem_ren,
    output [31 : 0] mem_addr,
    output [3 : 0]  load,
    output [3 : 0]  store,
    output [31 : 0] st_data
);
    
    wire [6:0]      opcode;
    wire [2:0]      funct3;
    wire [6:0]      funct7;

    wire            inst_i;
    wire            inst_u;
    wire            inst_r;
    wire            inst_s;

    wire            inst_add;
    wire            inst_addi;
    wire            inst_lui;
    wire            inst_jalr;
    wire            inst_lw;
    wire            inst_lbu;
    wire            inst_sb;
    wire            inst_sw;
    wire            inst_ebreak;

    wire [31 : 0]   imm_i;
    wire [31 : 0]   imm_u;
    wire [31 : 0]   imm_s;
    //得到指令类型
    assign opcode = inst[6:0];
    assign funct3 = inst[14:12];
    assign funct7 = inst[31:25];

    assign inst_add  = (opcode == 7'b0110011) && (funct3 == 3'b000) && (funct7 == 7'b0);
    assign inst_addi = (opcode == 7'b0010011) && (funct3 == 3'b000);
    assign inst_jalr = (opcode == 7'b1100111) && (funct3 == 3'b000);
    assign inst_lw   = (opcode == 7'b0000011) && (funct3 == 3'b010);
    assign inst_lbu  = (opcode == 7'b0000011) && (funct3 == 3'b100);
    assign inst_lui  = (opcode == 7'b0110111);
    assign inst_sb   = (opcode == 7'b0100011) && (funct3 == 3'b000);
    assign inst_sw   = (opcode == 7'b0100011) && (funct3 == 3'b010);
    assign inst_ebreak = (inst == 32'h00100073);

    assign inst_i = inst_addi | inst_jalr | inst_lw | inst_lbu;
    assign inst_r = inst_add;
    assign inst_u = inst_lui;
    assign inst_s = inst_sb | inst_sw;

    assign rf_wen = inst_addi | inst_add | inst_jalr | inst_lw | inst_lbu | inst_lui;
    // assign mem_wen = inst_s;
    assign mem_ren = inst_lw | inst_lbu;
    assign load = inst_lw ? 4'hf :
                  inst_lbu ? 4'h1 : 4'h0;
    assign store =  inst_sw ? 4'hf : 
                    inst_sb ? 4'h1 : 4'h0;
    assign alu_op = inst_addi | inst_add | inst_lui;
    assign br_taken = inst_jalr;
    
    //获取操作对象
    assign rd = inst[11:7];
    assign rs1 = inst[19:15];
    assign rs2 = inst[24:20];
    assign imm_i = {{20{inst[31]}}, inst[31:20]};
    assign imm_u = {inst[31:12], 12'b0};
    assign imm_s = {{20{inst[31]}}, inst[31:25], inst[11:7]};
    assign imm = inst_i ? imm_i : 
                 inst_lui ? imm_u : 
                 inst_s ? imm_s : 32'b0;
    assign br_target = (rs1_data + imm_i) & ~32'h1;  // JALR目标地址，最低位清零
    assign mem_addr = rs1_data + imm;
    assign src1 = inst_lui ? 32'b0 : rs1_data;  // lui时src1为0
    assign src2 = inst_r ? rs2_data : imm;
    assign st_data = rs2_data;
    always @(*) begin
        if(inst_ebreak) begin
            ebreak();
        end
    end
endmodule
