/* Напишете програма на C за въвеждане на номер на ден от седмицата (1-7) и
отпечатване на името на деня от седмицата с помощта на главни букви.*/

#include <stdio.h>

int main()
{
    int dayOfWeek;

    printf("Input a number of day: ");
    scanf("%d", &dayOfWeek);

    switch (dayOfWeek)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        printf("Invalid data!!!");
        break;
    }

    return 0;
}