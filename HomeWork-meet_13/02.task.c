/* Направете едносвързан списък, съдържащ числата 1-14
 и принтирайте петия елемент от края му.
*/

#include <stdio.h>
#include <stdlib.h>

struct node // struct declaration
{
    int number;
    struct node *next;
};

typedef struct node node_t; // creating typedef name of the node
node_t *head = NULL;

// functions declaration
void printNthFromLast();
void creatList();
void printList();

int main()
{
    int size = 14;
    int numPosition;

    printf("\nEnter the position from last element of the list: ");
    scanf("%d", &numPosition);

    for (int i = 0; i < size; i++)
    {
        creatList(); // call function to fill the list
    }

    printf("\nThe numbers in the list are:\n");
    printList(); // call function to print elements
    printf("\nThe number of the position [ %d ] is: ", numPosition);
    printNthFromLast(head, numPosition); // call function to print the required element

    return 0;
}

void printNthFromLast(node_t *head, int n)
{
    int length = 0;
    node_t *temp = head;

    // count the number of nodes in Linked List
    while (temp != NULL)
    {
        temp = temp->next;
        length++;
    }

    // check if value of number of position is not more than length of the linked list
    if (length < n)
    {
        return;
    }
    temp = head;

    // get the (len-n+1)th node from the beginning
    for (int i = 1; i < length - n + 1; i++)
    {
        temp = temp->next;
    }
    printf("[ %d ]", temp->number);

    return;
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
    scanf("%d", &temp->number);
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
            printf("[ %d ]    ", ptr->number);
            ptr = ptr->next;
        }
    }
}