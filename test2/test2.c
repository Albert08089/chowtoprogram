#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define max 100
#define min 50

int enterGrade();
float averageGrade(int Grade_1, int Grade_2, int Grade_3);
char letterGrade(float avg);
float highestGrade(int Grade_1, int Grade_2, int Grade_3);
float lowestGrade(int Grade_1, int Grade_2, int Grade_3);

int main(void)
{
    printf("---grade taker v1.0---\n");

    int Grade1 = (rand() % (max - min + 1)) + min,
        Grade2 = (rand() % (max - min + 1)) + min,
        Grade3 = (rand() % (max - min + 1)) + min;

    int user_input;

    do
    {

        printf("1.Enter 3 grades\n");
        printf("2.Show average and letter grade\n");
        printf("3.Show highest grade\n");
        printf("4.Show lowest grade\n");
        printf("5.Exit\n");

        scanf("%d", &user_input);

        switch (user_input)
        {
        case 1:
            printf("you typed 1\n\n");
            Grade1 = enterGrade();
            Grade2 = enterGrade();
            Grade3 = enterGrade();
            break;

        case 2:
            printf("you typed 2\n\n");
            float gradeavg = averageGrade(Grade1, Grade2, Grade3);
            char letter_Grade = letterGrade(gradeavg);
            printf("the grade average is %.2f and the letter is %c\n", gradeavg, letter_Grade);
            break;

        case 3:
            printf("you typed 3\n\n");
            float highest_Grade = highestGrade(Grade1, Grade2, Grade3);
            printf("the highest grade is %.2f\n", highest_Grade);
            break;

        case 4:
            printf("you typed 4\n\n");
            float lowest_Grade = lowestGrade(Grade1, Grade2, Grade3);
            printf("the lowest grade is %.2f\n", lowest_Grade);
            break;

        case 5:
            printf("\nyou typed 5\n");
            printf("thank you for using this program\n");
            break;

        default:
            printf("error input not valid");
            break;
        }

    } while (user_input != 5);

    return 0;
}

int enterGrade()
{
    int num;
    printf("Enter a score : ");
    scanf("%d", &num);
    
    while (num <= 0 || num >= 100)
    {
        // flush input buffer
        fflush(stdin);
        printf("Input must be larger than 0 and less then 100. Please enter again : ");
        scanf("%d", &num);
    }
    return num;
}

float averageGrade(int Grade_1, int Grade_2, int Grade_3)
{
    float Average;

    Average = (Grade_1 + Grade_2 + Grade_3) / 3;

    return Average;
}

char letterGrade(float avg)
{
    char letter = '-';
    if (avg >= 90 && avg <= 100)
        letter = 'A';
    else if (avg >= 80 && avg <= 89)
        letter = 'B';
    else if (avg >= 70 && avg <= 79)
        letter = 'C';
    else if (avg >= 60 && avg <= 69)
        letter = 'D';
    else if (avg <= 60)
        letter = 'F';
    return letter;
}

float highestGrade(int Grade_1, int Grade_2, int Grade_3)
{
    float largest;

    largest = Grade_1 > Grade_2 ? (Grade_1 > Grade_3 ? Grade_1 : Grade_3)
                                : (Grade_2 > Grade_3 ? Grade_2 : Grade_3);

    return largest;
}

float lowestGrade(int Grade_1, int Grade_2, int Grade_3)
{
    float smallest;

    smallest = Grade_1 < Grade_2 ? (Grade_1 < Grade_3 ? Grade_1 : Grade_3)
                                 : (Grade_2 < Grade_3 ? Grade_2 : Grade_3);

    return smallest;
}
