/* Make a running light by assuming that every bit of
a variable is connected to a lamp (or LED). When the bit is
zero, the lamp does not light when the unit is lit.*/

#include <stdio.h>
#include <unistd.h>

int main()
{
    int n, stop;

    printf("Enter number of lines: ");
    scanf("%d", &n);
   
    for (int i = n; i >= 1; i--)
    {
        for (int space = 0; space <= n - i; space++)
        {
            printf("   ");
        }
        printf("*\n");
        sleep(1);
    }

    return 0;
}
