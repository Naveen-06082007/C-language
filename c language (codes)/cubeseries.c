// Program to print the cubes of numbers from 1 to n

#include<stdio.h>
int main() 
{
    int n;
    int cube;
    int i ;
    printf("enter the no upto cubes");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        printf("the cube of%d  is:%d\n",i,(i*i*i));

    }
    return 0;
}