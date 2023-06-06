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
	FILE *fp3 = NULL;

	fp1 = fopen("king.txt", "w");
	fp2 = fopen("muthui.txt", "r");
	char c;

	while (!feof(fp2))
		fputc(fgetc(fp2), fp1);
	fclose(fp2);
	fclose(fp1);
	fp3 = fopen("cyrus.txt", "r");
	while (!feof(fp3))
	{
		c = fgetc(fp3);
		printf("%c", c);
	}
	fclose(fp3);
	return (0);
}
