/* Напишете програма, която калкулира разликата в два времеви периода,
изразени във векове, години, месеци, дни, минути, секунди.
Принтирайте изходните периоди и резултата. */

#include <stdio.h>
#include <math.h>

struct time // structure varaibles declaration
{
    int century;
    double years;
    int months;
    int days;
    int minutes;
    int seconds;
} time1, time2;

void printTimePeriod(struct time time1, struct time time2); // function declaration

int main()
{
    printf("\nInput Centuries:\n");
    scanf("%d %d", &time1.century, &time2.century);
    printf("\nInput Years:\n");
    scanf("%lf %lf", &time1.years, &time2.years);
    printf("\nInput Months:\n");
    scanf("%d %d", &time1.months, &time2.months);
    printf("\nInput Days:\n");
    scanf("%d %d", &time1.days, &time2.days);
    printf("\nInput Minutes:\n");
    scanf("%d %d", &time1.minutes, &time2.minutes);
    printf("\nInput Seconds:\n");
    scanf("%d %d", &time1.seconds, &time2.seconds);

    printTimePeriod(time1, time2);
    return 0;
}

// function initialization to print entered periods and calculated differences
void printTimePeriod(struct time time1, struct time time2)
{
    int subtrCenturies = abs(time1.century - time2.century);
    double subtrYears = fabs(time1.years - time2.years);
    int subtrMonths = abs(time1.months - time2.months);
    int subtrDays = abs(time1.days - time2.days);
    int subtrMinutes = abs(time1.minutes - time2.minutes);
    int subtrSeconds = abs(time1.seconds - time2.seconds);

    // print entered distances
    printf("\nYou entered periods in first instance are:");
    printf("\nCenturies: %d, Years: %.2lf, Months: %d, Days: %d, Minutes: %d, Seconds: %d\n", time1.century, time1.years, time1.months, time1.days, time1.minutes, time1.seconds);
    printf("\nYou entered periods in second instance are:");
    printf("\nCenturies: %d, Years: %.2lf, Months: %d, Days: %d, Minutes: %d, Seconds: %d\n", time2.century, time2.years, time2.months, time2.days, time2.minutes, time2.seconds);
    printf("\nCalculated subtractions are: Centuries: %d, Years: %.2lf, Months: %d, Days: %d, Minutes: %d, Seconds: %d", subtrCenturies, subtrYears, subtrMonths, subtrDays, subtrMinutes, subtrSeconds);
}
