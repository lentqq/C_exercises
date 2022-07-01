#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

struct node // structure initialization
{
    int data;
    struct node *next;
};

typedef struct node node_t; // setting the structure alias

// functions declarations
void printList(node_t *head);
void insertAfterNode(node_t *nodeToInsertAfter, node_t *newNode);
node_t *createNewNode(int value);
node_t *insertAtHead(node_t **head, node_t *nodeToInsert);
node_t *findNode(node_t *head, int num);

int main()
{
    node_t *head = NULL;
    node_t *temp;
    int value;

    printf("\nEnter data elements\n");

    for (int i = 0; i < SIZE; i++)
    {
        printf("\nEnter a value: ");
        scanf("%d", &value);
        temp = createNewNode(value); // call function
        insertAtHead(&head, temp);   // call function
    }

    temp = findNode(head, 77);
    temp ? printf("\nThe node exist with value %d", temp->data) : printf("\nThe node Not exist");
    insertAfterNode(temp, createNewNode(78));

    printList(head);// call fuunction to print list

    //loop to free allocated memory
    for (int i = 0; i < SIZE; i++)
    {
        free(temp[i]);
    }

    return 0;
}

// function initialization
void printList(node_t *head)
{
    int count = 0;
    node_t *temp;
    temp = head;

    while (temp != NULL)
    {
        count++;
        printf("\nNode %d = [ %d ]", count, temp->data);
        temp = temp->next;
    }
}

// function initialization
node_t *createNewNode(int value)
{
    node_t *result = (node_t *)malloc(sizeof(node_t));
    result->data = value;
    result->next = NULL;

    return result;
}

// function initialization
node_t *insertAtHead(node_t **head, node_t *nodeToInsert)
{
    nodeToInsert->next = *head;
    *head = nodeToInsert;

    return nodeToInsert;
}

// function declaration
node_t *findNode(node_t *head, int num)
{
    node_t *temp = head;
    while (temp != NULL)
    {
        if (temp->data == num)
        {
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}

// function initialiation to insert a node after another
void insertAfterNode(node_t *nodeToInsertAfter, node_t *newNode)
{
    newNode->next = nodeToInsertAfter->next;
    nodeToInsertAfter->next = newNode;
}
