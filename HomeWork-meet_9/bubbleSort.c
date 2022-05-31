/* Bubble Sort алгоритъмът, сравнява всеки два съседни елемента в масива
и ако първият елемент е по голям от вторият елемент, им разменя местата .
Не е подходящ за обхождане на големи структури от данни, защото е доста бавен и не оптимизиран. */

#include <stdio.h>

void bubbleSort(int arr[], int n);    // function declaration
void printArray(int arr[], int size); // function declaration
void swap(int *x, int *y);            // function declaration

int main()
{
    int arr[] = {25, 99, 1, 5, 14, 87, 25, 36, 47, 3};
    int length = sizeof(arr) / sizeof(arr[0]);

    printf("\nOriginal array\n");
    printArray(arr, length);// calls function to print array
    printf("\n");
    printf("\nSorted array\n");
    bubbleSort(arr, length);// calls function to sort array
    printArray(arr, length);

    return 0;
}

void bubbleSort(int arr[], int n) // function initialization to sort array
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void swap(int *x, int *y) // function initialization to swap two numbers using pointers
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void printArray(int arr[], int size) // function initialization to print elements of array
{
    for (int i = 0; i < size; i++)
    {
        printf("{ %d }\t", arr[i]);
    }
}