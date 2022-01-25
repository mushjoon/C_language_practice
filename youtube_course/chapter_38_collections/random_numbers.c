#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    // pseudo random numbers = A set of values or elements that are statistically random
    //                          DO NOT USE THESE for any sort of cryptographic security)

    srand(time(0)); // generates seed for random number

    int number1 = (rand() % 20) + 1; // this generates a random number between 1 and 6 AND
    int number2 = (rand() % 20) + 1; // rand() generates a random number between 0 and 32767
    int number3 = (rand() % 20) + 1;

    printf("%d\n", number1);
    printf("%d\n", number2);
    printf("%d\n", number3);

    return 0;
}