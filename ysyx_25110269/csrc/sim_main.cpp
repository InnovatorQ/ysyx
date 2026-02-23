#include"svdpi.h"
#include"verilated.h"
#include"verilated_fst_c.h"
#include"monitor/sdb/sdb.h"
#include"common.h"
#include"memory/paddr.h"
#ifdef CONFIG_DIFFTEST
#include"difftest.h"
#endif

#include<stdio.h>
#include<time.h>
#include<stdbool.h>
#include<assert.h>
#include<sys/time.h>
extern uint8_t mrom[CONFIG_MROM_SIZE];
extern uint8_t flash[CONFIG_FLASH_SIZE];
extern uint8_t sram[CONFIG_SRAM_SIZE];

extern void init_monitor(int argc, char *argv[]);

extern "C" void flash_read(int32_t addr, int32_t *data) {
    Assert(addr < CONFIG_FLASH_SIZE, "Access Fault !!! addr = " FMT_WORD "\n", addr);
    *data = (int32_t)(
        (flash[addr])             |   // 字节0 -> 位0-7
        (flash[addr + 1] << 8)    |   // 字节1 -> 位8-15
        (flash[addr + 2] << 16)   |   // 字节2 -> 位16-23
        (flash[addr + 3] << 24));     // 字节3 -> 位24-31
    //printf("%08x\n", *data);
}
extern "C" void mrom_read(int32_t addr, int32_t *data) { 
    //assert(0);
    Assert(in_mrom(addr), "Access Fault !!! addr = " FMT_WORD "\n", addr);
    word_t mrom_addr = (addr - CONFIG_MROM_BASE) & ~0x3u;
    //printf("mrom:addr : 0x%08x, mem: 0x%08x\n", pmem_addr, pmem[pmem_addr]); 
    *data = (int32_t)(
        (mrom[mrom_addr])             |   // 字节0 -> 位0-7
        (mrom[mrom_addr + 1] << 8)    |   // 字节1 -> 位8-15
        (mrom[mrom_addr + 2] << 16)   |   // 字节2 -> 位16-23
        (mrom[mrom_addr + 3] << 24));     // 字节3 -> 位24-31
}

// 总是读取地址为`raddr & ~0x3u`的4字节返回
extern "C" word_t pmem_read(int raddr) {
    // 将物理地址映射到pmem数组索引
    word_t data;
    if(in_flash(raddr)){
        paddr_t addr = (raddr - CONFIG_FLASH_BASE) & ~0x3u;
        data = (word_t)(
        (flash[addr])             |   // 字节0 -> 位0-7
        (flash[addr + 1] << 8)    |   // 字节1 -> 位8-15
        (flash[addr + 2] << 16)   |   // 字节2 -> 位16-23
        (flash[addr + 3] << 24));     // 字节3 -> 位24-31
        return data;
    } else if(in_sram(raddr)){
        paddr_t addr = ((raddr - CONFIG_SRAM_BASE) & ~0x3u) >> 2; 
        return SRAM[addr];
    } else if(in_mrom(raddr)){
        paddr_t addr = (raddr - CONFIG_MROM_BASE) & ~0x3u;
        data = (int32_t)(
        (mrom[addr])             |   // 字节0 -> 位0-7
        (mrom[addr + 1] << 8)    |   // 字节1 -> 位8-15
        (mrom[addr + 2] << 16)   |   // 字节2 -> 位16-23
        (mrom[addr + 3] << 24));     // 字节3 -> 位24-31
        return data;
    } else if(in_psram(raddr)){
        paddr_t addr = (raddr - CONFIG_PSRAM_BASE) & ~0x3u;
        data = (int32_t)(
        (PSRAM[addr])             |   // 字节0 -> 位0-7
        (PSRAM[addr + 1] << 8)    |   // 字节1 -> 位8-15
        (PSRAM[addr + 2] << 16)   |   // 字节2 -> 位16-23
        (PSRAM[addr + 3] << 24));     // 字节3 -> 位24-31
        return data;
    } else if(in_sdram(raddr)){
        paddr_t addr = (raddr - CONFIG_SDRAM_BASE) & ~0x3u;
        paddr_t bank = (addr >> 10) & 0x3;      // 位[11:10]
        paddr_t row = (addr >> 12) & 0x1fff;    // 位[24:12]  
        paddr_t col = (addr >> 1) & 0x1ff;      // 位[9:1]
        bool ce = (addr >> 25) & 0x1;           // [25]
        if(ce) data = (int32_t) (SDRAM2[bank][row][col] | (SDRAM3[bank][row][col] << 16));
        else data = (int32_t) (SDRAM0[bank][row][col] | (SDRAM1[bank][row][col] << 16));     
        return data;
    } else if(in_gpio(raddr)){
        paddr_t addr = (raddr - CONFIG_GPIO_BASE) & ~0x3u;
        if(addr == 0) return GPIO;
        else return 0;
    }
    Assert(raddr == (CONFIG_FLASH_BASE - 4), "Access Fault !!! raddr = " FMT_WORD "\n", raddr);
    return 0;
}

