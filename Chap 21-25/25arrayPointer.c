#include<stdio.h>
main()
{
    int i;
    int ctr = 0;
    char ans;

    //declear a array of 9 characteors
    char *movies[9]={"Amour","Argo","Beasts of the Southern Wild","Django Unchained","Les Miserables", "Life of Pi", "Lincoln","Silver Linings Playbook","Zero Dark Thirty"};
    int movieratings[9];

    char *tempmovie = "This will be used to sort rated movies";
    int outer, inner, didSwap, temprating;

    printf("Time to rate\n");

    for (i = 0; i<9; i++ )
    {
        printf(" Did you see %s? Y/N", movies[i]);
        scanf(" %c", &ans);

        if((toupper(ans))=='Y')
        {
            printf("rate?\n");
            scanf(" %d", &movieratings[i]);
            ctr++;
            continue;
        }
        else{
                movieratings[i] = -1;
                }
    }

    //sort the moview by rating
    for (outer = 0 ; outer <8; outer++)
    {
        didSwap = 0;
        for (inner= outer; inner<9; inner++)
        {
            if (movieratings[inner] > movieratings[outer])
            {
                tempmovie = movies[inner];
                movies[inner]=movies[outer];
                movies[outer]= tempmovie;

                temprating = movieratings[inner];
                movieratings[inner]=movieratings[outer];
                movieratings[outer]= temprating;

                didSwap = 1;
            }
        }
        if (didSwap ==0)
        {
            break;
        }
    }
    printf("your rating is :\n");
    for (i =0; i <ctr; i++)
    {
        printf("%s rated a %d\n", movies[i], movieratings[i]);
    }
    return(0);
}
