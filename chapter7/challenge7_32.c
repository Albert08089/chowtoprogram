#include <stdio.h>
#include <stdlib.h>

int main()
{
    char issue1[] = "Issue #1", issue2[] = "Issue #2", issue3[] = "Issue #3", issue4[] = "Issue #4", issue5[] = "Issue #5";

    //For indentation
    int issueLengths[5], longest = 0;
    issueLengths[0] = strlen(issue1);
    issueLengths[1] = strlen(issue2);
    issueLengths[2] = strlen(issue3);
    issueLengths[3] = strlen(issue4);
    issueLengths[4] = strlen(issue5);
    for (int i = 0; i < 5; i++)
    {
        if (longest < issueLengths[i])
            longest = issueLengths[i];
    }
    longest += 2;

    int ratings[5][10], highest = 0, lowest = 101;
    char ch, hIssue[100], sIssue[100];
    float avg, sum;
    do
    {
        //Taking user input
        for (int i = 0; i < 10; i++)
        {
            printf("How would you rate the importance of the following issues?(1-10)\n");
            printf("%s: ", issue1);
            scanf("%d", &ratings[0][i]);
            printf("%s: ", issue2);
            scanf("%d", &ratings[1][i]);
            printf("%s: ", issue3);
            scanf("%d", &ratings[2][i]);
            printf("%s: ", issue4);
            scanf("%d", &ratings[3][i]);
            printf("%s: ", issue5);
            scanf("%d", &ratings[4][i]);
        }

        for (int i = 0; i < longest; i++)
            printf(" ");
        printf("#1\t#2\t#3\t#4\t#5\t#6\t#7\t#8\t#9\t#10\tAVG\n"); //First line
        printf("%s", issue1);
        for (int i = strlen(issue1); i < longest; i++) //Indenting
            printf(" ");
        sum = 0;
        for (int i = 0; i < 10; i++) //Outputting results
        {
            sum += ratings[0][i];
            printf("%d\t", ratings[0][i]);
        }
        avg = sum / 10;
        printf("%f\n", avg);
        if (highest < sum) //Checking if highest
        {
            highest = sum;
            strcpy(hIssue, issue1);
        }
        if (lowest > sum) //Checking if lowest
        {
            lowest = sum;
            strcpy(sIssue, issue1);
        }
        printf("%s", issue2);
        for (int i = strlen(issue2); i < longest; i++)
            printf(" ");
        sum = 0;
        for (int i = 0; i < 10; i++)
        {
            sum += ratings[1][i];
            printf("%d\t", ratings[1][i]);
        }
        avg = sum / 10;
        printf("%f\n", avg);
        if (highest < sum)
        {
            highest = sum;
            strcpy(hIssue, issue2);
        }
        if (lowest > sum)
        {
            lowest = sum;
            strcpy(sIssue, issue2);
        }
        printf("%s", issue3);
        for (int i = strlen(issue3); i < longest; i++)
            printf(" ");
        sum = 0;
        for (int i = 0; i < 10; i++)
        {
            sum += ratings[2][i];
            printf("%d\t", ratings[2][i]);
        }
        avg = sum / 10;
        printf("%f\n", avg);
        if (highest < sum)
        {
            highest = sum;
            strcpy(hIssue, issue3);
        }
        if (lowest > sum)
        {
            lowest = sum;
            strcpy(sIssue, issue3);
        }
        printf("%s", issue4);
        for (int i = strlen(issue4); i < longest; i++)
            printf(" ");
        sum = 0;
        for (int i = 0; i < 10; i++)
        {
            sum += ratings[3][i];
            printf("%d\t", ratings[3][i]);
        }
        avg = sum / 10;
        printf("%f\n", avg);
        if (highest < sum)
        {
            highest = sum;
            strcpy(hIssue, issue4);
        }
        if (lowest > sum)
        {
            lowest = sum;
            strcpy(sIssue, issue4);
        }
        printf("%s", issue5);
        for (int i = strlen(issue5); i < longest; i++)
            printf(" ");
        sum = 0;
        for (int i = 0; i < 10; i++)
        {
            sum += ratings[4][i];
            printf("%d\t", ratings[4][i]);
        }
        avg = sum / 10;
        printf("%f\n", avg);
        if (highest < sum)
        {
            highest = sum;
            strcpy(hIssue, issue5);
        }
        if (lowest > sum)
        {
            lowest = sum;
            strcpy(sIssue, issue5);
        }
        printf("%s has the highest point of %d\n", hIssue, highest);
        printf("%s has the lowest point of %d\n", sIssue, lowest);
        printf("\nDo you want to conduct another survey?(y/n): ");
        scanf(" %c", &ch);
    } while (ch == 'Y' || ch == 'y');
    return 0;
}