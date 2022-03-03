/*
Write a C-program that prints out a word as many times as specified.
The number of repetitions and the word should be given as input to the program.
You may assume that the word has no more than 100 characters (be sure to also reserve space for the null terminator, \0, though!).
*/

#include <stdio.h>

int main()
{
    int reps = 0;
    char myString[100];
    int i;

    scanf("%d %s", &reps, myString);

    for (i = 0; i < reps; i++)
    {
        printf("%s\n", myString);
    }

    return 0;
}