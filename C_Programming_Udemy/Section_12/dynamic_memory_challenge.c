#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *myPtr = NULL;
    int sizeLimit = 0;

    printf("Enter the size limit of your string in bytes:");
    scanf("%d", &sizeLimit);

    myPtr = (char *)malloc(sizeLimit * sizeof(char));

    if (myPtr != NULL)
    {
        printf("Enter your string:\n");
        scanf(" ");
        gets(myPtr);

        printf("Printing the string you entered......\n");
        printf("Your string: %s", myPtr);
    }

    free(myPtr);
    myPtr = NULL;

    return 0;
}