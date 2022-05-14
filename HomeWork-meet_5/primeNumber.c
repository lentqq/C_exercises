/* . Да се напише програма, която по дадено цяло положително
число, проверява дали това е просто или не е.
Едно число се нарича просто, ако се дели само на 1 и на себе си, т.е. Няма
други делители. */

#include <stdio.h>

int main()
{
    int num, count = 0;

    printf("Input a number: ");
    scanf("%d", &num);

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            count++;
            break;
        }
    }
    if (count == 0 && num != 1)
    {
        printf("%d Is a prime number.\n", num);
    }
    else
    {
        printf("%d Is not a prime number", num);
    }

    return 0;
}
