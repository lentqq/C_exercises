/*  За множеството от положителните цели числа, дефинираме
следната итеративна редица: ако n е четно число, следващото число е n/2,
ако n е нечетно число, следващото става 3*n+1
Например, ако се започне с числото 13, ще се получи редицата
13, 40, 20, 10, 5, 16, 8, 4, 2, 1
Редицата завършва, когато се получи 1.
Напишете програма, която извежда от кое число, между 200 и 2000 трябва
да се започне, че да се получи най-дълга редица.
Да се изведе дължината на редицата и самата редица */

#include <stdio.h>

int main()
{
    int number, counter = 0, max = 0, n;

    printf("Input a number: ");
    scanf("&d", &number);

    // for (int i = 200; i <= 2000; i++)
    // {
    //     number = i;

    while (number != 1)
    {
        if (number % 2 == 0)
        {
            number /= 2;
            printf("%d", number);
        }
        else
        {
            number = number * 3 + 1;
            printf("%d", number);
        }
        //         counter++;
        //     }
        //     if (counter > max)
        //     {
        //         max = counter;
        //     }
        // }

        // printf("%d", n);

        return 0;
    }
}