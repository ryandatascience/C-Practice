#include<stdio.h>
main()
{
    int ctr;
    int idSearch;
    int found =0;

    int custID[10] = {313,453,502,101,892,475,792,912,343,633};
    float custBal[10] = {0.00,45.43,71.23,301.56,9.08,192.41,389.00,229.67,18.31,59.54};

    printf("custID?\n");
    scanf(" %d", &idSearch);

    for (ctr=0 ; ctr<10;ctr++)
    {
        if (idSearch == custID[ctr])
        {
            found=1;
            break;
        }
    }

    if (found)
    {
        if (custBal[ctr] >100.00)
        {
            printf("balance is %.2f\n. no more credit", custBal[ctr]);

        }else
        {
            printf("credit is good!");
        }
    }
    else{
        printf("not found ID %d.", idSearch);

    }
    return(0);
}
