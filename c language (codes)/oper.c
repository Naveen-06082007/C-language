//increment and decremment operators
//in c program the increment and decrement operators can be used as prefix and post fix only to variable
#include<stdio.h>
int main(){
    int n=10;
    int x=++n;
    int y=n++;
    printf("the value of x --> %d \n",x);
    printf("the value of y --> %d \n",y);
    printf("%d",n);
    return 0;

}