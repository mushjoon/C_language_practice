#include <stdio.h>
#include <string.h>

int main() 
{
    char str1[] = "apples";
    //char str2[] = "APPLES";
    //char str2[] = "pineapples";
    char str2[] = "apples";

    if (strcmp(str1, str2) == 0)
    {
        printf("str1 and str2 are equal");
    }
    else if (strcmp(str1, str2) < 0)
    {
        printf("str1 is less than str2");
    }
    else
    {
        printf("str2 is less than str1");
    }
    
    return 0;
}