/* Функция манипулираща стойностите на два масива с определени аритметични действия,
използвайки указатели къ функции. */

#include <stdio.h>

void tabul(float (*f)(float), float x[], float y[], int count, float step); // function declaration
float f1(float x);                                                          // function declaration
float f2(float x);                                                          // function declaration

int main()
{
    float x[5], y[5];
    tabul(f1, x, y, 5, 2);

    for (int i = 0; i < 5; i++)
    {
        printf("x[%d] = %.2lf   y[%d] = %.2lf\n", i, x[i], i, y[i]);
    }

    printf("\n");

    tabul(f2, x, y, 5, 2);
    for (int i = 0; i < 5; i++)
    {
        printf("x[%d] = %.2lf   y[%d] = %.2lf\n", i, x[i], i, y[i]);
    }

    return 0;
}

// function initalization to return manipulated elements of arrays
void tabul(float (*f)(float), float x[], float y[], int count, float step)
{
    for (int i = 0; i < count; i++)
    {
        x[i] = i * step;
        y[i] = (*f)(x[i]);
    }
}

float f1(float x) // function initialization
{
    return x * x + 2;
}

float f2(float x) // function initialization
{
    return x * x - 1;
}