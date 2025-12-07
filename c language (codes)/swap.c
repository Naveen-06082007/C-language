#include<stdio.h>
int main(){
    int a , b , temp;
    printf("enter a number  a -->");
    scanf("%d" , &a);
    printf("enter a number  b -->");
    scanf("%d" , &b);
    temp = a;
    a = b ;
    b = temp ;
    printf("the number of a is %d and the number of b is %d \n" , a , b );
    return 0;
}

    