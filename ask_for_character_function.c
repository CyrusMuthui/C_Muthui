#include <stdio.h>

char ask(void);
/**
 *main - main function
 *prints the character
 *that is input by user
 *Return: integer
 */
int main(void)
{
	char b = ask();

	printf("The character is %c.\n", b);
	return (0);
}
/**
 *ask - asks character from user
 *Return: character from user
 */
char ask(void)
{
	char x;

	printf("Input one character from keyboard.\n");
	scanf("%c", &x);
	return (x);
}
