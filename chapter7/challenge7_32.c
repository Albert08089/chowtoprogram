#include <stdio.h>
#include <stdlib.h>

int main()
{
    //j is count of columns
    //rating is rating of cause between 1-10
    //ans is continue survey or not
    //survey is 2d array that is contain cause and rating
    //char cause is temporary for storing cause in one time
    int rating, i, j, ans, sum[100005], k;
    float avg[10];
    int survey[100][100];
    char cause[1000][1000];
    j = 1;
    printf("Enter the five cause and corresponding rating: \n");
    // in first time user should give the cause and rating after one time
    //cause store in memory and user give only rating
    for (i = 1; i <= 5; i++)
    {
        fflush(stdin);
        //take shortcut form of cause i.e. political cause= p.c
        printf("Cause : ");
        scanf("%[^\t\n]s", cause[i]);
        printf("Rating : ");
        scanf("%d", &rating);
        survey[i][1] = rating;
    }

    //if ans ==1 that means perform another survey
    printf("If you do another survey then Press : 1 otherwise Press : 0\n");
    scanf("%d", &ans);
    while (ans == 1)
    {
        j++;
        for (i = 1; i <= 5; i++)
        {
            printf("Cause : ");
            printf("%s", cause[i]);
            printf("\nRating : ");
            scanf("%d", &rating);
            survey[i][j] = rating;
        }
        printf("\nIf you do another survey then press:1 otherwise:0\n");
        scanf("%d", &ans);
    }
    //calculating average for each cause and sum of all survey corresponding cause
    for (i = 1; i <= 5; i++)
    {
        sum[i] = 0;
        for (k = 1; k <= j; k++)
        {
            sum[i] = sum[i] + survey[i][k];
        }
        avg[i] = (float)sum[i] / j;
    }

    //(a) A tabular report
    printf("Cause\t");
    for (i = 1; i <= j; i++)
    {
        printf("\tc%d", i);
    }
    //(b) show average in right side of table
    printf("\t Average\n");
    for (i = 1; i <= 5; i++)
    {
        printf("%s", cause[i]);
        printf("\t");
        for (k = 1; k <= j; k++)
        {
            printf("\t%d", survey[i][k]);
        }
        //(b) show average value in right side of table
        printf("\t %f ", avg[i]);
        printf("\n");
    }

    //(c)calculating highest point cause
    int maxp = sum[1];
    int pos_max = 1, pos_min = 1;
    int minp = sum[1];
    for (i = 1; i <= 5; i++)
    {
        if (maxp < sum[i])
        {
            pos_max = i;
            maxp = sum[i];
        }
    }

    //(c) print highest point clause
    printf("\nmax point cause : %s", cause[pos_max]);
    printf("\n");
    printf("point total : %d", maxp);
    printf("\n");

    //(d) calculating lowest point clause

    for (i = 1; i <= 5; i++)
    {
        if (minp > sum[i])
        {
            pos_min = i;
            minp = sum[i];
        }
    }
    //(d) print lowest point clause
    printf("\nmin point cause : %s", cause[pos_min]);
    printf("\n");
    printf("point total : %d", minp);
    printf("\n");

    return 0;
}