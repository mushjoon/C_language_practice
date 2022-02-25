#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int fscanf(FILE *stream, const char *format, ...)

    1st arg is the pointer to a FILE object that identifies the stream

    2nd arg is the format
    - whitespace char
    - non-whitespace char
    - format specifier
    - usage is similar to scanf but from a file
    */

    char str1[10], str2[10], str3[10];
    int year;
    FILE *fp;

    fp = fopen("file.txt", "w+");
    if (fp != NULL)
    {
        fputs("Hello how are you", fp);
    }

    rewind(fp);

    fscanf(fp, "%s %s %s %d", str1, str2, str3, &year);

    printf("Read String1 |%s|\n", str1);
    printf("Read String2 |%s|\n", str2);
    printf("Read String3 |%s|\n", str3);
    printf("Read Integer |%d|\n", year);

    fclose(fp);

    return 0;
}