/* Напишете C програма за свързване на два низа в един низ, без да използвате библиотечна
функция strcat(). */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void concatStrings(char[], char[]); // function declaration

int main()
{
    char str1[50], str2[50];
    printf("\nEnter First String: ");
    // fgets(str1, sizeof(str1), stdin);
    scanf("%s", str1);
    printf("\nEnter Second String: ");
    // fgets(str2, sizeof(str2), stdin);
    scanf("%s", str2);

    concatStrings(str1, str2); // calls function to concat the two strings
    printf("\nThe concated string is: %s", str1);

    return 0;
}

void concatStrings(char str1[], char str2[]) 
{
    int i = 0, j = 0;

    i = strlen(str1); // this is the last position of str1 and the first index of second string
    for (j = 0; str2[j] != '\0'; i++, j++)
    {
        str1[i] = str2[j];
    }

    str1[i] = '\0';
}
