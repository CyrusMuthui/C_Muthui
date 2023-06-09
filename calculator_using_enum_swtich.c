#include <stdio.h>

/**
 *main - entry point
 *Return: integer
 */
int main(void)
{
	enum sign
	{
		add,
		sub,
		mul,
		div
	};
	int a, b;
	enum sign c;

	printf("Enter two numbers:\n");
	scanf("%d %d", &a, &b);
	printf("Enter the operation:\n0 = add\n1 = sub\n2 = mul\n3 = div\n");
	scanf("%d", (int *)&c);
	switch (c)
	{
	case add:
		printf("Sum is %d.\n", a + b);
		break;
	case sub:
		printf("Difference is %d.\n", a - b);
		break;
	case mul:
		printf("Product is %d.\n", a * b);
		break;
	case div:
		printf("Division is %d.\n", a / b);
		break;
	}
	return (0);
}
