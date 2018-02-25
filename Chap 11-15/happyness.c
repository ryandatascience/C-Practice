//Chapter 11 example 3

/*Ask user for happiness on a scale of 1-10 and give correspond message*/
#include<stdio.h>

main()
{
    int prefer;

    printf("On a scale of 1 to 10, how happy are you?\n");
    scanf(" %d", &prefer);

    if (prefer >=8)
    {
        printf("Great for you !\n");

    }
    else if (prefer >= 5)
    {
        printf("better than average\n");
    }
    else if (prefer >= 3)
    {
        printf("sorry you are feeling not so great\n");
    }
    else
    {
        printf("hang in there!");
    }
    return 0;
}
