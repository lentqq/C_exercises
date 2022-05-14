// Да се напише програма, която отпечатва таблицата за умножение с дадено число

#include <stdio.h>

int main()

{
    int num;
    printf("Enter number to print table: ");
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, (num * i));
    }

    return 0;
}