//Header file section
#include <stdio.h>
//Program begins with main function
int main(void)
{
    //Declare variables
    int flight[11] = {0};
    char decision[2];
    int count = 0;
    int fClass = 1;
    int eClass = 6;
    int response;

    //Prompt the title message
    printf("\nReservation System\n\n Welcome\n");
    //This loop is used to repeat for the number of seats
    while (count < 10)
    {
        //Prompt and read the input from the user
        printf("\n\n\t|first class|\t\t:\tEnter 1"
               "\n\t| economy class|\t:\tEnter 2"
               "\n\nPlease select your ticket?:");
        scanf("%d", &response);
        //Test for the first class option
        if (response == 1)
        {
            //Check if first class seats are aviable
            if (!flight[fClass] && fClass <= 5)
            {
                printf("Your assigned seat number is %d\n", fClass);
                flight[fClass++] = 1;
                count++;
            }
            //If all first class seats are booked offer economy
            else if (fClass > 5 && eClass <= 10)
            {
                printf("\nFirst class has been filled for the current flight.");
                printf("Would you like a seat in economy class instead? (Y or y for yes)");
                scanf("%s", decision);
                //Valid for input to switch classes
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
            //Default for other inputs
            else
            {
                printf("\nNext flight will depart in 3 hours.\n\n");
            }
        }
        //To check for economy class option
        else if (response == 2)
        {
            //Check if economy class seats are available
            if (!flight[eClass] && eClass <= 10)
            {
                printf(" Your assigned seat number is %d\n", eClass);
                flight[eClass++] = 1;
                count++;
            }
            //If all economy seats are booked offer first class
            else if (eClass > 10 && fClass <= 5)
            {
                printf("\nEconomy class has been filled for the current flight.");
                printf("Would you care for a first class seat? (Y or y for yes) ");

                scanf("%s", decision);
                //Validate for input to switch classes
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
            //default for other inputs
            else
            {
                printf("The next flight will leave in 3 hours.\n");
            }
        }

        else
        {
            printf("Please select correct option\n");
        }
    }
    //Output message if all seats are booked
    printf("\nAll seats have been booked for this flight.\n");
    return 0;
}