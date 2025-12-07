// #include <stdio.h>
// int main()
// {
//     char c;
//     printf("Enter any character-->");
//     scanf("%c",&c);
//     printf("The ASCEII value of character %c is %d",c,c);
//     return 0;
// }



// #include <stdio.h>
// int main()
// {
//     float f;
//     printf("Enter any character-->");
//     scanf("%f",&f);
//     int c = (int)f;
//     printf("The ASCEII value %f of character %d",f,c);
//     return 0;
//     }




//writ a program to check character is vowel or consonant
#include <stdio.h>
int main()
{
char c;
printf("enter any character-->");
scanf("%c",&c);
if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
	printf("vowel");
else
	printf("consonant");
return 0;
}


