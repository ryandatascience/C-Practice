#include <stdio.h>
#include<stdlib.h>

main()
{
    int choice;

    printf("Which do you choose?\n");
    printf("1. add new contact\n");
    printf("2 edit existing contact\n");
    printf("3. call contact.\n");
    printf("4. text contact \n");
    printf("5. exit\n");

    do
    {
        printf("your choice?\n");
        scanf(" %d", &choice);

        switch (choice)
        {
            case (1):printf("add new contact");
                    break;
                    case (2):printf("edit existing contact");
                    break;
                    case (3):printf("call contact");
                    break;
                    case (4):printf("text contact");
                    break;
                    case (5):exit(1);
                    default: printf("\n%d is not a valid choice.\n, choice");
                    break;
        }
    }
    while ((choice < 1)||(choice >5));
    return 0;
}
