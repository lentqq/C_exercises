
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{

    char *resultsArr[10];
    for (int i = 0; i < 10; i++)
    {
        resultsArr[i] = (char *)malloc(20);
    }

    char *input = (char *)malloc(20);
    char *end = "end";
    char whileFlag = 1;
    char counter = 0;
    char forFlag = 1;

    while (whileFlag)
    {
        fgets(input, 20, stdin);
        forFlag = 1;
        for (int i = 0; i < 20 && forFlag; i++)
        {
            if (input[i] == '\n')
            {
                input[i] = '\0';
                forFlag = 0;
            }
        }

        if (!strcmp(input, end))
        {
            whileFlag = 0;
            break;
        }
        else
        {
            strcpy(resultsArr[counter], input);
            counter++;
        }
    }

    for (int i = counter - 1; i >= 0; i--)
    {
        printf("%s ", resultsArr[i]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        free(resultsArr[i]);
    }

    free(input);

    return 0;
}