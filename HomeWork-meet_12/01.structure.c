/* Напишете програма, в която информациятя да бъде съхранявана в структура,
описваща автомобил.Входната информация трябва да бъде въведена от потребителя,
като задавате въпроси към него. Принтирайте въведената информация. */

#include <stdio.h>

struct car //structure varaibles declaration
{
    char brand[8];
    char color[8];
    char engine[8];
    int km;
} youCar;

int main()
{
    printf("\nEnter a brand: ");
    scanf("%s", &youCar.brand);
    printf("\nEnter a color: ");
    scanf("%s", &youCar.color);
    printf("\nEnter a kind of engine: ");
    scanf("%s", &youCar.engine);
    printf("\nEnter km: ");
    scanf("%d", &youCar.km);

    printf("\nYou have purchased a car with the following features");
    printf("\nBrand: %s", youCar.brand);
    printf("\nColor: %s", youCar.color);
    printf("\nEngine: %s", youCar.engine);
    printf("\nKm: %d", youCar.km);

    return 0;
}