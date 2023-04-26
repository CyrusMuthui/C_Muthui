#include <stdio.h>

/**
 *main - multiply tow matrices
 *using lots of for_loops
 *Return: integer
 */
int main(void)
{
	int i, j, rows1, rows2, columns1, columns2;
	int sum = 0;

	printf("Enter the number of rows of matrix 1: \n");
	scanf("%d", &rows1);
	printf("Enter the number of columns of matrix 1: \n");
	scanf("%d", &columns1);
	printf("Enter the number of rows of matrix 2: \n");
	scanf("%d", &rows2);
	printf("Enter the number of columns of matrix 2: \n");
	scanf("%d", &columns2);

	int a[rows1][columns1];
	int b[rows2][columns2];
	int c[rows1][columns2];

	if (columns1 == rows2)
	{
		for (i = 0; i < rows1; i++)
		{
			printf("Put values of row %d of matrix 1.\n", (i + 1));
			for (j = 0; j < columns1; j++)
				scanf("%d", &a[i][j]);
		}
		for (i = 0; i < rows2; i++)
		{
			printf("Put values of row %d of matrix 2.\n", (i + 1));
			for (j = 0; j < columns2; j++)
				scanf("%d", &b[i][j]);
		}
		for (i = 0; i < rows1; i++)
		{
			for (j = 0; j < columns2; j++)
			{
				sum = sum + a[i][j] * b[j][i];
			}
			c[i][j] = sum;
			sum = 0;
		}
		printf("The product of the two matrices is: \n");
		for (i = 0; i < rows1; i++)
		{
			for (j = 0; j < columns2; j++)
				printf("%d \t", c[i][j]);
			printf("\n");
		}
	}
	else
		printf("The two matrices can't be multiplied. \n");
	return (0);
}
