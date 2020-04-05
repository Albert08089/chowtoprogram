#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define min 50
#define max 100
int getScore()
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

char getLetterGrade(float avg)
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
void printAverage(int score1, int score2, int score3)
{
    float avg = (score1 + score2 + score3) / 3.0;
    printf("Average is : %.1f, Grade is %c\n", avg, getLetterGrade(avg));
}

int highestScore(int score1, int score2, int score3)
{
    return (score1 > score2 && score1 > score3) ? score1 : (score2 > score3) ? score2 : score3;
}

int lowestScore(int score1, int score2, int score3)
{
    return (score1 < score2 && score1 < score3) ? score1 : (score2 < score3) ? score2 : score3;
}

int main()
{
    int i, n, choice, maxScore, minScore;
    int score1 = (rand() % (max - min + 1)) + min; // generate a random number from 50 - 100
    int score2 = (rand() % (max - min + 1)) + min; // generate a random number from 50 - 100
    int score3 = (rand() % (max - min + 1)) + min; // generate a random number from 50 - 100
    do
    {
        printf("\n--------MENU--------\n");
        printf("1.Enter 3 student grades\n");
        printf("2.Show student average\n");
        printf("3.Show student highest grade\n");
        printf("4.Show student's lowest grade\n");
        printf("5.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        // validating the choice
        switch (choice)
        {
        case 1:
            score1 = getScore();
            score2 = getScore();
            score3 = getScore();
            break;
        case 2:
            printAverage(score1, score2, score3);
            break;
        case 3:
            maxScore = highestScore(score1, score2, score3);
            printf("The highest grade is %d \n", maxScore);
            break;
        case 4:
            minScore = lowestScore(score1, score2, score3);
            printf("The lowest grade is %d \n", minScore);
            break;
        case 5:
            printf("Good bye"); // exit program
            break;
        default:
            printf("Invalid choice."); // invalid choice
        }
    } while (choice != 5);
    return (0);
}