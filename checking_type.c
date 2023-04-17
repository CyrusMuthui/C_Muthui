#include <stdio.h>

/**
 *main - checking if capital,small,number or special character
 *Using if-else
 *Return - integer
 */
int main(void)
{
	char c;

	printf("Enter something from your keyboard \n");
	scanf("%c", &c);
	if (c >= 'A' && c <= 'Z')
		printf("You entered a capital letter \n");
	else if (c >= 'a' && c <= 'z')
		printf("You entered a small letter \n");
	else if (c >= '0' && c <= '9')
		printf("You entered a number \n");
	else
		printf("You entered a special character \n");
	return (0);
}
