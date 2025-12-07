// WAP to add fraction
#include<stdio.h>
int main() {
    int a,b,c,d;
    int z,y,rom;
    printf("enter the fraction you want to add in form of x/y+a/b:");
    scanf("%d/%d+%d/%d",&a,&b,&c,&d);
    z=a*c+b*d;
    y=b*d;
    printf("sum is %d/%d \n ",z,y);
    rom=z/y;
    printf("final ans:%d",rom);
    return 0;
}