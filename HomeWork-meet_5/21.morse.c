/* Да се състави програма на C, която при въвеждане на естествено число от интервала
[10 - 30000] извежда цифрите му в морзовата азбука.
Цифрите на числото се извеждат отдясно-наляво
Входни данни: х - естествено число.
Цифрите в морзовата абука се изписват както следва:
0: "----- ";
1: ".... "
2: "...- "
3: "..-- "
4: "..--- "
5: ".---- "
6: "-... "
7: "--.. "
8: "---.. "
9: "----. "
За целта използвайте цикъл и оператор switch */

#include <stdio.h>

int main()

{
    int num;

    do
    {
        printf("Enter a number to convert to morse: ");
        scanf("%d", &num);
        
        while (num > 0)
        {
            switch (num % 10)
            {
            case 0:
                printf("----- ");
                break;

            case 1:
                printf(".... ");
                break;

            case 2:
                printf("...- ");
                break;

            case 3:
                printf("..-- ");
                break;

            case 4:
                printf("..--- ");
                break;

            case 5:
                printf(".---- ");
                break;

            case 6:
                printf("-... ");
                break;

            case 7:
                printf("--.. ");
                break;

            case 8:
                printf("---.. ");
                break;

            case 9:
                printf("----. ");
                break;

            default:
                
                break;
            }

            num /= 10;
        }

    } while (num > 9 && num < 30001);

    return 0;
}
