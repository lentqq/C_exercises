# include<stdio.h>

int main()
{
    char start = 'a';

    while (start <= 'z')
    {
        printf("%c\t", start);
        start++;
    }

    return 0;
}