//example 2, chap 17
#include<stdio.h>
#include<stdlib.h>

main()
{
    int choice1;
    int choice2;

    printf("What do you want to see?\n");
    printf("1. The 1980's\n");
    printf("2. The 1990's\n");
    printf("3. The 2000's\n");
    printf("4. Quit\n");

    do
    {
        printf("Enter your choice: ");
        scanf(" %d", &choice1);
        switch(choice1)
        {
        case(1):
            {
                printf("\n\nWhat would you like to see?\n");

                printf("Enter your choice: ");
                scanf(" %d", &choice2);

                if (choice2==1)
                {
                    printf("\n\nWorld Series Champions of the 1980s:\n");
                    break;
                }else if(choice2==2)
                {
                    printf("\n\nOscar-winning movies in the 1980s:\n");
                    break;
                }else if (choice2==3)
                {
                    printf("\n\nUS presidents in the 1980s");
                }else if (choice2==4)
                {
                    exit(1);
                }else
                {
                    printf("Sorry, that is not a valid choice!\n");
                    break;
                }
            }
        case(2):
            {
                printf("\n\nWhat would you like to see?\n");

                printf("Enter your choice: ");
                scanf(" %d", &choice2);

                if (choice2==1)
                {
                    printf("\n\nWorld Series Champions of the 1980s:\n");
                    break;
                }else if(choice2==2)
                {
                    printf("\n\nOscar-winning movies in the 1980s:\n");
                    break;
                }else if (choice2==3)
                {
                    printf("\n\nUS presidents in the 1980s");
                }else if (choice2==4)
                {
                    exit(1);
                }else
                {
                    printf("Sorry, that is not a valid choice!\n");
                    break;
                }
            }

        }
    }
    while ((choice1<1)||(choice1>4));

    return 0;
}
