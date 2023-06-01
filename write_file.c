#include <stdio.h>
#include <stdlib.h>

/**
 *main - entry point
 *Return: integer
 */
int main(void)
{
	FILE *fp = NULL;

	fp = fopen("cyrus.txt", "w");

	if (fp == NULL)
	{
		printf("File doesn't exist.\n");
		exit(1);
	}
	fputs("Cyrus is the best person in Kenya.\nHe is number 1.", fp);
	fclose(fp);
	return (0);
}
