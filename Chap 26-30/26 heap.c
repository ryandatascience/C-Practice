#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
    int i, aSize;
    int *randomNums;
    time_t t;

    double total =0;
    int biggest, smallest;
    float average;

    srand(time(&t));

    printf("how many numbers?\n");
    scanf(" %d", &aSize);

    //allocate memory

    randomNums = (int*)malloc(aSize * sizeof(int));

    //test to ensure array allocated properly
    if (!randomNums)
    {
        printf("Random array allocation failed!\n");
        exit(1);
    }

//    Loop through array and assign numbers

    for (i = 0; i <aSize; i++)
    {
        randomNums[i] = rand()%500+1;

    }
    biggest =0;
    smallest = 500;

    //loop through the now filled array  to test random number size

    for (i = 0; i <aSize; i++)
    {
        total += randomNums[i];
        if (randomNums[i] > biggest)
        {
            biggest = randomNums[i];
        }
        if (randomNums[i] < smallest)
        {
            smallest = randomNums[i];
        }
    }

    average= ((float)total)/((float)aSize);

    printf("biggest: %d, smallest: %d, average %.1f\n", biggest, smallest, average);
    free(randomNums);
    return(0);
}
