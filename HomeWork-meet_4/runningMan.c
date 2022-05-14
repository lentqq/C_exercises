/* Starting training, the athlete ran the first day A km. Every next day he increased his daily norm by B% compared to the previous day.
What a total path he will run the athlete for:
a / 10 days;
b / n days;
c / until the distance traveled per day becomes greater than X km and on which day;
d / until the total mileage becomes greater than U km and for how many days.*/

#include <stdio.h>
#include <math.h>

int main()
{
    int overTotalDistance = 60;
    int dailyRate = 25;
    int days, daysToRun, percentageDalyRate;
    double startKm, totalRunningKm;

      // input the values
    printf("Enter Starting km, Percentage of daly rate, Days to run and Unknow running km: \n");
    scanf("%lf %d %d", &startKm, &percentageDalyRate, &daysToRun);

    // calculate how many km i`m run of the day and check daily rate
    for (days = 1; days <= daysToRun; days++)
    {
        startKm = startKm + (startKm * (percentageDalyRate / 100.00));
        if (startKm >= overTotalDistance)
        {
            printf("I finished the challenge for %d days and I'm going to sleep.", days);
            break;
        }

        if (startKm > dailyRate)
        {
            printf("Hey, I'm not a Forrest Gump. I stop running on the %d-th day.", days);
            break;
        }

        else
        {
            printf("Day %d: Running %.2lf km.\n", days, startKm);
        }
    }

    return 0;
}