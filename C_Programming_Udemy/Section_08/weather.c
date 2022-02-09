// find total rainfall, the avg yearly rainfall and avg rainfall for each month
#include <stdio.h>
#include <stdlib.h>

#define YEARS 5
#define MONTHS 12

int main()
{
    float rainfall[YEARS][MONTHS] = {
        {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
        {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
        {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
        {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
        {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}
        };

    float totalEachYear = 0.0;
    float totalAllYear = 0.0;
    float totalEachMonth = 0.0;
    float avgYearly = 0.0;
    float avgMonthly = 0.0;

    printf("YEAR\tRAINFALL(inches)\n");

    for (int i = 0; i < YEARS; i++)
    {
        for (int j = 0; j < MONTHS; j++)
        {
            totalEachYear += rainfall[i][j];
        }

        printf("%d\t%.1f\n", 2010 + i, totalEachYear);
        totalEachYear = 0.0;
    }

    for (int year = 0; year < YEARS; year++)
    {
        for (int month = 0; month < MONTHS; month++)
        {
            totalAllYear += rainfall[year][month];
        }
    }

    avgYearly = totalAllYear / YEARS;

    printf("\nThe yearly average is %.1f inches\n", avgYearly);
    printf("\nMONTHLY AVERAGES:\n");
    printf("\nJan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec\n");

    for (int i = 0; i < MONTHS; i++)
    {
        for (int j = 0; j < YEARS; j++)
        {
            totalEachMonth += rainfall[j][i];
            avgMonthly = totalEachMonth / YEARS;
        }

        printf("%.1f ", avgMonthly);
        totalEachMonth = 0.0;
    }

    return 0;
}
