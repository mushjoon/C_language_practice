#include <stdio.h>

int main()
{
    int arr[3] = {15, 16, 17};

    printf("%p\n", arr);
    printf("%d\n", arr[0]);

    int *ptr = arr; // what is pointed by the pointer is the first element of the array
    *ptr = 2;
    printf("%d\n", arr[0]);

    * (ptr + 1) = 3;
    printf("%d\n", arr[1]);


    return 0;
}