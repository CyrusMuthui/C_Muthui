#include <stdio.h>

void fun(char[]);

/**
 *main - entry point
 *Return: integer
 */
int main(void)
{
	char c[] = "Cyrus";

	fun(c);
	return (0);
}
/**
 *fun - function to find length
 *and modify
 *@b: string parameter
 *Return: Nothing
 */
void fun(char b[])
{
	int i;
	int length = 0;

	for (i = 0; b[i] != '\0'; i++)
		length = length + 1;
	b[3] = 'o';
	printf("The length is %d and modification is %s.\n", length, b);
}
