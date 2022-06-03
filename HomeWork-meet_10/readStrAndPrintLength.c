// Програма която чете въведен стринг и отпечатва дължината му

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100];
    printf("\nInput some text: ");
    fgets(str, sizeof(str), stdin); // takes the entered text using "fgets" function
    printf("%s\n", str);
    printf("%d\n", strlen(str) - 1); // prints length of the string using "strlen" function

    return 0;
}