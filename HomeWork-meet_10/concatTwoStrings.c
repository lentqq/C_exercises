// Програма, която конкатенира два стринга, използвайки указатели

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char *getString();

int main()
{
    char *str1 = (char *)malloc(50);
    char *str2 = (char *)malloc(50);

    str1 = getString();
    str2 = getString();
    printf("\nThe concatenated string is: %s", strcat(str1, str2));

    return 0;
}

char *getString()
{
    char *str = malloc(256);
    scanf("%s", str);
    return str;
}