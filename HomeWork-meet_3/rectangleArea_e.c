/* Calculate  rectangle area with sides equal to the first and last digit of the entered three-digit number.
Note, that some of the numbers may be zero.*/

#include <stdio.h>

int main()
{

    int num;
    int a, b;

    do
    {
        // displays the message while the number is out of range
        printf("Enter three-digit number: ");
        scanf("%d", &num);
    } while (num <= 100 || num >= 999);
    {
        a = num % 10;
        num /= 100;
        b = num;

        printf("The area is: %d", a * b);
    }

    return 0;
}