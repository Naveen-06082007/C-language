// WAP to extract the first and last digits of a given number
#include <stdio.h>

int main() {
    int n, f, l;
    printf("Enter a number: ");
    scanf("%d", &n);
    l = n % 10;
    f = n;
    while (f >= 10) {
        f /= 10;
    }
    printf("First digit: %d\n", f);
    printf("Last digit: %d\n", l);

    return 0;
}