// Counting digits in a given number

#include <stdio.h>

int main()
{
    int num;
    int countDigits = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    do
    {
        num /= 10;
        countDigits++;
    } while (num > 0);

    printf("The number of digits is: %d", countDigits);

    return 0;
}