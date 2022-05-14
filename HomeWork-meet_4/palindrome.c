#include <stdio.h>

int main()
{
    int number, revercedNumber = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (int i = number; i != 0; i)
    {
        revercedNumber *= 10;
        revercedNumber += i % 10;
        i /= 10;
    }

    if (number == revercedNumber)
    {
        printf("The number is PALINDROME!!!");
    }
    else
    {
        printf("The nnumber isn`t a PALINDROME!!!");
    }

    return 0;
}