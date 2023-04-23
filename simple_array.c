#include <stdio.h>

/**
 *main - function for a simple array
 *make an array and print it
 *Return: integer
 */
int main(void)
{
	int i, j, values;
	int a[values];

	printf("Enter the number of values to be stored in the array \n");
	scanf("%d", &values);

	printf("Enter the values \n");

	for (i = 0; i < values; i++)
		scanf("%d", &a[i]);
	printf("You have entered the following \n");
	for (j = 0; j < values; j++)
		printf("%d \n", a[j]);
	return (0);
}
