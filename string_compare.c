#include <stdio.h>
#include <string.h>

/**
 *main - password checker
 *Using strcmp
 *Return: integer
 */
int main(void)
{
	char s1[20];
	char s2[20];
	int value = 0;

	printf("Enter new password:\n");
	scanf("%s", s1);

	printf("Confirm new password:\n");
	scanf("%s", s2);

	value = strcmp(s1, s2);

	if (value == 0)
		printf("Password is set.\n");
	else
		printf("Your password don't match.\n");
	return (0);
}
