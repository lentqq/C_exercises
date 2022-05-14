/* Write a PrintPatterns program that prints the following
text graphics - triangle, inverted triangle and mirror triangle on the screen.*/

#include <stdio.h>

int main()
{
    // print triangles using "for-loops"
    int n;

    printf("Enter number of lines: ");
    scanf("%d", &n);

    printf("\n");

    // loop for line number of lines
    for (int i = n; i >= 1; i--)
    {
        // loop to print leading spaces in each line
        for (int space = n - i; space >= 1; space--)
        {
            printf("   ");
        }

        // loop to print *
        for (int j = i * 2 - 1; j >= 1; j--)
        {
            printf(" * ");
        }

        printf("\n");
    }

    printf("\n");

    // loop for line number of lines
    for (int i = 1; i <= n; i++)
    {
        // loop to print leading spaces in each line
        for (int space = 0; space <= n - i; space++)
        {
            printf("   ");
        }

        // loop to print *
        for (int j = 1; j <= i * 2 - 1; j++)
        {
            printf(" * ");
        }

        printf("\n");
    }

    printf("\n");

    // loop to print upper pyramid
    for (int i = 1; i <= n; i++)
    {
        // loop to print leading spaces in each line
        for (int space = 0; space <= n - i; space++)
        {
            printf("   ");
        }

        // loop to print *
        for (int j = 1; j <= i * 2 - 1; j++)
        {
            printf(" * ");
        }

        printf("\n");
    }

    // loop to print lower pyramid
    for (int i = n + 1; i >= 1; i--)
    {
        // loop to print leading spaces in each line
        for (int space = n - i; space >= 0; space--)
        {
            printf("   ");
        }

        // loop to print *
        for (int j = i * 2 - 1; j >= 1; j--)
        {
            printf(" * ");
        }

        printf("\n");
    }

    return 0;
}