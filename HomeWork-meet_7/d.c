// Напишете програма, която копира един масив в друг, използвайки указател

#include <stdio.h>
#include <stdlib.h>
// int main()
// {
//     int *ptr = (int *)malloc(sizeof(int));
//     int a = 5;
//     ptr = &a;
//     free(ptr);
//     // now this ptr is known as dangling pointer.
//     printf("After deallocating its memory *ptr = % d", *ptr);
//     return 0;
// }

int countUniqueNumbers(int array[], int size, int *temp);

int main()
{
    int size;
    int array[size];
    int count = 0;
    int *p_arr = array;
    int temp;

    printf("\nInput number of elements: ");
    scanf("%d", &size);
    printf("\nInput the array elements: \n");

    while (p_arr < &array[size])
    {
        scanf("%d", p_arr++);
    }

    // reset the array
    p_arr = array;

    countUniqueNumbers(p_arr, size, &temp);

    printf("Array elements are as follows: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", p_arr[i]);
    }

    printf("\n");

    printf("Element %d of array is counted %d times \n", &temp, countUniqueNumbers(p_arr, size, &temp));

    return 0;
}

int countUniqueNumbers(int array[], int size, int *temp)
{
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (array[i] == array[j] && i != j)
            {
                *temp = array[j];
                count++;
                break;
            }
        }
    }
    return count;
}