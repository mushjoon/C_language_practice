/*
You are programming a toaster!
The toaster does not have a lot of memory, so you need to be careful about the data types you use
(remember that different data types use different amounts of memory).
To make this easier, you'd like an easy way to track how much memory your variables are going to use.

Your job is to write a program that shows, in human-readable form (see below for specifics),
how much memory a set of variables of a certain type will use.
Your program should read a character that identifies the data type
('i' for int, 's' for short, 'c' for char, 'd' for double).
Next it should read an integer that indicates how many variables of the given type you wish to store.

Your program should then calculate the amount of memory required to store the given variables.
Your program needs to be written in such a way that it would also perform correctly on other computers.
In other words, rather than hard-coding specific sizes for the different variable types,
your program needs to use the "sizeof()" function to determine how much memory an individual variable of a given type needs.

Finally, you need to output the amount of space required by your variables to the screen.
You need to make sure you provide this output in a form that is easy to read for humans.
*/

#include <stdio.h>

int getDataSize(char, int);
void printInFormat(int);

int main()
{
    char type;
    int size = 0;
    scanf("%c %d", &type, &size);

    printInFormat(getDataSize(type, size));
    return 0;
}

int getDataSize(char type, int num)
{
    int dataSize = 0;

    if (type == 'c')
    {
        dataSize = num * sizeof(char);
    }
    else if (type == 's')
    {
        dataSize = num * sizeof(short);
    }
    else if (type == 'i')
    {
        dataSize = num * sizeof(int);
    }
    else if (type == 'd')
    {
        dataSize = num * sizeof(double);
    }
    else
    {
        dataSize = -1;
    }

    return dataSize;
}

void printInFormat(int dataSize)
{
    int MB = 0;
    int KB = 0;
    int B = 0;

    if (dataSize >= 1000000)
    {
        MB = dataSize / 1000000;
        KB = (dataSize % 1000000) / 1000;
        B = (dataSize % 1000);
        printf("%d MB and %d KB and %d B\n", MB, KB, B);
    }
    else if (dataSize < 1000000 && dataSize >= 1000)
    {
        KB = (dataSize % 1000000) / 1000;
        B = (dataSize % 1000);
        printf("%d KB and %d B\n", KB, B);
    }
    else
    {
        B = (dataSize % 1000);
        printf("%d B\n", B);
    }
}