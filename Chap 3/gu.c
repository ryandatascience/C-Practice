/*Gagu price calculation*/
#include<stdio.h>
main()
{
    float price, tax, profit, final_price;
    int weight, exchange_rate;

    printf("How much is the original price?\n");
    scanf("%f", &price);
    printf("How many pounds?\n");
    scanf("%d", &weight);
    printf("How much is the profit?\n");
    scanf("%f", &profit);

    tax = 0.07;
    exchange_rate = 7;
    final_price = (price * (1+tax) + weight * 7 + profit ) * exchange_rate;

    printf("You final price is %.2f", final_price);
    return 0;
}
