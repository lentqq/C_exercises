#include "stack_.h"

stackPtr stackNewPtr = NULL;

int main()
{
   char option;
   int value;

   printf("\nPlease choose following options:\n");
   printf("1. PUSH\n");
   printf("2. POP\n");
   printf("3. EXIT\n");

   while (1)
   {
      option = getchar();

      switch (option)
      {
      case '1':
         printf("\nEnter value: ");
         scanf("%d", &value);

         push(&stackNewPtr, value);

         printValue(stackNewPtr);
         break;

      case '2':
         if (!checkEmpty(stackNewPtr))
         {
            printf("\nPopped Value: %d\n", pop(&stackNewPtr));
         }
         printValue(stackNewPtr);
         break;

      case '3':
         exit(0);
      }
   }
}
