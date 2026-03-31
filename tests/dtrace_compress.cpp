#include <iostream>
#include <fstream>
#include <string>
#include <regex>
#include <cstdint>

struct DTraceEntry {
    uint32_t pc;           // 分支指令PC
    uint8_t  taken;        // 是否跳转 (1=taken, 0=not taken)
    uint32_t target_addr;  // 分支目标地址
};

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <output_filename>" << std::endl;
        return 1;
    }
    
    std::ifstream infile("/home/qzx/ysyx/ysyx-workbench/nemu/build/nemu-log.txt");
    std::ofstream outfile(argv[1], std::ios::binary);
    
    if (!infile.is_open() || !outfile.is_open()) {
        std::cerr << "Error opening files" << std::endl;
        return 1;
    }
    
    std::string line;
    // 匹配分支指令的正则表达式
    std::regex branch_regex(R"((beq|bne|blt|bge|bltu|bgeu|jal|jalr))");
    std::regex pc_regex(R"(^0x([0-9a-fA-F]+):)");
    std::smatch match;
    
    uint32_t last_pc = 0;
    uint32_t current_pc = 0;
    bool found_branch = false;
    
    while (std::getline(infile, line)) {
        if (std::regex_search(line, match, pc_regex)) {
            current_pc = std::stoul(match[1].str(), nullptr, 16);
            
            // 检查是否是分支指令
            if (std::regex_search(line, match, branch_regex)) {
                found_branch = true;
                last_pc = current_pc;
            } else if (found_branch) {
                // 前一条是分支指令，当前PC决定是否跳转
                DTraceEntry entry;
                entry.pc = last_pc;
                entry.target_addr = current_pc;
                
                // 判断是否跳转：如果当前PC != 上一条PC + 4，则跳转
                if (current_pc == last_pc + 4) {
                    entry.taken = 0;  // Not taken
                } else {
                    entry.taken = 1;  // Taken
                }
                
                outfile.write(reinterpret_cast<const char*>(&entry), sizeof(entry));
                found_branch = false;
            }
        }
    }
    
    infile.close();
    outfile.close();
    
    std::cout << "Binary dtrace generated successfully" << std::endl;
    return 0;
}
