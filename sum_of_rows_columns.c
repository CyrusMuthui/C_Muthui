#include <stdio.h>

/**
 *main - program for the sum of values in the row
 *and in column
 *Return: integer
 */
int main(void)
{
	int i, j, rows, columns;
	int sr = 0;
	int sc = 0;

	printf("Enter the number of rows: \n");
	scanf("%d", &rows);
	printf("Enter the number of columns: \n");
	scanf("%d", &columns);
	int a[rows][columns];

	printf("Enter the values filling the first rown first \n");
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < columns; j++)
			scanf("%d", &a[i][j]);
	}
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < columns; j++)
			printf("%d \t", a[i][j]);
		printf("\n");
	}
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < columns; j++)
			sr = sr + a[i][j];
		printf("The sum of elements in row %d is %d. \n", (i + 1), sr);
		sr = 0;
	}
	for (i = 0; i < columns; i++)
	{
		for (j = 0; j < rows; j++)
			sc = sc + a[j][i];
		printf("The sum of elements in column %d is %d. \n", (i + 1), sc);
		sc = 0;
	}
	return (0);
}
