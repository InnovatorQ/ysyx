#include "src/monitor/sdb/sdb.h"
#include <stdio.h>

int main() {
    printf("=== Pointer Dereference vs Multiplication Test ===\n");
    
    char *test_cases[] = {
        "*0x1000",           // DEREF at start
        "(*0x1000)",         // DEREF after (
        "5 * 3",             // MUL between numbers
        "5 + *0x1000",       // DEREF after +
        "(*a) * (*b)",       // DEREF after (, MUL between )
        "*a * *b",           // DEREF at start, MUL, DEREF after *
        "a == *b",           // DEREF after ==
        "a != *b"            // DEREF after !=
    };
    
    for (int i = 0; i < 8; i++) {
        printf("\nTest %d: %s\n", i + 1, test_cases[i]);
        bool success;
        expr(test_cases[i], &success);
        printf("Parse result: %s\n", success ? "SUCCESS" : "FAILED");
    }
    
    return 0;
}
