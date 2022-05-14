#include <stdio.h>

int main(int argc, char *argv[])
{

    printf("%s\n", argv[0]);
    int num = 0;

    do
    {
        printf("Enter a number: ");
        scanf("%d", &num);
    } while (num < 2 || num >= 12);
    
    printf("The number %d is in the range", num);

    return 0;
}