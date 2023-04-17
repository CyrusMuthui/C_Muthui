#include <stdio.h>

/**
 *main - one value multiplication table
 *using while loop
 *Return - integer
 */
int main(void)
{
	int i, number, mul;
	i = 1;

	printf("Enter a number: \n");
	scanf("%d", &number);

	while (i <= 10)
	{
		mul = number * i;
		printf("%d x %d = %d \n", number, i, mul);
		i++;
	}
}
