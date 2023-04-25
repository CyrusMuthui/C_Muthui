#include <stdio.h>

/**
 *main - program for transpose of a matrix
 *Return: return integer
 */
int main(void)
{
	int i, j, rows, columns;

	printf("Enter the number of rows: \n");
	scanf("%d", &rows);
	printf("Enter the number of columns: \n");
	scanf("%d", &columns);
	int a[rows][columns];

	printf("Enter the values of the matrix, filling first row first..\n");
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < columns; j++)
			scanf("%d", &a[i][j]);
	}
	printf("The matrix you have entered is: \n");
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < columns; j++)
			printf("%d \t", a[i][j]);
		printf("\n");
	}
	printf("The transpose of the matrix is: \n");
	for (i = 0; i < columns; i++)
	{
		for (j = 0; j < rows; j++)
			printf("%d \t", a[j][i]);
		printf("\n");
	}
	return (0);
}
