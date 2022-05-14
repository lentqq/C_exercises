/* Напишете C програма за броене на честотата на цифрите в дадено число.
Input any number: 116540
Frequency of 0 = 1
Frequency of 1 = 2
Frequency of 2 = 0
Frequency of 3 = 0
Frequency of 4 = 1
Frequency of 5 = 1
Frequency of 6 = 1
Frequency of 7 = 0
Frequency of 8 = 0
Frequency of 9 = 0 */

#include <stdio.h>
#include <stdlib.h>

int main()

{
    long num;
    int digit, count0 = 0, count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0, count6 = 0, count7 = 0, count8 = 0, count9 = 0;

    printf("Enter a number: \n");
    scanf("%ld", &num);

    while (num != 0)
    {
        // takes the value of the last digit of the number
        digit = num % 10;

        if (digit == 0)
        {
            count0++;
            num = num / 10;
        }
        else if (digit == 1)
        {
            count1++;
            num = num / 10;
        }
        else if (digit == 2)
        {
            count2++;
            num = num / 10;
        }
        else if (digit == 3)
        {
            count3++;
            num = num / 10;
        }
        else if (digit == 4)
        {
            count4++;
            num = num / 10;
        }
        else if (digit == 5)
        {
            count5++;
            num = num / 10;
        }
        else if (digit == 6)
        {
            count6++;
            num = num / 10;
        }
        else if (digit == 7)
        {
            count7++;
            num = num / 10;
        }
        else if (digit == 8)
        {
            count8++;
            num = num / 10;
        }
        else if (digit == 9)
        {
            count9++;
            num = num / 10;
        }
    }
    printf("Frequency of 0 = %d\n", count0);
    printf("Frequency of 1 = %d\n", count1);
    printf("Frequency of 2 = %d\n", count2);
    printf("Frequency of 3 = %d\n", count3);
    printf("Frequency of 4 = %d\n", count4);
    printf("Frequency of 5 = %d\n", count5);
    printf("Frequency of 6 = %d\n", count6);
    printf("Frequency of 7 = %d\n", count7);
    printf("Frequency of 8 = %d\n", count8);
    printf("Frequency of 9 = %d\n", count9);

    return 0;
}
