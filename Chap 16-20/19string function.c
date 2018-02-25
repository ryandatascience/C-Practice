#include<stdio.h>
#include<string.h>

main()
{
    char city[25];
    char st[3];
    char fullLocation[18] = "";

    puts("what town?");
    gets(city);

    puts("What State?");
    gets(st);

    strcat(fullLocation, city);
    strcat(fullLocation, ",");
    strcat(fullLocation, st);

    puts("\nyou live in ");
    puts(fullLocation);

    return (0);
}
