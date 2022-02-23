#include <stdio.h>
#include <stdlib.h>

int main()
{
    // this is how you define a structure
    struct date
    {
        int month;
        int day;
        int year;
    };

    // declare a struct variable
    struct date today;
    struct date purchaseDate;

    // structure variable name is not a pointer
    // to set the value of the variable "today":

    today.month = 2;
    today.day = 23;
    today.year = 2022;

    printf("Today's date is %i/%i/%.2i.\n", today.month, today.day, today.year % 100);

    // initialize struct

    struct date myDate = {.month = 9, .day = 11, .year = 2020};

    return 0;
}