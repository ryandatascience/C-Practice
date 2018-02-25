/*the first code listing from Chapter 3 of the Absolute Beginner's
Guide to C
Teaching new programmer to create kick-butt code since 1994!*/

/*filename Chapter3ex1.c*/
/*total how much money will be spend on holiday gift.*/
#include<stdio.h>
main()
{
    float gift1, gift2, gift3, gift4, gift5; /*variables to hold costs
    */
    float total; /*variable to hold total amount */

/*Ask for each gift amount*/
printf("How much do you want to spend on your mom? ");
scanf("%f", &gift1);
printf("How much do you want to spend on your dad? ");
scanf("%f", &gift2);
printf("How much do you want to spend on your sister? ");
scanf("%f", &gift3);
printf("How much do you want to spend on your wife? ");
scanf("%f", &gift4);
printf("How much do you want to spend on your favorite ");
printf("C programming author?");
scanf("%f", &gift5);

total = gift1 + gift2 + gift3 +gift4 + gift5; /*compute total amount spent on gifts*/
printf("\nThe total you will spend on the gifts is %.2f", total);
return 0; /*end of program*/
}
