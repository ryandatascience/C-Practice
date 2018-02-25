#include<stdio.h>
#include<string.h>
#include<ctype.h>

main()
{
    int i;
    int hasUpper, hasLower, hasDigit;
    char password[25]="";


    hasUpper = hasLower= hasDigit =0;

printf("upper %d, lower %d digit %d\n", hasUpper, hasLower, hasDigit);

    printf("input a password:\n");
    scanf(" %s", password);

    printf("password:%s", password);

    for (i = 0; i < strlen(password) ;i++)
    {
        if (isdigit(password[i]))
        {
            hasDigit = 1;
            continue;
        }
                if (isupper(password[i]))
        {
            hasUpper = 1;
            continue;
        }
                if (islower(password[i]))
        {
            hasLower = 1;

        }
    }


printf("upper %d, lower %d digit %d\n", hasUpper, hasLower, hasDigit);

    if ((hasDigit) && (hasUpper) && (hasLower))
    {
        printf("good password.");
    }else
    {
        printf("change password.");
    }
    return (0);
}
