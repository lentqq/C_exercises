/*
За даден символен низ дефинираме функция, която заменя един символ
с друг символ – заместване на всички срещания на символа с друг.
Стрингът и двата символа се подават като параметри на функцията.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *numberOfChars(char *s, int n, char oldChar, char newChar)
{
    char *result = (char *)malloc((n + 1) * sizeof(char));

    for (int i = 0; i < n + 1; i++)
    {
        if (s[i] == oldChar)
            result[i] = newChar;
        else
            result[i] = s[i];
    }
    return result;
}
int main()
{
    char *word1 = (char *)malloc(80 * sizeof(char));
    char *word2 = (char *)malloc(80 * sizeof(char));

    char c1 = 'n', c2 = 'p';

    printf("\nEnter a String: ");
    scanf("%s", word1);
    printf("\nOriginal string: %s\n", word1);

    int n = strlen(word1);
    word2 = numberOfChars(word1, n, c1, c2);
    printf("\nTne New String: %s", word2);
}