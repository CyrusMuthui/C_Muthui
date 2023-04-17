#include <stdio.h>

/**
 *main - one value multiplication table
 *Value to be entered by user
 *Return - integer value
 */
int main(void)
{
	int i, number, mul;

	printf("Enter number you want the multiplcation table: \n");
	scanf("%d", &number);

	for (i = 1; i <= 10; i++)
	{
		mul = number * i;
		printf("%d x %d = %d \n", number, i, mul);
	}
	return (0);
}
