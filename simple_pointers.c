#include <stdio.h>

/**
 *main - to test pointers
 *Return: integer
*/
int main(void)
{
	int a = 10, b = 9;
	int *p, *q;

	p = &a;
	q = &b;

	printf("The value of a is %d and b is %d.\n", *p, *q);
	return (0);
}
