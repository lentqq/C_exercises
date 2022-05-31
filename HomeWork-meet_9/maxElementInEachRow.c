// Функция връщаща максималният елемент от всеки ред на двумерен масив

#include <stdio.h>
#include <stdlib.h>

void MaxElement(int arr[10][10], int m, int n); // function declaration

int main()
{
    int m, n; // array size declaration
    printf("\nEnter the number of rows and columns: \n");
    scanf("%d %d", &m, &n); // array size initialization
    int arr[10][10];        // array size declaration
    printf("\nEnter the elements of the array: \n");
    for (int i = 0; i < m; i++) // array initialization
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nThe elements in the array are: \n");
    for (int i = 0; i < m; i++) // print the array
    {
        for (int j = 0; j < n; j++)
        {
            printf("[%d]\t", arr[i][j]);
        }
        printf("\n");
    }
    MaxElement(arr, m, n); // function Call

    return 0;
}

void MaxElement(int arr[10][10], int m, int n) // function definition
{
    int maxValue = 0;
    int maxValueArr[m];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] > maxValue) // check for the maximum element in the array
            {
                maxValue = arr[i][j]; // assignment of the largest element
            }
        }

        maxValueArr[i] = maxValue;
        maxValue = 0;
    }

    for (int i = 0; i < m; i++) // print the largest element in each row
    {
        printf("\nLargest element in row %d is %d \n", i + 1, maxValueArr[i]);
    }
}
