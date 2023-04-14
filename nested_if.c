#include <stdio.h>

/**
 *main - function for nested if
 *Take three inputs from the user
 *Find the maximum of the 3
 *Using only nested if
 *Return - integer 0
 */
int main(void)
{
	int a, b, c;

	printf("Enter 3 numbers \n");
	scanf("%d %d %d", &a, &b, &c);
	if (a > b)
	{
		if (a > c)
			printf("%d is the largest \n", a);
	}
	if (b > a)
	{
		if (b > c)
			printf("%d is the largest \n", b);
	}
	if (c > a)
	{
		if (c > b)
			printf("%d is the largest \n", c);
	}
	printf("End of program \n");
	return (0);
}
