//write a program to check whether a number is even
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number -->");
    scanf("%d",&num);
    if(num%2==0)
    printf("%d is even nummber",num);
    return 0;
}