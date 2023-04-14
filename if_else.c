#include <stdio.h>

/**
 *main - to test if else
 *Return - integer
 */
int main(void)
{
	printf("Enter a number less or equal to 3 \n");
	int kill;

	scanf("%d", &kill);
	if (kill == 3)
		printf("I owe you three deaths \n");
	else if (kill == 2)
		printf("I owe you two deaths \n");
	else if (kill == 1)
		printf("I owe you one death\n");
	else
		printf("We are even \n");
	return (0);
}
