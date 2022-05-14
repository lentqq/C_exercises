#include <stdio.h>

int main()
{
    // declare varaible
    int x;
    int y;
    int sum;

    // read value for x and y from standard input
    printf("Enter value for x: ");
    scanf("%d", &x);

    printf("Enter value for y: ");
    scanf("%d", &y);

    sum = x + y;

    // print
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("x + y =  %d\n", sum);

    printf("%d + % d = %d\n", x, y, sum);
    printf("%d - % d = %d\n", x, y, (x - y));
    printf("%d + % d = %d\n", x, y, (x * y));

    return 0;
}