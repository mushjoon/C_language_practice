#include <stdio.h>

int main() {

    char operator;
    double num1;
    double num2;
    double result;

    printf("\nEnter an operator (+ - * /): \n");
    scanf("%c", &operator);

    printf("Enter number 1: \n");
    scanf("%lf", &num1);

    printf("Enter number 2: \n");
    scanf("%lf", &num2);

    switch(operator) {

        case('+'):
            result = num1 + num2;
            printf("\nThe result is: %.2lf", result);
            break;
        case('-'):
            result = num1 - num2;
            printf("\nThe result is: %.2lf", result);
            break;
        case('*'):
            result = num1 * num2;
            printf("\nThe result is: %.2lf", result);
            break;
        case('/'):
            result = num1 / num2;
            printf("\nThe result is: %.2lf", result);
            break;
        default:
            printf("%c is not a valid operator", operator);
            break;
    }
    
    return 0;
}