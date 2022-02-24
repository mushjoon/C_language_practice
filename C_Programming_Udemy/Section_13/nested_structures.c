#include <stdio.h>
#include <stdlib.h>

int main()
{

    struct time
    {
        int hours;
        int minutes;
        int seconds;
    };

    struct date
    {
        int month;
        int date;
        int year;
    };

    struct dateAndTime
    {
        struct date sdate;
        struct time stime;
    };

    struct dateAndTime event;

    event.sdate.month = 10;
    event.stime.seconds++;

    // initialize dateAndTime

    struct dateAndTime myEvent = {
        {.month = 2, .date = 1, .year = 2015},
        {.hours = 3, .minutes = 30, .seconds = 10}};

    // you can also define the DATE structure inside the TIME structure definition
    /*
    struct Time
    {
        struct Date
        {
            int day;
            int month;
            int year;
        } dob;

        int hour;
        int minutes;
        int seconds;
    };
    */

    return 0;
}