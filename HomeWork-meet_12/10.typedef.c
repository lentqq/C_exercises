/*
Създайте структура диня с два елемента - диаметър и дебелина на кората заделете
динамично с malloc() за масив от А на брой дини от сорт мелон и попълнете данните
за диаметър между 15 и 140 см с функцията rand(), за всяка една диня в масива и
дебелина на кората между 0.5 и 3.5 см. Създайте структура диня с два елемента -
диаметър и дебелина на кората заделете динамично с malloc() за масив от В на брой
дини от сорт пъмпкин и попълнете данните за диаметър между 35 и 95 см с
функцията rand(), за всяка една диня в масива и дебелина на кората между 0.3 и 0.9
см. Намерете средната големина на динята и средната дебелина на кората и ги
съпоставете с тези от втория масив. Изведете на екрана купчината от кой сорт е по
добре да се купи.
Изход: По-добре е да се купят ... дини с диаметър ... сантиметра и кора с дебелина D
см вместо ... дини с диаметър ... см и дебелина на кората D1 см.
*/

#include <stdio.h>
#include <stdlib.h>

struct wm
{
    double *diam;
    double *rind;
};

typedef struct wm wm_t;

int main()
{

    wm_t melon;
    melon.diam = malloc(sizeof(double) * 10);

    for (int i = 0; i < 10; i++)
    {
        melon.diam[i] = rand() % (140 - 15 + 1);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%.0f\t", melon.diam[i]);
    }
    printf("\n");

    //-----------------------------------------

    double avgSizeMelon;
    int sizeMelon;
    for (int i = 0; i < 10; i++)
    {
        sizeMelon += melon.diam[i];
    }
    avgSizeMelon = (double)sizeMelon / 10;
    printf("avg size melon %.2lf\n", avgSizeMelon);
    //----------------------------------------------

    melon.rind = malloc(sizeof(double) * 10);

    for (int i = 0; i < 10; i++)
    {
        melon.rind[i] = ((double)rand()) / ((double)RAND_MAX) * (3.5 - 0.5) + 0.5;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%.1lf\t", melon.rind[i]);
    }
    printf("\n");
    //-------------------------------

    double avgRindMelon;
    double rindMelon;
    for (int i = 0; i < 10; i++)
    {
        rindMelon += melon.rind[i];
    }
    avgRindMelon = rindMelon / 10;
    printf("avg size melon rind %.2lf\n", avgRindMelon);

    //-----------------------------

    wm_t pumpkin;
    pumpkin.diam = malloc(sizeof(double) * 10);

    for (int i = 0; i < 10; i++)
    {
        pumpkin.diam[i] = rand() % (95 - 35 + 1);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%.0f\t", pumpkin.diam[i]);
    }
    printf("\n");
    //------------------------------

    double avgSizePumpkin;
    int sizePumpkin;
    for (int i = 0; i < 10; i++)
    {
        sizePumpkin += pumpkin.diam[i];
    }
    avgSizePumpkin = (double)sizePumpkin / 10;
    printf("avg size pumpkin %.2lf\n", avgSizePumpkin);
    //------------------------------------

    pumpkin.rind = malloc(sizeof(double) * 10);

    for (int i = 0; i < 10; i++)
    {
        pumpkin.rind[i] = ((double)rand()) / ((double)RAND_MAX) * (0.9 - 0.3) + 0.3;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%.1lf\t", pumpkin.rind[i]);
    }
    printf("\n");
    //-------------------------------
    double avgRindPumpkin = 0;
    double rindPumpkin = 0;
    for (int i = 0; i < 10; i++)
    {
        rindPumpkin += pumpkin.rind[i];
    }
    avgRindPumpkin = rindPumpkin / 10;
    printf("avg size pumpkin rind %.2lf\n", avgRindPumpkin);

    //----------------------------
    if ((avgSizeMelon > avgSizePumpkin) && (avgRindMelon < avgRindPumpkin))
        printf("Better buy Melons %.2lf diameter and %.2lf rind than Pumpkins %.2lf diameter and %.2lf rind ",
               avgSizeMelon, avgRindMelon, avgSizePumpkin, avgRindPumpkin);
    else if ((avgSizeMelon < avgSizePumpkin) && (avgRindMelon > avgRindPumpkin))
        printf("Better buy Pumpkins %.2lf diameter and %.2lf rind than Melons %.2lf diameter and %.2lf rind ",
               avgSizePumpkin, avgRindPumpkin, avgSizeMelon, avgRindMelon);
    else
        printf("inconclusive data for comparison");

    free(melon.diam);
    free(melon.rind);
    free(pumpkin.diam);
    free(pumpkin.diam);
    return 0;
}