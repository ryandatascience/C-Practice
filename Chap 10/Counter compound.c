//Chapter 10 example 2

/*This program do the increase and decrease but use compound operators*/

#include <stdio.h>
main()
{
    int ctr = 0;

    ctr += 1;//increase counter to 1
    printf("Counter is at %d\n", ctr);
    ctr += 1;//increase counter to 2
    printf("Counter is at %d\n", ctr);

    printf("Counter is at %d\n", ctr +=1);
    ctr += 1;//increase counter to 4
    printf("Counter is at %d\n", ctr);

    printf("Counter is at %d\n", ctr +=1);

    ctr -= 1; //decrease to 4
    printf("Counter is at %d\n", ctr);
    printf("Counter is at %d\n", ctr -= 1);
    printf("Counter is at %d\n", ctr -= 1);
    printf("Counter is at %d\n", ctr -= 1);

    return 0;

}
