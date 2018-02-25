//Chapter 13 example 1

/* if the number is divisible by 2 through 9*/

#include <stdio.h>
main()
{
    int numPick;
    printf("Pick an integer between 1 to 100, higher is better!\n");
    scanf(" %d", &numPick);

    printf("%d %s divisible by 2.\n", numPick, (numPick % 2 == 0)? ("is"):("is not"));
    printf("%d %s divisible by 3.\n", numPick, (numPick % 3== 0)? ("is"):("is not"));
    printf("%d %s divisible by 4.\n", numPick, (numPick % 4== 0)? ("is"):("is not"));
    printf("%d %s divisible by 5.\n", numPick, (numPick % 5== 0)? ("is"):("is not"));
    printf("%d %s divisible by 6.\n", numPick, (numPick % 6== 0)? ("is"):("is not"));
    printf("%d %s divisible by 7.\n", numPick, (numPick % 7== 0)? ("is"):("is not"));

    return 0;
}
