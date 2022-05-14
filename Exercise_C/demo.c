#include <stdio.h>
#include <float.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int firstNum = num % 10;
    int secondNum = (num / 10) % 10;
    int thirdNum = (num / 100) % 10;

    if (firstNum < secondNum && firstNum < thirdNum)
    {
        printf("First position");
    }
    else if (secondNum < firstNum && secondNum < thirdNum)
    {
        printf("Second position");
    }
    else 
    {
        printf("Third position");
        
    }
    

    return 0;
}
