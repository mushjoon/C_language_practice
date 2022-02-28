#include <stdio.h>
#include <ctype.h>

int main()
{
    const char ORIGINAL[] = "challenge2.txt";
    FILE *fp = NULL;
    FILE *fpNew = NULL;
    char ch, ch2;

    ///////////// open the original txt file to read /////////////
    fp = fopen(ORIGINAL, "r");

    if (fp == NULL)
    {
        perror("Error opening the file");
        return (-1);
    }

    ///////////// create and write on a new file /////////////
    fpNew = fopen("challenge2_copy.txt", "w+");

    printf("\n============== Original text ==============\n");
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
        ch = toupper(ch);
        fputc(ch, fpNew);
    }

    fclose(fp);
    fp = NULL;

    fclose(fpNew);
    fpNew = NULL;

    ///////////// call the new file to print the converted text /////////////
    fpNew = fopen("challenge2_copy.txt", "r");

    if (fpNew == NULL)
    {
        perror("Error opening the file");
        return (-1);
    }
    
    printf("\n============== Converted to Uppercase ==============\n");
    while ((ch2 = fgetc(fpNew)) != EOF)
    {
        printf("%c", ch2);
    }

    fclose(fpNew);
    fpNew = NULL;

    return 0;
}