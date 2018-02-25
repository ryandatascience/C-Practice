#include<stdio.h>
main()
{
    int kids;
    int *pKids;
    float price;
    float *pPrice;
    char code;
    char *pCode;

    price = 1.75;
    pPrice = &price;

    printf("How many kids?\n");
    scanf(" %d", &kids);

    pKids = &kids;

    printf("Do you have discount?\n E or S or N");
    scanf(" %c", &code);
code = toupper(code);
    pCode = &code;

    printf("you got %d\n",kids );
    switch (code)
    {
    case('E'):
        {
            printf("E saves 25%, total is %.2f\n", (price*.75*kids));
            break;
        }
    case('S'):
        {
            printf("S save 15%, total is %.2f\n", (price*.85*kids));
            break;
        }
    default://either no discount or invalid letter
        {
            printf(" no discount, total is %.2f\n", (price * kids));
        }
    }

    //Now let's do the same with pointer
    switch(*pCode)
    {
        case('E'):
        {
            printf("E save 25%, total is %.2f\n", (*pPrice *.75 ** pKids));
            break;
        }
        case('S'):
            {
                printf("S save 15%, total is %.2f\n", (*pPrice *.85 **pKids));
            break;
            }
        default:
            {
                printf("no discount, total is %.2f\n", (*pPrice * *pKids));
            }

    }
    return(0);
}
