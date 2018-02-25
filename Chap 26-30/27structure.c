#include "bookinfo.h"
#include<stdio.h>

main()
{
    int ctr;
    struct bookinfo books[3];//array of three structure variables

    //get the info

    for (ctr = 0; ctr <3; ctr++)
    {
        printf("What 's the name #%d?\n", (ctr+1));
        gets(books[ctr].title);
        puts("who is the author?\n");
        gets(books[ctr].author);

        puts("how much?\n");
        scanf(" $%f", &books[ctr].price);
        puts("how many pages?\n");
        scanf(" %d", &books[ctr].pages);

        getchar();//clears last new line for next loop
    }

    //print
    for (ctr= 0; ctr<3; ctr++)
    {
        printf("#%d: %s by %s is %d pages at $%.2f\n", (ctr+1), books[ctr].title, books[ctr].author, books[ctr].pages, books[ctr].price);

    }
    return(0);
}
