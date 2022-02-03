#include <stdio.h>

int main()
{

    FILE *pMyfile = fopen("day_1_input.txt", "r");

    char buffer[2000000] = {0};
    int steps = 0;

    if (pMyfile == NULL)
    {
        printf("Unable to open file!\n");
    }
    else
    {
        while (fgets(buffer, 2000000, pMyfile) != NULL)
        {
            for (int i = 0; i < sizeof(buffer) / sizeof(buffer[0]); i++)
            {
                if (buffer[i] == '(')
                {
                    steps++;
                }
                else if (buffer[i] == ')')
                {
                    steps--;
                }
            }
        }
        printf("Santa is currently at %d floor\n", steps);
    }

    return 0;
}