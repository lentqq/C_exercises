/*
Даден е стек от произволни реални числа. Да се напише програма, която
изтрива от този стек всички отрицателни числа.
*/

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
        if (num > 0)
        {
            push(num);
        }
    }

    printf("\nPositive nodes are:\n");
    printList();

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

// print the stack
void printList()
{
    stack_t *temp;
    temp = top;

    // iterate the entire linked list and print the data
    while (temp != NULL)
    {
        printf("[ %d ]   ", temp->data);
        temp = temp->next;
    }
}
