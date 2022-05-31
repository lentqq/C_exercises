/* Функциятя започва от първият елемент, приемайки го за минимален.
Сравнява го с всеки следващ елемент от масива и ако намери такъв по малък
разменя местата им. Прави се с два подмасива, единият за сортираните елементи и
един за несортираните, които се обхождат с цикъл. И така докато свършат елементите
от несортираният масив. */

#include <stdio.h>

void selectionSort(int arr[], int n); // function declaration
void printArray(int arr[], int size); // function declaration
void swap(int *x, int *y);            // function declaration

int main()
{
    int arr[] = {99, 25, 2, 7, 48, 77, 19};
    int length = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, length);
    printf("\n");
    printArray(arr, length);

    return 0;
}

void selectionSort(int arr[], int n) // initialized function to sort elements
{
    int minIndex;

    for (int i = 0; i < n - 1; i++)
    {
        minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(&arr[minIndex], &arr[i]); // swap elements
    }
}

void printArray(int arr[], int size) // finction initialization to print elements of array using for-loop
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

void swap(int *x, int *y) // function initialization to swap two numbers
{
    int temp = *x;
    *x = *y;
    *y = temp;
}