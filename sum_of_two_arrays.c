#include <stdio.h>

/**
 *main - sum of two arrays
 *store the sum in a new array and print
 *Return: integer
 */
int main(void)
{
	int i, j, k, m;
	int a[5];
	int b[5];
	int c[5];

	printf("Enter the 5 numbers of the first array\n");
	for (i = 0; i < 5; i++)
		scanf("%d", &a[i]);
	printf("Enter the 5 numbers of the second array \n");
	for (j = 0; j < 5; j++)
		scanf("%d", &b[j]);
	for (k = 0; k < 5; k++)
		c[k] = a[k] + b[k];
	for (m = 0; m < 5; m++)
	{
		printf("The sum of the %d is ", (m+1));
		printf("%d \n", c[m]);
	}
	return (0);
}
