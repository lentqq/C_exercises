/* Напишете програма на C, за да създадете калкулатор, който изпълнява основни
аритметични операции (събиране, изваждане, умножение и деление). Калкулаторът трябва
да въведе две числа и оператор от потребителя. Той трябва да извършва операция според
въведения оператор и трябва да приема вход в даден формат.
<номер 1> <оператор> <номер 2>
Input:
5.2 - 3;
Output: 2.2 */

#include <stdio.h>

int main()
{
    double firstNumber, secondNumber, result;
    char operator;

    printf("Enter First number, operator and Second number: \n");
    scanf("%lf %c %lf", &firstNumber, &operator, & secondNumber);

    switch (operator)
    {
    case '+':
        result = firstNumber + secondNumber;
        break;
    case '-':
        result = firstNumber - secondNumber;
        break;
    case '*':
        result = firstNumber * secondNumber;
        break;
    case '/':
        result = firstNumber / secondNumber;
        break;
    default:
        printf("Invalid character!!!");
        break;
    }

    printf("\nResult: %.2lf", result);

    return 0;
}