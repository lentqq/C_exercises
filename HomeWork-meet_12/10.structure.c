/* Представете служителите във фирма в структура с членове: пореден номер, име, презиме,
фамилия, позиция, трудов стаж в години, заплата в лева, указател към
структурата, описващ неговия началник. Напишете програма, която
въвежда 10 служителя, които се съхраняват в масив от описаните
структури. Въвеждането на служителите може да стане на два паса,
първо въвеждане на всички данни без указателя към началника и на
втори пас, указване на всеки служител кой е неговият началник. */

#include <stdio.h>

struct Employee
{
    int id;
    char firstName[16];
    char surname[16];
    char lastName[16];
    char jobTitle[16];
    int workExperience;
    int salary;
    struct Employee *boss;
};

int main()
{
    struct Employee employees[5];
    struct Employee boss;

    printf("\nEnter a employees data:\n");
    for (int i = 0; i < 3; i++)
    {
        employees[i].id = i + 1;
        printf("Input a first name: ");
        scanf("%s", &employees[i].firstName);
        printf("Enter a surname: ");
        scanf("%s", &employees[i].surname);
        printf("Enter a last name: ");
        scanf("%s", &employees[i].lastName);
        printf("Enter a job title: ");
        scanf("%s", &employees[i].jobTitle);
        printf("Enter a work experience: ");
        scanf("%d", &employees[i].workExperience);
        printf("Enter a salary: ");
        scanf("%d", &employees[i].salary);

        employees[i].boss = &boss;
    }
    printf("\nEnter a boss data:\n");
    boss.id = 1;
    printf("Enter a first name: ");
    scanf("%s", &boss.firstName);
    printf("Enter a surname: ");
    scanf("%s", &boss.surname);
    printf("Enter a last name: ");
    scanf("%s", &boss.lastName);
    printf("Enter a job title: ");
    scanf("%s", &boss.jobTitle);
    printf("Enter a work experience: ");
    scanf("%d", &boss.workExperience);
    printf("Enter a salary: ");
    scanf("%d", &boss.salary);

    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        printf("\nID: %d, First name: %s, Surname: %s, Last name: %s, Job title: %s, Work experience: %d, Salary: %d, Boss name: %s\n", employees[i].id, employees[i].firstName, employees[i].surname, employees[i].lastName, employees[i].jobTitle, employees[i].workExperience, employees[i].salary, employees[i].boss->firstName);
    }

    return 0;
}