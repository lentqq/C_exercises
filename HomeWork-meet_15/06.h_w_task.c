/*
Даден e масив от 5 положителни числа. Да се напишат две функции, които
намират минималната и максималната стойност, които могат да се
изчислят, като се сумират точно 4 от тези 5 числа.
Програмата чете масива от тези 5 числа, извиква съответните функции и
отпечатва съответно minimum и maximum стойностите, всяка на нов ред.
arr = [1,3,5,7,9]
minimum sum is 1 + 3 + 5 + 7 = 16
maximum sum is 3 + 5 + 7 + 9 = 24.
 отпечатва се 16 24
*/

#include <stdio.h>
#include <stdlib.h>
#define N 5

void min(int *arr);
void max(int *arr);

int main()
{
    int *arr = (int *)malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++)
    {
        printf("Enter number: ");
        scanf("%d", &arr[i]);
    }
    min(arr);
    max(arr);
}

void min(int *arr)
{
    int min;
    int minend = INT_MAX;

    for (int i = 0; i < N; i++)
    {
        min = 0;

        for (int j = 0; j < N; j++)
        {
            if (i == j)
            {
                continue;
            }
            min += arr[j];
        }
        if (minend == 0)
        {
            minend = min;
        }

        if (min < minend)
        {
            minend = min;
        }
    }
    printf("Min sum is: %d\n", minend);
}

void max(int *arr)
{
    int max;
    int maxend = INT_MIN;

    for (int i = 0; i < N; i++)
    {
        max = 0;

        for (int j = 0; j < N; j++)
        {
            if (i == j)
            {
                continue;
            }
            max += arr[j];
        }

        if (maxend == 0)
        {
            maxend = max;
        }
        if (max > maxend)
        {
            maxend = max;
        }
    }
    printf("Max sum is: %d", maxend);
}