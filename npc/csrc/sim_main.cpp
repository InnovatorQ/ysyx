#include"svdpi.h"
#include"Vtop.h"
#include"verilated.h"
#include"verilated_fst_c.h"

#include<stdio.h>
#include<stdbool.h>
#include<assert.h>

static Vtop* top;
static VerilatedFstC* tfp;
//宏
#define MSIZE (1024 * 512)
#define MAX_INST 100
//全局
bool is_ebreak = false;
int pmem[MSIZE];
// int inst_sram[MAX_INST] = {
//     0x01000093, // addi x1, x0, 16(0x10)     # x1 = 16 (地址)
//     0x12345137, // lui x2, 0x12345     # x2 = 0x12345000  
//     0x67810113, // addi x2, x2, 0x678  # x2 = 0x12345678
//     0x0000a183, // lw x3, 0(x1)        # x3 = mem[4] = 0x00010002
//     0x0020c203, // lbu x4, 2(x1)       # x4 = mem[4](mem[0][23:16]) = 0x01
//     0x00208223, // sb x2, 4(x1)        # mem[5] = x2[7:0] = 0x78
//     0x0020a223, // sw x2, 4(x1)        # mem[5] = x2 = 0x12345678
//     0x0040a303, // lw x6, 4(x1)        # x6 = mem[20] = 0x12345678
//     0x00100073  // ebreak
// };
// 地址0x00: 0x01000093 addi x1, x0, 16      # x1 = 16 (基地址)
// 地址0x04: 0x12345137 lui x2, 0x12345      # x2 = 0x12345000  
// 地址0x08: 0x67810113 addi x2, x2, 0x678   # x2 = 0x12345678
// 地址0x0c: 0x0000a183 lw x3, 0(x1)         # x3 = mem[4] = 0x12345678
// 地址0x10: 0x0010c203 lbu x4, 1(x1)        # x4 = mem[4][15:8]的字节 = 0x56
// 地址0x14: 0x002082a3 sb x2, 5(x1)         # mem[5] = x2[7:0]
// 地址0x18: 0x0020a223 sw x2, 4(x1)         # mem[5] = 0x12345678  
// 地址0x1c: 0x0040a303 lw x6, 4(x1)         # x6 = mem[5] = 0x12345678
// 地址0x20: ebreak               # 结束

// 地址0x40: 测试数据 0x12345678
// 地址0x44: 测试数据 0x9abcdef0


extern "C" void ebreak(){
    is_ebreak = true;
} 

// 总是往地址为`waddr & ~0x3u`的4字节按写掩码`wmask`写入`wdata`
// `wmask`中每比特表示`wdata`中1个字节的掩码,
// 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
extern "C" void pmem_write(int waddr, int wdata, char wmask) {
    int addr = (waddr & ~0x3u) >> 2;
    int *mem = &pmem[addr];
    for(int i = 0; i < 4; i++) {
        if(wmask & (1 << i)) {
            *mem = (*mem & ~(0xff << (i * 8))) // 清空内存中的目标字节
            | (((wdata >> (i * 8)) & 0xff) << (i * 8));   //选择wdata中的目标字节，写入内存中的对应字节
        }
    }
    printf("regs : 0x%08x ->MEM[0x%08x] : %08x\n", wdata , addr ,pmem[addr]);
}

// 总是读取地址为`raddr & ~0x3u`的4字节返回
extern "C" int pmem_read(int raddr) {
    int addr = (raddr & ~0x3u) >> 2;
    if (addr >= 0 && addr < MSIZE) {
        return pmem[addr];
    }
    return 0;
}

// int inst_read(int inst_addr){
//     return inst_sram[inst_addr >> 2];
// }

static void single_cycle(){
    top->clk = 0; top->eval();
    tfp->dump(Verilated::time());
    Verilated::timeInc(1);
    top->clk = 1; top->eval();
    //确保上升沿更新PC的同时得到inst
    top->inst = pmem_read(top->pc);
    tfp->dump(Verilated::time());
    Verilated::timeInc(1);
}

static void reset(int n){
    top->reset = 1;
    while(n-- > 0) single_cycle();
    top->reset = 0;
    
}

void load_pf(const char *filename){
    FILE *fp = fopen(filename, "r");
    //assert(fp != NULL, "Failed to open %s", filename);
    char line[512];
    int total_words = 0;
    
    while (fgets(line, sizeof(line), fp)) {
        // 跳过空行和注释
        if (line[0] == '\n' || line[0] == '#') continue;
        
        // 跳过 v3.0 format header
        if (strncmp(line, "v3.0", 4) == 0) continue;
        
        // 解析地址和数据
        uint32_t addr;
        char *colon = strchr(line, ':');
        if (!colon) continue;
        
        // 解析地址
        if (sscanf(line, "%x:", &addr) != 1) continue;
        
        // 解析数据
        char *data_start = colon + 1;
        char *token = strtok(data_start, " \t\n");
        int word_offset = 0;
        
        while (token != NULL) {
            uint32_t word;
            if (sscanf(token, "%x", &word) == 1) {
                uint32_t word_addr = addr + word_offset;
                if (word_addr < MSIZE) {
                    pmem[word_addr] = word;
                    total_words++;
                }
                word_offset++;
            }
            token = strtok(NULL, " \t\n");
        }
    }
    
    printf("Loaded %d words from %s (hex format)\n", total_words, filename);
    fclose(fp);
}

int main(int argc, char **argv){
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    char *pf = "./ROM/sum.hex";
    load_pf(pf);
    // 设置测试数据
    //pmem[0x04] = 0x00010002;  

    top = new Vtop;
    tfp = new VerilatedFstC;
    top->trace(tfp, 99);
    tfp->open("./build/wave.fst");
    //reset10个周期
    reset(10);

    // 无限循环直到ebreak
    int cycle_count = 0;
    
    while(1){
        
        printf("Cycle %d: PC=0x%08x, INST=0x%08x\n", 
               cycle_count, top->pc, top->inst);
        single_cycle();
        cycle_count++;
        // 检测ebreak指令
        if(is_ebreak) {
            if(top->a0_data == 0) printf("\033[32mHIT GOOD TRAP!\033[0m\n");
            else printf("\033[31mHIT BAD TRAP!\033[0m\n");
            printf("ebreak指令,总运行周期为%d\n", cycle_count);
            break;
        }
    }
    
    tfp->close();
    delete tfp;
    delete top;
    return 0;
}

