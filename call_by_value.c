#include <stdio.h>
void fun(int, int);
/**
 *main - entry point
 *Return: integer
 */
int main(void)
{
	int x, y;

	x = 5;
	y = 7;
	fun(x, y);
	printf("x = %d.y = %d.\n", x, y);
	return (0);
}
/**
 *fun - trying to swap
*@x: first parameter
*@y: second parameter
*/
void fun(int x, int y)
{
	x = 7;
	y = 5;

	printf("x is %d.y is %d.\n", x, y);
}
