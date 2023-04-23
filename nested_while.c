#include <stdio.h>

/**
 *main - main function for nested while
 *to get a triangle made of stars
 *Return: integer value
 */
int main(void)
{
	int i = 1, j, k, rows;

	printf("Enter the number of rows you want \n");
	scanf("%d", &rows);

	while (i <= rows)
	{
		j = rows;
		k = 1;
		while (j > i)
		{
			printf(" ");
			j--;
		}
		while (k <= (2 * i - 1))
		{
			printf("*");
			k++;
		}
		printf("\n");
		i++;
	}
	return (0);
}
