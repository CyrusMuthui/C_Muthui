#include <stdio.h>
#define MAX ((a), (b)) do
{
	if ((a) > (b))
		printf("%d is greater than %d.\n", a, b);
	else
		printf("%d is greater than %d.\n", b, a);
} while (0);
/**
 *main - entry point
 *Return: integer
 */
int main(void)
{
	MAX(91, 76);
	return (0);
}
