/* Напишете C програма за намиране на дължината на низ с помощта на цикъл, без да
използвате вградена библиотечна функция strlen() . */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int concatStrings(char[]); // function declaration

int main()
{
    char str[100];

    printf("\nInput some text: ");
    fgets(str, sizeof(str), stdin);

    printf("\n The length of string is: %d", concatStrings(str) - 1);

    return 0;
}

int concatStrings(char str[]) // function initialization to find lengtn of string using for-loop
{
    int length = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}
