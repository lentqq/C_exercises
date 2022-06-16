/*
Създайте структура fraction (аритметична дроб) с член данни int n(nominator=числител)
и int d (denominator=знаменател)
С помощта на typedef struct създайте нов тип FRACTION
и указател към него *FPTR
Дефинирайте функциите
FRACTION create(int numerator, int denominator);-създаване на дроб по дадени
стойности на числител и знаменател
FRACTION input(void);-създаване на дроб по стойности въведени от клавиатурата
void print(FPTR); - отпечатване на дроб
int gcd(int first_dividend, int second_dividend); - НОД
FRACTION add(FPTR, FPTR); -събиране на две дроби
FRACTION mult(FPTR, FPTR);-умножение на две дроби
FRACTION divide(FPTR, FPTR);-деление на две дроби
FRACTION subtract(FPTR, FPTR);-изваждане на две дроби
*/

#include <stdio.h>

struct fraction
{
    int numerator;
    int denominator;
};

typedef struct fraction fraction_t;

void readFraction(fraction_t *FPTR) //създаване на дроб по стойности въведени от клавиатурата
{
    printf("enter a fraction numerator : \n");
    scanf("%d", &FPTR->numerator);
    printf("enter a fraction denominator : \n");
    scanf("%d", &FPTR->denominator);
}

void writeFraction(fraction_t FPTR) // print fraction
{
    printf("fraction: %d/%d\n", FPTR.numerator, FPTR.denominator);
}

fraction mult(fraction_t FPTRa, fraction_t FPTRb) // fraction multiplication
{

    fraction_t mult;

    mult.numerator = FPTRa.numerator * FPTRb.numerator;
    mult.denominator = FPTRa.denominator * FPTRb.denominator;

    return mult;
}

fraction_t div(fraction_t FPTRa, fraction_t FPTRb) // fraction division
{

    fraction_t div;

    div.numerator = FPTRa.numerator * FPTRb.denominator;
    div.denominator = FPTRa.denominator * FPTRb.numerator;

    return div;
}
fraction_t add(fraction_t FPTRa, fraction_t FPTRb) // sum fraction
{
    fraction_t sum;
    sum.numerator = (FPTRa.numerator * FPTRb.denominator) + (FPTRb.numerator * FPTRa.denominator);
    sum.denominator = FPTRa.denominator * FPTRb.denominator;
    return sum;
}

fraction_t subtract(fraction_t FPTRa, fraction_t FPTRb) // fraction subtraction
{
    fraction_t subt;
    subt.numerator = (FPTRa.numerator * FPTRb.denominator) - (FPTRb.numerator * FPTRa.denominator);
    subt.denominator = FPTRa.denominator * FPTRb.denominator;
    return subt;
}

int main()

{
    fraction_t a;
    readFraction(&a);
    printf("a: ");
    writeFraction(a);

    fraction_t b;
    readFraction(&b);
    printf("b: ");
    writeFraction(b);

    fraction_t c = mult(a, b);
    printf("a*b: ");
    writeFraction(c);

    fraction_t d = div(a, b);
    printf("a/b: ");
    writeFraction(d);

    fraction_t e = add(a, b);
    printf("a+b: ");
    writeFraction(e);

    fraction_t f = subtract(a, b);
    printf("a-b: ");
    writeFraction(f);

    return 0;
}
