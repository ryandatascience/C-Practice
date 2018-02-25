#include<stdio.h>
main()
{
    int i;
    for (i=1; i<=10; i++)
    {
        if (i % 2 ==1)
        {
            printf("I'm rather odd...\n");
            printf("%d\t",i);
            continue;
        }
        printf("Even up!\n");
    }
    return 0;
}
