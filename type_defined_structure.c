#include <stdio.h>

typedef struct student
{
	int rollno;
	char name[20];
	float marks;
} eee;

/**
 *main - entry point
 *Return: integer
 */
int main(void)
{
	eee a = {1, "Cyrus", 97.2};

	printf("And the number %d student is %s with a mean of %f.\n", a.rollno, a.name, a.marks);
	return (0);
}
