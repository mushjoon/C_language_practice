#include <stdio.h>

void swap(int *a, int *b);

int main()
{
    // pass by value is when a function copies the actual value of an argument into the formal parameter of the function
    // changes made to the parameter inside the function have no effect on the argument

    // pass by reference copies the address of an argument into the formal parameter
    // the address is used to access the actual argument used in the call
    // this means the changes made to the parameter affect the passed args

    int a = 100;
    int b = 200;

    printf("Before the swap, value of a: %d\n", a);
    printf("Before the swap, value of b: %d\n", b);

    printf("\n========== swap ============\n");
    swap(&a, &b);

    printf("After the swap, value of a: %d\n", a);
    printf("After the swap, value of b: %d\n", b);
        
    return 0;
}

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;

    return;
}