/* Да се напише програма, която по дадено цяло положително число
n, отпечатва първите n реда от триъгълника на Паскал.
Input number of rows: 5
    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1 */

#include <stdio.h>

int main()
{
    int rows, c = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++)
    {
        for (int k = 1; k <= rows - i; k++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                c = 1;
            else
                c = c * (i - j + 1) / j;
            printf("%d ", c);
        }
        printf("\n");
    }

    return 0;
}
