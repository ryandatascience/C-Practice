#include<stdio.h>
float gradeAve(float test1, float test2, float test3);

main()
{
    float grade1, grade2, grade3;
    float average;

    printf("What was the grade on the first test?\n");
    scanf(" %f", &grade1);
    printf("What was the grade on the second test?\n");
    scanf(" %f", &grade2);
    printf("What was the grade on the third test?\n");
    scanf(" %f", &grade3);

    average = gradeAve(grade1,grade2, grade3);
    printf("average is %.2f", average);

    return 0;


}


float gradeAve(float test1, float test2, float test3)
{
    float localAverage;

    localAverage = (test1+test2+test3)/3;

    return(localAverage);
}
