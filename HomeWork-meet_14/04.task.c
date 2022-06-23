/*
Да предположим, че подреден списък L = (l0, l1, …..,ln) е представен от единичен свързан
списък. Добавете списъка L = (ln, l0, l1, ….., ln) след друг подреден списък M, представен от
единично свързан списък.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node node_t; // rename struct node

struct node // structure declaration
{
    int data;
    node_t *next;
};

node_t *head = NULL;

// functions declarations
void display(node_t *head);
void concatenate(node_t *a, node_t *b);

int main()
{
    node_t *prev, *a, *b, *p;
    int n;

    printf("\nEnter the number of elements of first list: ");
    scanf("%d", &n);

    a = NULL; // Initialize first list to points NULL

    // inputs values for first list
    for (int i = 0; i < n; i++)
    {
        p = (node_t *)malloc(sizeof(node_t)); // dynamically allocated memory
        scanf("%d", &p->data);

        p->next = NULL;

        if (a == NULL) // check if first list is empty
        {
            a = p;
        }
        else
        {
            prev->next = p;
        }
        prev = p;

        free(p); // release the memory for use
    }
    
    printf("\nEnter the number of elements of second list: ");
    scanf("%d", &n);

    b = NULL; // Initialize second list to points NULL

    // inputs values for first list
    for (int i = 0; i < n; i++)
    {
        p = (node_t *)malloc(sizeof(node_t)); // dynamically allocated memory
        scanf("%d", &p->data);

        p->next = NULL;

        if (b == NULL) // check if second list is empty
        {
            b = p;
        }
        else
        {
            prev->next = p;
        }
        prev = p;

        free(p); // release the memory for use
    }

    concatenate(a, b); // call function to concat lists
    printf("\nConcatenated linked list is:\n");
    display(a); // call function

    return 0;
}

// function initialization
void display(node_t *head)
{

    // check if the list is empty
    if (head == NULL)
    {
        printf("NULL\n");
        return;
    }
    else
    {
        while (head != NULL)
        {
            printf("[ %d ]  ", head->data);
            head = head->next; // iterate loop
        }
    }
}

void concatenate(node_t *a, node_t *b)
{
    node_t *head = a;

    // traverse over the first list, until the element next to the node is not NULL
    while (head->next != NULL)
    {
        head = head->next;
    }

    // when the next is NULL, it starts pointing to the first element of the second list
    head->next = b;
    b = NULL;
}