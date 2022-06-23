/*
Използвайте динамична реализация на стек за въвеждане на поредица от цели положителни
числа и нейното извеждане върху екрана в обратен ред. За край на поредицата от
клавиатурата се въвежда 0.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct stack stack_t;// give an alias to structure name

struct stack// structure declaration
{
    int data;
    stack_t *next;
};

stack_t *top = NULL;// initialized the top node to be equal to NULL

// function declarations
void push(int val);
void printList();

int main()
{
    int num; // hold the value of queue elements
    printf("\nFor 'EXIT' press '0'!!!\n");
    printf("\nEnter the Sequence elements:\n");
    do
    {
        printf("\nEnter a value: ");
        scanf("%d", &num);

        if (num == 0)
        {
            break;
        }

        push(num);
    } while (num > 0);

    printf("\nLinked List\n");
    printList();// call function to print elements

    return 0;
}

// function initialization
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
