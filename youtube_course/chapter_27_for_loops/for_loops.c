#include <stdio.h>

int main() {

    // for loop : repeats a section of code a limited amount of times
    for(int i = 1; i <= 10; i+=2) {
        printf("%d\n", i);
    }

    printf("//////// numbers getting smaller ////////\n");

    for (int i = 10; i > 0; i--)
    {
        /* code */
        printf("%d\n",i);
    }
    

    return 0;
}