/* . Да се напише програма, която чете координатите на една точка
в равнината и определя в кой квадрант е точката */

#include <stdio.h>

int main()
{
    int x, y;

    printf("Enter the coordinates: \n");
    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0)
    {
        printf("1st Qadrant!");
    }
    else if (x < 0 && y > 0)
    {
        printf("2nd Quadrant!");
    }
    else if (x < 0 && y < 0)
    {
        printf("3rd Quadrant!");
    }
    else
    {
        printf("4th Quadrant!");
    }

    return 0;
}