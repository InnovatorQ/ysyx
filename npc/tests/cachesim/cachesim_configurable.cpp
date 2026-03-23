#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdio>
#include <iomanip>

#define CRT_LATENCY 8

struct ITraceEntry {
    uint32_t pc;
    uint32_t count;
};

struct DTraceEntry {
    uint32_t addr;
    uint32_t len;
    char type;  // 'r' for read, 'w' for write
};

class DCache {
private:
    int num_sets;
    int ways;
    int block_size;
    int set_bits;
    int offset_bits;
    
    struct CacheBlock {
        bool valid;
        uint32_t tag;
        CacheBlock() : valid(false), tag(0) {}
    };
    
    std::vector<std::vector<CacheBlock>> cache;
    std::vector<int> round_robin_ptr;
    uint32_t hit_count;
    uint32_t miss_count;
    uint32_t miss_penalty_cycles;
    
public:
    DCache(int sets, int associativity, int blk_size) 
        : num_sets(sets), ways(associativity), block_size(blk_size),
          cache(sets, std::vector<CacheBlock>(associativity)),
          round_robin_ptr(sets, 0),
          hit_count(0), miss_count(0), miss_penalty_cycles(0) {
        
        set_bits = 0;
        int temp = sets;
        while (temp > 1) {
            set_bits++;
            temp >>= 1;
        }
        
        offset_bits = 0;
        temp = block_size;
        while (temp > 1) {
            offset_bits++;
            temp >>= 1;
        }
    }
    
    int get_miss_penalty() {
        int words_per_block = block_size / 4;
        int base_latency = 150 * CRT_LATENCY;
        int burst_cycles = 1 + (words_per_block - 1) * 2;
        return base_latency + burst_cycles;
    }
    
    bool access(uint32_t addr) {
        uint32_t set_index = (addr >> offset_bits) & ((1 << set_bits) - 1);
        uint32_t tag = addr >> (offset_bits + set_bits);
        
        for (int way = 0; way < ways; way++) {
            if (cache[set_index][way].valid && cache[set_index][way].tag == tag) {
                hit_count++;
                return true;
            }
        }
        
        miss_count++;
        miss_penalty_cycles += get_miss_penalty();
        
        int replace_way = 0;
        for (int way = 0; way < ways; way++) {
            if (!cache[set_index][way].valid) {
                replace_way = way;
                break;
            }
        }
        
        if (cache[set_index][replace_way].valid) {
            replace_way = round_robin_ptr[set_index];
            round_robin_ptr[set_index] = (round_robin_ptr[set_index] + 1) % ways;
        }
        
        cache[set_index][replace_way].valid = true;
        cache[set_index][replace_way].tag = tag;
        
        return false;
    }
    
    void print_stats() {
        uint32_t total = hit_count + miss_count;
        double hit_rate = total > 0 ? (double)hit_count / total * 100.0 : 0.0;
        
        std::cout << "\n=== DCache Statistics ===" << std::endl;
        std::cout << "Sets: " << num_sets << ", Ways: " << ways 
                  << ", Block Size: " << block_size << " bytes" << std::endl;
        std::cout << "Total Cache Size: " << num_sets * ways * block_size << " bytes" << std::endl;
        std::cout << "Total Accesses: " << total << std::endl;
        std::cout << "Cache Hits: " << hit_count << std::endl;
        std::cout << "Cache Misses: " << miss_count << std::endl;
        std::cout << "Hit Rate: " << std::fixed << std::setprecision(2) << hit_rate << "%" << std::endl;
        std::cout << "Miss Penalty Cycles: " << miss_penalty_cycles << std::endl;
        
        uint32_t total_cycles = hit_count + miss_penalty_cycles;
        std::cout << "Total Memory Time (TMT): " << total_cycles << " cycles" << std::endl;
        std::cout << "Average Memory Access Time: " << std::fixed << std::setprecision(2)
                  << (total > 0 ? (double)total_cycles / total : 0.0) << " cycles" << std::endl;
    }
};

class ICache {
private:
    int num_sets;
    int ways;
    int block_size;
    int set_bits;
    int offset_bits;
    
    struct CacheBlock {
        bool valid;
        uint32_t tag;
        CacheBlock() : valid(false), tag(0) {}
    };
    
    std::vector<std::vector<CacheBlock>> cache;
    std::vector<int> round_robin_ptr;  // 每个组的轮转指针
    uint32_t hit_count;
    uint32_t miss_count;
    uint32_t miss_penalty_cycles;  // 总缺失代价周期数
    
public:
    ICache(int sets, int associativity, int blk_size) 
        : num_sets(sets), ways(associativity), block_size(blk_size),
          cache(sets, std::vector<CacheBlock>(associativity)),
          round_robin_ptr(sets, 0),
          hit_count(0), miss_count(0), miss_penalty_cycles(0) {
        
        set_bits = 0;
        int temp = sets;
        while (temp > 1) {
            set_bits++;
            temp >>= 1;
        }
        
        offset_bits = 0;
        temp = block_size;
        while (temp > 1) {
            offset_bits++;
            temp >>= 1;
        }
    }
    
