
//дефиниране на структури и функции

#include <stdlib.h>
#include <stdio.h>

typedef struct node
{
    int number;
    struct node *next;
} node_t;

node_t *create_nods(int i)
{
    node_t *ptr;
    ptr = malloc(sizeof(node_t));
    ptr->number = i;
    ptr->next = NULL;

    return ptr;
}
void print_func_next(node_t *start)
{
    node_t *temp_value = start;
    while (temp_value != NULL)
    {
        printf("%d\t", temp_value->number);
        temp_value = temp_value->next;
    }
    printf("\n");
}

#include <stdio.h>
// #include "functions.h"
#define LOOP_SIZE 10
int foo(int num)
{
    int result = num + 2;
    return result;
    // return 0;
}

int main()
{
    // foo();
    // int n = 7;
    // int res = foo(n - 4);
    // printf("%d", res);
float arrtext[7] = {0};
printf("%.2lf",arrtext[5]);




    //     node_t * main_header;
    //     node_t * R1_header;
    //     node_t * R2_header;
    //     node_t * temp_nod;
    //     node_t * new_nod;

    //     //създаваме едносвързан списък с 10 цели числа
    //     main_header = create_nods(1);
    //     temp_nod = main_header;
    //     for (int i = 2; i <= LOOP_SIZE; ++i){
    //         temp_nod->next = create_nods(i);
    //         temp_nod = temp_nod->next;
    //     }
    // //    print_func_next(main_header);

    //     R1_header = main_header;
    //     R2_header = main_header->next;
    //     node_t *temp1 = R1_header;
    //     node_t *temp2 = R2_header;
    //     temp_nod = R2_header->next;

    //     while (temp_nod != NULL){
    //         new_nod = create_nods(temp_nod->number);

    //         if (temp_nod->number % 2 != 0){
    //             temp1->next = new_nod;
    //             temp1 = temp1->next;
    //         }else{
    //             temp2->next = new_nod;
    //             temp2 = temp2->next;
    //         }
    //         temp_nod = temp_nod->next;
    //     }

    //     print_func_next(R1_header);
    //     print_func_next(R2_header);

    return 0;
}