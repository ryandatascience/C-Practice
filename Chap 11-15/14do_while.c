//Chapter 14 example 2

//This program multiply two numbers and disply the result

#include <stdio.h>

main()
{
    float num1, num2, result;
    char choice;

    do {
        printf("enter first number.\n");
        scanf(" %f", &num1);

        printf("enter second number.\n");
        scanf(" %f", &num2);

        result = num1 * num2;
        printf("%.2f times %.2f equals %.2f\n", num1, num2, result);

        printf("Do you have more (Y/N)?\n");
        scanf(" %c", &choice);

         if (choice == 'n')
         {
             choice = 'N';
         }
        }
        while (choice != 'N');
        return 0;
    }

