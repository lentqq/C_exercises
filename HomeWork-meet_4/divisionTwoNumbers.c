/* Given are a, b, N (b! = 0, 1 <= N <= 100). Find the division of a / b and print it on the screen with
N digits after the decimal point.*/

#include <stdio.h>

int main()
{
    char dot = '.';
    int a, b, decimalPlaces;

    printf("Enter a two nubers each on a new line and number for decimal places: \n");
    scanf("%d %d %d", &a, &b, &decimalPlaces);

    // Base cases
    if (b == 0)
    {
        printf("Infinite!\n");
    }
    if (a == 0)
    {
        printf("Result is: ");
    }

    int d = a / b;

    // print digits after dot first way with for-loop
    for (int i = 0; i <= decimalPlaces; i++)
    {
        printf("%d", d);
        a = a - (b * d);
        if (a == 0)
            break;
        a = a * 10;
        d = a / b;
        if (i == 0)
        {
            putchar(dot);
        }
    }

    // second way
    float m = 1;
    float k = 3;
    float division = m / k;

    printf("\n%.*lf", decimalPlaces, division);

    return 0;
}
