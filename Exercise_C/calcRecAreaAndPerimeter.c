#include <stdio.h>

int main()
{

    int width;
    int height;


    printf("Input a width: ");
    scanf("%d", &width);
    printf("Input a height: ");
    scanf("%d", &height);

    int perimeter = (width * 2) + (height * 2);
    int area = width * height;

    printf("Calculated perimeter of rectangle is: %d inches\nCalculated area of rectangle is: %d inches", perimeter, area);

    return 0;
}