    int get_miss_penalty() {
        // 缺失代价只与块大小和总线传输方式相关
        // 采用突发传输方式：第1个字需要基础延迟，后续字每2周期传输1个
        int words_per_block = block_size / 4;
        int base_latency = 150 * CRT_LATENCY;  // SDRAM基础访问延迟
        int burst_cycles = 1 + (words_per_block - 1) * 2;  // 突发传输周期
        
        return base_latency + burst_cycles;
    }
    
    bool access(uint32_t addr) {
        uint32_t set_index = (addr >> offset_bits) & ((1 << set_bits) - 1);
        uint32_t tag = addr >> (offset_bits + set_bits);
        
        // Check for hit
        for (int way = 0; way < ways; way++) {
            if (cache[set_index][way].valid && cache[set_index][way].tag == tag) {
                hit_count++;
                return true;
            }
        }
        
        // Miss - use round robin replacement
        miss_count++;
        miss_penalty_cycles += get_miss_penalty();
        
        int replace_way = 0;
        
        // 优先找无效路
        for (int way = 0; way < ways; way++) {
            if (!cache[set_index][way].valid) {
                replace_way = way;
                break;
            }
        }
        
        // 如果都有效，使用轮转指针
        if (cache[set_index][replace_way].valid) {
            replace_way = round_robin_ptr[set_index];
            round_robin_ptr[set_index] = (round_robin_ptr[set_index] + 1) % ways;
        }
        
        cache[set_index][replace_way].valid = true;
        cache[set_index][replace_way].tag = tag;
        
        return false;
    }
    
    void print_stats() {
        uint32_t total = hit_count + miss_count;
        double hit_rate = total > 0 ? (double)hit_count / total * 100.0 : 0.0;
        double avg_miss_penalty = miss_count > 0 ? (double)miss_penalty_cycles / miss_count : 0.0;
        
        std::cout << "=== ICache Statistics ===" << std::endl;
        std::cout << "Sets: " << num_sets << ", Ways: " << ways 
                  << ", Block Size: " << block_size << " bytes (Round Robin)" << std::endl;
        std::cout << "Total Cache Size: " << num_sets * ways * block_size << " bytes" << std::endl;
        std::cout << "Total Accesses: " << total << std::endl;
        std::cout << "Cache Hits: " << hit_count << std::endl;
        std::cout << "Cache Misses: " << miss_count << std::endl;
        std::cout << "Hit Rate: " << std::fixed << std::setprecision(2) << hit_rate << "%" << std::endl;
        std::cout << "Miss Penalty Cycles: " << miss_penalty_cycles << std::endl;
        std::cout << "Average Miss Penalty: " << std::fixed << std::setprecision(2) 
                  << avg_miss_penalty << " cycles" << std::endl;
        
        // 计算TMT (Total Memory Time)
        uint32_t total_cycles = hit_count + miss_penalty_cycles;
        std::cout << "Total Memory Time (TMT): " << total_cycles << " cycles" << std::endl;
        std::cout << "Average Memory Access Time: " << std::fixed << std::setprecision(2)
                  << (total > 0 ? (double)total_cycles / total : 0.0) << " cycles" << std::endl;
    }
};

int main(int argc, char* argv[]) {
    if (argc < 7) {
        std::cerr << "Usage: " << argv[0] << " <i_sets> <i_ways> <i_block_size> <d_sets> <d_ways> <d_block_size> [itrace_file] [dtrace_file]" << std::endl;
        return 1;
    }
    
    int i_sets = std::atoi(argv[1]);
    int i_ways = std::atoi(argv[2]);
    int i_block_size = std::atoi(argv[3]);
    int d_sets = std::atoi(argv[4]);
    int d_ways = std::atoi(argv[5]);
    int d_block_size = std::atoi(argv[6]);
    
    const char* itrace_file = (argc > 7) ? argv[7] : "build/itrace.bin.bz2";
    const char* dtrace_file = (argc > 8) ? argv[8] : "build/dtrace.bin.bz2";
    
    ICache icache(i_sets, i_ways, i_block_size);
    DCache dcache(d_sets, d_ways, d_block_size);
    
    // Process ITrace
    std::string icmd = "bzcat ";
    icmd += itrace_file;
    FILE* ifp = popen(icmd.c_str(), "r");
    if (ifp) {
        ITraceEntry ientry;
        while (fread(&ientry, sizeof(ientry), 1, ifp) == 1) {
            for (uint32_t i = 0; i < ientry.count; i++) {
                icache.access(ientry.pc + i * 4);
            }
        }
        pclose(ifp);
    }
    
    // Process DTrace
    std::string dcmd = "bzcat ";
    dcmd += dtrace_file;
    FILE* dfp = popen(dcmd.c_str(), "r");
    if (dfp) {
        DTraceEntry dentry;
        while (fread(&dentry, sizeof(dentry), 1, dfp) == 1) {
            dcache.access(dentry.addr);
        }
        pclose(dfp);
    }
    
    icache.print_stats();
    dcache.print_stats();
    
    return 0;
}
