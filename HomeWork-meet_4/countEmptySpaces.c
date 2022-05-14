// Count empty(' ') spaces. To stop the program press "ctrl + z --> EOF".

#include <stdio.h>

int main()
{
    char c;
    int countSpaces = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
            countSpaces++;
    }

    printf("The number of empty spaces is: %d", countSpaces);

    return 0;
}