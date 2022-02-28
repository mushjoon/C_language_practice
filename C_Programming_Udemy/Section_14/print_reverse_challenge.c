#include <stdio.h>

int main()
{
    const char FILENAME[] = "challenge3.txt";
    FILE *fp = NULL;
    int len;
    int i = 0;

    fp = fopen(FILENAME, "r");

    if (fp == NULL)
    {
        perror("Error opening the file");
        return (-1);
    }

    fseek(fp, 0, SEEK_END);

    len = ftell(fp);

    while (i < len)
    {
        i++;
        fseek(fp, -i, SEEK_END);
        printf("%c", fgetc(fp));
    }

    fclose(fp);
    fp = NULL;

    return 0;
}