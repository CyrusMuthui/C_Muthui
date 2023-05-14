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
	swap(&x, &y);
	printf("x is %d and y is %d in main function.\n", x, y);
	return (0);
}
/**
 *swap - swapping function
 *@ptr1: first parameter
 *@ptr2: second parameter
 *Return: void
 */
void swap(int *ptr1, int *ptr2)
{
	int c;

	c = *ptr2;
	*ptr2 = *ptr1;
	*ptr1 = c;
	printf("x = %d and y = %d in the swap function.\n", *ptr1, *ptr2);
}
