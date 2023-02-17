#include <stdio.h>
/**
 * main - entry point of the program
 * Return: 0
 */
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(x + '0');
		putchar(',');
		putchar(" ");
		x++;
	}
	putchar('\n');
	return (0);
}
