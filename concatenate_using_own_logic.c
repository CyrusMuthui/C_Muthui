#include <stdio.h>
#include <string.h>

/**
 *main - concatenate strings
 *without using strcat
 *use own logic
 *Return: integer
 */
int main(void)
{
	char a[20];
	char b[20];
	int len1, len2, i;

	printf("Enter first string:\n");
	fgets(a, 20, stdin);
	strtok(a, "\n");

	printf("Enter second string:\n");
	fgets(b, 20, stdin);
	strtok(b, "\n");

	len1 = strlen(a);
	len2 = strlen(b);

	for (i = 0; i <= len2; i++)
		a[len1 + i] = b[i];
	printf("The two strings combined bring %s.\n", a);
	return (0);
}
