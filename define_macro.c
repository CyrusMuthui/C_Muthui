#include <stdio.h>
#define MAX (a, b) if (a > b)\
		       printf("%d is maximum.\n", a);\
	else\
		printf("%d is maximum.\n", b);

/**
 *main - entry point
 *Return: integer
 */
int main(void)
{
	MAX(91, 76);
	return (0);
}
