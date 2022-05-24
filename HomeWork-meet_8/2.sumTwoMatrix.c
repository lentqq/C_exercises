/* Напишете програма, която събира две матрици(4 х 4) и записва резултата в трета такава със същият размер.
Събирането на матриците става като намерим сумата на съответстващите елементи в тях.
Данните за изходните матрици, трябва да бъдат въвведени от потребителя.
Отпечатайте трите матрици  в конзолата.*/

#include <stdio.h>

int main()
{
    int row = 4, col = 4;
    int arr1[4][4];
    int arr2[4][4];

    printf("Input values of 1st matrix:\n");

    // Input the data of the first 2D array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Array1 [%d][%d] = ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("\nInput values of 2nd matrix:\n");

    // Input the data of the second 2D array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Array2 [%d][%d] = ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("\n");

    // Print the first matrix using for-loop
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", arr1[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    // Print the second matrix using for-loop
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", arr2[i][j]);
        }
        printf("\n");
    }

    printf("\nThe result after the addition of the two matrices\n");

    // Print the result(sum of values of two matrices) using for-loop
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", arr1[i][j] + arr2[i][j]);
        }
        printf("\n");
    }

    return 0;
}