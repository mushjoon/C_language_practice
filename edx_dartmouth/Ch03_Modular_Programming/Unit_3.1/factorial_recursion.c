#include <stdio.h>

int factorial(int);

int main()
{
    // n! = 1 * 2 * 3 * ... * (n-1) * n
    int n, facto;

    printf("Enter your integer: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("%d is negative int! Aborting...\n", n);
    }
    else
    {
        facto = factorial(n);
        printf("%d! = %d", n, facto);
    }
    
    return 0;
}

int factorial(int n)
{
    int result;
    
    if (n == 0)
    {
        result = 1;
    }
    else
    {
        result = n * factorial(n-1);
    }

    return result;
}