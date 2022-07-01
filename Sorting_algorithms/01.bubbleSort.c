/* Bubble Sort алгоритъмът, сравнява всеки два съседни елемента в масива
и ако първият елемент е по голям от вторият елемент, им разменя местата .
Не е подходящ за обхождане на големи структури от данни, защото е доста бавен и не оптимизиран. */

#include <stdio.h>

// functions declarations
void bubbleSort(int arr[], int n);
void printArray(int arr[], int size);
void swap(int *x, int *y);

int main()
{
    int arr[] = {25, 48, 5, 19, 99, 14, 128, 31};
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("\nOriginal array:\n");
    printArray(arr, length); // call function to print array
    printf("\nSorting array:\n");
    bubbleSort(arr, length); // call function to sort array in ascending order
    printArray(arr, length);

    return 0;
}

void swap(int *x, int *y) // function initialization to swap two numbers
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void printArray(int arr[], int size) // function initialization to print elements of array
{
    for (int i = 0; i < size; i++)
    {
        printf("{%d}\t", arr[i]);
    }
    printf("\n");
}

void bubbleSort(int arr[], int n) // function initialization to sort array in ascending order
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1]) // check if next element is bigger than previous call swap() function
            {
                swap(&arr[j], &arr[j + 1]); // swap elements
            }
        }
    }
}