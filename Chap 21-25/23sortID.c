#include<stdio.h>

main()
{
    int ctr;//Loop counter
    int idSearch;// Customer to look for
    int found = 0;//1 (true) if customer found

    //Defines the 10 elements in each of the parallel array
    int custID[10]={313,453,502,101,892,475,792,912,343,633};
    float custBal[10] = {0.00,45.43,71.23,301.56,9.08,192.41,389.00,229.67,18.31,59.54};

    int tempID, inner, outer, didSwap, i; //For sorting
    float tempBal;

    //first, sort the array by customer ID

    for (outer =0 ; outer <9; outer++)
    {
        didSwap =0;
        for (inner = outer; inner <10; inner++)
        {
            if (custID[inner] < custID[outer])
            {
                tempID = custID[outer];
                custID[outer] = custID[inner];
                custID[inner] = tempID;

                tempBal = custBal[outer];
                custBal[outer] = custBal[inner];
                custBal[inner] = tempBal;

                didSwap = 1;
            }
        }
        if (didSwap == 0)
        {
            break;
        }
    }


    for (i=0;i<10;i++)
    {
        printf("%d\n", custID[i]);
    }
    //interact with user to look for a balance
    puts("What custID?\n");
    scanf(" %d", &idSearch);

    //now, look for the ID in the array
    for (ctr = 0; ctr <10; ctr++)
    {
        if (idSearch == custID[ctr])
        {
            found = 1;
            break;
        }
        if (custID[ctr] > idSearch)//no need to keep searching
        {
            break;
        }
    }

    if (found)
    {
        if (custBal[ctr] >100)
        {
            printf("the balance is %.2f\n", custBal[ctr]);
        }
        else//balance <100
        {
            printf(" credit is good!");
        }
    } else// ID not found
    {
        printf("ID %d not found",idSearch);
    }
    return(0);
}
