#include <stdio.h>

int main()
{
    int number = 17;
    int *pNumber = NULL;
    pNumber = &number;

    printf("number's address: %p\n\n", &number);

    printf("pNumber's own address: %p\n", (void *)&pNumber);
    printf("pNumber's value: %p\n", pNumber);
    printf("the value that pNumber is pointing: %d\n\n", *pNumber);

    return 0;
}