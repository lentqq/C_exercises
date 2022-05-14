/* Да се напише програма, която по дадено цяло положително
число, проверява дали е перфектно, т.е. Дали е равно на сумата от
делителите си, които са по-малки от числото.
Input the number : 56
Expected Output :
The positive divisor : 1 2 4 7 8 14 28
The sum of the divisor is : 64
So, the number is not perfect */

#include <stdio.h>

int main()
{
    int number, i, sum = 0;

    printf("Input the number : ");
    scanf("%d", &number);

    printf("The positive divisor : ");

    for (i = 1; i < number; i++)
    {
        if (number % i == 0)
        {
            sum = sum + i;
            printf("%d ", i);
        }
    }
    printf("\nThe sum of the divisor is : %d", sum);

    if (sum == number)
    {
        printf("\nThe number is perfect.");
    }
    else
    {
        printf("\nThe number is not perfect.\n");
    }

    return 0;
}