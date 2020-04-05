#include <stdio.h>

int main(void)
{

	double average = 0;
	int counter = 0;
	int value;
	int total = 0;

	printf("Enter value to be averaged (Type 9999 to exit): ", value);
	scanf("%d", &value);

	while (value != 9999)
	{ //sentinel value

		total += value;
		counter++;
		printf("Enter value to be averaged (Type 9999 to exit): ", value);
		scanf("%d", &value);
	}
	if (counter == 0)
		printf("No values entered.");

	else
	{

		average = (double)total / counter;
		printf("Average = %.2f", average);
	}
	return 0;
}