#include <stdio.h>

int main(void)
{
    // If you run this, you'll only get "The character " as the output cuz \0 terminates the string
    printf("The character \0 is used to terminate a string.");

    return 0;
}