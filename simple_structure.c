#include <stdio.h>

struct student
{
	int rollno;
	char name[20];
	float marks;
};

/**
 *main - entry point
 *Return: integer
 */
int main(void)
{
	struct student w = {1, "Cyrus", 97.2};
	printf("%s is the best student since he was number %d with %f.\n", w.name, w.rollno, w.marks);

	return (0);
}
