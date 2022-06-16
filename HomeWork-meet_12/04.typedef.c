/* Дефинирайте тип указател към функция, която изпълнява определена
операция върху две целочислени променливи. Дефинирайте функции, които
изпълняват операциите '+','-', '*', '/'. Използвайте новия тип, за да извикате всяка една от функциите. */

#include <stdio.h>

typedef int (*Ptr)(int, int);

int sum(int x, int y);  // function declaration
int sub(int x, int y);  // function declaration
int mult(int x, int y); // function declaration
int div(int x, int y);  // function declaration

Ptr Calculate(const char operator)
{
    if (operator == '+')
    {
        return &sum;
    }
    if (operator == '-')
    {
        return &sub;
    }
    if (operator == '*')
    {
        return &mult;
    }
    if (operator == '/')
    {
        return &div;
    }
}

int main()
{
    Ptr ptr;
    ptr = Calculate('+');
    printf("\nThe sum is: %d", ptr(3, 4));
    ptr = Calculate('-');
    printf("\nThe subtraction is: %d", ptr(120, 100));
    ptr = Calculate('*');
    printf("\nThe multiplication is: %d", ptr(7, 7));
    ptr = Calculate('/');
    printf("\nThe division  is: %d", ptr(15, 3));

    return 0;
}

int sum(int x, int y) // function initialization
{
    return (x + y);
}

int sub(int x, int y) // function initialization
{
    return (x - y);
}

int mult(int x, int y) // function initialization
{
    return (x * y);
}

int div(int x, int y) // function initialization
{
    return (x / y);
}