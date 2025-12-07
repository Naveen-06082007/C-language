#include <stdio.h>

struct student {
    char name[40];
    int age;
    unsigned long mobile;
};

int main() 
{
    struct student std;
    printf("Enter name: ");
    fgets(std.name, 40, stdin);
    printf("Enter age: ");
    scanf("%d", &std.age);
    printf("Enter mobile: ");
    scanf("%lu", &std.mobile);


    printf("Student name: %s\n", std.name);
    printf("Student age: %d\n", std.age);
    printf("Student mobile: %lu\n", std.mobile);
    return 0;
}


