/* Напишете програма, която разменя елементите на два масива с еднакава дължина, 
изпозвайки указатели. */

#include <stdio.h>
#define SIZE 5

void swap();

int main()
{

    int arr1[SIZE] = {1, 2, 3, 4, 5};
    int arr2[SIZE] = {10, 20, 30, 40, 50};

    // swap elements of arr1 and arr2
    for (int i = 0; i < SIZE; i++)
    {
        swap(&arr1[i], &arr2[i]);
    }

    // print elements of arr1
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d\t", *(arr1 + i));
    }

    printf("\n");

    // print elements of arr2
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d\t", *(arr2 + i));
    }

    return 0;
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}