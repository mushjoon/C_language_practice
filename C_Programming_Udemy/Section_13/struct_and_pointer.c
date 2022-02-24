#include <stdio.h>
#include <stdlib.h>

int main()
{
    // you can define a variable to be a pointer to a struct
    struct date
    {
        int month;
        int day;
        int year;
    };

    struct date todaysDate = {2, 24, 2022};

    struct date *datePtr;

    datePtr = &todaysDate;

    printf("Today's date: %d\n", (*datePtr).day);

    // instead of writing *pointer.someVar, you can simply write is like this:
    printf("Today's month: %d\n", datePtr->month);

    ///////////////////// pointers inside struct ////////////////////////////
    printf("///////////////////// pointers inside struct ////////////////////////////\n");

    struct intPtrs
    {
        int *p1;
        int *p2;
    };

    struct intPtrs myPointers;
    int i1 = 100, i2;

    myPointers.p1 = &i1;
    myPointers.p2 = &i2;
    *myPointers.p2 = -97;

    printf("i1 = %i, *myPointers.p1 = %i\n", i1, *myPointers.p1);
    printf("i2 = %i, *myPointers.p2 = %i\n", i2, *myPointers.p2);


    /////////////////////// char arrays or char pointers? ///////////////////////////

    /*
    strings are stored inside the struct
    struct has allocated a total of 40 bytes to hold the two names (if we define char firstName[20] and char lastName[20])

    the pointers in a pNames struct should be used only to manage strings that were created and allocated elsewhere in the program
    struct of pointers holds the two addresses which takes total of 16 bytes. 
    */

    return 0;
}