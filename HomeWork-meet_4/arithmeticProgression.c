/* Derive the first N numbers of a sequence (arithmetic progression),
if given the first member of the sequence and the difference between the first two elements. */

#include <stdio.h>

int main()
{
  int firstNumber, step, numElements;

  printf("Enter the first number, step of a sequence and the number of elements to print: \n");
  scanf("%d %d %d", &firstNumber, &step, &numElements);

  // use "for-loop" to print first N elements of sequence
  for (int i = 0; i < numElements; i++)
  {
    // a sequence of numbers in order, in which the difference between any two consecutive numbers is a constant value.
    firstNumber += step;
    printf("%d  \t", firstNumber);
  }

  return 0;
}