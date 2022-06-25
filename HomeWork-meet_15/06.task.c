/*
Разглеждаме всички пермутации на три числа
[0,0,0], [0,0,1], [0,0,2], [0,1,0], [0,1,1], [0,1,2], [1,0,0], [1,0,1], [1,0,2], [1,1,0], [1,1,1], [1,1,2]
Извеждаме списък на всички елементи, които нямат зададена сума n=3 .
[0,0,0], [0,0,1], [0,0,2], [0,1,0], [0,1,1], [1,0,0], [1,0,1], [1,1,0], [1,1,2]
Вход: четири числа x,y,z – горните граници на числата от всяка позиция n - сумата,
която не бива да образуват.
Изход: Функцията отпечатва списък с троиките числа, подреден в лексикографски растящ ред
Използвайте свързан списък или опашка, където да съхранявате подредените тройки
Извикайте функция, която да ви отпечата свързания списък
[ ] [ ]
1 1
1 2
2 1
2 2
*/

#include <stdio.h>
#include <stdlib.h>

// Struktora za opashka
typedef struct Queue
{
    int *arr;
    struct Queue *next;
} Queue;

// Dva pointara koito shte sochat na front-a i end-a na opashkata
Queue *front = NULL;
Queue *rear = NULL;

// Obiknovena enQueue funkciq koqto vzima kato parametur pointer kum int
void enQueue(int *arr)
{
    Queue *temp = (Queue *)malloc(sizeof(Queue));
    temp->arr = arr;
    if (front == NULL)
    {
        front = temp;
        rear = temp;
        temp->next = NULL;
    }
    else
    {
        rear->next = temp;
        rear = temp;
        temp->next = NULL;
    }
}

// Obiknovena deQueue funkciq koqto maha predniq element ot opashkata (ne se izpolzva prosta sum q napisal)
void deQueue()
{
    if (front == NULL)
    {
        return;
    }

    Queue *temp = front;
    front = temp->next;
    free(temp);
}

// Printirani *arreq ot opashkata
void display()
{
    Queue *temp = front;
    int *arr;
    while (temp != NULL)
    {
        arr = temp->arr;
        for (int i = 0; i < 3; i++)
        {
            printf("%d ", *(arr + i));
        }
        printf("\n");
        temp = temp->next;
    }
}

int main()
{
    int x, y, z;
    int n;
    
    printf("Enter x :");
    scanf("%d", &x);
    printf("Enter y :");
    scanf("%d", &y);
    printf("Enter z :");
    scanf("%d", &z);
    printf("Enter n :");
    scanf("%d", &n);

    for (int i = 0; i < (x + 1); i++)
    {
        for (int j = 0; j < (y + 1); j++)
        {
            for (int k = 0; k < (z + 1); k++)
            {
                if (i + j + k == n)
                {
                    continue;
                }
                else
                {
                    // zadelqme si pamet za masiv ot 3 elementa(x,y,z);
                    int *arr = (int *)malloc(sizeof(int) * 3);
                    // tova e seedno arr[0] = i , arr[1] = j , arr[2] = k
                    *(arr + 0) = i;
                    *(arr + 1) = j;
                    *(arr + 2) = k;
                    // vkarvame arr-q v opashkata
                    enQueue(arr);
                }
            }
        }
    }

    // printirame za  vseki node na queue-to arr-q koito sadurja
    display();

    return 0;
}