/* Напишете продрама, която демонстрира уменията ви да боравите с
"nested structure." Правя структура за семейство, като един от елементите на структурата е
вложена струкрура с информация за всеки член на семейството. Извеждам информация за броя
на членовете на семейството и името и годините на всеки от тях. */

#include <stdio.h>
#include <string.h>

struct family // structure declaration
{
    int numMembers;
    char city[8];
    struct members
    {
        char name[8];
        int years;
    } m1, m2, m3, m4;

} myfamily;

int main()
{ 
    // set number of family members
     myfamily.numMembers = 4;

     //set names
     strcpy(myfamily.m1.name, "Nikolay");
     strcpy(myfamily.m2.name, "Milena");
     strcpy(myfamily.m3.name, "Nikol");
     strcpy(myfamily.m4.name, "Bokata");

     //set years
     myfamily.m1.years = 100;
     myfamily.m2.years = 50;
     myfamily.m3.years = 20;
     myfamily.m4.years = 30;
     printf("\nNumber of members is: %d", myfamily.numMembers);
     printf("\nName of member1 is: %s, %d years old.", myfamily.m1.name, myfamily.m1.years);
     printf("\nName of member2 is: %s, %d years old.", myfamily.m2.name, myfamily.m2.years);
     printf("\nName of member3 is: %s, %d years old.", myfamily.m3.name, myfamily.m3.years);
     printf("\nName of member4 is: %s, %d years old.", myfamily.m4.name, myfamily.m4.years);
  
      
    return 0;
}
