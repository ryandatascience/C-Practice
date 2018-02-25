#include<stdio.h>
#include<stdlib.h>
FILE *fptr;

main()
{

    fptr = fopen("C:\\Users\\yliang\\Google Drive\\Begainner C\\Chap 26-30\\Bookinfo.txt", "a");

    if (fptr == 0)
    {
        printf("Error opening the file!\n");
        exit(1);
    }

    //add the line at the end
    fprintf(fptr,"\nMorer books to come!\n");

    fclose(fptr);
    return(0);
}
