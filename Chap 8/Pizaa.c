//Chapter 8 example 2

#include<stdio.h>

main()
{
    char topping[24];
    int slices;
    int month, day, year;
    float cost;

    /*The first scanf will look for a floating-point variable, the cost of a pizza
    If the user doesn't enter a $ before the cost, it could cause problem*/

    printf("How much does a pizza cost in your area?");
    printf("Enter as $XX.XX\n");
    scanf(" $%f", &cost);

    //Pizza topping is a string, so you scanf doesn't need a &

    printf("What is your favorite one-word pizza topping?\n");
    scanf(" %s", topping);

    printf("How many slices of %s pizza can you eat in one sitting?\n");
    scanf(" %d", &slices);

    printf("What is today's date? (MM/DD/YY)\n");
    scanf(" %d/%d/%d", &month, &day, &year);

    printf("\n\nWhy not treat yourself to dinner on %d/%d/%d", month, day, year);
    printf("\nand have %d slices of %s topping pizza!\n", slices, topping);
    printf("It will cost your $%.2f!\n\n", cost);

    return 0;
}
