#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int tries;
    int userGuessNum;
    int maxTries = 5;

    time_t t;

    srand((unsigned)time(&t));

    // get the random number between 0 and 20
    int randomNumber = rand() % 21;

    while (tries < maxTries)
    {
        printf("\nGuess the number:");
        scanf("%d", &userGuessNum);

        if (userGuessNum < 0 || userGuessNum > 20)
        {
            printf("The number is between 0 and 20. Please enter again");
        }
        else if (userGuessNum < randomNumber)
        {
            printf("\nYour guess is too small. Try again\n");
            tries++;
            int remainingChance = maxTries - tries;
            printf("Remaining tries: %d\n", remainingChance);
        }
        else if (userGuessNum > randomNumber)
        {
            printf("\nYour guess is too big. Try again\n");
            tries++;
            int remainingChance = maxTries - tries;
            printf("Remaining tries: %d\n", remainingChance);
        }
        else if (userGuessNum == randomNumber)
        {
            printf("\nCongratulations! Your guess is correct!");
            printf("\nGAME OVER");
            break;
        }

        if (tries == maxTries)
        {
            printf("\nYou used all the chances for guessing the number.");
            printf("\nThe random number was %d", randomNumber);
            printf("\nGAME OVER");
            break;
        }
    }

    return 0;
}