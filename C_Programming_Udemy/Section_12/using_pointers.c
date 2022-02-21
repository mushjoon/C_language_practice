#include <stdio.h>

int main()
{
    // 1) you can assign an address to a pointer
    // 2) you can dereference a pointer which gives the value stored in the address that the pointer is pointing to
    // 3) you can take a pointer's OWN address
    // 4) perform pointer arithmetic (useful in arrays)
    // 5) you can find how far apart two pointers are by calculating the difference b/t those two
    // 6) compare the values of two pointers

    long num1 = 0L;
    long num2 = 0L;
    long *pNum = NULL;

    pNum = &num1;
    *pNum = 2L;     // set num1 to 2
    ++num2;
    num2 += *pNum;

    pNum = &num2;
    ++*pNum;

    printf("num1 = %ld num2 = %ld *pNum = %ld *pnum + num2 = %ld\n", num1, num2, *pNum, *pNum + num2);

    printf("==========================================================\n");

    int value = 0;
    int *pValue = &value;

    printf("Input an integer:");
    scanf(" %d", pValue);

    printf("\nYou entered %d\n", value);

    return 0;
}