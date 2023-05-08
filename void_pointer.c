#include <stdio.h>

/**
 *main - void pointers
 *Return: integer
 */
int main(void)
{
	int a = 5;
	char c = 'y';
	float x = 2.1;
	void *ptr;

	ptr = &a;
	printf("a is equal to %d.\n", *(int *) ptr);

	ptr = &c;
	printf("c is equal to %c.\n", *(char *) ptr);

	ptr = &x;
	printf("x is equal to %f.\n", *(float *) ptr);

	return (0);
}
