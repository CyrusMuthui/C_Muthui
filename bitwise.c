#include <stdio.h>

/**
 *main - bitwise operators in C
 *Bitwise NOT (~) is the same as -(x+1)
 *Bitwise << and >> are operand * and / 2^(number of shifts) resp.
 *Return: the value after the bitwise operations
 */
int main(void)
{
	int a = 13, b = 10;
	int c = a ^ b;
	int d = ~a;

	printf("%d \n", d);
	return (0);
}
