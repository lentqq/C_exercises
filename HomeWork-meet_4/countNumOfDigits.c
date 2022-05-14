/* Напишете програма на C, която прочита едно цяло число и като използва цикъл
do while, намира и извежда броят на цифрите му */

#include <stdio.h>
int main()
{

    int number, count;

    printf("Enter an integer: ");
    scanf("%d", &number);
    do
    {
        number /= 10;
        count++;
    } while (number > 0);

    printf("Number of digits: %d\n", count);

    return 0;
}