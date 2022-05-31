/* Направете две функции и извикайте желаната функция с указател към функция, съобразно
знака, подаден от командния ред:
Пример: а.exe 20 + 3
#include <stdio.h>
#include <stdlib.h>
int fnPlus(int nA, int nB) { return(nA + nB); }
int fnMinus(int nA, int nB) { return(nA - nB); }
int ( * pfCalc ) ( int, int ) = NULL;
Аргументите се въвеждат от командният ред с интервал между тях. */

#include <stdio.h>
#include <stdlib.h>

int fnAdd(int nA, int nB);         // function declaration
int fnSubtraction(int nA, int nB); // function declaration
int (*pfCalc)(int, int) = NULL;    // pointer inicialization

int main(int argc, char **argv)
{
    // takes parameters from a command line
    char *operator= argv[2];
    int nA = atoi(argv[1]);
    int nB = atoi(argv[3]);

    // checks what type of operator is entered
    if (*operator== '+')
    {
        pfCalc = fnAdd; // points to a function
        int result = pfCalc(nA, nB);
        printf("\nValue of 1st number: %d\n", nA);
        printf("\nOperator is: %s\n", argv[2]);
        printf("\nValue of 2nd number: %d\n", nB);
        printf("\nThe SUM is: %d\n", result);
    }

    // checks what type of operator is entered
    if (*operator== '-')
    {
        pfCalc = fnSubtraction; // points to a function
        int result = pfCalc(nA, nB);
        printf("\nValue of 1st number: %d\n", nA);
        printf("\nOperator is: %s\n", argv[2]);
        printf("\nValue of 2nd number: %d\n", nB);
        printf("\nThe SUBTRACTION is: %d\n", result);
    }

    return 0;
}

int fnAdd(int nA, int nB) // function initialization, to add two numbers
{
    return nA + nB;
}

int fnSubtraction(int nA, int nB) // function initialization, to subtract two numbers
{
    return nA - nB;
}
