#include "bookinfo.h"
#include <stdio.h>
#include<stdlib.h>
main()
{
    int ctr;
    struct bookinfo *books[3];

    for (ctr =0 ; ctr <3; ctr++)
    {
        books[ctr]=(struct bookinfo*)malloc(sizeof(struct bookinfo));

        printf("#%d book title is \n",ctr+1);
        gets(books[ctr]->title);

        puts("author?\n");
        gets(books[ctr]->author);

        puts("how much?\n");
        scanf(" $%f", &books[ctr]->price);

        puts("how many pages?\n");
        scanf(" %d", &books[ctr]->pages);

        getchar();

    }

    for (ctr = 0; ctr<3; ctr++)
    {
        printf("#%d book is %s by %s is %d pages at $%.2f\n", ctr+1,books[ctr]->title, books[ctr]->author, books[ctr]->pages, books[ctr]->price);
    }
    return(0);
}
