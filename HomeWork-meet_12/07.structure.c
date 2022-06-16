/* Направете функция struct point makepoint(int x, int y), която
създава две точки. Използвайте malloc(). */

#include <stdio.h>
#include <stdlib.h>

struct point // structure declaration
{
    int x;
    int y;
} aPoint, bPoint;

struct point makePoint(int x, int y); // functio declaration

int main()
{
     aPoint = makePoint(3, 4);
     bPoint = makePoint(1, 2);
    printf("Point A: (%d, %d)\n", aPoint.x, aPoint.y);
    printf("Point B: (%d, %d)\n", bPoint.x, bPoint.y);

    return 0;
}

struct point makePoint(int x, int y) // function initializaion
{
    struct point *p;
    p = malloc(sizeof(struct point));
    p->x = x;
    p->y = y;
    return *p;
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
 
#include <ncurses.h>
 
#define clearscr() printf("\033[H\033[J")
 
//void Exercise2(void);
 
typedef struct{
 
int x;
int y;
 
}rect, *p_rect;
 
rect makepoint(int, int);
 
 
/*
ДОМАШНО Задача 8. Направете структура struct rect, която съдържа в
себе си две точки. Създайте обект от тип тази структура наречен
screen. Използвайте функцията makepoint за да зададете начална точка
на екрана (0, 0) и крайна точка (15, 15). Запълнете пространството      //Da se proveri !!!
между тях с тирета.
 
*/
/*void Exercise2(void){
int main(){
 
    rect screen[2];
 
    int X, Y, X1, Y1;
 
    printf("Enter the P1[X,Y]:");
    scanf("%d %d", &X, &Y);
    printf("Enter the P2[X,Y]:");
    scanf("%d %d", &X1, &Y1);
 
    screen[0] = makepoint(X,Y);
    screen[1] = makepoint(X1,Y1);
 
    clearscr();
 
    printf("\033[%dC\033[%dB\033[34m",X,Y);
    for (int j = screen[0].y+1; j <= screen[1].y; j++){
 
 
        for (int i = screen[0].x; i <= screen[1].x; i++)
        {
            printf("%c\033[34m",0x178);
        }
        printf("\n");
        printf("\033[%dC\033[34m",X);
    }
 
    return 0;
 
}
rect makepoint(int a, int b){
 
        rect out;
 
        out.x = a;
        out.y = b;
 
    return out;
 
}
*/
