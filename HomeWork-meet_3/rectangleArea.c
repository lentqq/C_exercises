/* Program that reads a six-digit number and
finds the area of the rectangle with side "a"
equal to the sum of the odd digits and
side "b" equal to the sum of the even digits. */

#include <stdio.h>

int main()
{
    int num;
    int oddSide = 0, evenSide = 0, digit, area;

    printf("  Enter a 6-digits number: ");
    scanf("%d", &num);

    // displays the message while the number is out of range
    if (num < 99999 || num > 1000000)
    {
        printf("You must enter a 6 digit number!!!");
    }
    else
    {
        for (int i = 0; i < 6; i++)
        {

            // takes the last digit and then removes it
            digit = num % 10;
            num /= 10;

            if (i % 2 == 0)
            
                evenSide += digit;
            
            else
            
                oddSide += digit;
            
        }

        area = evenSide * oddSide;

        printf("The area of rectangle is %d", area);
    }

    return 0;
}