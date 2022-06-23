/*
Програма имплементираща стек с помощта на масив,
 като съставя стек с използвайки променлива
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define MAX 5
int stack[MAX];
int top = 0;

void push();
void pop();
void display();
int menu();

// printf("\e[1;1H\e[2J");regex for system("clear");

int main()
{
    int ch;
    int data;

    do
    {
        ch = menu();
        switch (ch)
        {
        case 1:
            printf("\n\nEnter data: ");
            scanf("%d", &data);
            push(data);
            break;
        case 2:
            pop();
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

void push(int data)
{
    if (top == MAX)
    {
        printf("\n\nStack Overflow..");
        return;
    }

    stack[top] = data;
    top = top + 1;
    printf("\n\nData Pushed into the stack");
}

void pop()
{
    if (top == 0)
    {
        printf("\n\nStack Underflow..");
    }
    else
    {
        printf("\n\nPopped element is: %d", stack[--top]);
    }
}

void display()
{
    if (top == 0)
    {
        printf("Stack empty..\n");
        return;
    }

    printf("Elements in stack:\n");

    for (int i = 0; i < top; i++)
        printf("\t %d", stack[i]);
}

int menu()
{
    int ch;
    // printf("\e[1;1H\e[2J"); --> regex to clear the screen = system(clear)
    system("cls");
    printf("\n 1. Push ");
    printf("\n 2. Pop ");
    printf("\n 3. Display ");
    printf("\n 4. Exit ");
    printf("\nEnter your chois:");
    scanf("%d", ch);
    return ch;
}
