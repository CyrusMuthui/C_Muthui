#include <stdio.h>

/**
 *main - one value multiplication table
 *using do while loop
 *Return - integer
 */
int main(void)
{
	int i, number, mul;

	i = 1;

	printf("Enter a value: \n");
	scanf("%d", &number);

	do {
		mul = number * i;
		printf("%d x %d = %d \n", number, i, mul);
		i++;
	} while (i <= 10);
	return (0);
}
