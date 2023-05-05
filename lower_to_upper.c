#include <stdio.h>
#include <string.h>

/**
 *main - Changing string from small to capital
 *Return:integer
 */
int main(void)
{
	char a[30];
	int i;

	printf("Enter a string: ");
	fgets(a, 20, stdin);
	strtok(a, "\n");

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] + 32;
		}
	}
	printf("The capitalisation is %s: \n", a);
	return (0);
}
