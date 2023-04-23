#include <stdio.h>

/**
 *main - testing break statement
 *return - Return integer
 */
int main(void)
{
	for (int i = 0; i <= 5; i++)
	{
		printf("%d \n", i);
		if (i == 3)
			break;
	}
	return (0);
}
