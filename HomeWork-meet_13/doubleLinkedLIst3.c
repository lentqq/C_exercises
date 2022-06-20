/*
Програма, в която потербителят въвежда от клавиатурата броя на възлите,
които иска да създаде и стойностите на самите възли. Програмата принтира 
като резултат, сегашната и ако има предишната и следващата стойност на възела
в зависимост от позицията му.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node node_t;

struct node
{
    int value;
    node_t *next;
    node_t *previous;
};

// node to keep my first element
static node_t *start = NULL;

// node to keep my last element
static node_t *end = NULL;

void printList();
void create_new_node(int n);

int main()
{
    int i, number_of_nodes, value_of_a_node;

    printf("Please enter the desired number of nodes:\n");
    scanf_s("%d", &number_of_nodes);

    for (i = 0; i < number_of_nodes; i++)
    {
        printf("Please enter the desired value of a node:\n");
        scanf_s("%d", &value_of_a_node);

        create_new_node(value_of_a_node);
    }
    printList();

    return 0;
}

void create_new_node(int n)
{
    node_t *new_node;
    new_node = (node_t *)malloc(sizeof(node_t));

    if (new_node == NULL)
    {
        printf("Memory cannot be allocated!\n");
        return;
    }
    new_node->value = n;

    if (start == NULL)
    {
        start = new_node;
        end = new_node;
        end->next = NULL;
        end->previous = NULL;
        return;
    }
    end->next = new_node;
    new_node->previous = end;
    end = new_node;

    end->next = NULL;
}

void printList()
{
    int n = 0;

    if (start == NULL)
    {
        printf("No data found in the list!\n");
        return;
    }

    node_t *temp = start;

    do
    {
        n++;
        printf("Node[%2d] curr value:     %2d\n", n, temp->value);

        if (temp->next != NULL)
            printf("Node[%2d] next value:     %2d\n", n, temp->next->value);
        if (temp->previous != NULL)
            printf("Node[%2d] prev value:     %2d\n", n, temp->previous->value);

        temp = temp->next;
        printf("\n");
    } while (temp != NULL);

    temp = end;

    do
    {
        printf("Node[%2d] curr value:     %2d\n", n, temp->value);

        if (temp->next != NULL)
            printf("Node[%2d] next value:     %2d\n", n, temp->next->value);
        if (temp->previous != NULL)
            printf("Node[%2d] prev value:     %2d\n", n, temp->previous->value);
        n--;
        temp = temp->previous;
        printf("\n");
    } while (temp != NULL);
}