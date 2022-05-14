// Печата числата от 10 до 100 наобратно

#include <stdio.h>
#include <math.h>

int main()
{
    int x;

    for (int num = 10; num < 100; num++)
    {
        x = 10 * (num % 10) + num / 10;
        printf("%d\t", x);
    }

    return 0;
}