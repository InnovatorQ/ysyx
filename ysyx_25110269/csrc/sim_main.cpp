#include"svdpi.h"
#include"verilated.h"
#include"verilated_fst_c.h"
#include"monitor/sdb/sdb.h"
#include"common.h"
#ifdef CONFIG_DIFFTEST
#include"difftest.h"
#endif

#include<stdio.h>
#include<time.h>
#include<stdbool.h>
#include<assert.h>
#include<sys/time.h>
extern word_t pmem[MSIZE];
extern void init_monitor(int argc, char *argv[]);
extern "C" void flash_read(int32_t addr, int32_t *data) { assert(0); }
extern "C" void mrom_read(int32_t addr, int32_t *data) { 
    //assert(0);
    word_t pmem_addr = ((addr - 0x20000000) & ~0x3u) >> 2;
    //printf("mrom:addr : 0x%08x, mem: 0x%08x\n", pmem_addr, pmem[pmem_addr]); 
    *data = pmem[pmem_addr];
}
// 共享变量
VysyxSoCFull* top = new VysyxSoCFull;
bool is_ebreak = false;
#ifdef CONFIG_WAVE
static VerilatedFstC* tfp = new VerilatedFstC;
#endif
//宏
#define MSIZE (128 * 1024 * 1024) //128MB
#define RTC_ADDR 0xa0000048

extern "C" void skip_ref(){
#ifdef CONFIG_DIFFTEST
    difftest_skip_ref();
#endif
}
extern "C" void ebreak(){
    is_ebreak = true;
} 

void single_cycle(){
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

// 总是往地址为`waddr & ~0x3u`的4字节按写掩码`wmask`写入`wdata`
// `wmask`中每比特表示`wdata`中1个字节的掩码,
// 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
extern "C" void pmem_write(int waddr, int wdata, char wmask) {
    static int last_waddr = -1;
    static int last_wdata = -1;
    static char last_wmask = -1;
    if(waddr == last_waddr && wdata == last_wdata && wmask == last_wmask) {
        return;
    }
    last_waddr = waddr;
    last_wdata = wdata;
    last_wmask = wmask;

// #ifdef CONFIG_DEVICE
//     if( waddr >= 0x10000000 && waddr < 0x10000fff) {
//         putchar((char)(wdata & 0xff));
//         fflush(stdout);  // 强制刷新
    
//         return;
//     }
// #endif

    int addr = ((waddr - 0x20000000) & ~0x3u) >> 2;
    //int addr = (waddr & ~0x3u) >> 2;
    if (addr < 0 || addr >= MSIZE) return;
    word_t *mem = &pmem[addr];
    
    for(int i = 0; i < 4; i++) {
        if(wmask & (1 << i)) {
            *mem = (*mem & ~(0xff << (i * 8)))
            | (((wdata >> (i * 8)) & 0xff) << (i * 8));
        }
    }
    // 记录内存写入日志
#ifdef CONFIG_MTRACE
    log_write("MTRACE: WRITE [0x%08x] = 0x%08x (mask=0x%02x) at pc=0x%08x\n", 
              waddr, wdata, wmask & 0xff, CPU_INFO(IFU__DOT__pc));
#endif
}

// 总是读取地址为`raddr & ~0x3u`的4字节返回
extern "C" word_t pmem_read(int raddr) {
    // 处理RTC设备 - 返回当前系统时间（不缓存）
    //#ifdef CONFIG_DEVICE
    // if(raddr >= RTC_ADDR && raddr < RTC_ADDR + 32) {
    // #ifdef CONFIG_DIFFTEST
    //     difftest_skip_ref();  // 跳过REF执行，因为外设行为不同
    // #endif
    //     // // 获取微秒级时间用于AM_TIMER_UPTIME
    //     // uint64_t uptime_us = get_time();
        
    //     // // 获取实际时间用于AM_TIMER_RTC
    //     // time_t now = time(NULL);
    //     // struct tm *tm_info = localtime(&now);
        
    //     // switch(raddr - RTC_ADDR) {
    //     //     case 0: return uptime_us & 0xFFFFFFFF;        // uptime低32位(微秒)
    //     //     case 4: return (uptime_us >> 32) & 0xFFFFFFFF; // uptime高32位(微秒)
    //     //     case 8: return tm_info->tm_sec;               // 秒
    //     //     case 12: return tm_info->tm_min;              // 分
    //     //     case 16: return tm_info->tm_hour;             // 时
    //     //     case 20: return tm_info->tm_mday;             // 日
    //     //     case 24: return tm_info->tm_mon + 1;          // 月
    //     //     case 28: return tm_info->tm_year + 1900;      // 年
    //     // }
        
    // }
    // #endif
    // 将物理地址映射到pmem数组索引
    int addr = ((raddr - 0x20000000) & ~0x3u) >> 2;
    //printf("read : addr : 0x%08x, mem: 0x%08x\n", addr, pmem[addr]);
    if (addr >= 0 && addr < MSIZE) {

        word_t data = pmem[addr];
        // 避免重复记录相同地址的读取
        static int last_raddr = -1;
        static word_t last_data = 0;
        static word_t last_pc = 0;
        if (raddr != last_raddr || data != last_data || CPU_INFO(IFU__DOT__pc) != last_pc) {
#ifdef CONFIG_MTRACE
            log_write("MTRACE: READ [0x%08x] = 0x%08x at pc=0x%08x\n", 
                      raddr, data, CPU_INFO(IFU__DOT__pc));
#endif
            last_raddr = raddr;
            last_data = data;
            last_pc = CPU_INFO(IFU__DOT__pc);
        }
        return data;
    }
    return 0;
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
    Verilated::commandArgs(argc, argv);
    //assert(0);
#ifdef CONFIG_WAVE
    Verilated::traceEverOn(true);
    top->trace(tfp, 99);
    tfp->open(DST_DIR "/wave.fst");
    printf("Wave output to " DST_DIR "/wave.fst\n");
#endif
    //reset1个周期
    reset(5);
    
    init_monitor(argc, argv);
    
    // 进入sdb主循环
    sdb_mainloop();
#ifdef CONFIG_WAVE
    tfp->close();
    delete tfp;
#endif
    delete top;
    return 0;
}