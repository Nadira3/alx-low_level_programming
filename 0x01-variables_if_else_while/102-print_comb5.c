#include <stdio.h>
/**
 * main - entry point of the program
 * Return: 0
 */
int main(void)
{
	int x = 0;

	while (x < 10000)
	{
		int a = x % 10, b = x / 10, c = b % 10;
		int d = b / 10, e = d % 10, f = d / 10;
		int y = x % 100;

		if (d < y)
		{
			putchar(f + '0');
			putchar(e + '0');
			putchar(' ');
			putchar(c + '0');
			putchar(a + '0');
			putchar(',');
			putchar(' ');
		}
		x++;
	}
	return (0);
}
