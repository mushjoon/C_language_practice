/*
A delivery company has hired you to manage their tracking services division.
It is your job to store all of the currently used tracking codes in the company's database.
These codes consist of either all integers, all decimal numbers, or all characters.
The chief technology officer has warned you that the database is old and has limited space,
so you want to determine how much memory the tracking codes will occupy before storing them.
You decide to write a program to assist you in this process.

Your program should first read an integer number indicating how many tracking codes you plan on entering.
Next, for each successive tracking code your program should read in the integer length of code followed by a space and then the type of code
('i' for integer, 'd' for decimal, or 'c' for character).
Finally your program should print the total amount of space required to store all of the tracking codes (in bytes).
If the user enters an incorrect type for any tracking number, the program should print 'Invalid tracking code type' and exit.
*/

#include <stdio.h>

int getSpace(int, char);

int main()
{
    int sum = 0;
    int count = 0;
    scanf("%d", &count);

    for (int i = 0; i < count; i++)
    {
        int num = 0;
        char dataType;
        scanf("%d %c", &num, &dataType);
        if (getSpace(num, dataType) == -1)
        {
            sum = -1;
            break;
        }
        else
        {
            sum += getSpace(num, dataType);
        }
    }

    if (sum == -1)
    {
        printf("Invalid tracking code type\n");
    }
    else
    {
        printf("%d bytes\n", sum);
    }

    return 0;
}

int getSpace(int num, char type)
{
    int bytes = 0;

    if (type == 'i')
    {
        bytes = num * sizeof(int);
    }
    else if (type == 'd')
    {
        bytes = num * sizeof(double);
    }
    else if (type == 'c')
    {
        bytes = num * sizeof(char);
    }
    else
    {
        bytes = -1;
    }

    return bytes;
}