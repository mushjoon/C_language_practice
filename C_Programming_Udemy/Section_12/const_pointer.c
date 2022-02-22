#include <stdio.h>

int main()
{
    // There are 3 ways to use const with pointer
    // 1st: keep the value pointed to as constant
    // You can change the address stored in the pointer as much as you like
    // using the pointer to change the value pointed to is NOT allowed even after you changed the address stored in the pointer

    long value = 9999L;
    const long *pValue = &value; // this is how you keep the value that the pointer is pointing to constant

    // 2nd: keep the address pointed to as constant

    int count = 43;
    int *const pcount = &count;

    // 3rd: both the target value and target address are constant

    int item = 25;
    const int *const pItem = &item;

    // conclusion
    // const int *pointerName   <== target value is constant
    // int *const pointerName   <== target address is constant
    // const int *const pointerName     <== both value and address is constant

    return 0;
}