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
	int count = 1;

	fp = fopen("cyrus.txt", "r");
	if (fp == NULL)
	{
		printf("File doesn't exist.\n");
		exit(1);
	}

	while ((ch = fgetc(fp)) != EOF)
	{
		if (ch == '\n')
			count++;
	}
	fclose(fp);
	printf("The file has %d lines.\n", count);
	return (0);
}
