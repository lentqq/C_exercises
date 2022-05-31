#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int add(int x, int y);
int substarction(int x, int y);
int (*funcPtr)(int, int) = NULL;
fnP = &fn;
double result = fnP(a, b);
void swap(int *x, int *y) // function to swap two numbers
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(int argc, char *argv[])
{
    int num = 5, count = 0;
    int arr[5] = {25, 1, 47, 6, 99};
    while (count < num - 1)
    {
        for (int i = 0; i < num - 1; i++)
        {
            if (arr[i + 1] < arr[i])
            {
                swap(&arr[i], &arr[i + 1]);
            }
        }
        count++;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}