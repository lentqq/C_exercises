// Напишете програма, която копира един масив в друг, използвайки указател

#include <stdio.h>
#define SIZE 5

int main()
{

    int arr1[SIZE];
    int arr2[SIZE] = {10, 20, 30, 40, 50};

    // copy elements from arr2 to arr1
    for (int i = 0; i < SIZE; i++)
    {
        *(arr1 + i) = *(arr2 + i);
    }

    // print elements of arr1
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d\t", *(arr1 + i));
    }

    return 0;
}