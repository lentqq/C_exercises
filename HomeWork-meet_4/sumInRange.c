// Sum a numbers in given range.

#include <stdio.h>

int main()
{
    // using "while" loop
    int a, b;
    int sum = 0;

    printf("Enter a number: \n");
    scanf("%d %d", &a, &b);

    while (a <= b)
    {
        sum += a;
        a++;
    }
    printf("The sum is: %d", sum);

    // using "do-while" loop

    do
    {
        sum += a;
        a++;
    } while (a <= b);

    printf("The sum is: %d", sum);

    return 0;
}