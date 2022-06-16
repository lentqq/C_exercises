/* Направете структура struct rect, която съдържа в
себе си две точки. Създайте обект от тип тази структура наречен
screen. Използвайте функцията makepoint за да зададете начална точка
на екрана (0, 0) и крайна точка (15, 15). Запълнете пространството
между тях с тирета. */

#include <stdio.h>
#include <string.h>

typedef struct
{
    int x;
    int y;
} rect;

typedef struct
{
    rect a;
    rect b;
} screen;

char makepoint(int a, int b)
{

    if ((a == 0 && b == 0) || (a == 14 && b == 14))
    {
        return '*';
    }
    else
    {
        return '-';
    }
}

int main()
{

    screen rectangle;
    rectangle.a.x = 0;
    rectangle.a.y = 0;
    rectangle.b.x = 15;
    rectangle.b.y = 15;

    for (int i = rectangle.a.x; i < rectangle.b.x; ++i)
    {
        for (int j = rectangle.a.y; j < rectangle.b.y; ++j)
        {
            printf(" %c ", makepoint(i, j));
        }
        printf("\n");
    }
    return 0;
}
