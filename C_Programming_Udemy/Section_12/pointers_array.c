#include <stdio.h>

int main()
{
    // you have an array of 100 int
    
    int values[100];

    int *valuesPtr;

    // when you define a pointer that's used to point to the elements of an array
    // you do not designate the pointer as type "pointer to entire array"

    // to set valuesPtr to point to the first element in the values array, you write like below
    valuesPtr = values; 

    // or 
    valuesPtr = &values[0];

    return 0;
}