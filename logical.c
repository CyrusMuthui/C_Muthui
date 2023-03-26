#include <stdio.h>

/**
 *main - main function for logical operators
 *Return: return true or false, 0 or 1
 */
int main(void)
{
	int a = 1, b = 6;
	/*int c = a-- && ++b;*/
	int d = --a && ++b;

	/*printf("%d \n", c);*/
	printf("%d \n", d);
	return (0);
}
