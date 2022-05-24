/* Прочетете масив от цели числа от клавиатурата.
Копирайте въведения масив във втори масив, като умножите стойността на
всеки елемент по 2. Принтирайте двата масива.*/

#include <stdio.h>
#define SIZE 5

int main()
{
    int arr1[SIZE];
    int arr2[SIZE];
    int *parr1 = arr1;

    printf("Input elements of array:  \n");

    // Inputs elements of arr1
    while (parr1 < &arr1[SIZE])
    {
        scanf("%d", parr1++);
    }

    // reset the array
    parr1 = arr1;

    // copy elements of arr1 to arr2
    for (int i = 0; i < SIZE; i++)
    {
        *(arr2 + i) = *(arr1 + i);
    }

    printf("Elements in arrays are: \n");

    // print arrays elements, second products by 2
    for (int i = 0; i < SIZE; i++)
    {
        printf("arr1[%d] =  %d\t", i, arr1[i]);
    }

    printf("\n");

    for (int i = 0; i < SIZE; i++)
    {
        printf("arr2[%d] = %d\t", i, (arr2[i]) * 2);
    }

    return 0;
}