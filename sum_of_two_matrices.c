#include <stdio.h>

/**
 *main - program for adding two matrices
 *with for loops
 *Return: integer
 */
int main(void)
{
	int i, j, rows, columns;

	printf("Enter the number of rows for each matrix: \n");
	scanf("%d", &rows);
	printf("Enter the number of columns for each matrix: \n");
	scanf("%d", &columns);

	int a[rows][columns];
	int b[rows][columns];
	int c[rows][columns];

	printf("Enter the values of the first matrix starting with row 1: \n");
	for (i = 0; i < rows; i++)
	{
		printf("Enter the values of the next row:\n");
		for (j = 0; j < columns; j++)
			scanf("%d", &a[i][j]);
	}
	printf("Enter the values of the second matrix starting with row 1: \n");
	for (i = 0; i < rows; i++)
	{
		printf("Enter the values of the next row:\n");
		for (j = 0; j < columns; j++)
		{
			scanf("%d", &b[i][j]);
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	printf("The sum of the two matrices is: \n");
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < columns; j++)
			printf("%d \t", c[i][j]);
		printf("\n");
	}
	return (0);
}
