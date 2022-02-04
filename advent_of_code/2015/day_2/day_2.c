#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int length, width, height, slack, total;

void printToken(char[]);
void calculateSlack(int, int, int);

int main() {

    FILE *fp;
    char *line = NULL;
    size_t len = 0;
    ssize_t read;

    fp = fopen("day_2_input.txt", "r");
    if (fp == NULL)
    {
        exit(EXIT_FAILURE);
    }

    while ((read = getline(&line, &len, fp)) != -1)
    {
        // printf("Retrieved line of length %zu:\n", read);
        // printf("%s", line);
        printToken(line);
    }
    
    fclose(fp);
    if (line)
    {
        free(line);
    }

    exit(EXIT_SUCCESS);
    
    return 0;
}

void printToken(char myString[]) {
    const char delim[2] = "x";
    char *token;

    char tempLength[20];
    char tempWidth[20];
    char tempHeight[20];

    //token = strtok(myString, delim);

    strcpy(tempLength, strtok(myString, delim));
    strcpy(tempWidth, strtok(NULL, delim));
    strcpy(tempHeight, strtok(NULL, delim));

    length = atoi(tempLength);
    width = atoi(tempWidth);
    height = atoi(tempHeight);
    
    printf("Length: %d\n", length);
    printf("Width: %d\n", width);
    printf("Height: %d\n", height);

    calculateSlack(length, width, height);

    // while (token != NULL)
    // {
    //     printf("%s\t", token);
        
    //     token = strtok(NULL, delim);
    // }
    
}

void calculateSlack(int l, int w, int h) {

    int smallest;
    int secondSmallest;

    int numbers[20] = {l, w, h};

    smallest = numbers[0];

    for (int i = 0; i < 3; i++)
    {
        if (numbers[i] < smallest)
        {
            smallest = numbers[i];
            secondSmallest = numbers[i + 1];
        }
    }
    
    printf("Smallest: %d\n", smallest);
    printf("Second smallest: %d\n", secondSmallest);
    printf("/////////////\n");
}