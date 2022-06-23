/*
Напишете функция, с която да разделите даден едносвързан свързан списък от цели числа, в
два списъка по следния начин.
Ако първоначалният списък е L = (l0, l1, ….., ln), то
новополучените списъци мжгот до са R1 = (l0, l2, l4, …..) и R2 = (l1, l3, l5, …..).
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node node_t;
typedef struct odd_node odd_node_t;
typedef struct even_node even_node_t;

struct node
{
    int value;
    node_t *next;
};

struct odd_node
{
    int value;
    odd_node_t *next;
};

struct even_node
{
    int value;
    even_node_t *next;
};

node_t *start = NULL;
node_t *head = NULL;
node_t *odd_start = NULL;
node_t *even_start = NULL;

void create_new_node(int number);
void printList(node_t *head);
void allocate_odd_even(node_t *head);

int main()
{

    int node_count;

    printf("Please enter the amount of nodes to be created:\n");
    scanf("%d", &node_count);

    create_new_node(node_count);
    allocate_odd_even(start);

    printf("Original linked list:\n");
    printList(start);
    printf("\n");
    printf("Even linked list:\n");
    printList(even_start);
    printf("\n");
    printf("Odd linked list:\n");
    printList(odd_start);

    return 0;
}

void create_new_node(int number)
{
    node_t *temp;
    int i, param;

    temp = malloc(sizeof(node_t));
    start = temp;

    for (i = 0; i < number; i++)
    {
        if (temp == NULL)
        {
            printf("Memory cannot be allocated!\n");
            break;
        }

        printf("Please enter a value of the node:\n");
        scanf("%d", &param);

        temp->value = param;

        temp->next = malloc(sizeof(node_t));
        temp = temp->next;
    }
    temp->next = NULL;
}

void printList(node_t *head)
{
    node_t *temp = head;
    int i = 0;

    while (temp->next != NULL)
    {
        printf("Value of node[%d] is: %d\n", i, temp->value);
        temp = temp->next;
        i++;
    }
}

void allocate_odd_even(node_t *head)
{
    node_t *temp;
    even_node_t *even = malloc(sizeof(even_node_t));
    odd_node_t *odd = malloc(sizeof(odd_node_t));

    temp = head;

    while (temp->next != NULL)
    {

        if (temp->value % 2 == 0)
        {
            even->next = malloc(sizeof(node_t));

            if (even_start == NULL)
            {
                even_start = even;
                even->value = temp->value;
                even = even->next;
            }
            else
            {
                even->value = temp->value;
                even = even->next;
            }
        }
        else if (temp->value % 2 != 0)
        {
            odd->next = malloc(sizeof(node_t));

            if (odd_start == NULL)
            {
                odd_start = odd;
                odd->value = temp->value;
                odd = odd->next;
            }
            else
            {
                odd->value = temp->value;
                odd = odd->next;
            }
        }
        temp = temp->next;
    }
    even->next = NULL;
    odd->next = NULL;
    free(odd);
    free(even);
}