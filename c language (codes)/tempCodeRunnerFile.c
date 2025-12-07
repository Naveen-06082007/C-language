#include <stdio.h>
int main() {
    int arr[5] = {2655,54,62,28,9};
    int min = arr[0];
    for (int i = 0; i < 5; i++) {
        if (min > arr[i]) {
            min = arr[i];
        }
    }
    printf("%d\n", min);
    return 0;
}

int main() {
    int arr[8] = {1,2,3,4,5,6,7,8};

    for (int i = 0; i < 8; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d\t", arr[i] * 2);
        } else {
            printf("%d\t", arr[i] + 10);
        }
    }
}
