#include <stdio.h>

/**
 *main - count the numberof even and odd
 *Return: integer
 */
int main(void)
{
	int i, number;
	int even = 0;
	int odd = 0;

	printf("Enter the number of entries you want to make: \n");
	scanf("%d", &number);

	int a[number];

	printf("Enter the %d entries: \n", number);

	for (i = 0; i < number; i++)
	{
		scanf("%d", &a[i]);
		if (a[i] % 2 == 0)
			even = even + 1;
		else
			odd = odd + 1;
	}
	printf("%d are even and %d are odd. \n", even, odd);
	return (0);
}
