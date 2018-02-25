#include<stdio.h>
#include<stdlib.h>

main()
{
    char name[15] = "Michael Hatton";
    change(name);

    printf("Back in main(), the name is now %s", name);
    return(0); //ends the program
}

change(char name[15])
{
    strcpy(name, "XXXX");
    return;
}
