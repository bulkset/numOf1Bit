#include <stdio.h>

int hammingWeight(uint32_t n) {
    int count = 0;
    while (n != 0) {
        count += n & 1;
        n = n >> 1;
    }
    return count;
}

int main() {
    uint32_t num1 = 11;
    uint32_t num2 = 128;
    uint32_t num3 = 4294967293;
    
    printf("Input: n = %u, Output: %d\n", num1, hammingWeight(num1));
    printf("Input: n = %u, Output: %d\n", num2, hammingWeight(num2));
    printf("Input: n = %u, Output: %d\n", num3, hammingWeight(num3));
    
    return 0;
}
