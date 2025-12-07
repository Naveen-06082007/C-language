// WAP to sawp two numbers
#include <stdio.h>
void swap(int x,int y)
{
    int temp;
    printf("before swappping x=%d y=%d\n",x,y);
    temp=x;
    x=y;
    y=temp;
    
    printf("after swapping x=%d y=%d\n",x,y);
}
int main()
{
    int a,b;
    printf("enter two numbers-->");
    scanf("%d%d",&a,&b);
    printf("before swappping a=%d b=%d\n",a,b);
    swap(a,b);
    printf("after swapping a=%d b=%d\n",a,b);
    return 0;
}