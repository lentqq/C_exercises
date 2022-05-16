/* Да се напише функция, връщаща максималното от две числа.
Програмата ще чете 3 числа и извежда максималното от тези 3 числа,
като използва написаната функция. Задачата да се направи по два
начина — с оператор if и с тернарен оператор. */
#include <stdio.h>

// function declaration /*function prototype*/
int getMaxNumber(int a, int b);

int main()
{
    int a, b, c;

    printf("Input three numbers: \n");
    scanf("%d %d %d", &a, &b, &c);

    printf("The Max number is: %d", getMaxNumber(a, getMaxNumber(b, c))); // call function to get Max number

    return 0;
}

// function definition to return bigger number
int getMaxNumber(int a, int b)
{
    int result = (a > b) ? a : b;
    return result;
}