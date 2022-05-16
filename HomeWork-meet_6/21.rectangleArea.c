// Да се напише функция, която намира и връща лицето на правоъгълник.

#include <stdio.h>

// function declaration /*function prototype*/
double calculateRectangleArea(double a, double b);

int main()
{
    double a, b;

    printf("Input two numbers each of new line: \n");
    scanf(" %lf  %lf", &a, &b);

    printf("The area of rectangle is: %.2lf", calculateRectangleArea(a, b)); // call function to calculate area

    return 0;
}

// definition function to calculate area
double calculateRectangleArea(double a, double b)
{
  
    double area = a * b;
    return area;
}
