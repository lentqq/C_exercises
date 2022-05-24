/* Да се напише програма, която смята сумата на всеки ред и всяка колона
на въведената от потребителят матрица. Разпечатайте матрицата и
получените резултати от сумите  в конзолата. */

#include <stdio.h>

int main()
{
    int row, col;

    printf("Input the number of rows and column\n");
    scanf("%d %d", &row, &col);

    int arr[row][col]; // matrix declaration
    printf("Input the elements of the matrix\n");

    for (int i = 0; i < row; i++) // matrix initialization
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nElements in the matrix are \n");

    // print the matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    // print the result
    printf("\nSum of row elements:\n");

    for (int i = 0; i < row; i++)
    {
        int rsum = 0;
        for (int j = 0; j < col; j++)
        {
            rsum = rsum + arr[i][j];
        }
        printf("\nSum of all elements in row %d is: %d\n", i, rsum);
    }

    printf("\nSum of column elements:\n");

    for (int i = 0; i < row; i++)
    {
        int csum = 0;
        for (int j = 0; j < col; j++)
        {
            csum = csum + arr[j][i];
        }
        printf("\nSum of all elements in column %d is: %d\n", i, csum);
    }
    return 0;
}