/* Напишете функция void sort_arr(void *A, int n, int dir, ftype fp),
където А е обикновен масив от цели числа,
n - размера на масива,
dir - посоката, в която да бъде сортиран масива,
ftype - указател към функция, която приема масив, неговия размер и в каква посока да бъде
сортиран входния масив.
ftype трябва да сортира масива във възходящ или низходящ ред в зависимост от третия
параметър на функцията.
Принтирайте изходният масив и сортираният масив. */

#include <stdio.h>

void (*ftype_fp)(int arr[], int num, int dir) = NULL;                                        // pointer points to a sort() function
void sort_arr(void *p_arr, int num, int dir, void (*ftype_fp)(int arr[], int num, int dir)); // function declaration
int readArray(int arr[], int num);                                                           // declaraition of function to initialized array
void printArray(int *arr, int num);
void sortArray(int *arr, int num, int dir);
void swap(int *x, int *y);
int *p_arr = NULL; // pointer to an array

int main()
{
    int dir;
    int num;

    printf("\nInput direction to sort array -> Ascending order: press (1), Descending order: press (-1) _");
    scanf("%d", &dir);

    printf("\nInput the number of elements: ");
    scanf("%d", &num);

    int arr[num];
    p_arr = arr;

    printf("\nInput the elements of array:\n");
    readArray(p_arr, num);
    printf("\nThe elements of array are:\n");
    printArray(p_arr, num);
    printf("\nThe elements of sorted array are:\n");
    sort_arr(p_arr, num, dir, *ftype_fp);

    return 0;
}

int readArray(int *arr, int num) // function to initialized an array
{
    for (int i = 0; i < num; i++)
    {
        scanf("%d", arr + i);
    }
}

void printArray(int *arr, int num) // initialized function to print array
{
    for (int i = 0; i < num; i++)
    {
        printf("%d\t", *(arr + i));
    }
}

void swap(int *x, int *y) // function to swap two numbers
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void sortArray(int *arr, int num, int dir) // initialized function to sort array
{
    int count = 0;

    // sort numbers of an array in ascending order
    if (dir == 1)
    {
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
    }

    if (dir == -1)
    {
        // sort numbers of an array in descending order
        while (count < num - 1)
        {
            for (int i = 0; i < num - 1; i++)
            {
                if (arr[i + 1] > arr[i])
                {
                    swap(&arr[i], &arr[i + 1]);
                }
            }
            count++;
        }
    }
}

void sort_arr(void *p_arr, int num, int dir, void (*ftype_fp)(int arr[], int num, int dir)) // void function to return sorted array
{
    ftype_fp = sortArray;
    (*ftype_fp)( p_arr, num,  dir);
    printArray(p_arr, num);
}