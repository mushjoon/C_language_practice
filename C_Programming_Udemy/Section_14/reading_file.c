#include <stdio.h>

int main()
{
    // fgetc() function reads a character from a text file that has been opened for reading
    // takes a file pointer as its only arg and returns the character read as type int

    FILE *fp;
    int c;

    fp = fopen("file.txt", "r");

    if (fp == NULL)
    {
        perror("Error in opening file");
        return (-1);
    }

    while ((c = fgetc(fp)) != EOF)
    {
        printf("%c", c);
    }

    fclose(fp);
    fp = NULL;

    return 0;
}