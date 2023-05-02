#include <stdio.h>
#include <string.h>

/**
 *main - reversing a string
 *Return: int
 */
int main(void)
{
	char a[20];
	int len, i, j;
	char c;

	printf("Enter a name:\n");
	fgets(a, 20, stdin);
	strtok(a, "\n");

	len = strlen(a);

	for (i = 0, j = (len - 1); i < j; i++, j--)
	{
		c = a[i];
		a[i] = a[j];
		a[j] = c;
	}

	printf("The reverse of the name is %s.\n", a);
	return (0);
}
