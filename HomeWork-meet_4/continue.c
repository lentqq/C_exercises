#include <stdio.h>

int main()
{
    int num = 0;

    while (num < 10)
    {
        num++;
        if (num == 5)
            continue;

        printf("%d\t", num);
    }

    return 0;
}