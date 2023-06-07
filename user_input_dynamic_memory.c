#include <stdio.h>
#include <stdlib.h>

/**
 *main - entry point
 *Return: Integer
 */
int main(void)
{
	int *ptr;

	ptr = (int *)malloc(sizeof(int));
	printf("Enter a number:");
	scanf("%d", ptr);
	printf("You entered %d.\n", *ptr);
	free(ptr);
	printf("You entered %d.\n", *ptr);
	return (0);
}
