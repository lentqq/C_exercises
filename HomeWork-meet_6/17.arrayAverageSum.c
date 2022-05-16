/*Функция, която намира сумата от елементите на масив и програма,
намираща средното аритметично от елементите на масив. */

#include <stdio.h>

int sum(int arr[], int n);

int main()
{
    int arr[] = {17, 20, 32, 48};
    int n = sizeof(arr) / sizeof(arr[0]);

    // calculate average sum, clling sum() function
    double elementsAvrgSum = sum(arr, n) / (double)n;

    printf("The average sum of elements is: %.2lf", elementsAvrgSum);

    return 0;
}

int sum(int arr[], int n)
{
    int sum = 0;

    // iterate with for-loop to find sum of elements
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
