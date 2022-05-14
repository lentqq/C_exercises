/* Напишете C програма, която въвежда оценките по 5 предмета, като спазва следните
условия
If percentage >= 90% : Grade A
If percentage >= 80% : Grade B
If percentage >= 70% : Grade C
If percentage >= 60% : Grade D
If percentage >= 40% : Grade E
If percentage < 40% : Grade F
пример
Input
Input marks of five subjects: 95 95 97 98 90
Output
Percentage = 95.00 Grade A*/

#include <stdio.h>

int main()
{
    int subject1, subject2, subject3, subject4, subject5;
    int percentage = 0;

    printf("Input marks of five subjects:  \n");
    scanf(" %d %d %d %d %d", &subject1, &subject2, &subject3, &subject4, &subject5);

    percentage = (subject1 + subject2 + subject3 + subject4 + subject5) / 5;

    if (percentage < 40)
    {
        printf("Percentage = %d --> Grade F");
    }
    else if (percentage <= 60)
    {
        printf( "Percentage = %d --> Grade E");
    }
    else if (percentage <= 70)
    {
        printf("Percentage = %d --> Grade D");
    }
    else if (percentage <= 80)
    {
        printf("Percentage = %d --> Grade C");
    }
    else if (percentage <= 90)
    {
        printf("Percentage = %d --> Grade B");
    }
    else
    {
        printf("Percentage = %d --> Grade A");
    }

    return 0;
}