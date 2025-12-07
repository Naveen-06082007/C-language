// #include<stdio.h>
// #define MAXSIZE 100
// int main()
// {
//     int a[MAXSIZE];  //Array--->name a   Type-->int max number-->100
//     int size,i;
//     printf("Enter the valure of elements,you want to insert-->");
//     scanf("%d",&size);
//     printf("Enter %d elements-->",size);
//     for(i=0;i<size;i++)
//     {
//         scanf("%d",&a[i]);
//         printf("The array elements is %d \n",a[i]);
//     }
//     return 0;
// }
#include <stdio.h>

int main() {
    int j = 0;
    int even,off;
    int a[] = {15, 24, 13, 64, 75, 43, 23, 89, 90, 12};
    int size = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < size; i++) {
        if (a[i] % 2 == 0) {
            printf("%d is even\n", a[i]);
        } else {
            printf("%d is odd\n", a[i]);
        }
    }

    return 0;
}