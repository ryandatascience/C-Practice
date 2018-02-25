#include<stdio.h>
#include<string.h>
#include<time.h>
#include<ctype.h>


main()
{
    int dice1, dice2;
    int total1, total2;
    time_t t;
    char ans;

    srand(time(&t));

    dice1 = (rand()%5)+1;
    dice2 = (rand()%5)+1;
    total1 = dice1 + dice2;

    printf("First roll of the dice was %d and %d, total is %d\n", dice1, dice2, total1);

    do {
        puts("Next one is Higher, Lower or same?\n");
        puts("Enter H, L, or S");

        scanf(" %c", &ans);
        ans = toupper(ans);
    } while ((ans != 'H') &&(ans !='L')&&(ans !='S'));

    dice1 = (rand()%5)+1;
    dice2 = (rand()%5)+1;
    total2 = dice1 + dice2;
     printf("Second roll of the dice was %d and %d, total is %d\n", dice1, dice2, total2);

     if (ans =='L')
    {
            if (total1>total2)
            {
                printf("Good job\n");
            } else{
                printf("sorry\n");
            }
     }

     else if (ans =='H')
     {
         if (total1<total2)
            {
                printf("Good job\n");
            } else{
                printf("sorry\n");
            }
     }
      else if (ans =='S')
     {
         if (total1==total2)
            {
                printf("Good job\n");
            } else{
                printf("sorry\n");
            }
     }
     return(0);
}
