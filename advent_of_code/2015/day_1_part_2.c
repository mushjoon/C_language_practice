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
            int position = 1;

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

                printf("Position: %d,\t Steps: %d\n", position, steps);

                if (steps == -1)
                {
                    printf("Santa is in the basement floor at position %d", position);
                    break;
                }
                position++;
            }
        }
    }
    return 0;
}