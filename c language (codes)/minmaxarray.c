#include<stdio.h>
int main()
{
    int a[7] = {10,11,12,13,14,15,16};
    int max = a[0];
    int min = a[0];
    for(int i=0; i<7; i++)
{
    if(max<a[i])
    {
        max=a[i];
    }
    if(min>a[i])
    {
        min=a[i];
    }
}
    printf("%d,%d",min,max);
    return 0;
}  