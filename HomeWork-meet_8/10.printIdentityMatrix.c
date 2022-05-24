/* Напишете програма, която печата "Identity Matrix"."Identity Matrix" е матрица,
на която само главният диагонал(от ляво горе --> дясно долу) е съставен от 1-ци,
а останалите елементи от матрицата са 0.*/

#include <stdio.h>

int main()
{
    int sizeOfMatrix, row, col;

    // Entered size of matrix /only one side/ because the matrix is square
    printf("Input the size of matrix: ");
    scanf("%d", &sizeOfMatrix);

    int arr[sizeOfMatrix][sizeOfMatrix]; // matrix declaration

    // matrix initialization
    for (row = 0; row < sizeOfMatrix; row++)
    {
        for (col = 0; col < sizeOfMatrix; col++)
        {
            if(row == col)
            {
                printf("[ %d ]\t", 1);
            }
            else
            {
                printf("[ %d ]\t", 0);
            }
        }
        printf("\n");
    }

    return 0;
}