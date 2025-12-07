#include<stdio.h>
int main(){
    float c_marks,genAI_marks,sum;
    printf("Enter the marks of subject \n: ");
    scanf("%f%f",&c_marks,&genAI_marks);
    sum=(30.0/100)*c_marks+(70.0/100)*genAI_marks;
    printf("the sum of %.2f and %.2f=%.2f",c_marks,genAI_marks,sum);
    return 0;
}