#include <stdio.h>

/**
 *main - The comma operator
 *ignores the first thing in the comma after evaluating it and assigns the 2nd
 *Return: Value after assigning
 */
int main(void)
{
	int a;
	a = (printf("Cyrus \n"), 2, 7);

	printf("%d \n", a);
	return (0);
}
