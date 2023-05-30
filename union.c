#include <stdio.h>

union abc
{
	int a;
	char b;
	float c;
};

/**
 *main - entry point
 *Return: integer
 */
int main(void)
{
	union abc u;
	u.a = 1;
	u.b = 'M';
	u.c = 97.2;

	printf("%d and %c and also %f.\n", u.a, u.b, u.c);
	return (0);
}
