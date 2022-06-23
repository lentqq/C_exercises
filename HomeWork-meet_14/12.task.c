/*
Като използвате стек, напишете програма, която прочита едно
цяло положително число и преобразува това число в двоична
бройна система, т.е. записва го в двоичен вид.
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 50

int stack_arr[MAX];

// function declaration
int isEmpty(int top, int stack_arr[]);
void push(int x, int *top, int stack_arr[]);
int pop(int *top, int stack_arr[]);
void DecToBin(int num);

int main()
{
    int num;

    printf("Enter an integer : ");
    scanf("%d", &num);
    printf("Binary Equivalent is : ");
    DecToBin(num);// call function

    return 0;
}

// function initialization to convert and print number to binary format
void DecToBin(int num)
{
    int stack[MAX], top = -1, rem;

    while (num != 0)
    {
        rem = num % 2;
        push(rem, &top, stack);
        num /= 2;
    }

    while (top != -1)
        printf("%d", pop(&top, stack));
    printf("\n");
}

// function initialization to push shifting digit
void push(int x, int *top, int stack_arr[])
{
    // check if stack is full
    if (*top == (MAX - 1))
        printf("Stack Overflow\n");
    else
    {
        *top = *top + 1;
        stack_arr[*top] = x;
    }
}

// function initialization to pop element form stack
int pop(int *top, int stack_arr[])
{
    int x;

    //check if stack is empty
    if (*top == -1)
    {
        printf("Stack Underflow\n");
        exit(1);
    }
    else
    {
        x = stack_arr[*top];
        *top = *top - 1;
    }
    return x;
}