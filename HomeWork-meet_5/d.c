#include <stdio.h>
int main()
{
    int n;
    int sum = 0;
    printf("Enter a number");
    scanf("%d", &n);
    int k = n;
    int r;
    while (k != 0)
    {
        r = k % 10;
        int f = fact(r);
        k = k / 10;
        sum = sum + f;
    }
    if (sum == n)
    {
        printf("\nNumber is a strong");
    }
    else
    {
        printf("\nNumber is not a strong");
    }
    return 0;
}
int fact(int r)
{
    int mul = 1;
    for (int i = 1; i <= r; i++)
    {
        mul = mul * i;
    }
    return mul;
}

// int N;
//    do{
//        printf("Enter number from 1 to 52 - ");
//        scanf("%d", &N);
//    }while(N < 1 || N > 52);
 
//    while(N < 53){
//        int card = (N -1) / 4;
//        int sign = (N -1) % 4;
 
//        switch(card){
//            case 9:
//            printf("Jack ");
//            break;
//            case 10:
//            printf("Qeen ");
//            break;
//            case 11:
//            printf("King ");
//            break;
//            case 12:
//            printf("Ace ");
//            break;
//            default:
//            printf("%d ", card + 2);
//            break;
//        }
 
//        switch(sign){
//            case 0:
//            printf("Spatia");
//            break;
//            case 1:
//            printf("Diamond");
//            break;
//            case 2:
//            printf("Bowl");
//            break;
//            case 3:
//            printf("Spade");
//            break;
//        }
 
//        if(N < 52)
//            printf(", ");
 
//        N++;
//    }
 
