#include <stdio.h>
/**
 * main - entry point of the program
 * Return: 0
 */
int main(void)
{
	int x = 122;

	while (x > 96)
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
