// To check whether  person is indian and eligible fro vote or not
#include<stdio.h>
int main()
{
    char c;
    int age;
    printf("Enter chararcter 'I' or 'i' if you are Indian: ");
    scanf("%c", &c);
    if(c == 'I' || c == 'i'){
        printf("Great! Enter your age: ");
        scanf("%d", &age);
        if(age>=18){
            printf("The age is %d and you are eligible for vote", age);
        }
    
        else{
           printf("You are under age");
    }
}
    else{
        printf("You are not Indian");
    }
    return 0;
}





// WAP to check week using switch statement
#include<stdio.h>
int main()
{
    int day;
    printf("Enter the number between 1-7: ");
    scanf("%d", &day);
    switch(day)
    {
        case 1:
        printf("Monday"); 
        break;
        case 2:
        printf("Tuesday"); 
        break;
        case 3:
        printf("Wednesday"); 
        break;
        case 4:
        printf("Thursday"); 
        break;
        case 5:
        printf("Friday"); 
        break;
        case 6:
        printf("Saturday"); 
        break;
        case 7:
        printf("Sunday"); 
        break;
        default:
        printf("Invalid day number"); 
        break;
    }
    return 0;
}




// To demonstrate post increment and Pre increment
#include<stdio.h>
int main()
{
    int n = 10;
    int x = n++;
    printf("The value of n = %d\n",n);
    int y = ++n;
    printf("The value of x = %d\n",x);
    printf("The value of y = %d\n",y);
    return 0;
}




// WAP to calculate weightage of marks of A,C marks
#include<stdio.h>
int main()
{
    int C_marks, A_marks, div;
    printf("Enter the value of the subject\n");
    scanf("%d %d", &C_marks, &A_marks);
    div = C_marks/A_marks;
    printf("The Division of %d and %d is %d\n", C_marks, A_marks, div);
    return 0;
}


// WAP to search index in array
#include <stdio.h>
#define MAXSIZE 100
int main(){
    int n,element,a[MAXSIZE],i,ind;
    printf("Enter the number of element: ");
    scanf("%d", &n);
    printf("Enter the array element: ");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter the index to search: ");
    scanf("%d", &ind);
    if(ind>=0 && ind<n){
        printf("Enter the index %d is %d\n", ind,a[ind]);
    }
    else{
        printf("Invalid index\n");
    }
    return 0;
}



// wap to print min and max number in array
#include <stdio.h>
int main()
{
    int a[] = {8, 10, 2, 4, 5, 7};
    int n = sizeof(a) / sizeof(a[0]);
    int i, size;
    int max = a[0];
    int min = a[0];
    for(i=0; i<n; i++){
        if(max<a[i]){
            max = a[i];
        }
        if(min>a[i]){
            min = a[i];
        }
    }
    printf("Maximum Number: %d\n", max);
    printf("Minimum number: %d\n", min);
    return 0;
}


