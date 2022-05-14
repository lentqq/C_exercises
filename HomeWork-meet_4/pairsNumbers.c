/* Given a natural number N, find all pairs of natural numbers M and K for who
M2 + K2 = N */

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int number, countPairs = 0;

    printf("Enter a number: ");
    scanf("%d", &number);
    
    // use nested "for-loops" to find all pairs
    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= number; j++)
        {
            // check иф the sum of the doubled numbers is equal to N
            if (i * 2 + j * 2 == number)
            {
                countPairs++;
                printf("[ %d | %d ]    ", i, j);
            }
        }
    }

    printf("\n");
    printf("We have a %d pairs!!!", countPairs);

    return 0;
}
