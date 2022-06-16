/* Напишете програма, която събира две дистанции, изразени в километри, метри и сантиметри.
Данните трябва да бъдат въведени от потребителя. Принтирайте изходните и резултатната дистанция.*/

#include <stdio.h>

struct distance //structure varaibles declaration
{
    double km;
    double m;
    int sm;
} d1, d2;

void printDistances(struct distance d1, struct distance d2); // function declaration

int main()
{
    printf("\nInput distance in Km:\n");
    scanf("%lf %lf", &d1.km, &d2.km);

    printf("\nInput distance in Meters:\n");
    scanf("%lf %lf", &d1.m, &d2.m);

    printf("\nInput distance in Sm:\n");
    scanf("%d %d", &d1.sm, &d2.sm);

    printDistances(d1, d2);

    return 0;
}

// function initialization to print entered distances and calculated distances
void printDistances(struct distance d1, struct distance d2)
{
    double distToKm = d1.km + d2.km;
    double distToMeters = d1.m + d2.m;
    int distToSm = d1.sm + d2.sm;

    // print entered distances
    printf("\nYou entered distances are:\n");
    printf("\nDistance in Km: D1 - %.2lf km, D2 - %.2lf km", d1.km, d2.km);
    printf("\nDistance in Meters: D1 - %.2lf m, D2 - %.2lf m", d1.m, d2.m);
    printf("\nDistance in Sm: D1 - %d sm, D2 - %d sm", d1.sm, d2.sm);

    // print calculated distances
    printf("\nCalculated distances are: %.2lf km    %.2lf m    %d sm", distToKm, distToMeters, distToSm);
}
