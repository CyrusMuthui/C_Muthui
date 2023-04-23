#include <stdio.h>

/**
 *main - function to test continue
 *using a for loop
 *Return - integer zero
 */
int main(void)
{
	int i;

	for (i = 9; i >= 0; i--)
	{
		if (i == 4)
			continue;
		printf("%d \n", i);
	}
	return (0);
}
