/* Да се напише програма, която по дадено цяло положително
число, проверява дали е число на Armstrong, т.е. Сумата от кубовете на
отделните цифри са равни на числото, например, такова е числото
153 = 13+53+33.
Input a number: 153
153 is an Armstrong number */

#include <stdio.h>

int main()
{
    int num, digit, temp, sum = 0;

    printf("Input a number: \n");
    scanf("%d", &num);

    for (temp = num; num != 0; num = num / 10)
    {
        digit = num % 10;
        sum = sum + digit * digit * digit;
    }
    if (sum == temp)
    {
        printf("%d is an Armstrong number.\n", temp);
    }
    else
    {
        printf("%d is not Armstrong number.\n", temp);
    }
    return 0;
}
