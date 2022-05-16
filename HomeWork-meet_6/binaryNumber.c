/* Функция, която отпечатва едно цяло десетично число в двоична
бройна система — чрез 0 и 1.
void printBinary(int n) */

#include <stdio.h>

// function declaration /* function definition */
void printBinary(int n);

int main()
{
    int decimalNumber;

    printf("Input a decimal number: ");
    scanf("%d", &decimalNumber);

    printBinary(decimalNumber); // call function to convert decimal to binary

    return 0;
}

// function definition to print a decimal number to binary
void printBinary(int n)
{
    long long bin = 0;
    int remainder, d = 1;

    for (int i = n; i != 0; i)
    {
        remainder = i % 2;
        i /= 2;
        bin += remainder * d;
        d *= 10;
    }

    // give width and to zero-fill my integer output
    printf("%d in decimal = %012lld in binary", n, bin);
}