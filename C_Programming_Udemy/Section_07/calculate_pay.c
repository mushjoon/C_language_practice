#include <stdio.h>

#define RATE15 0.15
#define RATE20 0.20
#define RATE25 0.25

void printPayment(double, double, double);

int main()
{

    int hours = 0;
    double grossPay = 0.0;
    double taxesApplied = 0.0;
    double netPay = 0.0;

    printf("Please enter how many hours you worked this week: ");
    scanf("%d", &hours);

    if (hours <= 40)
    {
        grossPay = hours * 12.00;

        if (grossPay <= 300)
        {
            taxesApplied = grossPay * RATE15;
            netPay = grossPay - taxesApplied;
        }
        else if (grossPay > 300 && grossPay <= 450)
        {
            taxesApplied = (300 * RATE15) + ((grossPay - 300) * RATE20);
            netPay = grossPay - taxesApplied;
        }
        else
        {
            taxesApplied = (300 * RATE15) + (150 * RATE20) + ((grossPay - 450) * RATE25);
            netPay = grossPay - taxesApplied;
        }
        
        printPayment(grossPay, taxesApplied, netPay);
    }
    else if (hours > 40)
    {

        double overTimePay = (hours - 40) * 18.00;
        grossPay = (40 * 12.00) + overTimePay;

        taxesApplied = (300 * RATE15) + (150 * RATE20) + ((grossPay - 450) * RATE25);

        netPay = grossPay - taxesApplied;

        printPayment(grossPay, taxesApplied, netPay);
    }

    return 0;
}

void printPayment(double gross, double taxes, double net)
{
    printf("Gross Pay: $%.2lf\n", gross);
    printf("Taxes: $%.2lf\n", taxes);
    printf("Net Pay: $%.2lf\n", net);
}