//Chapter 14 example 1

/*This program increase a counter from 1 to 5 , can back down to 1*/

#include <stdio.h>

main()
{
    int ctr = 0;

    while (ctr < 5)
    {
        printf("counter is at %d.\n", ++ctr);

    }
    while (ctr > 1 )
    {
        printf("counter is at %d.\n", --ctr);
    }

    return 0;
}

