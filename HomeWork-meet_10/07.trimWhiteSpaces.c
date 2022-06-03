/* Напишете C програма за отрязване както на водещите,
така и на крайните символи за празно пространство в низ с помощта на цикъл.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

char *trimLeadAndTrailCharacters(char *str); // function declaration

int main()
{
    char str[100];
    char *ptr;

    printf("\nInput a string with leading and triling white spaces:");
    gets(str);
    printf("\nString before trimming white space -> '%s'", str);

    ptr = trimLeadAndTrailCharacters(str); // function call to remove leading and trailing white spaces

    printf("\n\nString after trimming white spaces -> '%s'", ptr);

    return 0;
}

char *trimLeadAndTrailCharacters(char *str) // function initialization
{
    static char str1[100];
    int lastIndex = 0; // index to hold last position of leading white space chatarcter
    int j, k;          // 'k' is default index to hold terminate zero
    int stringLentgh = strlen(str);

    // iterate string until last leading space character
    for (int i = 0; str[lastIndex] == ' '; i++)
    {
        lastIndex++;
    }

    // putting string into another string variable after removing leading and trailing white spaces
    for (j = lastIndex, k = 0; str[j] != '\0'; j++, k++)
    {
        if (str[j] != ' ' && str[j] != '\t' && str[j] != '\0')
        {
            str1[k] = str[j];
        }
    }

    str1[k] = '\0'; // mark next character to last non-white space character as NULL

    return str1;
}