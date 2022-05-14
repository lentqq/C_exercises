// replaces a string of spaces with a single one

#include <stdio.h>
#include <stdbool.h>

int main()
{
    char c;
    bool chek = false;

    while ((c = getchar()) != EOF)
    {
        if (c != ' ')
        {
            chek = false;
        }
        if (chek == false)
        {
            putchar(c);
        }
        if (c == ' ')
        {
            chek = true;
        }
    }

    // second way with "while" loop

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            putchar(c);
            while ((c = getchar()) == ' ');          
        }
        putchar(c);
    }

    return 0;
}