#include <stdio.h>

/**
 *main -subtracting pounters
 *Return: integer
 */
int main(void)
{
	int a[] = {0, -1, 1, 10, 3};
	int *p = a;
	int *q = &a[3];
	int d;

	d = q - p;
	printf("pOinter p minus q is equal to:%d. \n", d);
	return (0);
}
