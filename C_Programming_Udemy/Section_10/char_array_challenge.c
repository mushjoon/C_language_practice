#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int stringLength(const char string[]);
void concat(char result[], const char str[], const char str2[]);
bool equalStrings(const char s1[], const char s2[]);

int main()
{
    const char word1[] = "jason";
    const char word2[] = "ok";
    const char word3[] = "whatever";
    char result[50];

    printf("%d\t%d\t%d\n", stringLength(word1), stringLength(word2), stringLength(word3));

    concat(result, word1, word2);

    printf("%s\n", result);

    printf("%d\n", equalStrings("Jason", "Jason"));
    printf("%d\n", equalStrings("Jason", "Jack"));

    return 0;
}

int stringLength(const char string[])
{
    int count = 0;

    while (string[count] != '\0')
    {
        count++;
    }

    return count;
}

void concat(char result[], const char str[], const char str2[])
{
    int i, j;

    for (i = 0; str[i] != '\0'; i++)
    {
        result[i] = str[i];
    }
    for (j = 0; str2[j] != '\0'; j++)
    {
        result[i + j] = str2[j];
    }

    result[i + j] = '\0';
}

bool equalStrings(const char s1[], const char s2[])
{
    int i = 0;
    bool isEquals = false;

    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
    {
        i++;
    }

    if (s1[i] == '\0' && s2[i] == '\0')
    {
        isEquals = true;
    }
    else
    {
        isEquals = false;
    }

    return isEquals;
}