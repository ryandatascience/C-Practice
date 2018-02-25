#include<stdio.h>
#include<string.h>
#include<ctype.h>

main()
{
    char password[25]="";
   printf("password:%s", password);
    int upper = 0;
    int lower = 0;
    int digit = 0;
printf("upper %d, lower %d digit %d\n", upper, lower, digit);
    printf("input a password:\n");
    scanf(" %s", password);

    printf("password:%s\n", password);
    int i;
    for (i = 0; i < strlen(password);i++)
    {
        if (isupper(password[i]))
        {
            upper = 1;
            //continue;
        }
                if (islower(password[i]))
        {
            lower = 1;
            //continue;
        }
                if (isdigit(password[i]))
        {
            digit = 1;
            //continue;
        }
    }


printf("upper %d, lower %d digit %d\n", upper, lower, digit);

    if ((upper == 1) && (lower == 1) && (digit == 1))
    {
        printf("good password.");
    }else
    {
        printf("change password.");
    }
    return (0);
}
