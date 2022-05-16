// Да се напише функция, която намира и отпечатва лицето на кръг.

#include <stdio.h>
#include <math.h>

// function declaration /*function prototype*/
double calculateCircleArea(double radius);

int main()
{
    double radius;

    printf("Input a radius: ");
    scanf("%lf", &radius);

    printf("The area of circle is: %.2lf", calculateCircleArea(radius)); // call function to calculate area

    return 0;
}

// function definition to calculate area of circle
double calculateCircleArea(double radius)
{
    double area = M_PI * radius * radius;
    return area;
}