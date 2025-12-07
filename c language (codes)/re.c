
#include <stdio.h>

unsigned long long factorial(unsigned int n) {
    unsigned long long result = 1ULL;
    for (unsigned int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main(void) {
    long long input;
    printf("Enter a non-negative integer (0..20): ");
    if (scanf("%lld", &input) != 1) return 1;

    if (input < 0) {
        printf("Error: negative input\n");
        return 1;
    }
    if (input > 20) {
        printf("Error: input too large for 64-bit factorial (use <= 20)\n");
        return 1;
    }

    unsigned long long result = factorial((unsigned int)input);
    printf("%lld! = %llu\n", input, result);
    return 0;
}