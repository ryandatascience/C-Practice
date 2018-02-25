#include<stdio.h>
#include<stdlib.h>
FILE *fptr;

main()
{
    char fileLine[100];//will hold each line of input
    fptr = fopen("C:\\Users\\yliang\\Google Drive\\Begainner C\\Chap 26-30\\Bookinfo.txt","r");

    if (fptr != 0)
    {
        while (!feof(fptr))
        {
            fgets(fileLine, 100, fptr);
            if (!feof(fptr))
            {
                puts(fileLine);
            }
        }
    }else
    {
    printf("\nError opening file.\n");
    }
    fclose(fptr);
    return(0);
}
