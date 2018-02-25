#include<stdio.h>
#include<string.h>
#include<math.h>

main()
{
    printf("square root of 49.0 is %.1f\n", sqrt(49.0));
    printf("square root of 149.0 is %.1f\n", sqrt(149.0));
    printf("square root of .149 is %.2f\n", sqrt(.149));

    printf("4 raised to the 3rd power is %.1f\n", pow(4.0, 3.0));
     printf("34 raised to the 1/2 power is %.1f\n", pow(34.0, .5));

     printf("sine of a 90 degree angle is %.3f\n", sin((90*(3.14159/180.0))));
    printf("arc cosine of a 45 degree angle is %.3f\n", acos((45*(3.14159/180.0))));

    printf("e raised to 2 is %.3f\n", exp(2));
    printf("natural log of 5 is %.3f\n", log(5));
    printf("the base 10 log of 5 is %.3f\n", log10(5));
puts("\n");
    return(0);
}
