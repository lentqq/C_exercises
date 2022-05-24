/* Напишете програма, която да завърти даден масив от цели числа с N позиции
наляво. Масива и числото N трябва да бъдат въведени от клавиатурата.
Принтирайте оригиналния и резултатния масиви. */

#include <stdio.h>

int main()
{
    int length;
    int numPosition;

    // we enter the length of the array
    printf("Input a length of array: ");
    scanf("%d", &length);

    int arr[length]; // array declaration
    printf("\nInput array`s elements: \n");
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }

    // display original array
    printf("\nOriginal array\n");
    for (int i = 0; i < length; i++)
    {
        printf("%d\t", arr[i]);
    }

    int rotatedArr[length];

    // enter the position from which we must rotate the array
    printf("\nInput the position from which must rotate: ");
    scanf("%d", &numPosition);

    for (int i = 0; i < length; i++)
    {
        // calculate the position from which we must rotate the array
        int newIndex = (i - numPosition + length) % length;
        rotatedArr[newIndex] = arr[i];
    }

    // display rotated array
    printf("\nRotated array\n");
    for (int i = 0; i < length; i++)
    {
        printf("%d\t", rotatedArr[i]);
    }

    return 0;
}