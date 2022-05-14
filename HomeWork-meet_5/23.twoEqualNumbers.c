/* Да се състави програма на C, чрез която се въвеждат естествени числа от интервала
[1..50].
Програмата да преустановява работата си при въвеждане на 2 последователни числа,
които са равни.
Програмата да извежда
броя на въведените числа и тяхната средна стойност.
Пример:
1,2,3,4,5,5
Изход:
брой 6, средна стойност 3.33333 */

#include <stdio.h>

int main()

{

    int num, temp, sum = 0, count = 0;
    double averageValue = 0.00;

    do 
    {
        printf("Enter a number: ");
        scanf("%d", &num);

        count++;
        sum += num;
        averageValue = (double)sum / count;

        // checks if the next entered number is the equal as the previous one
        if (num != temp)
        {
            temp = num;
        }
        // if are equals breaks a loop
        else
        {
            break;
        }
    } while (num > 0 && num < 50);

    printf("Num:%d   Count:%d   Sum:%d   AvrgSum:%.2lf\n", num, count, sum, averageValue);

    return 0;
}