// Write a program that calculates the number of seconds in one year.

#include <stdio.h>

int main()
{
    int year, numSecPerYear, numSecPerDay;
    int yearDays = 365;
    int leapYearDays = 366;

    printf("Enter an year: ");
    scanf("%d", &year);

    /* check it is a lear year.
    if devided by 400 and 4 is leap year*/

    if (year % 400 == 0)
    {
        numSecPerDay = 24 * 3600;
        numSecPerYear = numSecPerDay * leapYearDays;
        printf("It`s a leap year.The number of seconds in leap year is: %d sec", numSecPerYear);
    }
    else if (year % 4 == 0)
    {
        numSecPerDay = 24 * 3600;
        numSecPerYear = numSecPerDay * leapYearDays;
        printf("It`s a leap year.The number of seconds in leap year is: %d sec", numSecPerYear);
    }
    else
    {
        numSecPerDay = 24 * 3600;
        numSecPerYear = numSecPerDay * yearDays;
        printf("It`s not a leap year.The number of seconds in normal year is: %d sec", numSecPerYear);
    }

    return 0;
}
