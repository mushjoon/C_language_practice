#include <stdio.h>
int main(void)
{
    // sorting from smallest to largest

    int list[] = {759, 14, 2, 900, 106, 77, -10, 8, -3, 5}; /* unsorted list */
    int n = 10;
    int i, j;
    int temp;

    for (j = 0; j < n - 1; j++)
    {
        for (i = 0; i < n - 1; i++)
        {
            if (list[i] > list[i + 1])
            {
                temp = list[i];
                list[i] = list[i + 1];
                list[i + 1] = temp;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", list[i]);
    }

    return 0;
}
