/* Напишете програма, която проверява дали две дадени матрици са
еднакви, сравнявайки съответните елементи в тях. Разпечатайте в конзолата
двете изходни матрици и резултата от сравнението. */

#include <stdio.h>

int main()
{
    int row, col;

    // entering number of rows and columns
    printf("Input number of rows and columns:\n");
    scanf("%d %d", &row, &col);

    // matrix declarations
    int arr1[row][col];
    int arr2[row][col];
    int flag = 1;

    printf("\nInput the elements of 1st matrix:\n");
    // intialization of 1st matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("\nInput the elements of 2nd matrix:\n");
    // intialization of 2nd matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("\n");

    // print 1st matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", arr1[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    // print 2nd matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", arr2[i][j]);
        }
        printf("\n");
    }

    // check if elements of two matrices are equal or different
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr1[i][j] != arr2[i][j])
            {
                flag = 0;
                break;
            }
        }
    }

    // print result
    if (flag == 1)
    {
        printf("\nYes, is Equal!!!\n");
    }
    else
    {
        printf("\nNo, they are not Equal!!!\n");
    }

    return 0;
}