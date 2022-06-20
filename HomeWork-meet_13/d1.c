#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;
    char *name;
    struct node *next;
};

typedef struct node node_t;
node_t *head, *current, *previous;

int main()
{
    // head = (node_t *)malloc(sizeof(node_t));
    
    // head->num = 0;
    // head->next = NULL;
    // current = head;

    for (int i = 1; i < 10; i++)
    {
        previous = current;
        current = (node_t *)malloc(sizeof(node_t));
        if (current == NULL)
        {
            printf("\nOut of memory!!!");
            return -1;
        }
        current->num = i;
        current->next = NULL;
        previous->next = current;
    }

    for (node_t *p = head; p != NULL; p = p->next)
    {
        printf("\nEmployee ID  [ %d }", p->num);
    }

    // free(head);
    current = head;
    node_t *temp;
    while (current)
    {
        temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}