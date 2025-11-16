#include"svdpi.h"
#include"Vtop.h"
#include"verilated.h"
#include"verilated_fst_c.h"

#include<stdio.h>
#include<time.h>
#include<stdbool.h>
#include<assert.h>
#include<sys/time.h>

static Vtop* top;
static VerilatedFstC* tfp;
//宏
#define MSIZE (128 * 1024 * 1024)
#define MAX_INST 100
#define RTC_ADDR 0xa0000048
//全局
bool is_ebreak = false;
int pmem[MSIZE];

extern "C" void ebreak(){
    is_ebreak = true;
} 

// 总是往地址为`waddr & ~0x3u`的4字节按写掩码`wmask`写入`wdata`
// `wmask`中每比特表示`wdata`中1个字节的掩码,
// 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
extern "C" void pmem_write(int waddr, int wdata, char wmask) {
    //避免重复调用
    static int last_waddr = -1;
    static int last_wdata = -1;
    static int last_wmask = -1;
    if(waddr == last_waddr && wdata == last_wdata && wmask == last_wmask){
        return;
    }
    last_waddr =  waddr; last_wdata = wdata; last_wmask = wmask;
    if( waddr >= 0x10000000){
        
        putchar((char)(wdata & 0xff));
        return;
    }
    
    int addr = ((waddr - 0x80000000) & ~0x3u) >> 2;
    if (addr < 0 || addr >= MSIZE) return;
    int *mem = &pmem[addr];
    
    for(int i = 0; i < 4; i++) {
        if(wmask & (1 << i)) {
            *mem = (*mem & ~(0xff << (i * 8)))
            | (((wdata >> (i * 8)) & 0xff) << (i * 8));
        }
    }
}

// 总是读取地址为`raddr & ~0x3u`的4字节返回
extern "C" int pmem_read(int raddr) {
    // 处理RTC设备 - 返回当前系统时间（不缓存）
    if(raddr >= RTC_ADDR && raddr < RTC_ADDR + 32) {
        time_t now = time(NULL);
        struct tm *tm_info = localtime(&now);
        
        switch(raddr - RTC_ADDR) {
            case 0: return now & 0xFFFFFFFF;
            case 4: return (now >> 32) & 0xFFFFFFFF;
            case 8: return tm_info->tm_sec;
            case 12: return tm_info->tm_min;
            case 16: return tm_info->tm_hour;
            case 20: return tm_info->tm_mday;
            case 24: return tm_info->tm_mon + 1;
            case 28: return tm_info->tm_year + 1900;
        }
    }
    
    // 避免重复调用（仅对普通内存）
    // static int last_raddr = -1;
    // if(raddr == last_raddr) {
    //     return 0;
    // }
    // last_raddr = raddr;
    
    // 将物理地址映射到pmem数组索引
    int addr = ((raddr - 0x80000000) & ~0x3u) >> 2;
    if (addr >= 0 && addr < MSIZE) {
        return pmem[addr];
    }
    return 0;
}

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

void load_bin(const char *filename) {
    FILE *fp = fopen(filename, "rb");
    if (!fp) {
        printf("Failed to open %s\n", filename);
        return;
    }
    
    // 直接加载到pmem[0]，pmem_read函数会处理地址映射
    size_t bytes_read = fread(pmem, 1, MSIZE * 4, fp);
    printf("Loaded %zu bytes from %s (bin format)\n", bytes_read, filename);
    fclose(fp);
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
    char *pf = argv[1];
    
    // 检测文件扩展名
    char *ext = strrchr(pf, '.');
    if (ext && strcmp(ext, ".bin") == 0) {
        load_bin(pf);
    } else {
        load_pf(pf);
    }
      

    top = new Vtop;
    tfp = new VerilatedFstC;
    top->trace(tfp, 99);
    tfp->open("./build/wave.fst");
    //reset10个周期
    reset(10);

    // 无限循环直到ebreak
    int cycle_count = 0;
    
    while(1){
        
        // printf("Cycle %d: PC=0x%08x, INST=0x%08x\n", 
        //        cycle_count, top->pc, top->inst);
        single_cycle();
        cycle_count++;
        // 检测ebreak指令
        if(is_ebreak) {
            if(top->a0_data == 0) printf("\033[32mHIT GOOD TRAP!\033[0m\n");
            else printf("\033[31mHIT BAD TRAP!\033[0m\n");
            // printf("ebreak指令,总运行周期为%d\n", cycle_count);
            break;
        }
    }
    
    tfp->close();
    delete tfp;
    delete top;
    return 0;
}

