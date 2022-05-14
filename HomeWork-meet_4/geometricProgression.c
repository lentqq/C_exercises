/* Derive the first N numbers of a sequence (geometric progression), if given first
member of the sequence and the division between the first two elements. */

#include <stdio.h>

int main()
{
    int firstNumber, step, numElements;

    printf("Enter the first number, step of a sequence and the number of elements to print: \n");
    scanf("%d %d %d", &firstNumber, &step, &numElements);

    // use "for-loop" to print first N elements of sequence
    for (int i = 0; i < numElements; i++)
    {
        // a type of sequence where each succeeding term is produced by multiplying each preceding term by a fixed number
        firstNumber *= step;
        printf("%d  \t", firstNumber);
    }

    return 0;
}
