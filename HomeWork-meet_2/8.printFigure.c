#include <stdio.h>

int main()
{

    // A simple way
    printf("******\n");
    printf("      ******\n");
    printf("            ******\n");
    printf("                  ******");

    // Second way - using nested loops
    int rows;
    int numOfChars;
    int i, j;

    printf("Please enter a number of rows: "); // For example from the task enter 4
    scanf("%d", &rows);
    printf("Please enter a number of characters: "); // For example from the task enter 6
    scanf("%d", &numOfChars);

    // number of rows
    for (i = 1; i <= rows; i++)
    {
        // print space
        for (j = 1; j < i; j++)
        {
            printf("      ");
        }

        // print star(*) `n` times
        for (j = 1; j <= numOfChars; j++)
        {
            printf("*");
        }

        // move to the next row
        printf("\n");
    }

    return 0;
}