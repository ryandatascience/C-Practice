#include <stdio.h>
#include <ctype.h>

main()
{
    char Initial;
        printf("type a character:\n");
    Initial = getchar();

    if (isalpha(Initial))
    {
        printf("This is a letter.");
    }else if (isdigit(Initial))
    {
        printf("digit.");
    }else
    {
        printf("other.");
    }


    if (isupper(Initial))
    {
        printf("upper.");
    }else if (islower(Initial))
    {
        printf("lower");
    }
    else
    {
        printf("other.");
    }
    return (0);
}
