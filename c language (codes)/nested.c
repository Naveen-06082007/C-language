// WAP to checck you are indan if yes then check your ageif age is greater than 18 then you are 
#include<stdio.h>
int main()
{
    char c;
    int age;
    printf("Enter character 'I' if your are indian-->");
    scanf("%c",&c);;
    if(c=='I'||c=='i')
    {
        printf("Great! Enter your age-->");
    
        scanf("%d",&age);
        if(age>=18)
        {
            printf("the age is %d and your eligible for vote",age);
        }
            else
            {
                printf("You are not eligible for vote");
            }
        }
        else 
        {
            printf("You are not indian");
        }
        return 0;
    }