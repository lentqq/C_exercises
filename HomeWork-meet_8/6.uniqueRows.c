/* Напишете програма, която печата броя на уникалните редове в бинарна
матрица, съставена само от единици и нули.*/

#include <stdio.h>
#include <stdbool.h>

int main()
{

    int row, col;
    /* example: 1 0 1 1
                0 1 1 1
                0 1 1 1  */
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

    printf("\n");

    // check for similar rows
    for (int i = 0; i < row; i++)
    {
        bool flag = true;
        
        // starting from 2nd row
        for (int j = 0; j < i; j++)
        {
            flag = false;

            // iterate and, if the row is different ptint it 
            for (int x = 0; x < col; x++)
            {
                if (arr[i][x] != arr[j][x])
                    flag = true;
            }

            // if the row is matches, skip it
            if (flag == false)
            {
                break;
            }
        }

        // if no similar rows, print it
        if (flag == true)
        {
            for (int j = 0; j < col; j++)
            {
                printf("%d\t", arr[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}