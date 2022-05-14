// Програма, която умножава цифрите на едно число

#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    int product = 1;

    printf("Enter a number:  ");
    scanf("%d", &num);

    while (num > 0)
    {
        product *= num % 10;

        // remove last digit
        num /= 10;
    }

    printf("Result: %d", product);
    return 0;
}
