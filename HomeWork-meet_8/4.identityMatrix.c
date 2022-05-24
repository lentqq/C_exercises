/* Напишете програма, която проверява дали дадена матрица е
identity matrix - матрица с размер (N x N), където само елементите в главния
диагонал са единици, а всички останали елементи са нули. */

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int arr[10][10]; // declaration matrix
    int size = 0;
    bool flag = true;

    //Entered size of matrix /only one side/ because the matrix is square
    printf("Input a size of matrix:\n");
    scanf("%d", &size);

    printf("Input the elements of the matrix\n");

    // matrix initialization
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\n");

    // display the matrix
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    // check if the matrix is identity
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == j && arr[i][j] != 1)
            {
                flag = false;
                break;
            }
            else if (i != j && arr[i][j] != 0)
            {
                flag = false;
                break;
            }
        }
    }

    // print the rresult
    if (flag == true)
    {
        printf("It is a IDENTITY matrix!!!\n");
    }
    else
    {
        printf("It is NOT an identity matrix.\n");
    }

    return 0;
}