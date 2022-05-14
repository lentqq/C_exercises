# include<stdio.h>

int sumOfNumbers(int a, int b);
int subtractionOfNumbers(int a, int b);
int productOfNumbers(int a, int b);
double divisionOfNumbers(double a, double b);

int main()
{
  int a = 4; 
  int b = 2;

  printf("The sum is: %d\n", sumOfNumbers(a ,b));
  printf("The substarction is: %d\n", subtractionOfNumbers(a ,b));
  printf("The product is: %d\n", productOfNumbers(a ,b));
  printf("The division is: %.2lf\n", divisionOfNumbers(a ,b));



    return 0;
}

int sumOfNumbers(int a, int b)
{
    return a + b;
}

int subtractionOfNumbers(int a, int b)
{
    return a - b;
}

int productOfNumbers(int a, int b)
{
    return a * b;
}

double divisionOfNumbers(double a, double b)
{
    return a / b;
}