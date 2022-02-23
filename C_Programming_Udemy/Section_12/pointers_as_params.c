#include <stdio.h>

void square(int *num);

int main()
{
    int num1 = 5;
    int num2 = 10;
    int num3 = 8;

    printf("Before square: %d\n", num1);
    printf("Address: %p\n", &num1);
    square(&num1);
    printf("After square: %d\n", num1);

    printf("Before square: %d\n", num2);
    printf("Address: %p\n", &num2);
    square(&num2);
    printf("After square: %d\n", num2);

    printf("Before square: %d\n", num3);
    printf("Address: %p\n", &num3);
    square(&num3);
    printf("After square: %d\n", num3);

    return 0;
}

void square(int *num)
{
    printf("Address of the pointer param: %p\n", num);
    *num *= *num;

    return;
}