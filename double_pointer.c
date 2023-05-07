#include <stdio.h>

/**
 *main - double pointer
 *Return: integer
 */
int main(void)
{
	int a = 10;
	int *p = &a;
	int **q = &p;

	printf("a is %d.\n", *p);
	printf("a is %d.\n", **q);
	printf("p is %p.\n", p);
	printf("p is %p.\n", *q);
	return (0);
}
