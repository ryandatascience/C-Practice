//Chapter18 example 1
#include<stdio.h>
#include<string.h>

main()
{
    int i;
    char msg[] = "C is fun";

    for (i = 0; i < strlen(msg); i++)
    {
        putchar(msg[i]); //output a single character

    }
    putchar('\n');
    return(0);
}
