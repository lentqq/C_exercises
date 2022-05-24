/* Напишете програма, която проверява, дали дадено число N го има в матрицата
и ако го има да извежда резултата в конзолата, както и позицията на която се намира.
Матрицата и числото да бъдат въведени от клавиатурата. */

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int row, col, numForCheck;
    int rowPosition, colPosition; // two varaibles to hold position of number
    bool isExist = false;

    printf("\nPleas input a number for check:\n");
    scanf("%d", &numForCheck);

    printf("Input number of rows and columns:\n");
    scanf("%d %d", &row, &col);

    int arr[row][col]; // matrix declaration

    printf("\nInput the elements of matrix:\n");
    for (int i = 0; i < row; i++) // matrix intialization
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nThe entered matrix is:\n");

    for (int i = 0; i < row; i++) // displaying the matrix
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    // check if the number exist in the matrix
    for (int i = 0; i < row; i++) // displaying the matrix
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == numForCheck)
            {
                isExist = true;
                rowPosition = i;
                colPosition = j;
                break;
            }
        }
    }

    // print the final result
    if (isExist)
    {
        printf("\nThe entered number for check is %d\n", numForCheck);
        printf("\nYes, number EXIST at position: [row -> %d] [col -> %d]\n", rowPosition, colPosition);
    }
    else
    {
        printf("\nThe entered number for check is %d\n", numForCheck);
        printf("\nNo, the number is NOT exist in that matrix!!!\n");
    }

    printf("\n");

    return 0;
}