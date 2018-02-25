//Chapter 11 example 2

/* ask born year to calculate age and tell if it's a leap year*/

#include<stdio.h>
#define CURRENTYEAR 2013

main()
{
    int yearBorn, age;

    printf("What year were you born\n");
    scanf(" %d", &yearBorn);

    if (yearBorn > CURRENTYEAR)
    {
        printf("Time travel!\n");
    }
    else
    {
        age = CURRENTYEAR  - yearBorn;
        printf("You are %d years old", age);

    }


}
