#include <stdio.h>
#include <stddef.h>

int main()
{
    // pointer is a variable whose value is a memory address
    // its value is the address of another location in memory that can contain a value
    // below is how you declare a pointer

    int * pnumber = NULL; // type of the variable is int and it can store the address of any variable of int type
    int * pi = NULL;    // pointer to an int variable
    char * pc = NULL;   // char variable
    float * pf, * pg = NULL; // pointers to float variables

    // the space b/t the * and the pointer name is optional. just omit the space when dereferencing a variable
    // %p = format specifier for pointers
    // you should always initialize a pointer when you declare it

    int myNumber = 99;
    int *pMyNumber = &myNumber;

    return 0;
}