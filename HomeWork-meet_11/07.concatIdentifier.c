/* Напишете макрос, който свързва два
идентификатора в един общ (конкатениране на
идентификатори) */

#include<stdio.h>

#define concat(a, b) a##b//define macro to concat two varaible identificators

int main()
{
     char firstNamelastName[20] = "Nikolay Kolev";
     printf("\nThe concat result is --> %s", concat(firstName, lastName)); 

    return 0;
}
