#include "bookinfo.h"
#include<stdio.h>
#include<stdlib.h>

FILE *fptr;

main()
{
    int ctr;
    struct bookinfo books[3];//array of three structure variables

    //get the info for each book
    for (ctr = 0 ; ctr <3; ctr++)
    {
        printf("Name for book #%d?\n", ctr+1);
        gets(books[ctr].title);
        puts("Author?\n");
        gets(books[ctr].author);

        puts("How much?\n");
        scanf("$%f", &books[ctr].price);
        puts("pages?\n");
        scanf(" %d", &books[ctr].pages);
        getchar();// clears last newline for next loop
    }

    //open file
    fptr = fopen("C:\\Users\\YU\\Google Drive\\Begainner C\\Chap 26-30\\BookInfo.txt","w");

    //test to ensure the file is open

    if (fptr == 0 )
    {
        printf("Error - file could not be opened.\n");
        exit(1);
    }

//    print a header

    fprintf(fptr,"\n\nHere is the collection of books: \n");
    for (ctr = 0; ctr<3; ctr++)
    {
        fprintf(fptr,"#%d:%s by %s, is %d pages and cost $%.2f\n\n",ctr+1,books[ctr].title,books[ctr].author,books[ctr].pages,books[ctr].price);
    }

    fclose(fptr);
    return(0);
}
