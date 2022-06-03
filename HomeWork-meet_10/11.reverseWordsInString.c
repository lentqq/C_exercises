// Програма, която приема даден стринг от клавиатурата и печата думите в обратен ред.

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void reverseWordsInString(char[]); // function declaration

int main()
{
    char str[100];
    printf("\nInput some text: ");
    fgets(str, sizeof(str), stdin);
    reverseWordsInString(str);

    return 0;
}

void reverseWordsInString(char str[]) // function intialization to revers words in a given string
{
    int length = strlen(str);

    // use a loop to find empty spaces and replace them with terminating zero
    for (int i = length - 1; i >= 0; i--)
    {
        if (str[i] == ' ')
        {
            str[i] = '\0';
            printf("%s ", &(str[i]) + 1);
        }
    }
    printf("%s", str);
}