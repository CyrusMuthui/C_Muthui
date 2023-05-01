#include <stdio.h>
#include <string.h>

/**
 *main - string length
 *without using strlen
 *Return: integer
 */
int main(void)
{
	int count, i;
	count = 0;
	char a[20];

	printf("Enter the string: \n");
	fgets(a, 20, stdin);
	strtok(a, "\n");

	for (i = 0; a[i] != '\0'; i++)
		count++;
	printf("The length of string %s is %d. \n", a, count);
	return (0);
}
