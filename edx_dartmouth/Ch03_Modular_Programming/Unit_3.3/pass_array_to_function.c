#include <stdio.h>

void reset(int *);

int main()
{
    int arr[3] = {15, 16, 17};
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    reset(arr);
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

void reset(int *ptr)
{
    for (int i = 0; i < 3; i++)
    {
        *(ptr + i) = 0;
    }
}