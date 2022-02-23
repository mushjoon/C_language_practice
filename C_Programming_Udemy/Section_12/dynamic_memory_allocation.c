#include <stdio.h>
#include <stdlib.h>

int main()
{
    // whenever you define a variable in C, the compiler automatically allocates the correct amount of storage for you based on the data type
    // if you have a program that reads data from a file into an array in memory you have 3 choices:
    // 1) define an array with the fixed max num of elements
    //      => int dataArray[1000]
    //      if the file is larger than 1000, then the program breaks and you gotta fix it.
    // 2) variable-length array to dimension the size of the array at runtime
    // 3) BEST => allocate the array dynamically using C's memory allocation routines

    // Heap vs Stack
    /*
    Dynamic memory allocation reserves space in a memory area called the heap
    Heap:
        - YOU keep track of when the memory you allocated is no longer required
        - you must free the space you allocated to allow it to be reused after using it
    Stack is another place where memory is allocated
        - function args and local var in a function are stored here
        - when the execution of a function ends, the space allocated to store args and local var is freed
        - you don't control the stack. it gets auto-created and auto-deleted
    */

    //int *pNumber = (int*)malloc(100);
    // in the example above you request 100 bytes of memory
    // pNumber will point to the first int location at the start of 100 bytes
    // can hold 25 values cuz int = 4 bytes (4 x 25 = 100)
    // data type size is gonna be different depending on the system
    // but there's a better way to use malloc

    int *pNumber = (int*)malloc(25 * sizeof(int));
    // malloc returns a pointer type of void, so you gotta cast it
    // if the memory that you requested cannot be allocated, malloc() returns a pointer with NULL value
    if(!pNumber)
    {
        // code to deal with memory allocation failure...
    }

    // YOU SHOULD ALWAYS RELEASE THE MEMORY WHEN IT'S NO LONGER REQUIRED!!!!!
    free(pNumber);
    pNumber = NULL;

    // calloc()
    // allocates memory as a number of elements of a given size
    // initializes the memory so that all bytes are zero

    int *pNumber = (int*)calloc(75, sizeof(int));

    // realloc()
    // allows you to reuse or extend the memory that you previously allocated using malloc or calloc
    // two args:
    //      1) pointer with an address that was previously returned by a call to malloc or calloc
    //      2) the size in bytes of the new memory to be allocated

    return 0;
}