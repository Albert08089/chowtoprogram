#include <stdio.h>

int main(void)
{

    float grade_1,
        grade_2,
        grade_3,
        grade_final;

    int grade_see = 0;


    printf("\n---Welcome to final grade program V1.0---");

redo:
    printf("\nenter first grade: ");
    scanf("%f", &grade_1);

    printf("enter second grade: ");
    scanf("%f", &grade_2);

    printf("enter third grade: ");
    scanf("%f", &grade_3);

    grade_final = (grade_1 + grade_2 + grade_3) / 3;

    grade_see = grade_final;


    switch (grade_see)
    {

    case 0 ... 64:
        printf("your class avg is %.2f\nyour letter grade is F ", grade_final);
        break;

    case 65 ... 69:
        printf("your class avg is %.2f\nyour letter grade is D ", grade_final);
        break;

    case 70 ... 79:
        printf("your class avg is %.2f\nyour letter grade is C ", grade_final);
        break;

    case 80 ... 89:
        printf("your class avg is %.2f\nyour letter grade is B ", grade_final);
        break;

    case 90 ... 100:
        printf("your class avg is %.2f\nyour letter grade is A ", grade_final);
        break;

    default:
        printf("error the grades you enter are invaled\n");
        goto redo;
        break;
    }

    return 0;
}