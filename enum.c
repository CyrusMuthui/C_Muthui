#include <stdio.h>

/**
 *main - entry point
 *Return: integer
 */
int main(void)
{
	enum week_days
	{
		mon,
		tue,
		wed,
		thurs,
		fri
	};
	enum week_days today1, today2;

	today1 = mon;
	today2 = tue;

	printf("%d.\n", today2);
	return (0);
}
