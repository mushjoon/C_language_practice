#include <stdio.h>

int main() {

    char myString[100] = {0};
    int myInt;

    printf("Please enter the string and an integer:\n");
    scanf("%s %d", myString, &myInt);

    printf("\nYou entered %s and %d", myString, myInt);

    return 0;
}