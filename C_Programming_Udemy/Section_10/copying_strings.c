#include <stdio.h>
#include <string.h>

int main()
{
    // strcpy() function doesn't check to see whether the source string actually fits in the target string
    // safer way to copy strings is to use strncpy()

    // strncpy() takes a 3rd argument: the max # of char to copy

    char src[40];
    char dest[12];

    memset(dest, '\0', sizeof(dest));
    strcpy(src, "Hello how are you doing");
    strncpy(dest, src, 10);

    printf("%s\n", dest);

    for (int i = 0; i < 50; i++)
    {
        printf("=");
    }
    
    char myString[] = "My Name is Jason";

    char temp[50];

    strncpy(temp, myString, sizeof(temp) - 1);
    printf("\nmyString has %d bytes", sizeof(myString));
    printf("\nThe length is: %d\n", strlen(myString));
    printf("%s", temp);

    return 0;
}