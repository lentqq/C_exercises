/*  Да се напише програма, която въвежда три числа и проверява дали те могат да
бъдат страни на триъгълник.
a<b+c и b<a+c и c<a+b
a>0 b>0 c>0
Ако са страни на триъгълник, да се определи вида на триъгълника -
рамнобедрен, равностраннен или разностранен */

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Input a 1st side: ");
    scanf("%d", &a);
    printf("Input a 2nd side: ");
    scanf("%d", &b);
    printf("Input a 3rd side: ");
    scanf("%d", &c);

    if (a < b + c && b < a + c && c < a + b)
    {
        if (a == b && a == c && b == c)
        {
            printf("Equilateral triangle!!!");
        }
        else if (a == b || a == c || b == c)
        {
            printf("Isosceles triangle!!!");
        }
        else
        {
            printf("Multifaceted triangle!!!");
        }
    }
    else
    {
        printf("Cannot be sides of a triangle!!!");
    }

    return 0;
}