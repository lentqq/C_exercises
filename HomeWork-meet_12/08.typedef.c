/*  Напишете собствен тип за структура node, съдържаща
един член от тип int и един указател към тип самата структура. Заделете
динамично памет за масив от 10 елемента от тази структура с malloc. За
всеки елемент от масива попълнете цялото число с неговия пореден номер.
Принтирайте резултатите. */

#include <stdio.h>
#include <stdlib.h>

typedef struct node // typedef declaration
{
    int num;
    int *strArrPtr;
} node;

int main()
{
    node arrElement;                                 //  instance of the structure
    arrElement.strArrPtr = malloc(10 * sizeof(int)); // dynamic allocation of memory with "malloc"

    for (int i = 0; i < 10; i++)
    {
        arrElement.strArrPtr[i] = i;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("\nNum = [ %d ]\n", arrElement.strArrPtr[i] = i);
    }

    free(arrElement.strArrPtr); // releases the data(memory) that it points to

    return 0;
}
