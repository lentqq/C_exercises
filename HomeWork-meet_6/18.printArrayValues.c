// Функция, която отпечатва стойностите на масив.

#include <stdio.h>

void printValues(int *arr, int num);

int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    printValues(arr, 7);

    return 0;
}

void printValues(int *arr, int num)
{
    for (int i = 0; i < num; i++)
    {
        printf("%d\t", arr[i]);
    }
}