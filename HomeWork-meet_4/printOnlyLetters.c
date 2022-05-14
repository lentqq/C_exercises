/* Enter text that contains letters and numbers.
Use the "getchar( )" and "putchar( )" functions to print only lowercase and uppercase letters.*/

#include <stdio.h>

int main()
{
    char c;
    while ((c = getchar()) != EOF)
    {
        if (c >= 48 && c <= 57)
            continue;
        putchar(c);
    }

    return 0;
}