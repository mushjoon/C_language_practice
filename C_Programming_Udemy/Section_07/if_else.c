#include <stdio.h>

int main()
{

    int number, remainder;

    printf("Enter the number to be tested:");
    scanf("%d", &number);

    remainder = number % 2;

    if (remainder == 0)
    {
        printf("The number is even");
    }
    else
    {
        printf("The number is odd");
    }

    return 0;
}