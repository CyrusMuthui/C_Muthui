#include <stdio.h>

/**
 *main - pointer addition
 *Return: integer
 */
int main(void)
{
	int a[5] = {1, 2, 3, 4, 5};
	int *p = &a[0];

	p = p + 3;
	printf("%d.\n", *p);
	return (0);
}
