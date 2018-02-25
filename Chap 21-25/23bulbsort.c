#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
    int ctr, inner, outer, didSwap, temp;
    int num[10];
    time_t t;

    srand(time(&t));

    //first step to fill the array with 1 to 100
    for (ctr=0; ctr<10; ctr++)
    {
        num[ctr]=(rand()%99+1);
    }

    //now list the array before sort
    puts("Here is before sort:\n");

    for (ctr=0; ctr<10; ctr++)
    {
        printf("%d\n", num[ctr]);
    }

    //sort the array

    for (outer=0;outer<9; outer++)
    {
        didSwap=0;//Become 1 (true) if list is not yet ordered

        for (inner = outer; inner <10; inner++)
        {
            if (num[inner]< num[outer] )
            {
                temp=num[outer];
                num[outer] = num[inner];
                num[inner] =  temp;
                didSwap=1;

            }
        }
        if (didSwap==0)
        {
            break;
        }


    }
            //now put the list after sort

        puts("Here is after sort:\n");
        for (ctr = 0; ctr<10; ctr++)
        {
            printf("%d\n", num[ctr]);
        }

        return(0);
}
