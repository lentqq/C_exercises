#include <stdio.h>
#include <stdlib.h>
struct Node;
typedef struct Node *PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;

struct Node
{
    int e;
    Position next;
    Position previous;
};

void Insert(int x, List l, Position p)
{
    Position TmpCell;
    TmpCell = (struct Node *)malloc(sizeof(struct Node));
    if (TmpCell == NULL)
        printf("Memory out of spacen");
    else
    {
        TmpCell->e = x;
        TmpCell->previous = p;
        TmpCell->next = p->next;
        p->next = TmpCell;
    }
}

void Delete(int x, List l)
{
    Position p, p1, p2;
    p = Find(x, l);
    if (p != NULL)
    {
        p1 = p->previous;
        p2 = p->next;
        p1->next = p->next;
        if (p2 != NULL) // if the node is not the last node
            p2->previous = p->previous;
    }
    else
        printf("Element does not exist!!!n");
}

void Display(List l)
{
    printf("The list element are :: ");
    Position p = l->next;
    while (p != NULL)
    {
        printf("%d -> ", p->e);
        p = p->next;
    }
}

int main()
{
    int x, pos, ch, i;
    List l, l1;
    l = (struct Node *)malloc(sizeof(struct Node));
    l->previous = NULL;
    l->next = NULL;
    List p = l;
    printf("DOUBLY LINKED LIST IMPLEMENTATION OF LIST ADTnn");
    do
    {
        printf("nn1. CREATEn 2. DELETEn  3. DISPLAYn 4. QUITnnEnter the choice :: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            p = l;
            printf("Enter the element to be inserted :: ");
            scanf("%d", &x);
            printf("Enter the position of the element :: ");
            scanf("%d", &pos);
            for (i = 1; i < pos; i++)
            {
                p = p->next;
            }
            Insert(x, l, p);
            break;

        case 2:
            p = l;
            printf("Enter the element to be deleted :: ");
            scanf("%d", &x);
            Delete(x, p);
            break;

        case 3:
            Display(l);
            break;
        }
    } while (ch < 4);
}

// #include <stdio.h>
// #include <stdlib.h>

// // doubly linked list
// typedef struct TDListNode
// {
//     int m_nValue;
//     struct TDListNode *m_pNextNode;
//     struct TDListNode *m_pPrevNode;
// } TDListNode;

// void print(TDListNode *s);

// int main()
// {
//     TDListNode *start;
//     TDListNode *current;
//     for (int i = 0; i < 3; i++)
//     {
//         current = (TDListNode *)malloc(sizeof(TDListNode));
//         if (current == NULL)
//         {
//             printf("No memmory");
//             return 1;
//         }
//         if (start == NULL) // empty list
//         {
//             current->m_nValue = i + 5;
//             current->m_pNextNode = NULL;
//             current->m_pPrevNode = NULL;
//             start = current;
//         }
//         else
//         {
//             TDListNode *tmp = start;
//             while (tmp->m_pNextNode != NULL)
//             {
//                 tmp = tmp->m_pNextNode;
//             }
//             current->m_nValue = i + 5;
//             current->m_pNextNode = NULL;
//             current->m_pPrevNode = tmp;
//             tmp->m_pNextNode = current;
//         }
//         free(current);
//     }
//     print(start);
// }
// void print(TDListNode *s)
// {
//     for (TDListNode *tmp = s; tmp != NULL; tmp = tmp->m_pNextNode)
//     {
//         printf("%d\n", tmp->m_nValue);
//     }
// }