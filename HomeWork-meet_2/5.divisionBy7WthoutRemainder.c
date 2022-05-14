#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    // printf("%d", (number % 7 == 0) ? "Yes, it is divided!" : "Not devided!");

    if (number % 7 == 0)
    {
        printf("Yes, it is divided!");
    }
    else
    {
        printf("Not devided!");
    }
    return 0;
}