/* Направете две функции и извикайте желаната функция с указател към функция.
Аргументите  и оператора се въвеждат от командният ред с интервал между тях.
Пример: а.exe 20 * 3
#include <stdio.h>
#include <stdlib.h>
double fnMultiplication(double nA, double nB) { return(nA * nB); }
double fnDivision(double nA, double nB) { return(nA / nB); }
double ( * pfCalc ) ( double, double ) = NULL; */

#include <stdio.h>
#include <stdlib.h>

double fnMultiplication(double nA, double nB); // function declaration
double fnDivision(double nA, double nB);       // function declaration
double (*pfCalc)(double, double) = NULL;       // initialization pointer to a function

int main(int argc, char **argv)
{
    // takes the argumnets from command line
    char *operator= argv[2];
    double nA = atof(argv[1]);
    double nB = atof(argv[3]);

    // checks what type of operator is entered
    if (*operator== 'x')
    {
        pfCalc = fnMultiplication; // points to a function
        double result = pfCalc(nA, nB);
        printf("\nValue of 1st number: %.2lf\n", nA);
        printf("\nOperator is: %s\n", argv[2]);
        printf("\nValue of 2nd number: %.2lf\n", nB);
        printf("\nThe RESULT is: %.2lf\n", result);
    }

    // checks what type of operator is entered
    if (*operator== '/')
    {
        if (nB == 0)
        {
            printf("\nYou can not devided to 0 !!!\n");
            printf("\nResult is: INFINITY\n");
        }
        else
        {
            pfCalc = fnDivision; // points to a function
            double result = pfCalc(nA, nB);
            printf("\nValue of 1st number: %.2lf\n", nA);
            printf("\nOperator is: %s\n", argv[2]);
            printf("\nValue of 2nd number: %.2lf\n", nB);
            printf("\nThe RESULT is: %.2lf\n", result);
        }
    }

    return 0;
}

double fnMultiplication(double nA, double nB) // initialization of function to multiplicate two numbers
{
    return nA * nB;
}

double fnDivision(double nA, double nB) // initialization of function to divided two numbers
{
    return nA / nB;
}