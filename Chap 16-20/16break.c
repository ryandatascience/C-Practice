//16.1

//calculate the average for the student grade, use -1 as a key to break if no enough students

#include<stdio.h>
main()
{
    int numTest;
    float stTest, avg, total=0.0;

    for (numTest = 0; numTest < 25; numTest++)
    {
        printf("What is the next grade?\n");
        scanf(" %f", &stTest);

        if (stTest == -1)
        {
            break;
        }
        total+=stTest;

    }
    avg= total / numTest;
    printf("average is %.1f.\n", avg);
    return 0;
}
