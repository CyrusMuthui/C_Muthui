#include <stdio.h>
#include <stdlib.h>

/**
 *main - entry point
 *Return: integer
 */
int main(void)
{
	FILE *fp1 = NULL;
	FILE *fp2 = NULL;

	fp1 = fopen("cyrus.txt", "w");
	fp2 = fopen("muthui.txt", "r");
	char c;

	while (!feof(fp2))
		fputc(fgetc(fp2), fp1);
	fclose(fp2);
	fp1 = fopen("cyrus.txt", "r");
	while (!feof(fp1))
	{
		c = fgetc(fp1);
		printf("%c", c);
	}
	return (0);
}
