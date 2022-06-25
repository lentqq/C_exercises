/*
По информационен канал се предават данни във вид на пакети, които трябва да бъдат
обработени от вашата програма. Всеки пакет съдържа код и числови данни. Кодът с ключова
дума, която определя каква операция трябва да бъде извършена с числовите данни – редица от
цели числа.
Кодовете и операциите са:
min – най-малкото число;
max – най-голямото число;
 sum – сумата на числата;
num – броя на числата.
От тези 4 кода се образуват още 8, като се добави суфикс p или n.
Суфикс p в кода променя операцията, като от съответната операция се обработват само
положителните числа в числовите данни, а суфикс n – само отрицателните.
Вход. На всеки отделен ред от стандартния вход е даден по един пакет: код и данни - редица от
цели числа, разделени с интервали.
Ограничения. Числовите данни са цели числа в интервала [−100, 100].
Дължината на редицата, задаваща числовите данни в пакета, е число между 0 и 10.
Изход. За всеки пакет да се изведе на отделен ред на стандартния изход резултата от
операцията. Резултатът от операцията върху празна редица е символът *.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// key=0 all
// key=1 positive
// key=2 negative

int min(int *a, int n, int key);
int max(int *a, int n, int key);
int sum(int *a, int n, int key);
int num(int *a, int n, int key);
int (*fun_ptr_arr[])(int *, int, int) = {num, sum, min, max};

int main()
{
    int key;
    char *kodOp;
    kodOp = (char *)malloc(5 * sizeof(char));
    int *data;
    data = (int *)malloc(10 * sizeof(int));
    scanf("%s", kodOp);
    int n = strlen(kodOp);
    if (n == 4)
    {
        if (kodOp[3] == 'p')
            key = 1;
        if (kodOp[3] == 'n')
            key = 2;
    }
    else
    {
        if (n == 3)
            key = 0;
        else
            printf("Error");
    }
    for (int i = 0; i < 10; i++)
        scanf("%d", &data[i]);
    char *kod;
    kod = (char *)malloc(3 * sizeof(char));
    kod[0] = kodOp[0];
    kod[1] = kodOp[1];
    kod[2] = kodOp[2];
    int result;
    if (strcmp(kod, "num") == 0)
        result = fun_ptr_arr[0](data, 10, key);
    else if (strcmp(kod, "sum") == 0)
        result = fun_ptr_arr[1](data, 10, key);
    else if (strcmp(kod, "min") == 0)
        result = fun_ptr_arr[2](data, 10, key);
    else if (strcmp(kod, "max") == 0)
        result = fun_ptr_arr[3](data, 10, key);
    else
        printf("GRESHEN KOD");
    printf("%d", result);

    return 0;
}

int min(int *a, int n, int key)
{
    int m;
    switch (key)
    {
    case 0:
        m = a[0];
        for (int i = 0; i < n; i++)
            if (a[i] < m)
                m = a[i];
        return m;
    case 1:
        m = 1000;
        for (int i = 0; i < n; i++)
            if (a[i] > 0 && a[i] < m)
                m = a[i];
        return m;
    case 2:
        m = 1000;
        for (int i = 0; i < n; i++)
            if (a[i] < 0 && a[i] < m)
                m = a[i];
        return m;
    default:
        printf("*");
    }
}

int max(int *a, int n, int key)
{
    int max;
    switch (key)
    {
    case 0:
        max = a[0];
        for (int i = 0; i < n; i++)
            if (a[i] > max)
                max = a[i];
        return max;
    case 1:
        max = 1000;
        for (int i = 0; i < n; i++)
            if (a[i] > 0 && a[i] > max)
                max = a[i];
        return max;
    case 2:
        max = 0;
        for (int i = 0; i < n; i++)
            if (a[i] < 0 && a[i] > max)
                max = a[i];
        return max;
    default:
        printf("*");
    }
}

int sum(int *a, int n, int key)
{
    int s = 0;
    switch (key)
    {
    case 0:
        for (int i = 0; i < n; i++)
            s = s + a[i];
        return s;
    case 1:
        for (int i = 0; i < n; i++)
            if (a[i] > 0)
                s = s + a[i];
        return s;
    case 2:
        for (int i = 0; i < n; i++)
            if (a[i] < 0)
                s = s + a[i];
        return s;
    }
}

int num(int *a, int n, int key)
{
    int count1, count2;
    switch (key)
    {
    case 0:
        return n;
    case 1:
        count1 = 0;
        for (int i = 0; i < n; i++)
            if (a[i] > 0)
                count1++;
        return count1;
    case 2:
        count2 = 0;
        for (int i = 0; i < n; i++)
            if (a[i] < 0)
                count2++;
        return count2;
    }
}


