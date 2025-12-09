// 负责对当前指令进行译码, 准备执行阶段需要使用的数据和控制信号
module IDU(
    input  [31 : 0] inst,
    input  [31 : 0] pc,
    input  [31 : 0] rs1_data,
    input  [31 : 0] rs2_data,
    output          br_taken,
    output          rf_wen,
    output          csr_wen,
    output [4 : 0]  rd,
    output [4 : 0]  rs1,
    output [4 : 0]  rs2,
    output [31 : 0] imm,
    output [11 : 0] csr_addr,
    output [31 : 0] src1,
    output [31 : 0] src2,
    output [11 : 0] alu_op,
    output [31 : 0] br_target,
    output          mem_ren,
    output [31 : 0] mem_addr,
    output [3 : 0]  load,
    output          load_sign,
    output [3 : 0]  store,
    output [31 : 0] st_data,
    output          res_from_csr
);
    
    wire [6:0]      opcode;
    wire [2:0]      funct3;
    wire [6:0]      funct7;

    wire            inst_i;
    wire            inst_iu;
    wire            inst_u;
    wire            inst_r;
    wire            inst_s;
    wire            inst_b;
    wire            inst_j;

    wire            inst_add;
    wire            inst_addi;
    wire            inst_sub;
    wire            inst_andi;
    wire            inst_and;
    wire            inst_or;
    wire            inst_xori;
    wire            inst_xor;
    wire            inst_lui;
    wire            inst_jalr;
    wire            inst_lw;
    wire            inst_lh;
    wire            inst_lhu;
    wire            inst_lbu;
    wire            inst_sb;
    wire            inst_sh;
    wire            inst_sw;
    wire            inst_auipc;
    wire            inst_jal;
    wire            inst_sll;
    wire            inst_slli;
    wire            inst_slt;
    wire            inst_srli;
    wire            inst_srl;
    wire            inst_srai;
    wire            inst_sra;
    wire            inst_sltu;
    wire            inst_sltiu;
    wire            inst_bne;
    wire            inst_bge;
    wire            inst_beq;
    wire            inst_bgeu;
    wire            inst_blt;
    wire            inst_bltu;
    wire            inst_ebreak;
    wire            inst_csrrs;

    wire [31 : 0]   imm_i;
    wire [31 : 0]   imm_iu;
    wire [31 : 0]   imm_u;
    wire [31 : 0]   imm_s;
    wire [31 : 0]   imm_j;
    wire [31 : 0]   offset;

    wire rs1_lt_rd_sign;
    //得到指令类型
    assign opcode = inst[6:0];
    assign funct3 = inst[14:12];
    assign funct7 = inst[31:25];

    assign inst_add  = (opcode == 7'b0110011) && (funct3 == 3'b000) && (funct7 == 7'b0);
    assign inst_addi = (opcode == 7'b0010011) && (funct3 == 3'b000);
    assign inst_sub  = (opcode == 7'b0110011) && (funct3 == 3'b000) && (funct7 == 7'b0100000);
    assign inst_andi = (opcode == 7'b0010011) && (funct3 == 3'b111);
    assign inst_and  = (opcode == 7'b0110011) && (funct3 == 3'b111) && (funct7 == 7'b0);
    assign inst_or   = (opcode == 7'b0110011) && (funct3 == 3'b110) && (funct7 == 7'b0);
    assign inst_xor  = (opcode == 7'b0110011) && (funct3 == 3'b100) && (funct7 == 7'b0);
    assign inst_xori = (opcode == 7'b0010011) && (funct3 == 3'b100);
    assign inst_jalr = (opcode == 7'b1100111) && (funct3 == 3'b000);
    assign inst_lw   = (opcode == 7'b0000011) && (funct3 == 3'b010);
    assign inst_lh   = (opcode == 7'b0000011) && (funct3 == 3'b001);
    assign inst_lhu  = (opcode == 7'b0000011) && (funct3 == 3'b101);
    assign inst_lbu  = (opcode == 7'b0000011) && (funct3 == 3'b100);
    assign inst_lui  = (opcode == 7'b0110111);
    assign inst_sb   = (opcode == 7'b0100011) && (funct3 == 3'b000);
    assign inst_sh   = (opcode == 7'b0100011) && (funct3 == 3'b001);
    assign inst_sw   = (opcode == 7'b0100011) && (funct3 == 3'b010);
    assign inst_auipc= (opcode == 7'b0010111);
    assign inst_jal  = (opcode == 7'b1101111);
    assign inst_sll  = (opcode == 7'b0110011) && (funct3 == 3'b001) && (funct7 == 7'b0);
    assign inst_slli = (opcode == 7'b0010011) && (funct3 == 3'b001) && (funct7 == 7'b0);
    assign inst_slt  = (opcode == 7'b0110011) && (funct3 == 3'b010) && (funct7 == 7'b0);
    assign inst_srai = (opcode == 7'b0010011) && (funct3 == 3'b101) && (funct7 == 7'b0100000);
    assign inst_sra  = (opcode == 7'b0110011) && (funct3 == 3'b101) && (funct7 == 7'b0100000);
    assign inst_srli = (opcode == 7'b0010011) && (funct3 == 3'b101) && (funct7 == 7'b0);
    assign inst_srl  = (opcode == 7'b0110011) && (funct3 == 3'b101) && (funct7 == 7'b0);
    assign inst_sltu = (opcode == 7'b0110011) && (funct3 == 3'b011) && (funct7 == 7'b0);
    assign inst_sltiu= (opcode == 7'b0010011) && (funct3 == 3'b011);
    assign inst_bne  = (opcode == 7'b1100011) && (funct3 == 3'b001);
    assign inst_beq  = (opcode == 7'b1100011) && (funct3 == 3'b000);
    assign inst_bge  = (opcode == 7'b1100011) && (funct3 == 3'b101);
    assign inst_bgeu = (opcode == 7'b1100011) && (funct3 == 3'b111);
    assign inst_blt  = (opcode == 7'b1100011) && (funct3 == 3'b100);
    assign inst_bltu = (opcode == 7'b1100011) && (funct3 == 3'b110);
    assign inst_csrrs = (opcode == 7'b1110011) && (funct3 == 3'b010);
    assign inst_ebreak = (inst == 32'h00100073);

    assign inst_i = inst_addi | inst_jalr | inst_lw | inst_lh | inst_lhu | inst_lbu | inst_srai | inst_xori | inst_andi | inst_srli | inst_slli;
    assign inst_iu = inst_sltiu;
    assign inst_r = inst_add | inst_sub | inst_xor | inst_and | inst_sltu | inst_sll | inst_or | inst_slt | inst_sra | inst_srl;
    assign inst_u = inst_lui | inst_auipc;
    assign inst_s = inst_sb | inst_sw | inst_sh;
    assign inst_b = inst_bne | inst_bge | inst_beq | inst_bgeu | inst_bltu | inst_blt;
    assign inst_j = inst_jal;

    assign rf_wen = inst_addi | inst_add | inst_jalr | inst_lw | inst_lh | inst_lbu | inst_lui | inst_auipc |
                     inst_jal | inst_sltiu | inst_sub | inst_xor | inst_sltu | inst_srai | inst_and|
                     inst_sll | inst_xori | inst_andi | inst_or | inst_srli | inst_slli | inst_slt | 
                     inst_sra | inst_srl | inst_lhu | inst_csrrs;
    assign csr_wen = inst_csrrs;
    // assign mem_wen = inst_s;
    assign mem_ren = inst_lw | inst_lbu;
    assign load_sign = inst_lh | inst_lw;
    assign load = inst_lw ? 4'hf :
                  (inst_lh | inst_lhu) ? 4'h3 :
                  inst_lbu ? 4'h1 : 4'h0;
    assign store =  inst_sw ? 4'hf :
                    inst_sh ? 4'h3 : 
                    inst_sb ? 4'h1 : 4'h0;

    assign res_from_csr = inst_csrrs;

    assign rs1_lt_rd_sign = (rs1_data[31] ^ rs2_data[31]) ? rs1_data[31] : 
                            (rs1_data < rs2_data);

    assign alu_op[0] = inst_addi | inst_add | inst_lui | inst_auipc;
    assign alu_op[1] = inst_sltiu | inst_sltu;
    assign alu_op[2] = inst_sub;
    assign alu_op[3] = inst_xor | inst_xori;
    assign alu_op[4] = inst_srai;
    assign alu_op[5] = inst_and | inst_andi;
    assign alu_op[6] = inst_sll | inst_slli;
    assign alu_op[7] = inst_or;
    assign alu_op[8] = inst_srli;
    assign alu_op[9] = inst_slt;
    assign alu_op[10] = inst_sra;
    assign alu_op[11] = inst_srl;
    //计算分支是否被采取
    assign br_taken = inst_jalr | inst_jal  
                    |(inst_bne && (rs1_data != rs2_data))
                    |(inst_bge && !rs1_lt_rd_sign)
                    |(inst_beq && (rs1_data == rs2_data))
                    |(inst_bgeu && (rs1_data >= rs2_data))
                    |(inst_bltu && (rs1_data < rs2_data))
                    |(inst_blt && rs1_lt_rd_sign);
    
    //获取操作对象
    assign rd = inst[11:7];
    assign rs1 = inst[19:15];
    assign rs2 = inst[24:20];
    assign imm_i = {{20{inst[31]}}, inst[31:20]};
    assign imm_iu ={20'b0, inst[31:20]};
    assign imm_u = {inst[31:12], 12'b0};
    assign imm_s = {{20{inst[31]}}, inst[31:25], inst[11:7]};
    assign imm_j = ({{11{inst[31]}}, inst[31], inst[19:12], inst[20], inst[30:21], 1'b0});
    assign csr_addr = inst[31:20];
    assign offset = {{20{inst[31]}}, inst[7], inst[30:25], inst[11:8], 1'b0};
    assign imm = inst_i ? imm_i :
                 inst_iu? imm_iu : 
                 inst_u ? imm_u : 
                 inst_s ? imm_s : 
                 inst_j ? imm_j : 32'b0;
    assign br_target =  inst_jalr ? ((rs1_data + imm_i) & ~32'h1) :
                        inst_jal ? (pc + imm_j) :
                        inst_b ? (pc + offset) : 32'b0;  
    assign mem_addr = rs1_data + imm;
    assign src1 = inst_lui ? 32'b0 : 
                inst_auipc ? pc :rs1_data;  // lui时src1为0
    assign src2 = inst_r ? rs2_data : imm;
    assign st_data = rs2_data;
    always @(*) begin
        if(inst_ebreak) begin
            ebreak();
        end
    end
endmodule
