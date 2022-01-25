#include <stdio.h>
#include <string.h>

int main() {

    // char x = 'X';
    // char y = 'Y';
    // char temp;

    // temp = x;
    // x = y;
    // y = temp;

    // if you are going to swap string values, both elements should be of same size!!!
    
    char x[15] = "water";
    //char y[] = "lemonade";
    char y[15] = "soda";
    char temp[15];

    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);

    printf("x = %s\n", x);
    printf("y = %s\n", y);

    return 0;
}