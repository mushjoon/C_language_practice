/*
Write a C-program that converts metric measurements to imperial system values.
Measurements are provided to your program in meters, grams or degrees Celsius and must be converted to feet, pounds and degrees Fahrenheit, respectively.

Here are the conversion rules to use:

1 meter = 3.2808 feet;

1 gram = 0.002205 pounds;

temperature in degrees Fahrenheit = 32 + 1.8 × temperature in degrees Celsius.

On the first input line you are given the number of conversions to be made.
Each of the following lines contains a value to be converted as well as its unit: m, g or c (for meters, grams or degrees Celsius).
There will be a space between the number and the unit.
You should print your output value for each input line immediately after calculating it (ie, you do not have to wait until you have read all inputs).

Display the converted values with 6 decimal places, followed by a space and their unit: ft, lbs or f (for feet, pounds or degrees Fahrenheit).
Each conversion result should be printed on its own line, and you should store and display all decimal values as doubles.
*/
#include <stdio.h>
#include <string.h>

void taskDivider(double, char);
double convertToFeet(double);
double convertToPound(double);
double convertToFahr(double);

int main(void)
{
    int count = 0;
    scanf("%d", &count);

    for (int i = 0; i < count; i++)
    {
        double myNum = 0.0;
        char myUnit;

        scanf("%lf %c", &myNum, &myUnit);
        taskDivider(myNum, myUnit);
    }

    return 0;
}

void taskDivider(double num, char unit)
{
    double output = 0.0;
    char convertedUnit[4];

    if (unit == 'm')
    {
        output = convertToFeet(num);
        strcpy(convertedUnit, "ft");
    }
    else if (unit == 'g')
    {
        output = convertToPound(num);
        strcpy(convertedUnit, "lbs");
    }
    else if (unit == 'c')
    {
        output = convertToFahr(num);
        strcpy(convertedUnit, "f");
    }
    else
    {
        printf("Please enter the correct unit");
    }

    printf("%.6lf %s\n", output, convertedUnit);
}

double convertToFeet(double num)
{
    return num * 3.2808;
}
double convertToPound(double num)
{
    return num * 0.002205;
}
double convertToFahr(double num)
{
    return (num * 1.8) + 32;
}
