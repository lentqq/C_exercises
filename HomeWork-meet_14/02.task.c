/*
 Напишете функция, с която да вмъкнете възел „t“ преди възел, посочен с „X“ в
единичен свързан списък „L“.
*/

#include <stdio.h>
#include <stdlib.h>

struct node // struct declaration
{
    int data;
    struct node *next;
};

typedef struct node node_t; // creating typedef name of the node
node_t *head = NULL;

void creatList();        // function declaration
void printList();        // function declaration
void insertToPosition(); // function declaration

int main()
{
    int size;
    printf("\nEnter the number of elements at the list: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        creatList(); // call function to enter elements
    }

    // calling the function, according to the action we want to execute
    printList();
    insertToPosition();
    printList();

    return 0;
}

void creatList() // function initialization
{
    node_t *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node)); // dinamycly allocated memory

    // checks if there is enough memory
    if (temp == NULL)
    {
        printf("\nOut of Memory Space!!!\n");
        return;
    }

    printf("\nEnter the data: ");
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
    free(ptr);
}

void insertToPosition() // function initialization
{
    node_t *ptr, *temp;
    int i, pos;
    temp = (struct node *)malloc(sizeof(struct node)); // dinamycly allocated memory
    if (temp == NULL)
    {
        printf("\nOut of Memory Space!!!\n");
        return;
    }
    printf("\nEnter the position before which to inserted: ");
    scanf("%d", &pos);
    printf("\nEnter the data: ");
    scanf("%d", &temp->data);

    temp->next = NULL;
    if (pos == 0)
    {
        temp->next = head;
        head = temp;
    }
    else
    {
        for (i = 0, ptr = head; i < pos - 2; i++)
        {
            ptr = ptr->next;
            if (ptr == NULL)
            {
                printf("\nPosition not found!!!\n");
                return;
            }
        }
        temp->next = ptr->next;
        ptr->next = temp;
    }
    free(temp);
}

void printList() // function initialization
{
    node_t *ptr;
    if (head == NULL)
    {
        printf("\nList is empty!!!\n");
        return;
    }
    else
    {
        ptr = head;
        printf("\nThe List elements are:\n");
        while (ptr != NULL)
        {
            printf("[ %d ]    ", ptr->data);
            ptr = ptr->next;
        }
    }
}
