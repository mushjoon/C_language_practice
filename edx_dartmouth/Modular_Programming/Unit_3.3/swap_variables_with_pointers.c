#include <stdio.h>

void swap(int *, int *);

int main()
{
    int a = 9;
    int b = 1;

    int *ptrA = &a;
    int *ptrB = &b;

    swap(ptrA, ptrB);

    printf("%d %d\n", a, b);

    return 0;
}

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}