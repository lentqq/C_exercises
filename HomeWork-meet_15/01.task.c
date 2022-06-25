/*
Дадена е квадратна матрица. Напишете функция, която изчислява
абсолютната стойност на разликата между сумата по диагоналите.
Пример
1 2 3
4 5 6
7 8 9
left-to-right diagonal = 1+ 5 + 9 = 15.
right to left diagonal = 3 +5 +7 = 17 .
абсолютната разлика е |15-17| = 2 .
 
 Функция, която проверява дали един квадрат е магически
*/
 
#include <stdio.h>
#include <stdlib.h>
#define ROW 3
#define COL 3
#define SIZE ROW *COL
 
// function declaration
int diagonalDifference(int arr_rows, int arr_columns, int **arr);
 
int main()
{
    int **p;
 
    printf("\nEnter the elements of matrix:\n");
    p = (int **)malloc(SIZE * (sizeof(int*)));
 
    for(int i = 0 ; i< SIZE ; i++){
        p[i] = (int*)malloc(sizeof(int)*SIZE);
    }
 
    // matrix intialization
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            scanf("%d", &p[i][j]);
        }
    }
 
    printf("\nThe matrix is:\n");
 
    // display matrix
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            printf("%d\t", p[i][j]);
        }
        printf("\n");
    }
 
    int absValue = diagonalDifference(ROW, COL, p);
    printf("\nThe absolute Sum is:[ %d ]\n", absValue); // call function
 
    free(p);
 
    return 0;
}
 
// function initialization
int diagonalDifference(int arr_rows, int arr_columns, int **arr)
{
    int l_diagonal_sum = 0, r_diagonal_sum = 0;
 
    for (int i = 0; i < arr_rows; i++)
    {
        for (int j = 0; j < arr_columns; j++)
        {
            if (i == j)
            {
                l_diagonal_sum += arr[i][j];
            }
            if ((i + j) == (arr_columns - 1))
            {
                r_diagonal_sum += arr[i][j];
            }
        }
    }
    return abs(l_diagonal_sum - r_diagonal_sum);
}