// Count number of characters. To stop the program press "ctrl + z --> EOF".

#include <stdio.h>

int main()
{
    char c;
    int countCharacters = 0;

    while ((c = getchar()) != EOF)
    {
        countCharacters++;
    }

    printf("The number of chars is: %d", countCharacters - 1);

    return 0;
}