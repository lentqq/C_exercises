/* Декларирайте двумерен масив с по 5 елемента (5 x 5). След като сте
готови, направете въвеждане на данните в масива, като четете от потребителя
със scanf. Отпечатайте масива в конзолата, спазвайки броя редове и колони. */

#include <stdio.h>

int main()
{
    int arr[5][5]; // matrix declaration

    printf("Input the elements of the matrix: \n");

    // matrix intialization
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nResult is:\n");

    // display the matrix
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}