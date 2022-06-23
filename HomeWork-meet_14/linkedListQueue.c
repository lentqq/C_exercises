#include <stdio.h>
#include <stdlib.h>

typedef struct queue node;
node *front = NULL;
node *rear = NULL;

struct queue
{
    int data;
    struct queue *next;
};

node *create_node(int value);
void enqueue();
void dequeue();
void display();
char menu();

int main()
{
    char ch;
    int data;

    do
    {
        ch = menu();

        switch (ch)
        {
        case 1:
            printf("Enter data:\n");
            scanf_s("%d", &data);
            enqueue(data);
            break;

        case 2:
            dequeue();
            break;

        case 3:
            display();
            break;

        case 4:
            exit(0);
        }

        char c = getchar();
    } while (1);

    return 0;
}

char menu()
{
    int ch;
    printf("\n... Queue operations using STRUCTS...");
    printf("\n------------*************------------");
    printf("\n 1. Enqueue");
    printf("\n 2. Dequeue");
    printf("\n 3. Display");
    printf("\n 4. Quit");
    printf("\n Enter your choice\n");

    scanf_s("%d", &ch);
    return ch;
}

node *create_node(int value)
{
    node *temp;
    temp = (node *)malloc(sizeof(node));
    temp->data = value;
    temp->next = NULL;
    return temp;
}

void enqueue(data)
{
    node *new_node;
    new_node = create_node(data);

    if (new_node == NULL)
    {
        printf("No!\n");
        return;
    }
    if (front == NULL)
    {
        front = new_node;
        rear = new_node;
    }
    else
    {
        rear->next = new_node;
        rear = new_node;
    }
    printf("Data inserted into the queue..\n");
}

void dequeue()
{
    node *temp;
    if (front == NULL)
    {
        printf("\n\n\t Empty Queue..");
        return;
    }
    temp = front;
    front = front->next;
    printf("\n\n\t Deleted element from queue is %d ", temp->data);
    free(temp);
}

void display()
{
    node *temp;

    if (front == NULL)
    {
        printf("\n\n\t\t Empty Queue ");
        return;
    }

    temp = front;
    printf("\n\n\n\t\t Elements in the Queue are: ");

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}