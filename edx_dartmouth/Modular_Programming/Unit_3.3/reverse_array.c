/*
Within this program, we will pass an array with 6 integers to a function, 
have the function swap the first and last integer, the second and the second to last integer, the third and the third to last integer.

The function is called reverseArray and doesn't return anything (void). It should take one parameter, representing the array of integers. 

The main function first reads 6 integers from the input, and assigns them to the array. The main function then calls reverseArray, passing the array as an argument.

The main function then prints the reversed array.
*/

#include <stdio.h>

void reverseArray(int *);

int main()
{
    int myArray[6];

    for (int i = 0; i < 6; i++)
    {
        scanf("%d", myArray[i]);
    }
    
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", myArray[i]);
    }
    

    return 0;
}

void reverseArray(int *ptrArr)
{

    for (int i = 0; i < 6; i++)
    {
        for (int j = 5; j >= 0; j--)
        {
            /* code */
            int tmp = *(ptrArr + i);
            *(ptrArr + i) = *(ptrArr + j);
            *(ptrArr + j) = tmp;
        }
    }
    
}