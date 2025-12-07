// WAP TO PRINT N NATURAL NATURL NUMBERS
#include <stdio.h>
int main()                  
{  
    int n, i=1;
    printf("Enter a positive integer: ");  
    scanf("%d", &n);  
    printf("First %d natural numbers are: \n", n);  
    while(i <= n)  
    {  
        printf("%d\n", i);  
        i++;  
    }  
    return 0;  
}                                           