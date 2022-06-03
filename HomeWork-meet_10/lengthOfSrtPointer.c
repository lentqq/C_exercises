// Програма, която извежда дължината на стринг, използвайки пойнтер

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100];
    char *p_str = str;
    printf("\nInput some text: ");
    fgets(str, sizeof(str), stdin);
    printf("\nThe length of string is: %d\n", strlen(p_str) - 1);

    return 0;
}