// Програма имплементираща опашка с помощта на свързан списък

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

//function declarations
void enqueue(int val);
void dequeue();
void printList();

int main()
{
    int size;
    printf("\nEnter the number of Queue elements: ");
    scanf("%d", &size);

    int num; // hold the value of queue elements
    for (int i = 0; i < size; i++)
    {
        printf("\nEnter a value: ");
        scanf("%d", &num);
        enqueue(num);
    }

    printf("\nQueue:\n");
    printList();
    dequeue();
    printf("\nAfter dequeue the new Queue:\n");
    printList();
    dequeue();
    printf("\nAfter dequeue the new Queue:\n");
    printList();

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

void dequeue()
{
    // used to free the first node after dequeue
    queue_t *temp;

    if (front == NULL)
    {
        printf("\nQueue is Empty!!!\n");
        end = NULL;
    }
    else
    {
        printf("\nDequeued element = %d\n", front->data);
        // take backup
        temp = front;

        // make the front node points to the next node
        // logically removing the front element
        front = front->next;

        // free the first node
        free(temp);
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
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

