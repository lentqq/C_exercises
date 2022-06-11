#include <stdio.h>
#include <stdlib.h>

#define AVG(x, y) (x + y) / 2
#define AVGS (1 + 2 + 3 + 4 + 5) / 2

#define POW(x, y)                   \
    ({                              \
        int result = x;             \
        for (int i = 0; i < y; i++) \
        {                           \
            result *= result;       \
        }                           \
        printf("%d\n", result);     \
    })

#define toUpper(c) c - 32
#define toLowest(ch) ch + 32

int main()
{
    printf("%d\n", AVG(4, 6));
    printf("%d\n", AVGS);
    POW(11, 1);
    printf("%c\n", toUpper('w'));
    printf("%c\n", toLowest('O'));

    return 0;
}