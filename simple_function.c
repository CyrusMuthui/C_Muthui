#include <stdio.h>

int sum(void);
/**
 *main - main function
 *Return: integer
 */
int main(void)
{
	sum();
	sum();
	return (0);
}
/**
 *sum - Function for sum
 *Asks user for two numbers
 *Then prints their sum
 *Return: Sum
 */
int sum(void)
{
	int a, b, sumo;

	printf("Enter two numbers:\n");
	scanf("%d %d", &a, &b);
	sumo = a + b;
	printf("%d.\n", sumo);
	return (0);
}
