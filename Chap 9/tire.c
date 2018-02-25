//Chapter 9 example 2

/*This program asks the user for a number of tires and price per tire. It then calculate a total price, adding sales tax.*/
/*If you find you use a sales tax rate that may change, use #define to set it in one place*/

#include <stdio.h>
#define SALESTAX .07

main()
{
    int numTires;
    float tirePrice, beforeTax, netSales;

    printf("How many tires did you purchase?\n");
    scanf(" %d", &numTires);

    printf("What was the cost per tire in $XX.XX\n");
    scanf(" $%f", &tirePrice);

    beforeTax = tirePrice * numTires;
    netSales = beforeTax + (beforeTax * SALESTAX);

    printf("You spend $%.2f on tires\n\n", netSales);

    return 0;
}
