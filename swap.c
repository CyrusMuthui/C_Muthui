#include <stdio.h>

void swap(int*, int*);

/**
 *main - main function
 *Return: integer
 */
int main(void)
{
	int x, y;
	printf("Enter two numbers:\n");
	scanf("%d %d", &x, &y);
	swap(*x, *y);
	printf("x is %d and y is %d in main function.\n", x, y);
	return (0);
}
/**
 *swap - swapping function
 *Return: void
 */
void swap(int *x, int *y)
{
	int c;
	c = *y;
	*y = *x;
	*x = c;
	printf("x = %d and y = %d in the swap function.\n", *x, *y);
}
