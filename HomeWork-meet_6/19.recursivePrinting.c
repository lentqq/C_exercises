/* Да се напише рекурсивна функция
int numPrint(int n),
С помощта на която се отпечатват всички естествени числа до 100. */

#include <stdio.h>

void numPrint(int n);

int main()
{
    int n = 100;
    numPrint(n);

    return 0;
}

void numPrint(int n)
{

    if (n)
    {
        // use recursion
        numPrint(n - 1);
    }
    // else
    // {
    //     return;
    // }

    printf("%d\t", n);
}