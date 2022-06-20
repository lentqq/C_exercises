#include <stdio.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node node_t;
node_t *head = NULL;

void createNode();

int main()
{
    // head = createNode();

    printf("\nValue is: %d", head->data);

    return 0;
}

void createNode()
{
    node_t *temp, *ptr;

    printf("\nEnter a data: ");
    scanf("%d", &temp->data);
    temp->next = NULL;

    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}

// #include <stdio.h>

// struct node
// {
//     int num;
//     struct node *next;
// };

// typedef struct node node_t;
// void printList(node_t *head)
// {
//     node_t *temp = head;
//     while (temp != NULL)
//     {
//         printf("%d \t", temp->num);
//         temp = temp->next;
//     }
// }

// int main()
// {
//     node_t n1, n2, n3;
//     node_t *head;

//     n1.num = 3;
//     n2.num = 4;
//     n3.num = 7;

//     head = &n2;
//     n2.next = &n3;
//     n3.next = &n1;
//     n1.next = NULL;

//     printList(head);

//     return 0;
// }
