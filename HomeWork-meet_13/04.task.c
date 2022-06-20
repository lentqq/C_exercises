/*
Двойно-свързан списък. Напишете програма,
която добавя и изтрива елемент от списъка по зададена стойност, която се пази в него.
Използвайте следния елемент на двойно-свързания списък:

doubly linked list
typedef struct TDListNode {
 int m_nValue;
 struct TDListNode* m_pNextNode;
 struct TDListNode* m_pPrevNode;
} TDListNode;
*/

#include <stdio.h>
#include <stdlib.h>

struct TDListNode // structure initialization
{
    int m_Value;
    struct TDListNode *m_pNextNode;
    struct TDListNode *m_pPrevNode;
};

typedef struct TDListNode TDListNode_t; // creating typedef name of the node
TDListNode_t *head;

void creatList();
void deletionOfPosition();
void insertOfPosition();
void printList();

int main()
{
    int size = 5;

    for (int i = 0; i < size; i++)
    {
        creatList();
    }

    printList();
    deletionOfPosition();
    printList();

    return 0;
}

void creatList() // function initialization
{
    TDListNode_t *temp, *ptr;
    temp = (TDListNode_t *)malloc(sizeof(TDListNode_t)); // dinamycly allocated memory
    if (temp == NULL)
    {
        printf("\nOut of Memory Space!!!\n");
        exit(0);
    }
    printf("\nEnter the data: ");
    scanf("%d", &temp->m_Value);
    temp->m_pNextNode = NULL;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        ptr = head;
        while (ptr->m_pNextNode != NULL)
        {
            ptr = ptr->m_pNextNode;
        }
        ptr->m_pNextNode = temp;
    }
}

void printList()
{
    TDListNode_t *ptr;
    if (head == NULL)
    {
        printf("\nList is empty!!!\n");
        return;
    }
    else
    {
        ptr = head;
        printf("\nThe List elements are:\n");
        while (ptr != NULL)
        {
            printf("[ %d ]    ", ptr->m_Value);
            ptr = ptr->m_pNextNode;
        }
    }
}

void deletionOfPosition()
{
    // TDListNode_t *ptr, *temp;
    // int val;
    // printf("\nEnter the data after which the node is to be deleted: ");
    // scanf("%d", &val);
    // ptr = head;
    // while (ptr->m_Value != val)
    //     ptr = ptr->m_pNextNode;
    // if (ptr->m_pNextNode == NULL)
    // {
    //     printf("\nCan't delete\n");
    // }
    // else if (ptr->m_pNextNode->m_pNextNode == NULL)
    // {
    //     ptr->m_pNextNode = NULL;
    // }
    // else
    // {
    //     temp = ptr->m_pNextNode;
    //     ptr->m_pNextNode = temp->m_pNextNode;
    //     temp->m_pNextNode->m_pPrevNode = ptr;
    //     free(temp);
        // printf("\nnode deleted\n");
   // }

    int i, pos;
    TDListNode_t *temp, *ptr;
    if (head == NULL)
    {
        printf("\nThe List is Empty!!!\n");
        exit(0);
    }
    else
    {
        printf("\nEnter the position of the node to be deleted: ");
        scanf("%d", &pos);
        if (pos == 0)
        {
            ptr = head;
            head = head->m_pNextNode;
            printf("\nThe deleted element is:%d ", ptr->m_Value);
            free(ptr); // free memory address to using again
        }
        else
        {
            ptr = head;
            for (i = 0; i < pos - 1; i++)
            {
                temp = ptr;
                ptr = ptr->m_pNextNode;
                if (ptr == NULL)
                {
                    printf("\nPosition not Found!!!\n");
                    return;
                }
            }
            temp->m_pNextNode = ptr->m_pNextNode;
            printf("\nThe deleted element is:%d ", ptr->m_Value);
            free(ptr); // free memory address to using again
        }
    }
}