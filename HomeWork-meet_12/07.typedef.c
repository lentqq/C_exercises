/* 
Напишете масив от структури наречен key_tab[ ], като използвате тази,
дефинирана в горното упражнение - потребителски тип key_t, която
съдържа символен низ и число. Инициализирайте масива с всички
ключови думи на С, като заделяте паметта за всяка ключова дума
динамично. Принтирайте масива.

 Size of C keywords in bytes: int - 4, char - 1, float - 4, double - 8,
 short int - 2, unsigned int - 4, long int - 4, long long int - 8,
 unsigned long int - 4, unsigned long long int - 8, signed char - 1,
 unsigned char - 1, long double - 16. 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LENGTH 3

typedef struct // typedef struct declaration
{
    char *s;
    int num;
} key_t;

int main()
{
    int numKeywords = LENGTH;

    key_t *key_tab = malloc(numKeywords * sizeof *key_tab);

    printf("\nEnter a 'C' keywords:\n");
    for (int i = 0; i < numKeywords; i++)
    {
        key_tab[i].s = (char *)malloc(sizeof(char *));
        printf("Enter a keyword: ");
        fgets(key_tab[i].s, sizeof(key_tab[i]), stdin);
        printf("Enter a size of keyword: ");
        scanf("%d", &key_tab[i].num);
        while (getchar() != '\n');
            
        // free(key_tab[i].s);
    }

    printf("\n");

    for (int i = 0; i < numKeywords; i++)
    {
        printf("\nKeyword: %s  Size: %d bytes", key_tab[i].s, key_tab[i].num);
    }

    free(key_tab);

    return 0;
}