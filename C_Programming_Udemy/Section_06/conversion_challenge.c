// convert the number of minutes to days and years
#include <stdio.h>

int main() {

    double minutes;
    double days;
    double years;

    printf("Enter the minutes:\n");
    scanf("%lf", &minutes);

    days = (minutes / 60.0) / 24.0;
    years = days / 365.0;

    printf("Days: %lf\t Years: %lf", days, years);

    return 0;
}