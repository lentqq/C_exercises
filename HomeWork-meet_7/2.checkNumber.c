/* Напишете програма, която запълва масив от 20 елемента с произволно избрани
цели числа. За целта използвайте функцията rand().
Въведете едно цяло число от клавиатурата. Проверете дали въведеното число
от клавиатурата е намерено в масива. Принтирайте масива и отговора дали
числото е намерено в масива. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 20

int main()
{
    int arr[SIZE];
    int *parr = arr;
    int existingNumber = 0;
    int startRange = 1, endRange = 1000;

    // use current time as start point for random generator
    srand(time(0));

    while (parr < &arr[SIZE])
    {
        // use rand() function to generate random array elements
        *parr = (rand() % (endRange - startRange + 1)) + startRange;
        parr++;
    }

    // reset the array
    parr = arr;

    // print elements of array
    for (int i = 0; i < SIZE; i++)
    {
        printf("'%d'  ", parr[i]);
    }

    printf("\nInput a number: ");
    scanf("%d", &existingNumber);

    // check if number exist in the array
    for (int i = 0; i < SIZE; i++)
    {
        if (*(arr + i) == existingNumber)
        {
            printf("The number %d exist!!!\n", existingNumber);
        }
    }

    return 0;
}