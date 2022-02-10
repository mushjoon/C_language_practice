#include <stdio.h>

int getGCD(int u, int v);
float getAbsValue(float x);
float getSqrt(float x);

int main()
{
    int result = 0.0;

    float f1 = -5.83, f2 = -88.93, f3 = 8.997;

    result = getGCD(150, 35);
    printf("GCD: %d\n", result);

    result = getGCD(24, 1076);
    printf("GCD: %d\n", result);

    float absResult = getAbsValue(-7.895);
    printf("Absolute value: %f\n", absResult);

    absResult = getAbsValue(f1);
    printf("Absolute value: %f\n", absResult);

    absResult = getAbsValue(f2);
    printf("Absolute value: %f\n", absResult);

    absResult = getAbsValue(f3);
    printf("Absolute value: %f\n", absResult);

    printf("%.2f\n", getSqrt(-3.0));
    printf("%.2f\n", getSqrt(16.0));
    printf("%.2f\n", getSqrt(25.0));
    printf("%.2f\n", getSqrt(9.0));
    printf("%.2f\n", getSqrt(225.0));

    return 0;
}

int getGCD(int u, int v)
{
    int temp;

    while (v != 0)
    {
        temp = u % v;
        u = v;
        v = temp;
    }

    return u;
}

float getAbsValue(float num)
{
    float x = 0.0;

    if (num > 0)
    {
        x = num;
    }
    else if (num < 0)
    {
        x = num * -1;
    }
    else
    {
        x = 0.0;
    }

    return x;
}

float getSqrt(float x)
{
    const float epsilon = 0.00001;
    float guess = 1.0;
    float returnValue = 0.0;

    if (x < 0)
    {
        printf("Negative argument to squareRoot.\n");
        returnValue = -1.0;
    }
    else
    {
        while (getAbsValue(guess * guess - x) >= epsilon)
        {
            guess = (x / guess + guess) / 2.0;
        }

        returnValue = guess;
    }

    return returnValue;
}