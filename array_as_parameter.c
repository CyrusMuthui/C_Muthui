#include <stdio.h>

float avg(int []);

/**
 *main - entry main function
 *Return: integer
 */
int main(void)
{
	float average;
	int a[] = {6, 5, 4, 3, 2};

	average = avg(a);
	printf("Mean is %f.\n", average);
	return (0);
}
/**
 *avg - function to calculate average
 *@x: array parameter
 *Return: the mean of the values
 */
float avg(int x[])
{
	int i;
	int sum = 0;
	float mean;

	for (i = 0; i < 5; i++)
		sum = sum + x[i];
	mean = sum / 5;

	return (mean);
}
