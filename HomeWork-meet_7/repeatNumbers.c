// Принтира всички повтрящи се елементи от даден масив, въведени от клавиатурата. Да се използват указатели.

#include <stdio.h>

int main()
{
    // Initialize array
    int size;
    int arr[size];
    int *p_arr = arr;

    printf("\nEnter number of elements: ");
    scanf("%d", &size);
    printf("\nEnter the array elements: \n");

    while (p_arr < &arr[size])
    {
        scanf("%d", p_arr++);
    }

    // reset the array
    p_arr = arr;

    // Searches for duplicate element
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (p_arr[i] == p_arr[j])
                printf("Duplicate element: %d\n", p_arr[j]);
        }
    }

    return 0;
}