#include <stdio.h>
#include <curses.h>

/**
 *main - unformatted inputs and outputs
 *input functions such as getchar, getch, getche, gets
 *output functions like putchar, putch, puts
 *Return: return the value inputted from the keyboard
 */
int main(void)
{
	char a = 'c';

	putch(a);
	return (0);
}
