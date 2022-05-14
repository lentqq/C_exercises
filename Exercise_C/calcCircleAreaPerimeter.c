#include <stdio.h>
#include <math.h>

int main()
{
    int radius;
    float area, perimeter;

    printf("Enter the radius: ");
    scanf("%d", &radius);

    perimeter = 2 * M_PI * radius;
    area = M_PI * radius * radius;
    printf("Perimeter is: %.2f inches\nArea is: %.2f inches", perimeter, area);

    return 0;
}