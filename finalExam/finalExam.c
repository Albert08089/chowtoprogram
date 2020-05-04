#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//function prototypes

void enterStudentGrades(int[]);
void displayAverageAndGrade(int[]);
int getHighestGrade(int[]);
int getLowestGrade(int[]);

int main()

{

    //declare array to store grades

    int grades[5];

    //set seed for random number generator

    srand(time(NULL));

    int i, choice, highestGrade, lowestGrade;

    int flag = 1;

    //initially fill the array with random values between 50 and 100

    for (i = 0; i < 5; i++)

    {

        grades[i] = (rand() % (100 + 1 - 50)) + 50;
    }

    //repeat the execution until the user quits

    do

    {

        //display menu

        printf("1) Enter 5 student grades\n");

        printf("2) Show student average (with the 5 grades) and letter grade\n");

        printf("3) Show student highest grade\n");

        printf("4) Show student's lowest grade\n");

        printf("5) Exit\n");

        //prompt and read user choice

        printf("Enter your choice: ");

        scanf("%d", &choice);

        //run a switch case based on user choice

        switch (choice)

        {

            //if user entered 1 call the enterStudentGrades function

        case 1:

            enterStudentGrades(grades);

            break;

            //if user enterd 2 call displayAverageAndGrade function

        case 2:

            displayAverageAndGrade(grades);

            break;

            //if user entered 3

        case 3:

            //get the highest grade using getHighestGrade function

            highestGrade = getHighestGrade(grades);

            //print the highest grade

            printf("\nThe highest grade is: %d\n", highestGrade);

            break;

            //if user entered 4

        case 4:

            //get the highest grade using getLowestGrade function

            lowestGrade = getLowestGrade(grades);

            //print the lowest grade

            printf("\nThe lowest grade is: %d\n", lowestGrade);

            break;

            //if user entered 5 set flag to 0 which terminates the loop

        case 5:

            flag = 0;

            break;

            //display message if invalid choice is entered

        default:

            printf("\nInvalid choice.");

            break;
        }

        printf("\n");

    } while (flag);

    return 0;
}

//function that reads 5 grades from the user

void enterStudentGrades(int grades[])

{

    int i;

    //run a loop to read 5 grades

    for (i = 0; i < 5; i++)

    {

        //prompt and read a grade

        printf("Enter grade #%d: ", (i + 1));

        scanf("%d", &grades[i]);

        //run a loop until a valid grade is entered

        while (grades[i] < 0 || grades[i] > 100)

        {

            printf("Grade must be between 0 - 100\n");

            printf("Enter grade #%d: ", (i + 1));

            scanf("%d", &grades[i]);
        }
    }
}

//function that calculates the average and displays it along eith letter grade

void displayAverageAndGrade(int grades[])

{

    int sum = 0;

    float avg;

    int i;

    //run a loop and get the total of all the scores

    for (i = 0; i < 5; i++)

    {

        sum = sum + grades[i];
    }

    //calculate the average and display it

    avg = (float)sum / 5.0;

    printf("\nThe average of the grades is: %.1f", avg);

    //if average is between 90 and 100 letter grade is A

    if (avg >= 90 && avg <= 100)

        printf("\nLetter Grade is: A\n");

    //if average is between 80 and 89 letter grade is B

    else if (avg >= 80 && avg <= 89)

        printf("\nLetter Grade is: B\n");

    //if average is between 70 and 79 letter grade is C

    else if (avg >= 70 && avg <= 79)

        printf("\nLetter Grade is: C\n");

    //if average is between 60 and 69 letter grade is D

    else if (avg >= 60 && avg <= 69)

        printf("\nLetter Grade is: D\n");

    //if average is less than 60 letter grade is F

    else if (avg < 60)

        printf("\nLetter Grade is: F\n");
}

//function that takes the 5 grades as parameter and retruns the highest grade

int getHighestGrade(int grades[])

{

    //assume first grade to be highest

    int highestGrade = grades[0];

    int i;

    //iterate through the grades

    for (i = 0; i < 5; i++)

    {

        //find the highest grade

        if (grades[i] > highestGrade)

            highestGrade = grades[i];
    }

    //return the highest grade

    return highestGrade;
}

//function that takes the 5 grades as parameter and retruns the lowest grade

int getLowestGrade(int grades[])

{

    //assume first grade to be lowest

    int lowestGrade = grades[0];

    int i;

    //iterate through the grades

    for (i = 0; i < 5; i++)

    {

        //find the lowest grade

        if (grades[i] < lowestGrade)

            lowestGrade = grades[i];
    }

    //return the lowest grade

    return lowestGrade;
}