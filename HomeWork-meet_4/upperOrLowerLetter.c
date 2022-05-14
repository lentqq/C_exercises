// Checks for lowercase and uppercase letters

#include <stdio.h>

int main()
{
    char letter;

    printf("Enter a letter: ");
    scanf("%c", &letter);
    
    // use ASCII table to check letters are upper or lower
    if (letter >= 65 && letter <= 90)
    {
        printf("It`s upper case!");
    }
    if (letter >= 97 && letter <= 122)
    {
        printf("It`s lower case!");
    }

    return 0;
}