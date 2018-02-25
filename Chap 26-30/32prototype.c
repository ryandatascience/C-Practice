#include<stdio.h>
float compNet(float atomWeight, float factor);

main()
{
    float atomWeight, factor, netWeight;
    printf("atomic weight?");
    scanf(" %f", &atomWeight);
    printf("What's the factor");
    scanf(" %f", &factor);
    netWeight = compNet(atomWeight, factor);
    printf("the weight is %.4f\n", netWeight);
    return 0;
}

float compNet(float atomWeight, float factor)
{
    float netWeight;

    netWeight = (atomWeight - factor)*.8;
    return(netWeight);
}
