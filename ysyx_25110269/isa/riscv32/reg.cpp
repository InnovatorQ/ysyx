#include "common.h"
#include "isa.h"
const static char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

word_t isa_reg_str2val(const char *s, bool *success) {
    int i;
    if(strcmp(s, "pc") == 0){
        //printf("pc\t" FMT_WORD "\n", get_rf(32));
        *success = true;
        return get_rf(32);
    }
    else{
        #ifdef CONFIG_REG_16
        for(i = 0; i < 16; i++){
            if(strcmp(s, regs[i]) == 0){
                printf("%s\t" FMT_WORD "\n", regs[i],get_rf(i));
                *success = true;
                return get_rf(i);
            }
        }
        #endif
        #ifdef CONFIG_REG_32  
        for(i = 0; i < 32; i++){
            if(strcmp(s, regs[i]) == 0){
                printf("%s\t" FMT_WORD "\n", regs[i],get_rf(i));
                *success = true;
                return get_rf(i);
            }
        }
        #endif
    if(i == 32) *success = false;
    }
  return 0;
}