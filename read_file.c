#include <stdio.h>
#include <stdlib.h>

/**
 *main - entry point
 *Return: integer
 */
int main(void)
{
	FILE *fp = NULL;
	char ch;

	fp = fopen("cyrus.txt", "r");
	if (fp == NULL)
	{
		printf("File not found.\n");
		exit(1);
	}

	while (!feof(fp))
	{
		ch = fgetc(fp);
		printf("%c", ch);
	}
	fclose(fp);
	return (0);
}
