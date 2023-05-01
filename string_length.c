#include <stdio.h>
#include <string.h>

/**
 *main - finding ht length of a string
 *using strlen
 *Return: integer
 */
int main(void)
{
	char a[30];

	printf("Enter a string: \n");
	fgets(a, 20, stdin);
	strtok(a, "\n");
	int b = strlen(a);
	printf("The length of the string %s is %d.\n", a, b);
	return (0);
}
