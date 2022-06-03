/* Напишете C програма за намиране на символа с най-висока честота в низ с помощта на
цикъл. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

char getMaxOccurringChar(char *str); // function declaration

int main()
{
    char str[50];

    printf("\nEnter a string: ");
    // fgets(str1, sizeof(str1), stdin);
    scanf("%s", str);

    printf("Max occurring character is: '%c'", getMaxOccurringChar(str));
}

char getMaxOccurringChar(char *str) // function initialization
{
    int countSymbols[127] = {0}; // create array to keep the count of characters

    int length = strlen(str);
    int maxCount = 0; // initialize max count
    char result;

    // Iterate through the string and keep the count of each character
    for (int i = 0; i < length; i++)
    {
        countSymbols[str[i]]++;
        if (maxCount < countSymbols[str[i]])
        {
            maxCount = countSymbols[str[i]];
            result = str[i];
        }
    }

    return result;
}