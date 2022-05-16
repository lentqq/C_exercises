/*  Функция, намираща сумата на целите числата в даден интервал [a,b],
като a и b са параметри на функцията.
long sum(int a, int b)
Програмата чете 3 интервала и отпечатва в кой интервал сумата е
нечетно числo */

#include <stdio.h>

// function declaration /*function prototype*/
int calcSumOfNumbers(int a, int b);

int main()
{
    int a, b, c, d, e, f;

    printf("\nInput a two numbers for the 1st interval: \n");
    scanf("%d %d", &a, &b);

    printf("\nInput a two numbers for the 2nd interval: \n");
    scanf("%d %d", &c, &d);

    printf("\nInput a two numbers for the 3rd interval: \n");
    scanf("%d %d", &e, &f);

    // call function to check whether the sum is odd
    if (calcSumOfNumbers(a, b) % 2 != 0)
        printf("The sum in 1st interval is odd number: %d\n", calcSumOfNumbers(a, b));
    if (calcSumOfNumbers(c, d) % 2 != 0)
        printf("The sum in 2nd interval is odd number: %d\n", calcSumOfNumbers(c, d));
    if (calcSumOfNumbers(e, f) % 2 != 0)
        printf("The sum in 3rd interval is odd number: %d\n", calcSumOfNumbers(e, f));

    return 0;
}

// function definition to find sum of numbers in a given range
int calcSumOfNumbers(int a, int b)
{
    int sumNumbers = 0;
    for (int i = a; i <= b; i++)
    {
        sumNumbers += i;
    }
    return sumNumbers;
}