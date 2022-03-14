// Fibonacci numbers: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 ...
#include <stdio.h>

int fibonacci(int);

int main()
{
    int N, fib;
    printf("Which fibonacci number would you like?: ");
    scanf("%d", &N);
    if (N <= 0)
    {
        printf("The number is not positive integer! Aborting...");
    }
    else
    {
        fib = fibonacci(N);
        printf("The %dth fibonacci number is %d\n", N, fib);
    }

    return 0;
}

int fibonacci(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        return (fibonacci(n - 1) + fibonacci(n - 2));
    }
}