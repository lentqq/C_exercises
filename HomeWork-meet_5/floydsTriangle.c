/* Напишете програма, която отпечатва първите n реда от
триъгълника на Флойд, където n се въвежда
1
01
101
0101
10101 */

#include <stdio.h>
int main()
{
    int i, j, numberOfRows;
    printf("Input number of rows : ");
    scanf("%d", &numberOfRows);

    for (i = 1; i <= numberOfRows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                if (j % 2 == 0)
                {
                    printf("0");
                }
                else
                {
                    printf("1");
                }
            }
            else
            {
                if (j % 2 == 0)
                {
                    printf("1");
                }
                else
                {
                    printf("0");
                }
            }
        }

        printf("\n");
    }
    
    return 0;
}