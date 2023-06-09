#include <stdio.h>

void sum(int, int);
void sub(int, int);
void display(void (*)(int, int));

/**
 *main - entry point to call
 *the other functions
 *Return: integer
 */
int main(void)
{
	display(sum);
	display(sub);
}

/**
 *sum - addition
 *@x: par 1
 *@y: par 2
 *Return: void
 */
void sum(int x, int y)
{
	printf("Sum is %d.\n", x + y);
}

/**
 *sub - subtraction
 *@x: par1
 *@y: par2
 *Return: void
 */
void sub(int x, int y)
{
	printf("Subtraction is %d.\n", x - y);
}

/**
 *display - display function
 *@x: par1
 *@y: par2
 *@fptr: function pointer
 *Return: void
 */
void display(void (*fptr)(int x, int y))
{
	fptr(5, 1);
}
