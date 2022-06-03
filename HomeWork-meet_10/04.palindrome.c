/* Напишете програма на C, за да проверите дали даден низ е палиндром или не, без да
използвате цикъл.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    char str1[50], str2[50];
    printf("\nEnter First String: ");
    // fgets(str1, sizeof(str1), stdin);
    scanf("%s", str1);
    printf("\nEnter Second String To Compare: ");
    // fgets(str2, sizeof(str2), stdin);
    scanf("%s", str2);

    strrev(str2); // calls sstrrev() to reverse entered string

    int result = strcmp(str1, str2); // calls strcmp() to compare the two srings

    // check if are equal or not and print the result using ternary operator

    (result == 0) ? printf("\nYes, it is palindrome.") : printf("\nNo, it is not a pilindrome");

    return 0;
}
