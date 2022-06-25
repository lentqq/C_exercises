/*
Напишете функция, която връща двумерен масив, запълнен по следния начин:
0   20    19   17   14
1    0    18   16   13
2    5     0   15   12
3    6     8    0   11
4    7     9   10    0
*/

#include <stdio.h>

// function declaration
void printMatrix();

int main()
{
    printMatrix(); // call function to print given matrix
    return 0;
}

// function initialization
void printMatrix()
{
    int matrix[5][5];
    int counterDown = 1;
    int counterUp = 20;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i < j)
            {
                matrix[j][i] = counterDown;
                counterDown++;
            }
            else if (i == j)
            {
                matrix[i][j] = 0;
            }
            else if (i > j)
            {
                matrix[j][i] = counterUp;
                counterUp--;
            }
        }
    }

    printf("\nThe Matrix is:\n\n");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}