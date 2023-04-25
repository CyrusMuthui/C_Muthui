#include <stdio.h>

/**
 *main - asking for elements of a matrix from user
 *also asking for number of rows and columns
 *Return: integer values
 */
int main(void)
{
	int i, j, rows, columns, sum = 0;

	printf("Enter the number of rows you want.\n");
	scanf("%d", &rows);
	printf("Enter the number of columns you want.\n");
	scanf("%d", &columns);
	int a[rows][columns];

	printf("Enter the values, filling out the first row first...\n");

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < columns; j++)
		{
			scanf("%d", &a[i][j]);
			sum = sum + a[i][j];
		}
	}
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < columns; j++)
			printf("%d \t", a[i][j]);
		printf("\n");
	}
	printf("The sum of all the elements is %d. \n", sum);
	return (0);
}
