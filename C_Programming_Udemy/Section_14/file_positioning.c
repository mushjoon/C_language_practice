#include <stdio.h>

int main()
{
    // long ftell(FILE *pfile): it accepts a file pointer as an arg and returns a long value that tells the current position in the file 

    FILE *fp = NULL;
    int len;

    fp = fopen("file.txt", "r");
    if (fp == NULL)
    {
        perror("Error opening file");
        return(-1);
    }

    fseek(fp, 0, SEEK_END);

    len = ftell(fp);
    fclose(fp);
    
    printf("Total size of file.txt = %d bytes\n", len);

    return 0;
}