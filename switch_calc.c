#include <stdio.h>

/**
 *main - making a calculator
 *Using a switch statement
 *Return - integer
 */
int main(void)
{
	int a, b, sum, mul, div, sub;
	char op;

	printf("Enter two numbers: \n");
	scanf("%d %d", &a, &b);

	printf("Enter an operator: \n");
	scanf(" %c", &op);

	switch (op)
	{
	case '+':
		sum = a + b;
		printf("Sum = %d \n", sum);
		break;
	case '-':
		sub = a - b;
		printf("Subtraction = %d \n", sub);
		break;
	case '*':
		mul = a * b;
		printf("Multiplication = %d \n", mul);
		break;
	case '/':
		div = a / b;
		printf("Division = %d \n", div);
		break;
	default:
		printf("Operator not found \n");
	}
}
