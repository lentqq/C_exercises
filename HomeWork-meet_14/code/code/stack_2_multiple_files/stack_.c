#include "stack_.h"

void push(stackPtr *top, int x)
{
   stackPtr nodePtr;

   nodePtr = malloc(sizeof(Stack));

   if (nodePtr != NULL)
   {
      nodePtr->data = x;
      nodePtr->ptr = *top;
      *top = nodePtr;
   }

   else
      printf("\nERROR !!! (Not enough space)");
}

int pop(stackPtr *top)
{
   int pValue;       // variable for value at the top
   stackPtr tempPtr; // temporary pointer

   tempPtr = *top;

   pValue = (*top)->data;

   *top = (*top)->ptr;

   free(tempPtr); // free temporary pointer value

   return pValue;
}

void printValue(stackPtr showPtr)
{
   if (showPtr == NULL)
   {
      printf("\nNo value found.");
   }
   else
   {
      printf("\nData stored in stack:\n");

      while (showPtr != NULL)
      {
         printf("%d --> ", showPtr->data);
         showPtr = showPtr->ptr;
      }
      printf("NULL\n");
   }
}

int checkEmpty(stackPtr top)
{
   return top == NULL;
}
