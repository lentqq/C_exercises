/* Напишете програма, която да брои колко пъти се среща едно число в даден масив
от цели числа. Масивът трябва да бъде въведен от клавиатурата. Принтирайте
резултатите.*/

#include <stdio.h>

int main()
{
    int size;
    int array[size];
    int *p_arr = array;
    int count = 0;
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

    // find and count unique elements
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (array[i] == array[j] && i != j)
            {
                temp = array[j];
                count++;
                break;
            }
        }
    }

    // print elements of array
    printf("Array elements are as follows: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", array[i]);
    }

    printf("\n");

    // print counting unique elements
    printf("Element %d of array is counted %d times \n", temp, count);

    return 0;
}