#include <stdio.h>

int main()
{
    int array[] = {6, 2, -4, 8, 5, 1};
    int *ptr, *ptr2;

    printf("Array contains %d, %d, ..., %d\n", array[0], array[1], array[5]);
    printf("These are stored at %p, %p, ..., %p\n", &array[0], &array[1], &array[5]);

    // array == &array[0]
    printf("Array's address: %p\n", array);

    ptr = array;
    ptr2 = &array[0];

    printf("%p\n", ptr);
    printf("%p\n", ptr2);

    printf("\n===================================\n");

    *ptr = 10;
    *(ptr + 1) = 56;
    *(ptr + 2) = -77;

    for (int i = 0; i < 6; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n===================================\n");
    *array = 3;
    *(array + 1) = 10;
    *(array + 2) = 99;

    for (int i = 0; i < 6; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}