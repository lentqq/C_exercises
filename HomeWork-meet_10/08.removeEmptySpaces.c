//  Напишете C програма за премахване на допълнителните интервали и празни места от низ.

#include <stdio.h>
#include <stdbool.h>

int main()
{
    char c;

    printf("\nInput some text:\n");

    while ((c = getchar()) != '\n')
    {
        if (c == ' ')
        {
            while ((c = getchar()) == ' ');// while 'c' is a empty spaces, print characters with putchar()function       
        }
        putchar(c);
    }

    return 0;
}