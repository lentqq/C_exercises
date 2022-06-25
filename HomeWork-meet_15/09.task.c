/*
Зададен е двоичен стринг, пребройте подстринговете, които започват с 1 и
завършват с 1. Например, ако входният стринг е “00100101”, тогава има три
подстринга “1001”, “100101” и “101”.Направете задачата, като използвате
функция 1010 C_br^2= br*(br-1)/2
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1st solution
//function declaration
int count(char *bin, int n);

int main()
{
    char *s;
    s = (char *)malloc(20 * sizeof(char));
    printf("\nEnter binary number: ");
    scanf("%s", s);
    printf("\nThe count substrings are: %d", count(s, strlen(s)));

    free(s);

    return 0;
}


//function initialization
int count(char *bin, int n)
{
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        counter += bin[i] - '0';
    }
    return counter * (counter - 1) / 2;
}

// 2nd solution
// void printBit(char *s);

// int main()
// {
//     char *b = (char*)malloc(20 * sizeof(char));

//     strcpy(b, "00100101");
//     printBit(b);
//     free(b);

//     return 0;
// }

// void printBit(char *s)
// {
//     int size = strlen(s);

//     for (int i = 0; i < size; i++)
//     {
//         if (s[i == '1' && s[i == '\0']])
//         {
//             printf("%s\n", &s[i]);
//         }
//     }
// }