// 共享变量
VysyxSoCFull* top = new VysyxSoCFull;
void nvboard_bind_all_pins(VysyxSoCFull* top);
bool is_ebreak = false;
#ifdef CONFIG_WAVE
static VerilatedFstC* tfp = new VerilatedFstC;
#endif

extern "C" void skip_ref(){
#ifdef CONFIG_DIFFTEST
    difftest_skip_ref();
#endif
}
extern "C" void ebreak(){
    is_ebreak = true;
} 

void single_cycle(){
    nvboard_update();
    top->clock = 0; top->eval();
#ifdef CONFIG_WAVE
    tfp->dump(Verilated::time());
#endif
    //assert(0);
    Verilated::timeInc(1);
    top->clock = 1; top->eval();
    //printf("PC: 0x%08x, INST: 0x%08x\n", top->pc, top->inst);
#ifdef CONFIG_WAVE
    tfp->dump(Verilated::time());
#endif
    Verilated::timeInc(1);
}

static void reset(int n){
    top->reset = 1;
    while(n-- > 0) single_cycle();
    top->reset = 0;
}

static void show_pref(){
    Log("-------------------------------------------------");
    Log("|Total prefetched instructions \t| %d  \t|", CPU_INFO(IFU__DOT__pref_cnt));
    Log("-------------------------------------------");
    Log("|decode calculate prefetch     \t| %d  \t|", CPU_INFO(IDU__DOT__pref_cnt_alu));
    Log("|decode load/store prefetch    \t| %d  \t|", CPU_INFO(IDU__DOT__pref_cnt_ls));
    Log("|decode branch prefetch        \t| %d  \t|", CPU_INFO(IDU__DOT__pref_cnt_br));
    Log("|decode csr prefetch           \t| %d  \t|", CPU_INFO(IDU__DOT__pref_cnt_csr));
    Log("-------------------------------------------");
    Log("|LSU prefetch                  \t| %d  \t|", CPU_INFO(LSU__DOT__pref_cnt));
    Log("|LSU delay cycles              \t| %d  \t|", CPU_INFO(LSU__DOT__delay_cnt));
    Log("-------------------------------------------");
    Log("|EXU prefetch                  \t| %d  \t|", CPU_INFO(EXU__DOT__pref_cnt));
    Log("-------------------------------------------------");
}

word_t get_rf(int n){
    word_t pc = CPU_INFO(IFU__DOT__pc);
    word_t regs[32];
    for(int i = 0; i < 32 ; i++){
        regs[i] = CPU_INFO(WBU__DOT__rf__DOT__regs)[i];
    }
    if(n >= 0 && n < 32) return regs[n];
    else if(n == 32) return pc;
    else {
        printf("Invalid register number: %d\n", n);
        return 0;
    }
}

word_t get_csr(int n){
    word_t csr_mtvec, csr_mepc, csr_mstatus, csr_mcause;
    csr_mtvec = CPU_INFO(csr_mtvec);
    csr_mepc = CPU_INFO(csr_mepc);
    csr_mstatus = CPU_INFO(csr__DOT__csr_mstatus);
    csr_mcause = CPU_INFO(csr__DOT__csr_mcause);
    switch(n){
        case 0x305: return csr_mtvec;
        case 0x341: return csr_mepc;
        case 0x300: return csr_mstatus;
        case 0x342: return csr_mcause;
        default:
            printf("Invalid CSR number: 0x%03x\n", n);
            return 0;
    }
}

int main(int argc, char **argv){
    nvboard_bind_all_pins(top);
    nvboard_init();
    Verilated::commandArgs(argc, argv);
    //assert(0);
#ifdef CONFIG_WAVE
    Verilated::traceEverOn(true);
    top->trace(tfp, 99);
    tfp->open(DST_DIR "/wave.fst");
    printf("Wave output to " DST_DIR "/wave.fst\n");
#endif
    //reset1个周期
    reset(20);
    
    init_monitor(argc, argv);
    
    // 进入sdb主循环
    sdb_mainloop();

    show_pref();
#ifdef CONFIG_WAVE
    tfp->close();
    delete tfp;
#endif
    delete top;
    return 0;
}