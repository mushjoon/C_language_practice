#include <stdio.h>

int main() {

    int grades[10]; // array storing 10 values YOU CANNOT MIX DATATYPES IN THE SAME ARRAY
    int count = 10; // how many numbers you want to store
    long sum = 0;
    float average = 0.0f;

    printf("\nEnter the 10 grades:\n");

    for (int i = 0; i < count; i++)
    {
        printf("%2u> ", i + 1);
        scanf("%d", &grades[i]);
        sum += grades[i];
    }

    average = (float)sum/count;

    printf("\nAverage: %.2f\n", average);
}