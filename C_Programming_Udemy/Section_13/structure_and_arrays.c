#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct date
    {
        int month;
        int date;
        int year;
    };
    
    // initializing an array of structs
    struct date myDate[5] = {{12, 10, 1975}, {12, 30, 1980}, {11, 15, 2005}};

    struct month
    {
        int numberOfDays;
        char name[3];
    };
    
    struct month aMonth;
    aMonth.numberOfDays = 31;
    aMonth.name[0] = 'J';
    aMonth.name[1] = 'a';
    aMonth.name[2] = 'n';

    return 0;
}