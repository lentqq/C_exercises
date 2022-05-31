/* Направете масив от указатели към функции по следния начин:
void add(){…}
void fun2(){…}
void fun3(){...}
void (*func_ptr[3])() = {fun1, fun2, fun3};
Направете меню, с което да питате потребителя коя от горните функции иска да
използва – събиране, изваждане, умножение и деление.
След това попитайте за числата, които да участват в тази операция,
и извикайте функцията, която да извърши желаната операция. */

#include <stdio.h>

void add(double, double);  // function declaration to add two numbers
void sub(double, double);  // function declaration to subtract two numbers
void mult(double, double); // function declaration to multiply two numbers
void div(double, double);  // function declaration to divide two numbers

void (*func_ptr[4])(double, double) = {add, sub, mult, div}; // array of  pointers to a function declaration

int main()
{
    double firstNum, secondNum;
    int operator;

    printf("\nInput two numbers:\n");
    scanf("%lf %lf", &firstNum, &secondNum);

    printf("\nActions -> 0: Add, 1: Subtract, 2: Multiply, 3: Divide\n");
    printf("\n Select action: ");
    scanf("%d", &operator);

do
{
    printf("\nIncorrect data!!!\n");
    printf("\nPlease, insert a number between 0, 1, 2 or 3.\n");
    // printf("\n Select action: ");
    // scanf("%d", &operator);
} while (operator<0 && operator> 3);

// checks for the selected action and calls the corresponding function
func_ptr[operator](firstNum, secondNum);// clever method


// simple method - non-optimized method. do not use. 
// if (operator== 0)
// {
// }
// else if (operator== 1)
// {
//     func_ptr[1](firstNum, secondNum);
// }
// else if (operator== 2)
// {
//     func_ptr[2](firstNum, secondNum);
// }
// else if (operator== 3)
// {
//     func_ptr[3](firstNum, secondNum);
// }

return 0;
}

// function initialization to add two numbers
void add(double x, double y)
{
    double sum = x + y;
    printf("\nThe Sum is: %.2lf", sum);
}

// function initialization to subtract two numbers
void sub(double x, double y)
{
    double sub = x - y;
    printf("\nThe Subtraction is: %.2lf", sub);
}

// function initialization to multiply two numbers
void mult(double x, double y)
{
    double mult = x * y;
    printf("\nThe Multiplication is: %.2lf", mult);
}

// function initialization to divided two numbers
void div(double x, double y)
{
    double div = x / y;
    if (y == 0)
    {
        printf("\nYou can not devided to 0 !!!\n");
        printf("\nResult is: INFINITY\n");
    }
    else
    {
        printf("\nThe Multiplication is: %.2lf", div);
    }
}