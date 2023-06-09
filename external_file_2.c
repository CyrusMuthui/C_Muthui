/**
 *display - function to declare the value of x
 *Return: void
 */
void display()
{
	extern int x;
	x++;
	printf("Hello from support file.\n");
	printf("x = %d.\n", x);
}
