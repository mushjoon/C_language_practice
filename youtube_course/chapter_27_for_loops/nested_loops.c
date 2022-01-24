#include <stdio.h>

int main() {

    // nested loop : a loop inside of another loop

    int rows;
    int columns;
    char symbol;

    printf("\nEnter number of rows: ");
    scanf("%d", &rows);


    printf("\nEnter number of columns: ");
    scanf("%d", &columns);

    scanf("%c"); // this is to prevent compiler to pick up pressing the "enter" for scanf function. If we don't do this, it will print out empty spaces thru the nested loops 

    printf("\nEnter a symbol to use: ");
    scanf("%c", &symbol);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            printf("%c", symbol);
        }
        printf("\n");
    }
    

    return 0;
}