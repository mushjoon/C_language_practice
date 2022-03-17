/*
Your job is to find the length of the longest word in a text with no punctuation or special characters of any kind - only contains words.
To do so, please write a C-program that takes as a input first the number of words in a text, followed by all of the words in the text.
The output of your program should be the length of the longest word in the text.

To simplify your program, you can assume that the longest word will not exceed 100 characters.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int numOfWords = 0;
    scanf("%d", &numOfWords);

    char text[101];
    int letterCount = 0;
    int counts[numOfWords];
    int max = 0;

    int i = 0;
    int t = 0;
    int l = 0;
    int j = 0;
    int nbWords = 0;
    char word[11];
    int length[10]; // length[5] number of 5-letter-long words in the text
    for (i = 0; i < 10; i++)
    {
        length[i] = 0;
    }
    scanf("%d", &nbWords);
    for (t = 0; t < nbWords; t++)
    {
        scanf("%s", word);
        l = 0;
        while (word[l] != '\0')
        {
            l++;
        }
        length[l] = length[l] + 1;
        printf("%s %d ", word, l);
    }
    for (j = 0; j < 10; j++)
    {
        printf("There are %d words with %d letters.\n", length[j], j);
    }

    // for (int i = 0; i < (sizeof(counts) / sizeof(counts[0]) - 1); i++)
    // {
    //     max = counts[i];
    //     if (counts[i + 1] > counts[i])
    //     {
    //         max = counts[i + 1];
    //     }
    // }
    // printf("%d", max);

    return 0;
}