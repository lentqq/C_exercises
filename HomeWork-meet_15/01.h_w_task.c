/* . 1. - (преговор списъци) Да се състави програма, чрез която се въвеждат N броя
 естествени числа от интервала [1..101].
 Броят на въведените числа не се знае предварително - определя се от
 потребителя.
 Чрез използване на структура от тип опашка да се изведе въведената редица
 естествени числа като:
 а) първо се извеждат всички нечетни числа;
 б) след тях се извеждат всички четни числа;
 в) извеждането на числата съответства на реда на въвеждането им.
 Пример: 11, 12, 15, 17, 19, 21, 23, 9, 10, 16, 18, 20
 Изход: 11, 15, 17, 19, 21, 23, 9, 12, 10, 16, 18, 20
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct node node_t; // alias assignment of struct node

// structure declaration
struct node
{
    int number;
    node_t *next;
};

// function declaration
node_t *createNodes(node_t *current, int i);

int main()
{
    int numberOfNodes, userNumber;

    // dynamically allocated memory
    node_t *header = (node_t *)malloc(sizeof(node_t));
    node_t *temp = (node_t *)malloc(sizeof(node_t));

    printf("\nEnter number of nodes: ");
    scanf("%d", &numberOfNodes);

    printf("\nEnter integer number: ");
    scanf("%d", &userNumber);
    header->number = userNumber;
    header->next = temp;
    temp = header;

    // create list of nodes
    for (int i = 0; i < numberOfNodes - 1; i++)
    {
        printf("\nEnter number: ");
        scanf("%d", &userNumber);
        temp = createNodes(temp, userNumber); // call function
    }

    // print odd numbers
    for (int i = 0; i < numberOfNodes; i++)
    {
        if (header->number % 2 != 0)
        {
            printf("%d\t", header->number);
        }
        header = header->next;
    }

    // print even numbers
    for (int i = 0; i < numberOfNodes; i++)
    {
        if (header->number % 2 == 0)
        {
            printf("%d\t", header->number);
        }
        header = header->next;
    }

    // free allocated memory for temp
    for (int i = 0; i < numberOfNodes - 1; i++)
    {
        free(temp[i].number);
    }

    // free allocated memory for header
    for (int i = 0; i < numberOfNodes; i++)
    {
        free(header[i].number);
    }

    return 0;
}

node_t *createNodes(node_t *current, int i)
{
    node_t *next;
    next = (node_t *)malloc(sizeof(node_t));
    next->number = i;
    next->next = NULL;
    current->next = next;
    current = next;

    return current;
    free(next);
}
