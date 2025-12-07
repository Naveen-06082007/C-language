//WAP to print digit  of number
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number -->");
    scanf("%d",&num);
    while(num>0){
        int digit=num%10;
        printf("%d\n",digit);
        num=num/10;
    }
    return 0;
}
