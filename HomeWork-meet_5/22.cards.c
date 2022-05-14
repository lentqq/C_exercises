/* Дадено е наредено тесте карти.
Наредбата по тежест на карта е:
2,3,4,5,6,7,8,9,10, Вале, Дама, Поп, Асо.
Наредбата по цвят на картите е:
трефа, каро, купа, пика.
Да се създаде програма на C, чрез която се въвежда N естествено число от интервала
[1..51] и се извеждат въведения номер карта и останалите по-големи карти от тестето.
Използвайте вложен цикъл.
Пример:
47
Изход:
Поп купа, Поп пика, Асо трефа, Асо каро, Асо купа, Асо пика */

#include <stdio.h>
#include <stdlib.h>

int main()

{

    int num;
    char *suits[4] = {"Trefa", "Karo", "Kupa", "Pika"};
    char *face[13] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "Vale", "Dama", "Pop", "Aco"};

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i < 52; i++)
    {

        // use "continue" to print from index...to the end
        if (i < num - 1)
            continue;
        printf("%s %s   |   ", face[i / 4], suits[i % 4]);
    }

    return 0;
}