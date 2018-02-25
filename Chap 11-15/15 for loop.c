//Chapter 15 example 1
//ask user movie names and rates, and list favorite and least favorite movie

#include <stdio.h>
#include <string.h>
main()
{
    int ctr, numMovies, rating, favRating, leastRating;
    char movieName[40], favorite[40], least[40];

    favRating = 0;
    leastRating = 10;

    do {
        printf("How many movies have you seen this year?");
        scanf(" %d", &numMovies);

        if (numMovies <1)
        {
            printf("No movies! How can you rank them? Try again!\n");
        }
    }
    while (numMovies <1);

    for (ctr = 1; ctr<= numMovies; ctr++)
    {
        printf("\nWhat\'s the name of the movie, one word only\n");
        scanf(" %s", &movieName);
        printf("what\'s the rating? (1-10)\n");
        scanf(" %d", &rating);

        if (rating > favRating)
        {
            strcpy(favorite, movieName);
            favRating = rating;
        }

        if (rating < leastRating)
        {
            strcpy(least, movieName);
            leastRating = rating;
        }


    }
    printf("\nYou favorite movie is %s.\n", favorite);
    printf("You least favorite movie is %s.\n", least);
return 0;
}
