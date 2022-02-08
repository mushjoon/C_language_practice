// int matrix[4][5]  <== This 2d array has 4 rows and 5 columns. It can contain 20 elements
#include <stdio.h>

int main()
{

    int myMatrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6},
    };

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Element at row %zu column %zu: %d\n", i, j, myMatrix[i][j]);
        }
    }
}