#include <stdio.h>

void copyString(char *to, char *from);

int main()
{
    char string1[] = "A string to be copied";
    char string2[50];

    copyString(string2, string1);

    printf("%s\n", string2);

    return 0;
}

void copyString(char *to, char *from)
{
    while (*from) // the null character is equal to the value of 0, so will jump out of loop
    {
        *to++ = *from++;
    }

    *to = '\0';
}
