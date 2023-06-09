#include <stdio.h>
void sum(int, int);
void sub(int, int);
void mul(int, int);
void div(int, int);

/**
 *main - entry point
 *Return: integer
 */
int main(void)
{
	int m, n, op;

	printf("Enter two values.\n");
	scanf("%d %d", &m, &n);
	printf("Enter the operation you want.\n");
	printf("1-sum.\n2-subtraction.\n3-multiplication.\n4-division.\n");
	scanf("%d", &op);

	void (*fptr[10])(int, int) = {sum, sub, mul, div};

	fptr[op - 1](m, n);
	return (0);
}
/**
 *sum - addition function
 *@a: par1
 *@b: par2
 *Return: void
 */
void sum(int a, int b)
{
	printf("The sum is %d.\n", a + b);
}

/**
*sub - subtraction function
*@a: par1
*@b: par2
*Return: the difference
*/
void sub(int a, int b)
{
	printf("The difference is %d.\n", a - b);
}

/**
*mul - multiplication function
*@a: par1
*@b: par2
*Return: the product
*/
void mul(int a, int b)
{
	printf("The product is %d.\n", a * b);
}

/**
*div - addition function
*@a: par1
*@b: par2
*Return: the division
*/
void div(int a, int b)
{
	printf("The division is %d.\n", a / b);
}
