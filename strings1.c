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
	scanf("%s", name);
	printf("Name is %s: \n", name);
	return (0);
}
