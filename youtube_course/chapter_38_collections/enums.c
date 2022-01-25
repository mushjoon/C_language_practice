#include <stdio.h>

enum Day
{
    Sun = 1,
    Mon = 2,
    Tue = 3,
    Wed = 4,
    Thu = 5,
    Fri = 6,
    Sat = 7
};

int main()
{

    // enum = short for enumeration. a user defined type of named integer identifiers
    //        helps to make a program more readable

    enum Day today = Sun; // when working with enums, you gotta treat them as integers NOT strings

    //printf("%d\n", today); // enums ARE NOT strings

    if (today == Sun || today == Sat)
    {
        printf("It's the weekend!!! Party time!!!");
    }
    else
    {
        printf("I gotta work....");
    }

    return 0;
}