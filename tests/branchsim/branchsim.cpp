#include <iostream>
#include <fstream>
#include <string>
#include <cstdint>

struct DTraceEntry {
    uint32_t pc;           // 分支指令PC
    uint8_t  taken;        // 是否跳转 (1=taken, 0=not taken)
    uint32_t target_addr;  // 分支目标地址
};

class StaticPredictor {
private:
    uint64_t total_branches = 0;
    uint64_t correct_predictions = 0;
    bool always_taken;
    
public:
    StaticPredictor(bool taken) : always_taken(taken) {}
    
    bool predict(uint64_t pc) {
        return always_taken;
    }
    
    void update(uint64_t pc, bool actual_taken) {
        total_branches++;
        if (predict(pc) == actual_taken) {
            correct_predictions++;
        }
    }
    
    void print_stats(uint64_t total_instructions) {
        double accuracy = (double)correct_predictions / total_branches * 100.0;
        double branch_ratio = (double)total_branches / total_instructions * 100.0;
        double misprediction_rate = (double)(total_branches - correct_predictions) / total_branches;
        
        printf("%s Predictor:\n", always_taken ? "Always Taken" : "Always Not Taken");
        printf("  Total branches: %lu\n", total_branches);
        printf("  Branch ratio: %.2f%%\n", branch_ratio);
        printf("  Correct predictions: %lu\n", correct_predictions);
        printf("  Accuracy: %.2f%%\n", accuracy);
        printf("  Misprediction rate: %.2f%%\n", misprediction_rate * 100);
        
        // 五级流水线IPC分析 (理想IPC=1)
        // 分支预测失败损失IF和ID两个周期
        int branch_penalty = 2;
        double cycles_lost_per_instruction = misprediction_rate * (branch_ratio / 100.0) * branch_penalty;
        double actual_ipc = 1.0 / (1.0 + cycles_lost_per_instruction);
        
        printf("  Branch penalty: %d cycles (IF+ID stages)\n", branch_penalty);
        printf("  Cycles lost per instruction: %.6f\n", cycles_lost_per_instruction);
        printf("  IPC: %.4f (ideal: 1.0)\n", actual_ipc);
    }
};

int main(int argc, char* argv[]) {
    if (argc != 2) {
        printf("Usage: %s <trace_file>\n", argv[0]);
        return 1;
    }
    
    StaticPredictor always_taken(true);
    StaticPredictor always_not_taken(false);
    
    // 先统计总指令数
    std::ifstream count_file("/home/qzx/ysyx/ysyx-workbench/nemu/build/nemu-log.txt");
    std::string line;
    uint64_t total_instructions = 0;
    while (std::getline(count_file, line)) {
        if (line.find("0x") == 0 && line.find(":") != std::string::npos) {
            total_instructions++;
        }
    }
    count_file.close();
    
    // 读取二进制trace文件
    std::ifstream infile(argv[1], std::ios::binary);
    if (!infile.is_open()) {
        printf("Error: Cannot open trace file %s\n", argv[1]);
        return 1;
    }
    
    DTraceEntry entry;
    while (infile.read(reinterpret_cast<char*>(&entry), sizeof(entry))) {
        bool taken = (entry.taken == 1);
        
        always_taken.update(entry.pc, taken);
        always_not_taken.update(entry.pc, taken);
    }
    
    infile.close();
    
    printf("=== Branch Prediction Simulation Results ===\n");
    printf("Total instructions: %lu\n\n", total_instructions);
    always_taken.print_stats(total_instructions);
    printf("\n");
    always_not_taken.print_stats(total_instructions);
    
    return 0;
}
