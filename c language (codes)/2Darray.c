#include<stdio.h>
int main()
{
    int rows,cols;
    printf("Enter number of rows and columns: ");
    scanf("%d",&rows,&cols);
    int arr[rows][cols];
    printf("Enter elements in 2d array fromation:");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            printf("Element [%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    return 0;
}   
    