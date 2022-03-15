#include <stdio.h>

int main()
{
    double a = 42.98;
    double *pA = &a;

    printf("At the address of %p there is a value of %.2lf\n", pA, *pA);

    char c = 'm';
    char *pC = &c;
    char d = *pC;

    *pA = 32;
    *pA += 1;

    printf("At the address of %p there is a value of %.2lf\n", pA, *pA);

    return 0;
}