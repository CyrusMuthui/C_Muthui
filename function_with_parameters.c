#include <stdio.h>

int sum(int, int);
/**
 *main - main function
 *Return: integer
 */
int main(void)
{
	int a, b;
	int c;

	printf("Input two numbers.\n");
	scanf("%d %d", &a, &b);
	c = sum(a, b);
	printf("The sum is %d.\n", c);
	return (0);
}
/**
 *sum - to find the sum of two numbers
 *@x: one number
 *@y: the second one
 *Return: their sum
 */
int sum(int x, int y)
{
	int sumo;

	sumo = x + y;
	return (sumo);
}
