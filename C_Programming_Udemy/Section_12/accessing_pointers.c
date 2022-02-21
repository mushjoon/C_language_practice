#include <stdio.h>

int main()
{
    int number = 15;
    int *pNumber = &number;
    int result = 0;

    result = *pNumber + 5;

    printf("Result: %d\n", result);
    printf("Pointer's value in hexadecimal form: %p\n", pNumber);

    printf("number's address: %p\n", &number);
    printf("pNumber's address: %p\n", (void*)&pNumber);

    int myNum = 0;
    int *pMyNum = NULL;

    myNum = 10;
    printf("MyNum's address: %p\n", &myNum);
    printf("MyNum's value: %d\n\n", myNum);

    pMyNum = &myNum; // store the address of myNum in pMyNum

    printf("pMyNum's address: %p\n", (void*)&pMyNum);
    printf("pMyNum's size: %zd bytes\n", sizeof(pMyNum));
    printf("pMyNum's value: %p\n", pMyNum);
    printf("value pointed to: %d\n", *pMyNum);

    return 0;
}