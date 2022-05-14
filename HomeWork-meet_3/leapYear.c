/* A program that reads an integer six-digit number,
separates from it the digits of positions 1,3,5 and 6 and with these digits forms a new one
a four-digit number. If we consider this new number as
year, the program must determine whether this year is high or not.*/

#include <stdio.h>

int main()
{
    int number;
    int a, b, c, d;
    int year;

    do
    {
        // displays the message while the number is out of range
        printf("Enter six-digits number:  ");
        scanf("%d", &number);
    } while (number < 99999 || number > 1000000);
    {
        a = number % 10;
        b = number / 100 % 10;
        c = number / 10000 % 10;
        d = number / 100000 % 10;

        // combining digits a, b, c, d, into a number
        year = d + (c * 10) + (b * 100) + (a * 1000);

        // checking if it's a leap year
        // leap year if perfectly divided by 400
        if (year % 400 == 0)
        {
            printf("%d is a leap year.", year);
        }
        // not a leap year if divided by 100, but not divided by 400
        else if (year % 100 == 0)
        {
            printf("%d is not a leap year.", year);
        }
        // leap year if not divided by 100, but divided by 4
        else if (year % 4 == 0)
        {
            printf("%d is a leap year.", year);
        }
        // all other years are not leap year
        else
        {
            printf("%d is not a leap year.", year);
        }
    }

    return 0;
}