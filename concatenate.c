#include <stdio.h>
#include <string.h>

/**
 *main - use strcat
 *Return: integer
 */
int main(void)
{
	char a[20];
	char b[20];

	printf("Enter the first string.\n");
	fgets(a, 20, stdin);
	strtok(a, "\n");

	printf("Enter the second string.\n");
	fgets(b, 30, stdin);
	strtok(b, "\n");

	strcat(a, b);
	puts(a);
	return (0);
}
