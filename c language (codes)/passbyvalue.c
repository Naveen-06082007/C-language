// **pass by value**
#include <stdio.h>
void swap(int* x,int* y) {
    int temp ;
    temp = *x;
    *x = *y;
    *y = temp;
}
// int main() 
// {
//     int a =20;
//     int b =30;
//     swap(&a,&b);
//     printf("The value of a is --->%d\nAnd the value of b ---> %d",a,b);
//     return 0;
// }
 #include <stdio.h>
int main() 
{
    int a=20 , b=30 ;
    int *vsa=&b ;
    int *vsb=&a ;
    printf("the value of a , b are %d %d",*vsa,*vsb);
     return 0;
}