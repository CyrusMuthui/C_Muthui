#include <stdio.h>

/**
 *main - getting a string from user and printing it
 *using scanf, get, printf and puts
 *Return: integer
 */
int main(void)
{
	char name[20];

	printf("Enter name: \n");
	fgets(name, 20, stdin);
	puts(name);
	return (0);
}
