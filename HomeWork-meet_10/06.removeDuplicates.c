// Напишете C програма за премахване на всички повтарящи се символи в низ с помощта на цикли

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

char *removeDuplicate(char str[], int n); // function declaration

int main()
{
    char str[50];

    printf("\nInput a string: ");
    scanf("%s", str);

    int length = sizeof(str) / sizeof(str[0]);

    printf("%s", removeDuplicate(str, length)); // calls function

    return 0;
}

char *removeDuplicate(char str[], int n)
{
    // 'k' is used as index in the modified string
    int k = 0, j;

    for (int i = 0; i < n; i++) // iterate through all characters
    {

        // check if characters is already exists before it
        for (j = 0; j < i; j++)
        {
            if (str[i] == str[j])
                break;
        }

        if (j == i) // If not exsist, add it
            str[k++] = str[i];
    }

    return str;
}