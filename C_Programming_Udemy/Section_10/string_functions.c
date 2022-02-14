#include <stdio.h>
#include <string.h>

int main()
{
    char myString[] = "my string";
    char source[50], destination[50];

    printf("The length of this string is %d\n", strlen(myString));

    //strcpy
    strcpy(source, "This is source");
    strcpy(destination, "This is destination");

    printf("%s\n%s\n", source, destination);

    return 0;
}