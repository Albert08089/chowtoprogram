#include <stdio.h>
#include <math.h>

void circumference(double radius);
void area(double radius);
void volume(double radius);
void menu();
const float PI = 3.14;

int main()
{
    //array of funciton pointers which return void and have double as parameter
    void (*f[3])(double) = {&circumference, &area, &volume};
    size_t choice = 0;
    double radius = 0;
    while (1)
    {
        menu();
        scanf("%d", &choice);
        //if users choice is 0 ,1,2 call the respective funtion
        //else if user choice is 3 then termiate program
        //else user entered invalid choice
        if (choice >= 0 && choice < 3)
        {
            printf("\nEnter the radius: ");
            scanf("%lf", &radius);
            (*f[choice])(radius);
        }
        else if (choice == 3)
        {
            printf("\nProgram Terminated.\n");
            break;
        }
        else
        {
            printf("\n\tInvalid choice, Please re-enter!!\n");
        }
        printf("\n");
    }
}
void menu()
{
    printf("Select an option from below\n");
    printf("0. Calculate the circumference of a circle.\n");
    printf("1. Calculate the area of a circle.\n");
    printf("2. Calculate the volume of a sphere.\n");
    printf("3. Exit Program.\n");
}
void circumference(double radius)
{
    printf("\nRadius=%.3f", radius);
    double circum = 2.0 * PI * radius;
    printf("\nThe circumference of the circle is %.2lf meters\n", circum);
}
void area(double radius)
{
    printf("\nRadius=%.3f", radius);
    double a = PI * radius * radius;
    printf("\nThe area of the circle is %.2lf meter square\n", a);
}
void volume(double radius)
{
    printf("\nRadius=%.3f", radius);
    double vol = (4.0 / 3.0) * PI * radius * radius * radius;
    printf("\nThe volume of the sphere is %.2lf cubic meters\n", vol);
}