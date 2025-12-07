#include<stdio.h>
int main() {
    FILE *fptr;

    // Open a file in writing mode
    fptr = fopen("C:\\Test\\file.txt", "a");

    // Write some text to the file
    fprintf(fptr,"\nThis is the sec line on the file handling i want to append it form the append function");

    // Close the file
    fclose(fptr);

    return 0;
}