#include <stdio.h>

int main()
{
    int heignt, width;
    int dataCount;
    
    dataCount = scanf("%d %d", &heignt, &width);

    int result = printf("%d\n", dataCount);

    printf("%d", result);

    return 0;
}