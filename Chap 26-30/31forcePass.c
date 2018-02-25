#include<stdio.h>
#include<stdlib.h>

main()
{
    int i ;
    printf("enter integer..");
    scanf(" %d", &i);

    half(&i);
    printf("in main, i is %d", i);
    return(0);
}

half (int *i)
{
    *i = *i/2;
    printf(" you half is %d", *i);
    return;
}
