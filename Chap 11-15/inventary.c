//Chapter 12 example 1

/*test relational and logical operators to test */

#include<stdio.h>

main()
{
    //set up an array for the last name and then get it from the user

    char name[25];

    printf("What's your last name?\nCapitalize the first letter!\n");
    scanf(" %s", name);

    if ((name[0] >= 'P') && (name[0] <= 'S'))
    {
        printf("go to room 2432");

    }
    else
    {
        printf("get a ticket here.");
    }

    return 0;
}
