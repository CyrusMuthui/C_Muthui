#include <stdio.h>

char *display(void);

/**
 *main - entry point
 *Return: integer
 */
int main(void)
{
	char *str;

	str = display();
	printf("String is %s.\n", str);
	return (0);
}
/**
 *display - the function being called
 *Return: string
 */
char *display(void)
{
	return ("Cyrus");
}
