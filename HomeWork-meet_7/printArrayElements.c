/* Напишете програма, която въвежда и принтира елементите на масив,
използвайки указател. */

#include <stdio.h>
#define SIZE 5

int main()
{
    int arr[SIZE];
    int *ptr = arr;

    printf("Input elements of array:  \n");

    while (ptr < &arr[SIZE])
    {
        scanf("%d", ptr++);
    }

    // reset the array
    ptr = arr;

    printf("Elements in array are: ");

    for (int i = 0; i < SIZE; i++)
    {
        printf("%d, ", ptr[i]);
    }

    return 0;
}