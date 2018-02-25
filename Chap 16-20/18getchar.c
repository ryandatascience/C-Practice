//Chapter 18 Example 2
#include<stdio.h>
#include<string.h>

main()
{
    int i;
    char msg[25];

    printf("Type up to 25 character and then press Enter\n");
    for (i = 0; i < 25 ; i++)
    {
        msg[i] = getchar();
        if (msg[i] == '\n')
        {
            i--;
            break;
        }
    }
    putchar('\n');

    for(; i >= 0 ; i--)
    {
        putchar(msg[i]);
    }

    putchar('\n');
    return(0);
}

printf("What initial?\n");
firstInitial = getchar();
lastInitial = getchar();

printf("What initial?\n");
firstInitial = getchar();
n1 = getchar();
lastInitial = getchar();
n1 = getchar();

printf("what's you initial?");
firstInitial = getch();

putch(firstInitial);

LastInitial = getch();

putch(LastInital);
