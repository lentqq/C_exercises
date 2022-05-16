/* Да се напише функция с име isTriangle, която по дадени три цели
числа определя дали съществува триъгълник със страни тези числа.*/

#include <stdio.h>

// function declaration /* prototype function */
void isTriangle(int a, int b, int c);

int main()
{
    int a, b, c;

    printf("\nInnput a 1st side: ");
    scanf("%d", &a);

    printf("\nInnput a 2nd side: ");
    scanf("%d", &b);

    printf("\nInnput a 3rd side: ");
    scanf("%d", &c);

    isTriangle(a, b, c); // call void function

    return 0;
}

// function definition to check if triangle exsist
void isTriangle(int a, int b, int c)
{
    (a < b + c && b < a + c && c < a + b) ? printf("\nIs triangle!!!") : printf("\nIs not triangle!!!");
}