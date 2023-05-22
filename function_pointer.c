#include <stdio.h>

int sum(int, int);

/**
 *main - entry point
 *Return: integer
 */
int main(void)
{
	int s;
	int (*addition)(int, int) = sum;

	s = addition(4, 5);
	printf("Sum is %d.\n", s);
	return (0);
}
/**
 *sum - addition function
 *@x: parameter 1
 *@y: parameter 2
 *Return: the sum
 */
int sum(int x, int y)
{
	int add;

	add = x + y;
	return (add);
}
