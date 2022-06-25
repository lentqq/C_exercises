/* . 1. - (преговор списъци) Да се състави програма, чрез която се въвеждат N броя
 естествени числа от интервала [1..101].
 Броят на въведените числа не се знае предварително - определя се от
 потребителя.
 Чрез използване на структура от тип опашка да се изведе въведената редица
 естествени числа като:
 а) първо се извеждат всички нечетни числа;
 б) след тях се извеждат всички четни числа;
 в) извеждането на числата съответства на реда на въвеждането им.
 Пример: 11, 12, 15, 17, 19, 21, 23, 9, 10, 16, 18, 20
 Изход: 11, 15, 17, 19, 21, 23, 9, 12, 10, 16, 18, 20
 */

#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
#include <stdlib.h>

#define QUEUE_EMPTY INT_MIN

typedef struct queue
{
    int *values;
    int head, tail, num_entries, size;
} queue;

void init_queue(queue *q, int max_size)
{
    q->size = max_size;
    q->values = malloc(sizeof(int) * q->size);
    q->num_entries = 0; // empty q
    q->head = 0;
    q->tail = 0;
}

bool queue_empty(queue *q)
{
    return (q->num_entries == 0);
}

bool queue_full(queue *q)
{
    return (q->num_entries == q->size);
}

void queue_destroy(queue *q)
{
    free(q->values);
}

bool enqueue(queue *q, int value)
{

    if (queue_full(q))
    {
        return false;
    }
    q->values[q->tail] = value;
    q->num_entries++;
    q->tail = (q->tail + 1) % q->size;

    return true;
}

int dequeue(queue *q)
{
    int result;

    if (queue_empty(q))
    {
        return QUEUE_EMPTY;
    }

    result = q->values[q->head];
    q->head = (q->head + 1) % q->size;
    q->num_entries--;

    return result;
}

void printq(queue *q)
{
    for (int i = 0; i < q->size; i++)
    {
        printf("%d\t", q->values[i]);
    }
    printf("\n");
}

void print_specific_order(queue *q)
{

    for (int i = 0; i < q->size; i++)
    {
        if (q->values[i] & 1)
        {
            printf("%d\t", q->values[i]);
        }
    }

    for (int i = 0; i < q->size; i++)
    {
        if (!(q->values[i] & 1))
        {
            printf("%d\t", q->values[i]);
        }
    }
}

int main()
{

    int n = 12;
    //        printf("enter number of elements:\n");
    //        scanf("%d", &n);

    queue q1;
    init_queue(&q1, n);

    enqueue(&q1, 11);
    enqueue(&q1, 12);
    enqueue(&q1, 15);
    enqueue(&q1, 17);
    enqueue(&q1, 19);
    enqueue(&q1, 21);
    enqueue(&q1, 23);
    enqueue(&q1, 9);
    enqueue(&q1, 10);
    enqueue(&q1, 16);
    enqueue(&q1, 18);
    enqueue(&q1, 20);

    printq(&q1);
    print_specific_order(&q1);
}