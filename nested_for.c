#include <stdio.h>

/**
 *main - using nested for
 *Print an isosceles triangle of stars
 *Return - return integer value
 */
int main(void)
{
	int i, j, k, rows;

	printf("Enter the number of rows you want \n");
	scanf("%d", &rows);

	for (j = 1; j <= rows; j++)
	{
		for (i = rows; i > j; i--)
			printf(" ");
		for (k = 1; k <= (2 * j - 1); k++)
			printf("*");
		printf("\n");
	}
	return (0);
}
