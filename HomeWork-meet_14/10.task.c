// Програма печатаща първите N числа на Фибоначи, използваща опашка.

#include <stdio.h>
#include <stdlib.h>

typedef struct queue queue_t; // declar typedef name of the queue node

struct queue
{
    int data;
    queue_t *next;
};

queue_t *front = NULL; // initialization of first element of the queue
queue_t *end = NULL;   // initialization of last element of the queue

// function declarations
void enqueue(int val);
void dequeue();
void printList();
int fib(int n);

int main()
{
    int size; // hold first n numbers of Fibonacci

    printf("\nEnter the number of first Fibonacci numbers: ");
    scanf("%d", &size);

    for (int i = 1; i <= size; i++)
    {
        enqueue(fib(i)); // call functions to return and add fib number
    }
    printList(); // call function to print fib numbers

    return 0;
}

void enqueue(int val)
{
    // cretae new node
    queue_t *newNode;
    newNode = (queue_t *)malloc(sizeof(queue_t));

    // check if there is enough memory
    if (newNode == NULL)
    {
        printf("\nOut of Memory Space!!!\n");
        return;
    }

    newNode->data = val;
    // make the new node to points  to the next enqueued element
    newNode->next = NULL;

    // if it is the first node
    if (front == NULL)
    { // make both front and rear points to the new node
        front = newNode;
        end = newNode;
    }
    else
    {
        // add newnode in rear->next
        end->next = newNode;

        // make the new node as the rear node
        end = newNode;
    }
}

// print queue
void printList()
{
    queue_t *temp;
    temp = front;

    // iterate the entire linked list and print the data
    while (temp != NULL)
    {
        printf("fib = (%d) -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// recursive function to retun Fibonacci numbers
int fib(int n)
{
    // condition to stop recursion
    if (n <= 1)
    {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}
