#include <stdio.h>
int main()
{
    int row;
    printf("Enter number of rows: ");
    scanf("%d", &row);
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
return 0;
}


// #include <stdio.h>
// int main()
// {
//     int i;
//     for(i=1; i<=2; i++)
//     {
//         printf("shoolini\n");
//         for(int j=1; j<=2; j++)
//         {
//             printf("btech cse\n");
//             for(int k=1; k<=1;)
//             {
//                 printf("c programming");
//                 k++;
//             }       
//         }
//     }
//     return 0;
// }