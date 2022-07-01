#include "queue.h"

void enqueue(struct Queue *myQueue, int data)
{
    struct Node *temp;
    temp = malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;

    if (myQueue->front == NULL && myQueue->rear == NULL)
    { // empty
        myQueue->front = myQueue->rear = temp;
        return;
    }
    myQueue->rear->next = temp;
    myQueue->rear = temp;
}

void dequeue(struct Queue *myQueue)
{
    struct Node *temp = myQueue->front;
    if (myQueue->front == NULL)
        return; // empty
    if (myQueue->front == myQueue->rear)
    {
        myQueue->front = myQueue->rear = NULL;
    }
    else
    {
        myQueue->front = myQueue->front->next;
    }
    free(temp);
}

void display(struct Queue *myQueue)
{
    struct Node *tmp = myQueue->front;
    while (tmp)
    {
        printf("%d\n", tmp->data);
        tmp = tmp->next;
    }
}

struct Queue *QueueInit()
{

    struct Queue *thisQueue = malloc(sizeof *thisQueue);
    thisQueue->front = NULL;
    thisQueue->rear = NULL;
    return thisQueue;
}
