#include <stdio.h>

/**
 *main - ternary operator
 *Return: a value depending on the conditions
 */
int main(void)
{
	int a = 10;
	int b = 5;
	int result = (a > b) ? a : b;

	printf("The greater value is %d \n", result);
	return (0);
}
