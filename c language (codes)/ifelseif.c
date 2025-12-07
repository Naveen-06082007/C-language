//WAP to check whether a number is positive, negative or zero
#include<stdio.h>
int main(){
    int x;
    printf("Enter the number -->");
    scanf("%d",&x);
    if(x>0)
    printf("%d is positive number",x);
    else if(x<0)
    printf("%d is negative number",x);
    else
    printf("The number is zero");
    return 0;
}



