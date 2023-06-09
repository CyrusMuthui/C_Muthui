#include <stdio.h>
#include "external_file_2.c"

int x = 10;
extern void display();
/**
 *main - entry point
 *Return: integer
 */
int main(void)
{
	display();
	return (0);
}
