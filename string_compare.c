#include <stdio.h>

/**
 *main - password checker
 *Using strcmp
 *Return: integer
 */
int main(void)
{
	char s1[20];
	char s2[20];
	int i;
	int value = 0;

	printf("Enter new password:\n");
	scanf("%s", s1);

	printf("Confirm new password:\n");
	scanf("%s", s2);

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			value = 1;
			break;
		}
	}

	if (value == 0)
		printf("Password is set.\n");
	else
		printf("Your password don't match.\n");
	return (0);
}
