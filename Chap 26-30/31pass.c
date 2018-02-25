#include<stdio.h>

main()
{
    int i;

    printf("Please enter an integer...");
    scanf(" %d", &i);

    //Now call the half function, passing the value of i

    half(i);
    //Shows that the function didn't alter i's value

    printf("In main(), i is still %d", i);

    return(0);
}

half(int i)
{
    i = i /2;
    printf("your value halved is %d.\n",i);
    return;
}
