/*
You are still conducting linguistic research!
This time, you'd like to write a program to find out how many letters occur multiple times in a given word.
Your program should read a word from the input and then sort the letters of the word alphabetically (by their ASCII codes).
Next, your program should iterate through the letters of the word and compare each letter with the one following it.
If these equal each other, you increase a counter by 1, making sure to then skip ahead far enough so that letters that occur more than twice are not counted again.
You may assume that the word you read from the input has no more than 50 letters, and that the word is all lowercase.
*/
#include <stdio.h>
#include <string.h>

const char *sortString(char *str);
int countRepeat(const char *str);

int main()
{
    char inputText[51];

    scanf("%s", inputText);

    int result = countRepeat(sortString(inputText));

    printf("%d", result);

    return 0;
}

const char *sortString(char *inputText)
{
    char temp;

    for (int i = 0; i < strlen(inputText) - 1; i++)
    {
        for (int j = 0; j < strlen(inputText) - 1; j++)
        {
            if (inputText[j] > inputText[j + 1])
            {
                temp = inputText[j];
                inputText[j] = inputText[j + 1];
                inputText[j + 1] = temp;
            }
        }
    }

    return inputText;
}

int countRepeat(const char *str)
{
    int count = 0;

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == str[i + 1] && str[i] != str[i + 2])
        {
            count++;
        }
    }

    return count;
}