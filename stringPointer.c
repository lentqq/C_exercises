// Using pointer to store and accessing(print) a string

#include <stdio.h>

int main()
{

    char string[15] = "Something";

    // temporary pointer variable
    char *p_string = string;

    // print the string
    while (*p_string != '\0')
    {
        printf("%c", *p_string);
        // move the t pointer to the next memory location
        p_string++;
    }

    return 0;
}