/* . Да се напише програма, която намира Strong Numbers
до дадено цяло число n. Strong Numbers е число,
равно на сумата от факториелите на отделните му цифри.
Пример: 145 --> 1! + 4! + 5! = 1 + 24 + 120 = 145 */

#include <stdio.h>

int main()
{
    int number, factoriel = 1, sumFactoriels = 0, digit;
    int temp = number; 

    printf("Input a number: ");
    scanf("%d", &number);

    while (temp != 0)
    {
        digit = temp % 10;

        for (int i = 1; i <= digit; i++)
        {
            factoriel *= i;
        }

        sumFactoriels += factoriel;
        temp /= 10;
    }

    if(sumFactoriels == number)
    {
        printf("%d is a strong number!!!", number);
    }
    else
    {
        printf("%d is not a strong number!!! The sum is: %d", number, sumFactoriels);
    }

    return 0;
}