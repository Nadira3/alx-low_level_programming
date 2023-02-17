
#include <stdio.h>
/**
 * main - entry point of the program
 * Return: 0
 */
int main(void)
{
	int x = 0, y = 97;

	while (x < 10)
	{
		putchar(x + '0');
		x++;
	}
	while (y < 102)
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
