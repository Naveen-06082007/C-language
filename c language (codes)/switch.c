// #include <stdio.h>
// int main(){
//     int day;
//     printf("Enter the value of day (1-7) -->");
//     scanf("%d",&day);
//     if(day==1)
// printf("Monday");
//     else if(day==2)
//     printf("Tuesday");
//     else if(day==3)
//     printf("Wednesday");
//     else if(day==4)
//     printf("Thursday");
//     else if(day==5)
//     printf("Friday");
//     else if(day==6)
//     printf("Saturday");
//     else if(day==7)
//     printf("Sunday");
//     else
//     printf("Invalid day number");
//     return 0;
// }


// #include <stdio.h>
// int main() {
//     int day;
//     printf("Enter the value of day (1-7) -->");
//     scanf("%d", &day);
//     switch (day) {
//         case 1:
//             printf("Monday");
//             break;
//         case 2:
//             printf("Tuesday");
//             break;
//         case 3:
//             printf("Wednesday");
//             break;
//         case 4:
//             printf("Thursday");
//             break;
//         case 5:
//             printf("Friday");
//             break;
//         case 6:
//             printf("Saturday");
//             break;
//         case 7:
//             printf("Sunday");
//             break;
//     }
//     return 0;
// }



#include <stdio.h>
int main() {
    char color;
    printf("enter the value of color -->");
    scanf("%c", &color);
    switch (color) {
        case 'R':
            printf("Red");
            break;
        case 'B':
            printf("Blue");
            break;
        case 'G':
            printf("Green");
            break;
        case 'Y':
            printf("Yellow");
            break;
        case 'L':
            printf("Black");
            break;
        case 'W':
            printf("White");
            break;
        default:
            printf("Invalid color");
            break;
    }
    return 0;
}