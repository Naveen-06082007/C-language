// WAP to print the first n terms of an arithmetic progression (AP) with a given difference 
#include <stdio.h>
int main() {
    int n =100 ;
    int d ;
    int a = 4;
    printf("Enter the difference: ");
    scanf("%d",&d);
    for (a; a<=2*n-1;a=a+d)
        printf("%d ",a);
    return 0;
}