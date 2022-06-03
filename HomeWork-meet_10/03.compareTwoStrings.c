/* Напишете C програма за сравняване на два низа, използвайки цикъл символ по символ, без
да използвате вградена библиотечна функция strcmp(). */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

void concatStrings(char *, char *); // function declaration using pointers

int main()
{
    char str1[50]; // declaration of char array
    char str2[50]; // declaration of char array

    printf("Enter the first string : ");
    scanf("%s", str1);
    printf("\nEnter the second string : ");
    scanf("%s", str2);
    concatStrings(str1, str2);

    return 0;
}

// Comparing both the strings using pointers
void concatStrings(char *str1, char *str2) // function initialization to compare two strings using for-loop
{
    bool areEquals = true;

    for (int i = 0; str1[i] != '\0'; i++)
    {
        for (int j = 0; str2[j] != '\0'; j++)
        {
            if (*str1 != *str2)
            {
                areEquals = false;
            }
        }
    }

    // check if are equals and print the result with ternary operator
    (areEquals == true) ? printf("\nThe strings are EQUALS !!!") : printf("\nThe strings are NOT equals");
}