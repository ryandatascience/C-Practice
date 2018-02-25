#include<stdio.h>
main()
{
    float a, b;

    printf("how much of a bonus did you get?\n");
    scanf("%f", &a);

    b = .85 * a;
    printf("if you give 15 percent to Charity, you will still have %.2f", b);
    return 0;
}
