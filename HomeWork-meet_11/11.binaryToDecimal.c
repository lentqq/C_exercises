// Разбийте число като сума от степени на двойката.
#include <stdio.h>
#include <math.h>

int main()
{
    int num, binaryNum, digit, decimalNum = 0, iterator = 0;

    printf("\n  Enter the binary number: ");
    scanf("%d", &binaryNum);

    num = binaryNum;

    // loop to calculate decimal number for given the binary number
    while (num << 1 != 0)
    {
        digit = num % 10;
        decimalNum += digit * pow(2, iterator);
        num = num / 10;
        iterator++;
    }

    printf("\nThe binary equivalent of %d in decimal is:  %d", binaryNum, decimalNum);

    return 0;
}
