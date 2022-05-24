/*  Напишете програма, която принтира уникалните елементи от масив с цели числа,
въведени от клавиатурата. За целта, някои от числата трябва да се повтарят.*/

#include <stdio.h>
#include <stdlib.h>

int uniqueElements(int array[], int n);

int main()
{
    int size;
    int array[size];
    int *p_arr = array;

    printf("\nEnter number of elements: ");
    scanf("%d", &size);
    printf("\nEnter the array elements: \n");

    while (p_arr < &array[size])
    {
        scanf("%d", p_arr++);
    }

    // reset the array
    p_arr = array;

    // use function to print unique elements
    uniqueElements(array, size);

    return 0;
}

int uniqueElements(int array[], int n)
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (array[i] == array[j] && i != j)
                break;
        }
        if (j == n)
        {
            printf("Unique element: %d\n", array[i]);
        }
    }
    // return 0;
}