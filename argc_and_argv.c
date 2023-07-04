#include <stdio.h>

/**
 *main - entry point
 *@argc - argument count
 *@argv - argument vectors
 *contains the array of strings passed as arguments
 *Return: void
 */
int main(int argc, char *argv[])
{
	int count;

	printf("This program is called %s.\n", argv[0]);
	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			printf("argv[%d] = %s\n", count, argv[count]);
		}
	}
	else
		printf("The command has no other arguments.\n");
	return (0);
}
