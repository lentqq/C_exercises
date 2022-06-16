/* Представете служителите във фирма в
структура с членове: пореден номер, име, презиме, фамилия, позиция,
трудов стаж в години, заплата в лева, указател към структурата, описващ
неговия началник. Напишете програма, която въвежда 10 служителя, които
се съхраняват в масив от описаните структури. След като въведете всички
служители, задайте началник за всеки от тях. В решението трябва да се
използва динамично заделяне на памет и typedef. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LENGTH 2

typedef struct
{
    int id;
    char *firstName;
    char *surname;
    char *lastName;
    char *jobTitle;
    int workExperience;
    int salary;
    struct Employee_t *boss;

} Employee_t;

int main()
{
    int numEmployees = LENGTH;
    Employee_t boss[] = {0};

    Employee_t *employees = malloc(numEmployees * sizeof *employees);

    for (int i = 0; i < numEmployees; i++)
    {

        employees[i].id = i + 1;
        employees[i].firstName = (char *)malloc(sizeof(char *));
        printf("Enter first name: ");
        scanf("%s", employees[i].firstName);
        employees[i].surname = (char *)malloc(sizeof(char *));
        printf("Enter surname name: ");
        scanf("%s", employees[i].surname);
        employees[i].lastName = (char *)malloc(sizeof(char *));
        printf("Enter last name: ");
        scanf("%s", employees[i].lastName);
        employees[i].jobTitle = (char *)malloc(sizeof(char *));
        printf("Enter job title: ");
        scanf("%s", employees[i].jobTitle);
        printf("Enter work experince: ");
        scanf("%d", &employees[i].workExperience);
        printf("Enter salary: ");
        scanf("%d", &employees[i].salary);
        //  boss->firstName = &boss;
    }

    printf("\n");

    printf("\nEnter a boss data:\n");
    boss->id = 1;
    printf("Enter a first name: ");
    scanf("%s", &boss->firstName);
    printf("Enter a surname: ");
    scanf("%s", &boss->surname);
    printf("Enter a last name: ");
    scanf("%s", &boss->lastName);
    printf("Enter a job title: ");
    scanf("%s", &boss->jobTitle);
    printf("Enter a work experience: ");
    scanf("%d", &boss->workExperience);
    printf("Enter a salary: ");
    scanf("%d", &boss->salary);

    printf("\n");

    for (int i = 0; i < numEmployees; i++)
    {
        printf("\nID: %d, First Name: %s, Surname: %s , Last Name: %s, Job title: %s, Work experience: %d, Salary: %d, Boss name: %s\n", employees[i].id, employees[i].firstName, employees[i].surname, employees[i].lastName, employees[i].jobTitle, employees[i].workExperience, employees[i].salary, boss->firstName);
    }

    return (0);
}