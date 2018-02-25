//Chapter 9 example 3

/*This program calculate the average of four grades and also does some other basic math.*/

#include<stdio.h>

main()
{
    int grade1, grade2, grade3, grade4;
    float averageGrade, gradeDelta, percentDiff;

    grade1 =  grade3 = 88;
    grade2 = 79;

    printf("What did you get on the fourth test (An integer between 0 and 100)?\n");
    scanf(" %d", &grade4);

    averageGrade = (grade1 + grade2 + grade3 + grade4) / 4;

    printf("You average is %.1f\n", averageGrade);

    gradeDelta = 95 - averageGrade;
    percentDiff = 100 * ((95 - averageGrade) / 95);

    printf("Your grade is %.1f points lower than the top grade in the class (95)\n", gradeDelta);
    printf("You are %.1f percent behind that grade!\n", percentDiff);

    return 0;

}
