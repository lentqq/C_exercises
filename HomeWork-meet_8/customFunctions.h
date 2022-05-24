// #include <stdio.h>
// #include <stdlib.h>
// #include <stdbool.h>
// #include <time.h>

// puts the elements in the array
int *initializeArray(int num)
{
    int *array = malloc(num * sizeof(int));
    for (int i = 0; i < num; i++)
    {
        scanf("%d", array + i);
    }
    return array;
}

// prints elements of array
void printArray(int arr[], int num)
{
    for (int i = 0; i < num; i++)
    {
        printf("%d\t", *(arr + i));
    }
    printf("\n");
}

// swap two numbers
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// sort numbers of an array in descending order
void sortArrDescendingOrder(int arr[], int num)
{
    int count = 0;
    while (count < num - 1)
    {
        for (int i = 0; i < num - 1; i++)
        {
            if (arr[i + 1] > arr[i])
            {
                swap(&arr[i], &arr[i + 1]);
            }
        }
        count++;
    }
}

// sort numbers of an array in ascending order
void sortArrAscendingOrder(int arr[], int num)
{
    int count = 0;
    while (count < num - 1)
    {
        for (int i = 0; i < num - 1; i++)
        {
            if (arr[i + 1] < arr[i])
            {
                swap(&arr[i], &arr[i + 1]);
            }
        }
        count++;
    }
}