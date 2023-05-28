#include <stdio.h>

struct student
{
	int pos;
	char name[20];
	float marks;
};

/**
 *main - entry point
 *Return: integer
 */
int main(void)
{
	int n, i;

	printf("How many students do you want to input their marks?\n");
	scanf("%d", &n);
	struct student a[n];

	for (i = 0; i < n; i++)
	{
		printf("Input the number %d student position, name and marks.\n", i+1);
		scanf("%d %s %f", &a[i].pos, a[i].name, &a[i].marks);
	}
	printf("The students with their details are as follows:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\t%s\t%f\t", a[i].pos, a[i].name, a[i].marks);
		printf("\n");
	}
	return (0);
}
