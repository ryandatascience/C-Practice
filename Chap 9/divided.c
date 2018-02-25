//Chapter 9 Example 1

/*This is a sample program that demonstrates math opertatiors, and the different types of division*/
#include <stdio.h>

main()
{
    //Two sets of equivalent variables, with one set floating-point and the other integer

    float a = 19.0;
    float b = 5.0;
    float floatAnswer;

    int x = 19;
    int y = 5;
    int intAnswer;

    //Using two float variables creates an answer of 3.8
    floatAnswer = a / b;
    printf("%.1f divided by %.1f equals %.1f\n", a, b, floatAnswer);

    floatAnswer = x / y;
    printf("%d divided by %d equals %.1f\n", x, y, floatAnswer);

    //This will also be 3, as it truncates and doesn't round up
    intAnswer = x / y;
    printf("%d divided by %d equals %d\n", x, y, intAnswer);

    intAnswer = x % y;
    printf("%d modulus %d equals %d\n", x, y, intAnswer);

    return 0;

}
