// Програмка, показваща използването на указател към функция (в случая --> сума на две числа)
#include <stdio.h>

double add(double x, int y);    // function declaration
double (*funcPtr)(double, int) = NULL; // pointer function declaration

int main()
{
    double num1 = 4.5;
    int num2 = 3;

    funcPtr = add; // pointerFunc,  pointing to a function
    double result = (*funcPtr)(num1, num2);
    printf("\nResult is: %.2lf", result);

    return 0;
}

double add(double x, int y) // function initialization, to add two numbers
{
    return x + y;
}