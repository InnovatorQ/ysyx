#include <iostream>
#include <fstream>
#include <string>
#include <regex>
#include <cstdint>

struct ITraceEntry {
    uint32_t pc;
    uint32_t count;
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
    std::regex pc_regex(R"(^0x([0-9a-fA-F]+):)");
    std::smatch match;
    
    uint32_t last_pc = 0;
    uint32_t count = 0;
    bool first = true;
    
    while (std::getline(infile, line)) {
        if (std::regex_search(line, match, pc_regex)) {
            uint32_t pc = std::stoul(match[1].str(), nullptr, 16);
            
            if (first) {
                last_pc = pc;
                count = 1;
                first = false;
            } else if (pc == last_pc + 4) {
                // Sequential access
                count++;
                last_pc = pc;
            } else {
                // Non-sequential, write previous sequence
                ITraceEntry entry = {last_pc - (count - 1) * 4, count};
                outfile.write(reinterpret_cast<const char*>(&entry), sizeof(entry));
                
                last_pc = pc;
                count = 1;
            }
        }
    }
    
    // Write last sequence
    if (count > 0) {
        ITraceEntry entry = {last_pc - (count - 1) * 4, count};
        outfile.write(reinterpret_cast<const char*>(&entry), sizeof(entry));
    }
    
    infile.close();
    outfile.close();
    
    std::cout << "Binary itrace generated successfully" << std::endl;
    return 0;
}
