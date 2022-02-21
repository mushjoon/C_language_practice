#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printReverse(char string[]);

int main()
{
    char string1[100];
    char name[25][50], temp[25];
    int l, i, n, j;

    printf("Enter the string you want to reverse:\n");
    scanf("%s", string1);

    printReverse(string1);

    printf("Input number of strings :");
    scanf("%d", &n);

    printf("Input string %d : \n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%s", name[i]);
    }

    for (i = 1; i <= n; i++)
        for (j = 0; j <= n - i; j++)
            if (strcmp(name[j], name[j + 1]) > 0)
            {
                strncpy(temp, name[j], sizeof(temp) - 1);
                strncpy(name[j], name[j + 1], sizeof(name[j]) - 1);
                strncpy(name[j + 1], temp, sizeof(name[j] + 1) - 1);
            }

    printf("The strings appear after sorting :\n");

    for (i = 0; i <= n; i++)
        printf("%s\n", name[i]);

    return 0;
}

void printReverse(char string[])
{
    char temp[100];
    int j = 0;

    for (int i = strlen(string) - 1; i >= 0; i--)
    {
        temp[j] = string[i];
        j++;
    }

    printf("%s", temp);
}
