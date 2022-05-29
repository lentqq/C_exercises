# include<stdio.h>
# include<stdlib.h>

int main(int argc, char *argv[])
{
    // char *a = argv[1];
    char *plus = argv[2];
    // char *b = argv[3];

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[3]);
    int result;
     
     if(*plus == '+')
          {
            result  = num1 + num2;
          }
          else if(*plus == '-')
          {
              result = num1 - num2;
          }

    printf("\nvalue1 is: %s\n", argv[1]);
    printf("\noperator is: %s\n", argv[2]);
    printf("\nvalue2 is: %s\n", argv[3]);
    printf("\nnumber is: %d\n", num1);
    printf("\nnumber is: %d\n", num2);
    printf("\nResult is: %d\n", result);


   

    return 0;
}