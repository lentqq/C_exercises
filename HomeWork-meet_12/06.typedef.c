/* Напишете структура с потребителски тип key_t, която съдържа
символен низ и число. Създайте променлива от новия тип, като
инициализирате символния низ с динамично заделена памет за него.
Принтирайте съдържанието на структурата. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int num;
    char *s;
} key_t;

int main()
{
    key_t data;
    data.num = 4;
    data.s = malloc(data.num);
    strcpy(data.s, "Borko");

    printf("\nValue of First struct member: %d, Second struct member: %s", data.num,data.s);

    free(data.s);

    return 0;
}