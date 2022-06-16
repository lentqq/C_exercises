#include <stdio.h>
#include <string.h>

struct Employee
{
    int age;
    char name[8];
    struct Employee *boss;
};

void printEmployeeData(struct Employee *ptrEm)
{
    printf("\nAge: %d, Name: %s", ptrEm->age, ptrEm->name);
}

int main()
{
    struct Employee employee1 = {20, "Niksy"};
    struct Employee *boss = &employee1;
    printEmployeeData(&employee1);
    // printf("\nAge: %d, Name: %s", employee1.age, boss->name);

    // employee1.age = 25;
    // strcpy(boss->name ,"Borko");

    // printf("\nAge: %d, Name: %s", employee1.age, boss->name);
    // printf("\nSize of Employee: %d", sizeof(struct Employee));


    int min = 70;
    int hour = min / 60;// take hours
    int resMin = min % 60;// take rest minutes up to 60
    printf("\nH: %d, M: %d", hour, resMin);
    return 0;
}

/*
ДОМАШНО Задача 3. Напишете програма, която калкулира разликата на
два времеви периода, изразени във векове, години, месеци, дни, ----hours?----
минути, секудни. Принтирайте изходните периоди и резултата.
*/
// #include<stdio.h>

// #include <stdio.h>
// typedef struct
// {
//         int centuries;
//         int years;
//         int months;
//         int days;
//         int hours;
//         int minutes;
//         int seconds;
// }period;

// void comparePeriods (period, period);

// int main()
// {
//     period first;
//     first.centuries = 12;
//     first.years = 3;
//     first.months = 5;
//     first.days = 7;
//     first.hours = 9;
//     first.minutes = 0;
//     first.seconds = 7;

//     period second;
//     second.centuries = 3;
//     second.years = 12;
//     second.months = 3;
//     second.days = 4;
//     second.hours = 6;
//     second.minutes = 8;
//     second.seconds = 0;

//     comparePeriods(first, second);

//     return 0;
// }

// void comparePeriods (period a,period b)
// {
//     period result;

//     if (a.seconds<b.seconds)
//     {
//       a.minutes--;
//       a.seconds+=60;
//     }
//     result.seconds = a.seconds-b.seconds;

//     if (a.minutes<b.minutes)
//     {
//       a.hours--;
//       a.minutes+=60;
//     }
//     result.minutes = a.minutes-b.minutes;

//     if (a.hours<b.hours)
//     {
//       a.days--;
//       a.hours+=24;
//     }
//     result.hours = a.hours-b.hours;

//     if (a.days<b.days)
//     {
//       a.months--;
//       a.days+=30;
//     }
//     result.days = a.days-b.days;

//     if (a.months<b.months)
//     {
//       a.years--;
//       a.months+=12;
//     }
//     result.months = a.months-b.months;

//     if (a.years<b.years)
//     {
//       a.centuries--;
//       a.years+=100;
//     }
//     result.years = a.years-b.years;

//     result.centuries = a.centuries-b.centuries;

//     printf("periods comparison result: \n%d centuries \n%d years \n%d months \n%d days \n%d hours \n%d minutes \n%d seconds\n",
//             result.centuries, result.years, result.months, result.days,
//             result.hours, result.minutes, result.seconds);
// }


//3 structure
// #include <stdio.h>
// #include <stdlib.h>

// struct difference{
//     unsigned int centuries = 0;
//     unsigned int years = 0;
//     unsigned int months = 0;
//     unsigned long days = 0;
//     unsigned long long hours = 0;
//     unsigned long long minutes = 0;
//     unsigned long long seconds = 0;
// } year_difference;

// int calNum(int year)
// {
//     return (year / 4) - (year / 100) + (year / 400);
// }
// // Function to calculate the number
// // of leap years in given range

// int leapNum(int r, int l)
// {
//     l--;
//     int num1 = calNum(r);
//     int num2 = calNum(l);
//     return num2 - num1;
// }

// int main(){
//     unsigned int year_1 = 0;
//     unsigned int year_2 = 0;
//     unsigned int diff = 0;
//     int leap_day_counter = 0;

//     printf("Please enter year 1 and year 2 to calculate the difference between them:\n");
//     scanf("%d",&year_1);
//     scanf("%d",&year_2);

//     if (year_1 > year_2){
//         diff = year_1 - year_2;
//         leap_day_counter = leapNum(year_1, year_2);
//     }
//     else if (year_1 < year_2) {
//         diff = year_2 - year_1;
//         leap_day_counter = leapNum(year_1, year_2);
//     }
//     else{
//         printf("The entered years are exactly the same.");
//         exit(0);
//     }

//     printf("Leap Years: %d\n", leap_day_counter);

//     year_difference.centuries = diff / 100;
//     year_difference.years = diff;
//     year_difference.months = year_difference.years * 12;
//     year_difference.days = (year_difference.months * 365) + leap_day_counter;
//     year_difference.hours = year_difference.days * 24;
//     year_difference.minutes = year_difference.hours * 60;
//     year_difference.seconds = year_difference.minutes * 60;

//     printf("Centuries: %ld\n", year_difference.centuries);
//     printf("Years: %ld\n", year_difference.years);
//     printf("Months: %ld\n", year_difference.months);
//     printf("Days: %llu\n", year_difference.days);
//     printf("Hours: %llu\n", year_difference.hours);
//     printf("Minutes: %llu\n", year_difference.minutes);
//     printf("Seconds: %llu\n", year_difference.seconds);

//     return 0;
// }



