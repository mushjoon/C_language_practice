#include <stdio.h>

int sum(int, int);

int main(void)
{
    int a,b;
    printf("Please enter two numbers:\n");
    scanf("%d%d", &a, &b);
    printf("You entered %d and %d\n", a, b);

    printf("Sum: %d", sum(a, b));

    return 0;
}

int sum(int num1, int num2)
{
    return num1 + num2;
}
