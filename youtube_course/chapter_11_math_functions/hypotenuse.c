#include <stdio.h>
#include <math.h>

int main() {

    int firstLeg;
    int secondLeg;
    double hypotenuse;

    printf("\nEnter the length of the first leg:");
    scanf("%d", &firstLeg);
    printf("\nEnter the length of the second leg:");
    scanf("%d", &secondLeg);

    hypotenuse = sqrt((pow(firstLeg, 2)) + (pow(secondLeg, 2)));

    printf("\nHypotenuse is: %.2lf", hypotenuse);

    return 0;
}