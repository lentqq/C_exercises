// Програма, показваща пренасочване на пойнтера към друга функция

#include <stdio.h>

double add(double x, int y);          // add function declaration
double substarction(double x, int y); // substarct function declaration
double (*funcPtr)(double, int) = NULL;// pointer-function declaration

int main()
{
    double num1 = 4.5;
    int num2 = 3;

    funcPtr = add;
    double result = (*funcPtr)(num1, num2);
    printf("\nAddition result is: %.2lf", result);

    funcPtr = substarction; // redirects the pointer to another function(substraction finc)
    result = (*funcPtr)(num1, num2);
    printf("\nSubstarction result is: %.2lf", result);

    return 0;
}

double add(double x, int y) // function initialization, to add two numbers
{
    return x + y;
}

double substarction(double x, int y) // function initialization, to substract two numbers
{
    return x - y;
}