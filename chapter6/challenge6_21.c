#include <stdio.h>

int main(void)
{
    int flight[11] = {0};
    char decision[2];

    int count = 0;
    int fClass = 1;
    int eClass = 6;
    int response;

    printf("\nReservation System\n\n Welcome\n");

    while (count < 10)
    {

        printf("\nPlease select your ticket:\n\n\t|first class|\t\t:\tEnter 1\n\t| economy class|\t:\tEnter 2\n?");
        scanf("&d", &response);

        if (response == 1)
        {
            {
                if (!flight[fClass] && fClass <= 5)
                {
                    printf("Your assigned seat number is %d\n", fClass);
                    flight[fClass++] = 1;
                    count++;
                }
                else if (fClass > 5 && eClass <= 10)
                {
                    printf("\nFirst class has been filled for the current flight.");
                    printf("Would you like a seat in economy class instead? (Y or y for yes)");
                    scanf("%s", decision);

                    if (decision[0] == 'Y' || decision[0] == 'y')
                    {
                        printf("Your assigned seat number is %d\n", eClass);
                        flight[eClass++] = 1;
                        count++;
                    }
                    else
                    {
                        printf("The next flight will depart in 3 hours.\n");
                    }
                }
                else if (response == 2)
                {
                    if (!flight[eClass] && eClass <= 10)
                    {
                        printf(" Your assigned seat number is %d\n", eClass);
                        flight[eClass++] = 1;
                        count++;
                    }
                    else if (eClass > 10 && fClass <= 5)
                    {
                        printf("\nEconomy class has been filled for the current flight.");
                        printf("Would you care for a first class seat? (Y or y for yes) ");

                        scanf("%s", decision);

                        if (decision[0] == 'Y' || decision[0] == 'y')
                        {
                            printf("Your seat assignment is %d\n", fClass);
                            flight[fClass++] = 1;
                            count++;
                        }
                        else
                        {
                            printf("The next flight will leave in 3 hours.\n");
                        }
                    }
                    else

                    {
                        ("Please select correct option\n");
                    }
                }
                printf("\nAll seats have been booked for this flight.");

                return 0;
            }
        }
    }
}