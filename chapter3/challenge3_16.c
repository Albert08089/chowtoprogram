#include <stdio.h>

int main()
{
    float gallonsUsed, 
          milesDriven, 
          totalGallonsUSed = 0.0, 
          totalMilesDriven = 0.0, 
          averageMilesPerGallon = 0.0;

    //prompt and read the number of gallons
    printf("Enter the gallons used (-1 to end): ");
    scanf("%f", &gallonsUsed);

    //run a loop until the user enters -1 for number of gallons
    while (gallonsUsed != -1)
    {
        //prompt and read miles driven
        printf("Enter the miles driven: ");
        scanf("%f", &milesDriven);

        //add gallon to totalGallons
        totalGallonsUSed = totalGallonsUSed + gallonsUsed;

        //add miles to total miles
        totalMilesDriven = totalMilesDriven + milesDriven;

        //calculate and print miles per gallon
        printf("The miles/gallon for this tank was %f miles.", milesDriven / gallonsUsed);

        //prompt and read the number of gallons used, exit the loop if -1 is entered
        printf("\n\nEnter the gallons used (-1 to end):");
        scanf("%f", &gallonsUsed);
    }

    //if totalGallons is not 0
    if (totalGallonsUSed != 0)
    {
        //calculate totalaverage
        averageMilesPerGallon = totalMilesDriven / totalGallonsUSed;

        //print total average
        printf("\nThe overall average miles/gallon was %f miles. \n", averageMilesPerGallon);
    }
    else
        //if totalGallons is 0
        printf("No gallons were entered\n");

    return 0;
}