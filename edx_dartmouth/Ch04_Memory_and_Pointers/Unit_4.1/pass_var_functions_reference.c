#include <stdio.h>

void add(int, int, int *);

int main()
{
    int a, b, sum;
    printf("Enter two integers: ");
    scanf("%d%d", &a, &b);
    add(a, b, &sum);

    printf("%d + %d = %d\n", a, b, sum);

    return 0;
}

void add(int x, int y, int *pSum)
{
    *pSum = x + y;
    printf("Added numbers in the function!\n");
}