#include<stdio.h>

main()
{

    int gamescore[10] = {12, 5, 21, 32, 10};
    int totalpoints = 0;
    int i;
    float avg;

    for (i=6; i<10; i++)
    {
        printf("score in the game %d?\n", i+1);
        scanf(" %d", &gamescore[i]);
    }

    for (i=0 ; i<10; i++)
    {

        totalpoints +=gamescore[i];
    }
    avg = ((float)totalpoints/10);
    printf("avg is %.1f.\n", avg);

    return (0);
}
