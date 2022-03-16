#include <stdio.h>

void addThree(int *);
void multiplyThree(int *);

int main()
{
    int a = 5;
    printf("Inside main, value of a: %d\n", a);

    addThree(&a);
    printf("Inside main, after addThree(): %d\n", a);

    multiplyThree(&a);
    printf("Inside main, after multiplyThree(): %d\n", a);

    return 0;
}

void addThree(int *a)
{
    *a += 3;
    printf("Inside addThree(), value of a: %d\n", *a);
}

void multiplyThree(int *a)
{
    *a *= 3;
    printf("Inside multiplyThree(), value of a: %d\n", *a);
}