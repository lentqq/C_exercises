#include <stdio.h>

int main()
{
    int firstNum, secondNum;

    printf("Enter two numbers: \n");
    scanf("%d %d", &firstNum, &secondNum);

    while (firstNum != secondNum)
    {
        if (firstNum > secondNum)
        {
            firstNum = firstNum - secondNum;
        }
        else
        {
            secondNum = secondNum - firstNum;
        }
    }

    printf("The GCD is %d:", firstNum);

    return 0;
}