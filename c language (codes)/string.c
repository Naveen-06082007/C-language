// WAP to print a string using puts() function.
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[100];
//     printf("Enter any string: ");
//     fgets(str, sizeof(str), stdin);
//     puts(str);
//     return 0;
// }


// WAP to prnit the length of string without using strlen() function.
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char s[100];
//     int count = 0;
//     printf("Enter any string: ");
//     scanf("%s", s);
//     for(int i=0; s[i] != '\0'; i++)
//     {
//         count++;
//     }
//     printf("size %d\n", count);
//     return 0;   

// }



// WAP to merge two string into one string
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100], str1[100];
    printf("Enter first string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter second string: ");
    fgets(str1, sizeof(str1), stdin);
    strcat(str, str1);
    printf("Merged string: %s", str);
    return 0;
}
   