/* Функция, която по зададени граници на интервал [a,b] , намира и
извежда сумата от четните числа от този интервал. */

#include <stdio.h>

// function declaration /*function prototype*/
int calculateEvenSumNumbers(int a, int b);

int main()
{
    int a, b;

    printf("Input a two numbers each of a new line: \n");
    scanf("%d %d", &a, &b);

    printf("The sum of even numbers is: %d", calculateEvenSumNumbers(a, b));

    return 0;
}

// function definition to calculate sum of even numbers in rnge [a, b]
int calculateEvenSumNumbers(int a, int b)
{
    int evenSum = 0;

    for (int i = a; i <= b; i++)
    {
        if (i % 2 == 0)
        {
            evenSum += i;
        }
    }

    return evenSum;
}