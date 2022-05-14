// . Да се напише програма, която изчислява произведението от цифрите на цяло число, подадено на вход

#include <stdio.h>

int main()

{
    int number, product = 1;
    printf("Enter any number: ");
    scanf("%d", &number);
    while (number != 0)
    {
        product = product * (number % 10);
        number = number / 10;
    }
    printf("Product of digits = %ld", product);

    return 0;
}