#include <stdio.h>

/**
 *main - using arrays to find average of student marks
 *Return: integer
 */
int main(void)
{
	int i, students;

	printf("Enter the number of students to be considered \n");
	scanf("%d", &students);
	int a[students];
	float sum = 0;
	float average;

	printf("Enter the marks of the students \n");

	for (i = 0; i < students; i++)
	{
		scanf("%d", &a[i]);
		sum = sum + a[i];
	}
	average = sum / students;
	printf("The average is %f \n", average);

	return (0);
}
