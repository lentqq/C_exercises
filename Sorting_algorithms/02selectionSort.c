/* Функциятa започва от първият елемент, приемайки го за минимален.
Сравнява го с всеки следващ елемент от масива и ако намери такъв по малък
разменя местата им. Прави се с два подмасива, единият за сортираните елементи и
един за несортираните, които се обхождат с цикъл. И така докато свършат елементите
от несортираният масив. */

#include <stdio.h>

// functions declarations
void selectionSort(int arr[], int n);
void printArray(int arr[], int size);
void swap(int *x, int *y);

int main()
{
    int arr[] = {25, 4, 78, 562, 99, 5, 55, 12};
    int length = sizeof(arr) / sizeof(arr[0]);

    printf("\nOriginal array:\n");
    printArray(arr, length); // call function to print elements of array
    printf("\nSorted array:\n");
    selectionSort(arr, length); // call function to sort array in asccending order
    printArray(arr, length);

    return 0;
}

void selectionSort(int arr[], int n) // function initialization to sort array in ascending order
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i; // index to hold position of min element
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex]) // check if current element is smaller than min element swap this elements
            {
                minIndex = j;
            }
        }
        swap(&arr[minIndex], &arr[i]);
    }
}

void printArray(int arr[], int size) // function initialization to print elements of array
{
    for (int i = 0; i < size; i++)
    {
        printf("{%d}\t", arr[i]);
    }
    printf("\n");
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}