/*
You are conducting a linguistic study and are interested in finding words that contain the letter 't' or 'T' in the first half of the word
(including the middle letter if there is one).
Specifically, if the first half of the word does contain a 't' or a 'T', your program should output a 1.
If the first half does not contain the letter 't' or 'T', but the second half does, then your program should output a 2.
Otherwise, if there is no 't' or 'T' in the word at all, your program's output should be -1.
You may assume that the word entered does not have more than 50 letters.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char myWord[51];
    char converted[51];
    int output = 0;
    scanf("%s", myWord);

    for (int i = 0; i < sizeof(myWord) / sizeof(myWord[0]); i++)
    {
        converted[i] = tolower(myWord[i]);
    }

    for (int i = 0; i < sizeof(converted) / sizeof(converted[0]); i++)
    {
        // if the length is odd
        if (strlen(converted) % 2 != 0)
        {
            int middle = strlen(converted) / 2;
            int j = 0;

            while (converted[j] != 't')
            {
                j++;
            }

            if (j <= middle)
            {
                output = 1;
            }
            else if (j > middle)
            {
                output = 2;
            }
        }
        // if the length is even
        else
        {
            int middle = strlen(converted) / 2;
            int j = 0;

            while (converted[j] != 't')
            {
                j++;
            }

            if (j < middle)
            {
                output = 1;
            }
            else
            {
                output = 2;
            }
        }
    }

    printf("%d", output);
    // printf("%s", converted);

    return 0;
}