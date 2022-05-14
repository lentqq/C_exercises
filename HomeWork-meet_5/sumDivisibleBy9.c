/* Да се напише програма, която намира сумата на всички числа между 100 и 200,
които се делят на 9.
Expected Output :
Numbers between 100 and 200, divisible by 9 :
108 117 126 135 144 153 162 171 180 189 198
The sum : 1683 */

#include <stdio.h>

int main()
{
    int sum = 0;

    for (int i = 100; i <= 200; i++)
    {
        if (i % 9 == 0)
        {
            sum += i;
            printf("%d\t", i);
        }
    }

    printf("\nThe sum is: %d", sum);

    return 0;
}