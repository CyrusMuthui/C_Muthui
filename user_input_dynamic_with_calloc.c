#include <stdio.h>
#include <stdlib.h>

/**
 *main - entry point
 *Return: integer
 */
int main(void)
{
	int *ptr;

	ptr = (int *)calloc(1, sizeof(int));
	printf("Enter a number:");
	scanf("%d", ptr);
	printf("You entered %d.\n", *ptr);
	free(ptr);
	return (0);
}