// To print Right anlged number pattern 
#include <stdio.h>
int main()
{
    int row, i, j, num = 1;
    printf("Enter the number of row: ");
    scanf("%d", &row);
    printf("\nRight angled triangle patter:\n");
    for(i=1; i<=row; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}


// To no. is +ve,-ve or 0
#include<stdio.h>
int main()
{
    int x;
    printf("Enter any number:");
    scanf("%d", &x);
    if(x>0) {
    printf("The %d is positive\n", x);
    }
    else if(x<0) {
    printf("The %d is negative\n", x);
    }
    else {
        printf("The %d is zero", x);
    }
    return 0;
}


// To calculate weightage of marks
#include<stdio.h>
int main()
{
    float C_marks, GenAI_marks, sum;
    printf("Enter marks of subjects\n");
    scanf("%f %f", &C_marks, &GenAI_marks);
sum = ((float)30.0/100.0)*C_marks + ((float)70.0/100.0)*GenAI_marks;
printf("The sum of %f and %f = %f", C_marks, GenAI_marks, sum);
}



// Array input and output
#include <stdio.h>
#define MAXSIZE 100
int main() {
    int n, i, a[MAXSIZE];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Array elements are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}



// To check color using switch
#include<stdio.h>
int main()
{
    char color;
    printf("Enter the first letter of the color:");
    scanf(" %c", &color);
    switch(color)
    {
        case 'R':
        case 'r':
            printf("Red");
            break;
        case 'G':
        case 'g':
            printf("Green");
            break;
        case 'B':
        case 'b':
            printf("Brown");
            break;
        case 'Y':
        case 'y':
            printf("Yellow");
            break;
        case 'C':
        case 'c':
           printf("Cyan");
           break;
        default:
           printf("Invalid color name");
    }
     return 0;
}



//  TO calculate salary
#include<stdio.h>

int main()
{
    float ts, bs, da, ta, hra;

    printf("Enter the basic salary: ");
    scanf("%f", &bs);

    if(bs < 35000)
    {
        da = bs * 0.05;
        ta = bs * 0.02;
        hra = bs * 0.04;
        ts = bs + da + ta - hra;

        printf("Basic Salary = %.2f\n", bs);
        printf("DA (5%%) = %.2f\n", da);
        printf("TA (2%%) = %.2f\n", ta);
        printf("HRA (4%%) = %.2f\n", hra);
        printf("Total Salary = %.2f\n", ts);
    }
    else if(bs >= 35000 && bs <= 80000)
    {
        da = bs * 0.04;
        ta = bs * 0.03;
        hra = bs * 0.05;
        ts = bs + da + ta - hra;

        printf("Basic Salary = %.2f\n", bs);
        printf("DA (4%%) = %.2f\n", da);
        printf("TA (3%%) = %.2f\n", ta);
        printf("HRA (5%%) = %.2f\n", hra);
        printf("Total Salary = %.2f\n", ts);
    }
    else
    {
        da = bs * 0.05;
        ta = bs * 0.03;
        hra = bs * 0.07;
        ts = bs + da + ta - hra;

        printf("Basic Salary = %.2f\n", bs);
        printf("DA (5%%) = %.2f\n", da);
        printf("TA (3%%) = %.2f\n", ta);
        printf("HRA (7%%) = %.2f\n", hra);
        printf("Total Salary = %.2f\n", ts);
    }

    return 0;
}




// WAP to print largest of two numbers
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if(a > b)
        printf("Largest = %d", a);
    else
        printf("Largest = %d", b);

    return 0;
}



// swap two numbers using swap
#include <stdio.h>

int main() {
    int a = 5, b = 10, temp;
    temp = a;
    a = b;
    b = temp;

    printf("a = %d, b = %d", a, b);
    return 0;
}




// Factorial of a number
#include <stdio.h>

int main() {
    int n, fact = 1;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
        fact *= i;

    printf("Factorial = %d", fact);
    return 0;
}




// WAP to check whether a number is prime or not
#include <stdio.h>

int main() {
    int n, flag = 1;
    scanf("%d", &n);

    for(int i = 2; i <= n/2; i++) {
        if(n % i == 0) {
            flag = 0;
            break;
        }
    }

    if(flag && n > 1)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}



// WAP to reverse a number
#include <stdio.h>

int main() {
    int n, rev = 0;
    scanf("%d", &n);

    while(n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    printf("Reverse = %d", rev);
    return 0;
}



// WAP to palindrome a number
#include <stdio.h>

int main() {
    int n, temp, rev = 0;
    scanf("%d", &n);
    temp = n;

    while(n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    if(temp == rev)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}


// Array input and output
#include <stdio.h>

int main() {
    int arr[5];

    for(int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    for(int i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    return 0;
}



// To check string length without strlen
#include <stdio.h>

int main() {
    char str[50];
    int count = 0;

    scanf("%s", str);

    while(str[count] != '\0')
        count++;

    printf("Length = %d", count);
    return 0;
}



// WAP to build a simple calculator using switch
#include <stdio.h>

int main() {
    int a, b;
    char op;
    scanf("%d %c %d", &a, &op, &b);

    switch(op) {
        case '+': printf("%d", a + b); break;
        case '-': printf("%d", a - b); break;
        case '*': printf("%d", a * b); break;
        case '/': printf("%d", a / b); break;
        default: printf("Invalid Operator");
    }

    return 0;
}



