#include <stdio.h>

int cntStrLen(const char *myString);

int main()
{
    char string1[] = "I am Jack";
    char string2[] = "stringLength test";
    char string3[] = "";

    printf("There are %d characters\n", cntStrLen(string1));
    printf("There are %d characters\n", cntStrLen(string2));
    printf("There are %d characters\n", cntStrLen(string3));

    return 0;
}

int cntStrLen(const char *myString)
{
    const char *lastAddress = myString;

    while (*lastAddress)
    {
        lastAddress++;
    }
    
    return lastAddress - myString;
}