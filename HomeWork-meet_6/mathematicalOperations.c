/* Да се напише програма с 4 функции, предназначени за
събиране, изваждане, умнножение и деление на 2 реслни числа.
Програмата да чете стойностите на две числа и да пресметне
сумата, разликата, произведението и частното на тези числа */

#include <stdio.h>

// function declaration
int sumOfNumbers(int a, int b);
int subtractionOfNumbers(int a, int b);
int productOfNumbers(int a, int b);
double divisionOfNumbers(double a, double b);

int main()
{
    int a, b;

    printf("Input two numbers to sum: \n");
    scanf("%d %d", &a, &b);
    printf("The sum is: %d\n", sumOfNumbers(a, b));

    printf("Input two numbers to substraction: \n");
    scanf("%d %d", &a, &b);
    printf("The substarction is: %d\n", subtractionOfNumbers(a, b));

    printf("Input two numbers to product: \n");
    scanf("%d %d", &a, &b);
    printf("The product is: %d\n", productOfNumbers(a, b));

    printf("Input two numbers to devided: \n");
    scanf("%lf %lf", &a, &b);
    printf("The division is: %.2lf\n", divisionOfNumbers(a, b));

    return 0;
}

int sumOfNumbers(int a, int b)
{
    return a + b;
}

int subtractionOfNumbers(int a, int b)
{
    return a - b;
}

int productOfNumbers(int a, int b)
{
    return a * b;
}

double divisionOfNumbers(double a, double b)
{
    return a / b;
}