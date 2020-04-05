#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    long int ac;
    double begBal, tot, creds, lim, newBal;
    char resume = 'y';
    while (resume == 'y')
    {
        printf("\nPlease enter the following:\n");

        printf("Enter Account Number: ");
        scanf("%ld", &ac);

        printf("Enter Balance at the beginning of the month: ");
        scanf("%lf", &begBal);

        printf("Enter Total of all items charged this month: ");
        scanf("%lf", &tot);

        printf("Enter Total of all credits applied to your account this month: ");
        scanf("%lf", &creds);

        printf("Enter Allowed credit limit: ");
        scanf("%lf", &lim);

        newBal = begBal + tot - creds;
        printf("\nAccount Number: %ld\n", ac);
        
        printf("Credit Limit: %.2f\n", lim);

        printf("New Balance: %.2f\n", newBal);
        if (newBal > lim)
        {
            printf("Credit limit exceeded\n");
        }
        else
        {
            printf("Available credit: %.2f\n", (newBal - lim));
        }
        fflush(stdin);
        printf("\nDo you want to continue? (y/n): ");
    }

    return 0;
}