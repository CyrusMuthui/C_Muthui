#include <stdio.h>

int fun1(int);
int fun2(int);

/**
 *main - entry point
 *Return: integer
 */
int main(void)
{
	int a;

	printf("Enter the number you want to find the factorial for:\n");
	scanf("%d", &a);
	printf("%d.\n", fun1(a));
	return (0);
}


/**
 *fun1 - first function
 *@x: parameter1
 *Return: call the other function
 */
int fun1(int x)
{
	if (x == 1)
		return (1);
	else
		return (x * fun2(x - 1));
}


/**
 *fun2 - second function
 *@y: par2
 *Return: Call the other function
 */
int fun2(int y)
{
	if (y == 1)
		return (1);
	else
		return (y * fun1(y - 1));
}
