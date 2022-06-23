// Програма имплементираща стек с помощта на свързан списък

#include <stdio.h>
#include <stdlib.h>

typedef struct stack stack_t;

struct stack
{
    int data;
    stack_t *next;
};

stack_t *top = NULL;

void push(int val);
void pop();
void printList();

int main()
{
    int size;
    printf("\nEnter the number of Stack elements: ");
    scanf("%d", &size);

    int num; // hold the value of queue elements
    for (int i = 0; i < size; i++)
    {
        printf("\nEnter a value: ");
        scanf("%d", &num);
        push(num);
    }

    printf("\nLinked List\n");
    printList();
    // pop();
    // printf("\nAfter the pop, the new linked list\n");
    // printList();
    // pop();
    // printf("\nAfter the pop, the new linked list\n");
    // printList();

    return 0;
}

void push(int val)
{
    // create new node
    stack_t *newNode;
    newNode = (stack_t *)malloc(sizeof(stack_t));

    if (newNode == NULL)
    {
        printf("\nOut of memory space!!!");
        return;
    }

    newNode->data = val;

    // make the new node points to the top node
    newNode->next = top;

    // make the new node as head node
    // so that top will always point the last inserted data
    top = newNode;
}

void pop()
{
    // temp is used to free the top node
    stack_t *temp;

    if (top == NULL)
    {
        printf("\nStack is Empty\n");
    }
    else
    {
        printf("\nPoped element = %d\n", top->data);

        // backup the top node
        temp = top;

        /*
        make the top node points to the next node.
        logically removing the node
         */
        top = top->next;

        // free the poped element's memory
        free(temp);
    }
}

// print the stack
void printList()
{
    stack_t *temp;
    temp = top;

    // iterate the entire linked list and print the data
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
