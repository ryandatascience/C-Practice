//Chapter 11 example 1

/*This program asks the user for their birth year */

#include <stdio.h>
#define CURRENTYEAR 2013

main()
{
    int yearBorn, age;

    printf("What year were you born?\n");
    scanf(" %d", &yearBorn);

    //check if entered future year

    if (yearBorn > CURRENTYEAR)
    {
        printf("Really? You haven't been born yet?\n");
        printf("Try a different year");
        scanf(" %d", &yearBorn);
    }

    age= CURRENTYEAR - yearBorn;

    printf("\nSo this year you will turn %d on your birthday.", age);

    //check if leap year

    if ((yearBorn % 4) == 0)
    {
        printf("\nYou were born in a leap year!\n");
    }
return 0;
}



