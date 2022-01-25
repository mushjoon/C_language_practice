#include <stdio.h>

void printAge(int *pAge) {

    printf("You are %d years old\n", *pAge); //dereference
}


int main()
{

    // pointer = a "variable-like" reference that holds a memory address to another variable, array, etc.
    //          some tasks are performed more easily with pointers
    //          * = indirection operator (value at address)

    /*

    ADVANTAGES OF USING POINTERS
    1. Less time in program execution
    2. Working on the original variable
    3. With the help of pointers, we can create data structures (linked-list, stack, queue)
    4. Returning more than one values from functions
    5. Searching and sorting large data very easily
    6. Dynamic memory allocation

    */

    int age = 21;

    // NOW LET'S MAKE A POINTER! But we have to keep the data type the same as the original target variable
    // Good practice to assign NULL if declaring a pointer
    int *pAge = NULL;
    pAge = &age;

    // printf("Address of age: %p\n", &age);
    // printf("Address of pAge: %p\n", pAge);

    // printf("Size of age: %d bytes\n", sizeof(age));
    // printf("Size of age: %d bytes\n", sizeof(pAge));

    // printf("Value of age: %d\n", age);
    // printf("Value at stored address: %d\n", *pAge); // dereferencing a pointer... basically extracting the value of this stored address

    printAge(pAge);

    return 0;
}