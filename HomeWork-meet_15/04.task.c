/*
Плъзгащ се прозорец е подмасив с постоянен размер, който се движи отляво надясно през
масив. За всяка позиция на прозореца искаме да изчислим някаква информация за елементите
в прозореца. Задачата е поддържане на минимума на плъзгащия се прозорец, което означава,
че трябва да се намира най-малката стойност във всеки прозорец.
Вход. На стандартния вход за всеки тестов пример се задават две числа – дължината на масива
n и дължината на плъзгащия се прозорец m. Следват елементите на масива a1, a2, ..., an.
Ограничения. 1 ≤ m ≤ n ≤ 109 , 1 ≤ ai ≤ 1000, i = 1, 2, ..., n.
Изход. За всеки тестов пример на стандартния изход на отделен ред се извежда броя на
различните най-малки стойности в плъзгащия се прозорец.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int min(int *subWin, int m);

int main()
{
    int arrNum, subArrNum;

    printf("\nEnter the num of array`s elements: ");
    scanf("%d", &arrNum);
    printf("\nEnter the num of subarray`s elements: ");
    scanf("%d", &subArrNum);

    int *a = (int *)malloc(arrNum * sizeof(int));

    for (int i = 0; i < arrNum; i++)
    {
        scanf("%d", a + i);
    }
    for (int w = 0; w < arrNum; w += subArrNum)
    {
        int minim = min((a + w), subArrNum);
        printf("%d\t", minim);
    }
    free(a);

    return 0;
}

int min(int *subWin, int m)
{
    int min = *subWin;

    for (int i = 1; i < m; i++)
    {
        if (*(subWin + i) < min)
        {
            min = *(subWin + i);
        }
    }
    return min;
}