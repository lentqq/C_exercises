#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "customFunctions.h"

int main()
{
    int n = 5;
    int arr[n];
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    for (int i = n -1; i >= 0; --i)
    {
        printf("%d\t", arr[i]);
    }

    // int *arr;

    // printf("Input a numbers:\n");
    // arr = initializeArray(5);
    // printArray(arr, 5);
    // sortArrDescendingOrder(arr, 5);
    // printArray(arr, 5);

    //    bool a = true;
    //    bool b = false;
    //    printf("%d   %d", a, b);

    // int *arr;
    // printf("Input elements: \n");
    // arr = initializeArray(5);
    // printf("\nThe elements are: ");
    // printArray(arr, 5);
    // printf("\nThe sorting elements are: ");
    // sortArrAscendingOrder(arr, 5);
    // printArray(arr, 5);

    // int num1 = 7;
    // int num2 = 14;
    // printf("nu1 = %d   num2 = %d\n", num1, num2);
    // swap(&num1, &num2);
    // printf("nu1 = %d   num2 = %d", num1, num2);

    // int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int *p_arr = arr;

    // printf("[%d]\t{0x%p}\n", *p_arr + 3, p_arr +3);

    // for (int i = 0; i < 10; i++)
    // {
    //     printf("[%d]\t", *p_arr + i);
    //     printf("{0x%p}\n", p_arr + i);
    // }

    return 0;
}
