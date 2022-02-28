#include <stdio.h>
#include <string.h>

int main()
{
    const char FILENAME[] = "challenge1.txt";
    FILE *fp = NULL;
    int count = 0;
    char myChar;

    fp = fopen(FILENAME, "r");

    if (fp == NULL)
    {
        perror("Unable to open file");
        return (-1);
    }

    while ((myChar = fgetc(fp)) != EOF)
    {
        if (myChar == '\n')
        {
            count++;
        }

        printf("%c", myChar);
    }

    fclose(fp);
    fp = NULL;

    printf("\nThere are %d lines", count + 1);

    return 0;
}