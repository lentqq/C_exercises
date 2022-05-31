/* Напишете програма, която прочита стойности в двумерен масив 3x4
с помощта на функция.
Разменят се първия и втория ред на масива.
След това стойностите на масива се извеждат
като се използва друга функция. */

#include <stdio.h>
#include <stdlib.h>

void readArray(int **a, int n, int m); // function declaration
void printArr(int **a, int n, int m);  // function declaration
int swapRow(int *x, int *y, int m);    // function declaration

int main()
{
    int i, N = 3, M = 4;
    int **array;

    array = (int **)malloc(sizeof(int *) * N); // dynamically allocated 2D array

    for (i = 0; i < N; i++)
    {
        array[i] = (int *)malloc(sizeof(int) * M); // dynamically allocated 2D array
    }

    readArray(array, N, M);
    printArr(array, N, M);

    printf("\n");

    swapRow(array[0], array[1], M);
    printArr(array, N, M);
    // int maximum = maxElem(array, N, M);
    for (i = 0; i < N; i++)
    {
        free(array[i]); // dynamically allocated memory is freed using free() function
        array[i] = NULL;
    }
    free(array); // dynamically allocated memory is freed using free() function
    array = NULL;
}

void readArray(int **a, int n, int m) // initialization function to fill 2D array
{
    for (int k = 0; k < n; k++)
        for (int l = 0; l < m; l++)
            scanf("%d", &a[k][l]);
}

void printArr(int **a, int n, int m) // initialization function to print 2D array
{
    for (int k = 0; k < n; k++)
    {
        for (int l = 0; l < m; l++)
            printf("%d\t", a[k][l]);
        printf("\n");
    }
}

int swapRow(int *x, int *y, int m) // function to swap two rows
{
    int row;
    for (row = 0; row < m; row++)
    {
        int tmp = x[row];
        x[row] = y[row];
        y[row] = tmp;
    }
}