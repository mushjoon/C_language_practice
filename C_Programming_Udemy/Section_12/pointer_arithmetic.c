#include <stdio.h>

int main()
{
    // the real power of pointers to arrays => sequencing thru the array's elements
    // to reference values[3] with the valuesPtr pointer, you can add 3 to valuesPtr and the apply the indirection operator
    int values[100];

    int *valuesPtr;

    valuesPtr = values;

    *(valuesPtr + 3);

    // to set values[10] as 27, you do this:
    *(valuesPtr + 10) = 27;

    // if valuesPtr points to values[0] and you wanna set it to point to values[1], you do this:
    valuesPtr += 1;

    return 0;
}