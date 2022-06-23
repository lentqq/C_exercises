//  Напишете функция, с която да да изтриете възел, посочен с „p“ от едносвързан списък „L“.

#include <stdio.h>
#include <stdlib.h>

struct node // struct declaration
{
    int data;
    struct node *next;
};

typedef struct node node_t; // creating typedef name of the node
node_t *head = NULL;

void creatList();      // function declaration
void printList();      // function declaration
void deletePosition(); // function declaration

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
    deletePosition();
    printList();

    return 0;
}

void creatList() // function initialization
{
    node_t *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node)); // dinamycly allocated memory
    if (temp == NULL)
    {
        printf("\nOut of Memory Space!!!\n");
        exit(0);
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
}

void deletePosition() // finction initialization
{
    int i, pos;
    node_t *temp, *ptr;
    if (head == NULL)
    {
        printf("\nThe List is Empty!!!\n");
        exit(0);
    }
    else
    {
        printf("\nEnter the position of the node to be deleted: ");
        scanf("%d", &pos);
        if (pos == 0)
        {
            ptr = head;
            head = head->next;
            printf("\nThe deleted element is:%d \n", ptr->data);
            free(ptr); // free memory address to using again
        }
        else
        {
            ptr = head;
            for (i = 0; i < pos - 1; i++)
            {
                temp = ptr;
                ptr = ptr->next;
                if (ptr == NULL)
                {
                    printf("\nPosition not Found!!!\n");
                    return;
                }
            }
            temp->next = ptr->next;
            printf("\nThe deleted element is:%d ", ptr->data);
            free(ptr); // free memory address to using again
        }
    }
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