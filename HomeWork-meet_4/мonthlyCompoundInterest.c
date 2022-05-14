/* Client invested BGN with monthly interest in %.
How will this installment change if the client does not pull money during this period:
a / for 5 years;
b / for N years;
c / until the installment becomes greater than BGN
To write a program. The numbers are at the entrance. */

#include <stdio.h>
#include <math.h>

int main()
{

    /* monthly compound interest formula = P * (1 + (R /12)) ^ 12*t - 100 where:
      P - Initial Amount
      R - Monthly interest in decimal value
      t - Time in years */

    double initialAmount, monthlyInterest, monthlyCompoundInterest;
    int numYears;
    int numMonths = 12;
    int count = 0;

    // input the values
    printf("Enter initial amount, monthly interest and nubmer of years please: \n");
    scanf("%lf %lf %d", &initialAmount, &monthlyInterest, &numYears);

    printf("Monthly compund interst:\n");
    printf("\n");

    while (count < numYears)
    {
        count++;
        // calculate monthly compund interst
        monthlyCompoundInterest = initialAmount * pow((1 + ((monthlyInterest / 100.00) / numMonths)), numMonths * count) - initialAmount;
    
        // i`m check if sum is bigger or less than 100 and take my money back
        if (monthlyCompoundInterest > 100)
        {
            printf("I take my money back !!!\n");
            printf("This would be your next annual income !!!\n");
            printf("Year %d:  %.2lf BGN\n", count, monthlyCompoundInterest);
            break;
        }
        else
        {
            printf("Year %d:  %.2lf BGN\n", count, monthlyCompoundInterest);
        }
    }

    return 0;
}